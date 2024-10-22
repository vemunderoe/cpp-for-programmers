#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::Box box;
  Gtk::Entry first_name_entry, last_name_entry;
  Gtk::Button button;
  Gtk::Label first_name_label, last_name_label, full_name_label;

  Window() : box(Gtk::Orientation::ORIENTATION_VERTICAL) {
    first_name_label.set_text("First name");
    last_name_label.set_text("Last name");
    button.set_label("Reveal full name");
    button.set_sensitive(false);

    box.pack_start(first_name_label);
    box.pack_start(first_name_entry);
    box.pack_start(last_name_label);
    box.pack_start(last_name_entry);
    box.pack_start(button);
    box.pack_start(full_name_label);

    add(box);
    show_all();

    first_name_entry.signal_changed().connect([this]() {
      button.set_sensitive(first_name_entry.get_text() != "" && last_name_entry.get_text() != "");
    });

    last_name_entry.signal_changed().connect([this]() {
      button.set_sensitive(first_name_entry.get_text() != "" && last_name_entry.get_text() != "");
    });

    button.signal_clicked().connect([this]() {
      auto fullname = first_name_entry.get_text() + " " + last_name_entry.get_text();
      full_name_label.set_text("Fullname: " + fullname);
    });
  }
};

int main() {
  auto app = Gtk::Application::create();
  Window window;
  window.set_title("Øving 4");
  return app->run(window);
}
