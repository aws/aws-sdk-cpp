#include <smithy/client/schema/JsonWriteUtils.h>

using namespace smithy::schema;

const char JsonWriteUtils::HEX[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

const bool JsonWriteUtils::NEEDS_ESCAPE[128] = {
    // 0x00-0x1F: control chars
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    // 0x20-0x2F: space ! " # $ % & ' ( ) * + , - . /
    0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
    // 0x30-0x3F
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    // 0x40-0x4F
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    // 0x50-0x5F: P-Z [ \ ] ^ _
    0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
    // 0x60-0x6F
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    // 0x70-0x7F
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

const char JsonWriteUtils::ESCAPE_TABLE[128] = {
    // 0x00-0x0F
    0,0,0,0,0,0,0,0,'b','t','n',0,'f','r',0,0,
    // 0x10-0x1F
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    // 0x20-0x2F
    0,0,'"',0,0,0,0,0,0,0,0,0,0,0,0,0,
    // 0x30-0x3F
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    // 0x40-0x4F
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    // 0x50-0x5F
    0,0,0,0,0,0,0,0,0,0,0,0,'\\',0,0,0,
    // 0x60-0x6F
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    // 0x70-0x7F
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

void JsonWriteUtils::WriteQuotedString(Aws::String& buf, const Aws::String& value) {
    buf += '"';
    const char* data = value.data();
    const size_t len = value.size();

    size_t i = 0;
    while (i < len) {
        // Fast scan: find next char that needs escaping
        size_t start = i;
        while (i < len) {
            unsigned char c = static_cast<unsigned char>(data[i]);
            if (c < 0x80 && NEEDS_ESCAPE[c]) break;
            i++;
        }
        // Bulk append safe run
        if (i > start) {
            buf.append(data + start, i - start);
        }
        // Escape one char
        if (i < len) {
            unsigned char c = static_cast<unsigned char>(data[i]);
            if (ESCAPE_TABLE[c] != 0) {
                buf += '\\';
                buf += ESCAPE_TABLE[c];
            } else {
                buf += '\\';
                buf += 'u';
                buf += '0';
                buf += '0';
                buf += HEX[(c >> 4) & 0xF];
                buf += HEX[c & 0xF];
            }
            i++;
        }
    }
    buf += '"';
}
