#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/Smithy_EXPORTS.h>

#include <functional>

namespace smithy {
namespace schema {

class ShapeSerializer;

// Handed to the WriteMap consumer; writes each entry's key then its value.
class SMITHY_API MapSerializer {
 public:
  virtual ~MapSerializer() = default;

  virtual void WriteEntry(const Aws::String& key, const std::function<void(ShapeSerializer&)>& value) = 0;
};

}  // namespace schema
}  // namespace smithy
