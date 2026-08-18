#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <functional>

namespace smithy {
namespace schema {

// Routes each write through Before()/After(). Before() returns the serializer
// that performs the write; After() runs once it returns.
class SMITHY_API InterceptingSerializer : public ShapeSerializer {
 public:
  void WriteStruct(const Schema& schema, const SerializableStruct& value) override {
    Before(schema).WriteStruct(schema, value);
    After(schema);
  }
  void WriteList(const Schema& schema, size_t size, const std::function<void(ShapeSerializer&)>& consumer) override {
    Before(schema).WriteList(schema, size, consumer);
    After(schema);
  }
  void WriteMap(const Schema& schema, size_t size, const std::function<void(MapSerializer&)>& consumer) override {
    Before(schema).WriteMap(schema, size, consumer);
    After(schema);
  }
  void WriteBoolean(const Schema& schema, bool value) override {
    Before(schema).WriteBoolean(schema, value);
    After(schema);
  }
  void WriteInteger(const Schema& schema, int value) override {
    Before(schema).WriteInteger(schema, value);
    After(schema);
  }
  void WriteLong(const Schema& schema, int64_t value) override {
    Before(schema).WriteLong(schema, value);
    After(schema);
  }
  void WriteFloat(const Schema& schema, float value) override {
    Before(schema).WriteFloat(schema, value);
    After(schema);
  }
  void WriteDouble(const Schema& schema, double value) override {
    Before(schema).WriteDouble(schema, value);
    After(schema);
  }
  void WriteString(const Schema& schema, const Aws::String& value) override {
    Before(schema).WriteString(schema, value);
    After(schema);
  }
  void WriteTimestamp(const Schema& schema, const Aws::Utils::DateTime& value) override {
    Before(schema).WriteTimestamp(schema, value);
    After(schema);
  }
  void WriteBlob(const Schema& schema, const Aws::Utils::ByteBuffer& value) override {
    Before(schema).WriteBlob(schema, value);
    After(schema);
  }
  void WriteEnum(const Schema& schema, int value) override {
    Before(schema).WriteEnum(schema, value);
    After(schema);
  }
  void WriteNull(const Schema& schema) override {
    Before(schema).WriteNull(schema);
    After(schema);
  }

 protected:
  virtual ShapeSerializer& Before(const Schema& schema) = 0;
  virtual void After(const Schema& /*schema*/) {}
};

}  // namespace schema
}  // namespace smithy
