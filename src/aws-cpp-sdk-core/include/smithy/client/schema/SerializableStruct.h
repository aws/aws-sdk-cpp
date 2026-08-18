#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Schema.h>

namespace smithy {
namespace schema {

class ShapeSerializer;

// Implemented by generated shapes: knows its Schema and how to write its members
// to whichever ShapeSerializer is passed in.
class SMITHY_API SerializableStruct {
 public:
  virtual ~SerializableStruct() = default;

  virtual const Schema& GetSchema() const = 0;
  virtual void SerializeMembers(ShapeSerializer& serializer) const = 0;
};

}  // namespace schema
}  // namespace smithy
