/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ram/model/PermissionTemplateParameterType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RAM {
namespace Model {
namespace PermissionTemplateParameterTypeMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int STRING_LIST_HASH = HashingUtils::HashString("STRING_LIST");

PermissionTemplateParameterType GetPermissionTemplateParameterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return PermissionTemplateParameterType::STRING;
  } else if (hashCode == STRING_LIST_HASH) {
    return PermissionTemplateParameterType::STRING_LIST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PermissionTemplateParameterType>(hashCode);
  }

  return PermissionTemplateParameterType::NOT_SET;
}

Aws::String GetNameForPermissionTemplateParameterType(PermissionTemplateParameterType enumValue) {
  switch (enumValue) {
    case PermissionTemplateParameterType::NOT_SET:
      return {};
    case PermissionTemplateParameterType::STRING:
      return "STRING";
    case PermissionTemplateParameterType::STRING_LIST:
      return "STRING_LIST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PermissionTemplateParameterTypeMapper
}  // namespace Model
}  // namespace RAM
}  // namespace Aws
