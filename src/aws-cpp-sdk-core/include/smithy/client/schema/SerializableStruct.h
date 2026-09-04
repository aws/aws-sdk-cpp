#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Schema.h>

namespace smithy {
namespace schema {
    class ShapeDeserializer;
    class ShapeSerializer;

class SMITHY_API SerializableStruct {
 public:
  virtual ~SerializableStruct() = default;

  virtual const Schema& GetSchema() const = 0;
  virtual void SerializeMembers(ShapeSerializer& serializer) const = 0;

  virtual void From(const Schema& memberSchema, ShapeDeserializer& deserializer);

  void Deserialize(ShapeDeserializer& deserializer);
};

}  // namespace schema
}  // namespace smithy
