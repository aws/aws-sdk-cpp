#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/Smithy_EXPORTS.h>

#include <functional>

namespace smithy {
namespace schema {

class ShapeSerializer;

// Handed to the WriteMap consumer. Each entry writes its key, then the value
// through a nested consumer that receives the same underlying serializer, so map
// values can themselves be scalars, structs, lists, or maps.
class SMITHY_API MapSerializer {
 public:
  virtual ~MapSerializer() = default;

  virtual void WriteEntry(const Aws::String& key, const std::function<void(ShapeSerializer&)>& value) = 0;
};

}  // namespace schema
}  // namespace smithy
