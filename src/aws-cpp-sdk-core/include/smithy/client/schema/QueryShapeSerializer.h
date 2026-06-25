#pragma once

#include <smithy/client/schema/ShapeSerializer.h>

#include <aws/core/utils/memory/AWSMemory.h>

namespace smithy {
namespace schema {

class QueryShapeSerializer final : public ShapeSerializer {
 public:
  QueryShapeSerializer(const Aws::String& action, const Aws::String& version);
  ~QueryShapeSerializer();

  bool BeginStructure(const Schema& schema) override;
  void EndStructure() override;

  void WriteBoolean(const Schema& schema, bool value) override;
  void WriteInteger(const Schema& schema, int value) override;
  void WriteLong(const Schema& schema, int64_t value) override;
  void WriteDouble(const Schema& schema, double value) override;
  void WriteString(const Schema& schema, const Aws::String& value) override;
  void WriteTimestamp(const Schema& schema, const Aws::Utils::DateTime& value) override;
  void WriteBlob(const Schema& schema, const Aws::Utils::ByteBuffer& value) override;
  void WriteEnum(const Schema& schema, int value) override;
  void WriteNull(const Schema& schema) override;

  bool BeginList(const Schema& schema, size_t count) override;
  void EndList() override;

  bool BeginMap(const Schema& schema, size_t count) override;
  void WriteMapKey(const Aws::String& key) override;
  void EndMap() override;

  bool BeginNestedStructure(const Schema& schema) override;
  void EndNestedStructure() override;

  Aws::String GetPayload() const;

 private:
  class Impl;
  Aws::UniquePtr<Impl> m_impl;
};

}  // namespace schema
}  // namespace smithy
