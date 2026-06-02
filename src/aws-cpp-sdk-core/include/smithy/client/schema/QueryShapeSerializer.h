#pragma once

#include <smithy/client/schema/ShapeSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace smithy {
    namespace schema {
        class QueryShapeSerializer : public ShapeSerializer {
        public:
            QueryShapeSerializer(const Aws::String& action, const Aws::Crt::String& version);

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

            Aws::String GetPayload() const;

        private:
            void AppendParam(const Aws::String& key, const Aws::String& value);
            Aws::String CurrentPrefix() const();

            Aws::StringStream m_ss;
            Aws::Vector<Aws::String> m_prefixStack;
            int m_listIndex = 0;
            int m_mapIndex = 0;
        };
    }
}
