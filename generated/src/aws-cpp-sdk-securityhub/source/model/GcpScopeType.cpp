/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/GcpScopeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace GcpScopeTypeMapper {

static const int PROJECT_HASH = HashingUtils::HashString("PROJECT");
static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");

GcpScopeType GetGcpScopeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROJECT_HASH) {
    return GcpScopeType::PROJECT;
  } else if (hashCode == ORGANIZATION_HASH) {
    return GcpScopeType::ORGANIZATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GcpScopeType>(hashCode);
  }

  return GcpScopeType::NOT_SET;
}

Aws::String GetNameForGcpScopeType(GcpScopeType enumValue) {
  switch (enumValue) {
    case GcpScopeType::NOT_SET:
      return {};
    case GcpScopeType::PROJECT:
      return "PROJECT";
    case GcpScopeType::ORGANIZATION:
      return "ORGANIZATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GcpScopeTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
