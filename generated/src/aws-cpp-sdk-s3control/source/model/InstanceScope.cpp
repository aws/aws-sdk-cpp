/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3control/model/InstanceScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {
namespace InstanceScopeMapper {

static const int SELF_HASH = HashingUtils::HashString("SELF");
static const int ALL_HASH = HashingUtils::HashString("ALL");

InstanceScope GetInstanceScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SELF_HASH) {
    return InstanceScope::SELF;
  } else if (hashCode == ALL_HASH) {
    return InstanceScope::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstanceScope>(hashCode);
  }

  return InstanceScope::NOT_SET;
}

Aws::String GetNameForInstanceScope(InstanceScope enumValue) {
  switch (enumValue) {
    case InstanceScope::NOT_SET:
      return {};
    case InstanceScope::SELF:
      return "SELF";
    case InstanceScope::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstanceScopeMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
