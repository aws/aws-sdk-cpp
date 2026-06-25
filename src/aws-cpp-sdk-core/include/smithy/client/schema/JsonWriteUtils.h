#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>

namespace smithy {
    namespace schema {
        class JsonWriteUtils {
        public:
            static void WriteQuotedString(Aws::String& buf, const Aws::String& value);
        private:
            static const bool NEEDS_ESCAPE[128];
            static const char ESCAPE_TABLE[128];
            static const char HEX[16];
        };
    }
}