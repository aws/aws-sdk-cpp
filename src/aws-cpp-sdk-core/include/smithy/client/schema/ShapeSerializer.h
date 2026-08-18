#pragma once

#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Schema.h>

#include <cstdint>
#include <functional>

namespace smithy {
namespace schema {

class SerializableStruct;
class MapSerializer;

// Push-based serializer: the model drives serialization by calling these
// methods, and the serializer owns all wire-format structure (delimiters,
// element boundaries). Aggregates hand control back through a consumer callback
// so nesting is expressed by re-entrancy rather than begin/end bookkeeping.
//
// smithy-java parameterizes the list/map consumers on a caller-supplied state
// type to avoid capturing lambdas; C++ virtual methods cannot be templated, so
// the consumer is a std::function and any state is captured by the closure.
class SMITHY_API ShapeSerializer {
 public:
  virtual ~ShapeSerializer() = default;

  virtual void WriteStruct(const Schema& schema, const SerializableStruct& value) = 0;
  virtual void WriteList(const Schema& schema, size_t size,
                         const std::function<void(ShapeSerializer&)>& consumer) = 0;
  virtual void WriteMap(const Schema& schema, size_t size,
                        const std::function<void(MapSerializer&)>& consumer) = 0;

  virtual void WriteBoolean(const Schema& schema, bool value) = 0;
  virtual void WriteInteger(const Schema& schema, int value) = 0;
  virtual void WriteLong(const Schema& schema, int64_t value) = 0;
  virtual void WriteFloat(const Schema& schema, float value) = 0;
  virtual void WriteDouble(const Schema& schema, double value) = 0;
  virtual void WriteString(const Schema& schema, const Aws::String& value) = 0;
  virtual void WriteTimestamp(const Schema& schema, const Aws::Utils::DateTime& value) = 0;
  virtual void WriteBlob(const Schema& schema, const Aws::Utils::ByteBuffer& value) = 0;
  virtual void WriteEnum(const Schema& schema, int value) = 0;
  virtual void WriteNull(const Schema& schema) = 0;
};

}  // namespace schema
}  // namespace smithy
