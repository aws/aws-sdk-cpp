#pragma once

#include <smithy/client/schema/ShapeSerializer.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/code/utils/memory/stl/AWSVector.h>

namespace smithy {
    namespace schema {
        class JsonShapeSerializer: public ShapeSerializer {
        public:
            JsonShapeSerializer() = default;

            void BeginStructure(const Schema& schema) override;
            void EndStructure() override;

            void WriteBoolean(const FieldSchema& field, bool value) override;
            void WriteInteger(const FieldSchema& field, int value) override;
            void WriteLong(const FieldSchema& field, int64_t value) override;
            void WriteDouble(const FieldSchema& field, double value) override;
            void WriteString(const FieldSchema& field, const Aws::String& value) override;
            void WriteTimestamp(const FieldSchema& field, const Aws::Utils::DateTime& value) override;
            void WriteBlob(const FieldSchema& field, const Aws::Utils::ByteBuffer& value) override;
            void WriteEnum(const FieldSchema& field, int value) override;
            void WriteNull(const FieldSchema& field) override;

            void BeginList(const FieldSchema& field, size_t count) override;
            void EndList() override;

            void BeginMap(const FieldSchema& field,size_t count) override;
            void WriteMapKey(const Aws::String& key) override;
            void EndMap() override;

            void BeginNestedStructure(const FieldSchema& field) override;
            void EndNestedStructure() override;

            Aws::Utils::Json::JsonValue GetResult() const { return m_root; }
            Aws::String GetPayload() const;
        private:
            Aws::Utils::Json::JsonValue& CurrentObject();

            Aws::Utils::Json::JsonValue m_root;

            struct StackEntry {
                Aws::Utils::Json::JsonValue object;
                const char* fieldName;
                bool isList;
                Aws::Utils::Array<Aws::Utils::Json::JsonValue> listItems;
                size_t listIndex;
            };
            Aws::Vector<StackEntry> m_stack;
            Aws::String m_currentMapKey;
            bool m_inMap = false;
        };
    }
}
