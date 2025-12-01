/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/ToolType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace ToolTypeMapper {

static const int MODEL_CONTEXT_PROTOCOL_HASH = HashingUtils::HashString("MODEL_CONTEXT_PROTOCOL");
static const int RETURN_TO_CONTROL_HASH = HashingUtils::HashString("RETURN_TO_CONTROL");
static const int CONSTANT_HASH = HashingUtils::HashString("CONSTANT");

ToolType GetToolTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MODEL_CONTEXT_PROTOCOL_HASH) {
    return ToolType::MODEL_CONTEXT_PROTOCOL;
  } else if (hashCode == RETURN_TO_CONTROL_HASH) {
    return ToolType::RETURN_TO_CONTROL;
  } else if (hashCode == CONSTANT_HASH) {
    return ToolType::CONSTANT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ToolType>(hashCode);
  }

  return ToolType::NOT_SET;
}

Aws::String GetNameForToolType(ToolType enumValue) {
  switch (enumValue) {
    case ToolType::NOT_SET:
      return {};
    case ToolType::MODEL_CONTEXT_PROTOCOL:
      return "MODEL_CONTEXT_PROTOCOL";
    case ToolType::RETURN_TO_CONTROL:
      return "RETURN_TO_CONTROL";
    case ToolType::CONSTANT:
      return "CONSTANT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ToolTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
