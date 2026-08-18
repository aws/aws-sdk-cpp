#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Schema.h>

namespace smithy {
namespace schema {

class ShapeSerializer;

// Implemented by generated shapes. A shape knows its own Schema and how to write
// its members to a serializer; the wire format is decided entirely by which
// ShapeSerializer is passed in. This is the protocol-agnostic hook that lets one
// SerializeMembers() implementation produce JSON, XML, or CBOR.
class SMITHY_API SerializableStruct {
 public:
  virtual ~SerializableStruct() = default;

  virtual const Schema& GetSchema() const = 0;
  virtual void SerializeMembers(ShapeSerializer& serializer) const = 0;
};

}  // namespace schema
}  // namespace smithy
