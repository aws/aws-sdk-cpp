/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ParameterType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ParameterTypeMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int STRING_LIST_HASH = HashingUtils::HashString("STRING_LIST");
static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");

ParameterType GetParameterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return ParameterType::STRING;
  } else if (hashCode == STRING_LIST_HASH) {
    return ParameterType::STRING_LIST;
  } else if (hashCode == INTEGER_HASH) {
    return ParameterType::INTEGER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ParameterType>(hashCode);
  }

  return ParameterType::NOT_SET;
}

Aws::String GetNameForParameterType(ParameterType enumValue) {
  switch (enumValue) {
    case ParameterType::NOT_SET:
      return {};
    case ParameterType::STRING:
      return "STRING";
    case ParameterType::STRING_LIST:
      return "STRING_LIST";
    case ParameterType::INTEGER:
      return "INTEGER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ParameterTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
