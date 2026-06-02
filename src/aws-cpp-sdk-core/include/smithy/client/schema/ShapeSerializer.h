#pragma once

#include <cstdint>
#include <smithy/client/schema/schema.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Array.h>

#include "Schema.h"


namespace Aws::Utils {
    class DateTime;
}

namespace smithy {
    namespace schema {
        class ShapeSerializer {
        public:
            virtual ~ShapeSerializer() = default;

            virtual void BeginStructure(const Schema& schema) = 0;
            virtual void EndStructure() = 0;

            virtual void WriteBoolean(const FieldSchema& field, bool value) =0;
            virtual void WriteInteger(const FieldSchema& field, int value) = 0;
            virtual void WriteLong(const FieldSchema& field, int64_t value) = 0;
            virtual void WriteDouble(const FieldSchema& field, double value) = 0;
            virtual void WriteString(const FieldSchema& field, const Aws::String& value) = 0;
            virtual void WriteTimestamp(const FieldSchema& field, const Aws::Utils::DateTime& value) = 0;
            virtual void WriteBlob(const FieldSchema& field, const Aws::Utils::ByteBuffer& value) = 0;
            virtual void WriteEnum(const FieldSchema& field, int value) = 0;
            virtual void WriteNull(const FieldSchema& field) = 0;

            virtual void BeginList(const FieldSchema& field, size_t count) = 0;
            virtual void EndList() = 0;

            virtual void BeginMap(const FieldSchema& field, size_t count) = 0;
            virtual void WriteMapKey(const Aws::String& key) = 0;
            virtual void EndMap() = 0;

            virtual void BeginNestedStructure(const FieldSchema& field) = 0;
            virtual void EndNestedStructure() = 0;
        };
    }
}
