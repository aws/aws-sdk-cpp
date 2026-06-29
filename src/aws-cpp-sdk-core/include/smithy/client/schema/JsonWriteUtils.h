#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Schema {

void WriteQuotedJsonString(Aws::String& buf, const Aws::String& value);

}  // namespace Schema
}  // namespace Aws
