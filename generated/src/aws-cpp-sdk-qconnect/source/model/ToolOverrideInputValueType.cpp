/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/ToolOverrideInputValueType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace ToolOverrideInputValueTypeMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
static const int JSON_STRING_HASH = HashingUtils::HashString("JSON_STRING");

ToolOverrideInputValueType GetToolOverrideInputValueTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return ToolOverrideInputValueType::STRING;
  } else if (hashCode == NUMBER_HASH) {
    return ToolOverrideInputValueType::NUMBER;
  } else if (hashCode == JSON_STRING_HASH) {
    return ToolOverrideInputValueType::JSON_STRING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ToolOverrideInputValueType>(hashCode);
  }

  return ToolOverrideInputValueType::NOT_SET;
}

Aws::String GetNameForToolOverrideInputValueType(ToolOverrideInputValueType enumValue) {
  switch (enumValue) {
    case ToolOverrideInputValueType::NOT_SET:
      return {};
    case ToolOverrideInputValueType::STRING:
      return "STRING";
    case ToolOverrideInputValueType::NUMBER:
      return "NUMBER";
    case ToolOverrideInputValueType::JSON_STRING:
      return "JSON_STRING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ToolOverrideInputValueTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
