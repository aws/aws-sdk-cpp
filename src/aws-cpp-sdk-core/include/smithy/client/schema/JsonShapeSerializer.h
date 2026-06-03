#pragma once

#include <smithy/client/schema/ShapeSerializer.h>

#include <memory>

namespace smithy {
namespace schema {

class JsonShapeSerializer final : public ShapeSerializer {
 public:
  JsonShapeSerializer();
  ~JsonShapeSerializer();

  void BeginStructure(const Schema& schema) override;
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

  void BeginList(const Schema& schema, size_t count) override;
  void EndList() override;

  void BeginMap(const Schema& schema, size_t count) override;
  void WriteMapKey(const Aws::String& key) override;
  void EndMap() override;

  void BeginNestedStructure(const Schema& schema) override;
  void EndNestedStructure() override;

  Aws::String GetPayload() const;

 private:
  struct Impl;
  std::unique_ptr<Impl> m_impl;
};

}  // namespace schema
}  // namespace smithy
