#include <string>
#include <vector>
#include "QrCode.hpp"
using namespace qrcodegen;

// Create the QR Code object
QrCode qr = QrCode::encodeText("Hello, world!", QrCode::Ecc::MEDIUM);

// Read the black & white pixels
for (int y = 0; y < qr.size; y++) {
    for (int x = 0; x < qr.size; x++) {
        int color = qr.getModule(x, y);  // 0 for white, 1 for black

        // You need to modify this part
        draw_pixel_onto_QT(x, y, color);
    }
}
