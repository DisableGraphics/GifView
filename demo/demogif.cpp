#include <mediaview/gifview.hpp>

int main()
{
    auto app = Gtk::Application::create();
    Gtk::Window win;
    mv::GifView gifview;

    gifview.setGif("demo.gif");
    gifview.start();
    gifview.setResizeAutomatically(true);

    gifview.setMinSize(100, 100);
    gifview.setMaxSize(200, 200);

    win.add(gifview);
    win.show_all();
    win.resize(400, 400);

    return app->run(win);
}