/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/IdleResourceSharing.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace IdleResourceSharingMapper {

static const int Enabled_HASH = HashingUtils::HashString("Enabled");
static const int Disabled_HASH = HashingUtils::HashString("Disabled");

IdleResourceSharing GetIdleResourceSharingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Enabled_HASH) {
    return IdleResourceSharing::Enabled;
  } else if (hashCode == Disabled_HASH) {
    return IdleResourceSharing::Disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IdleResourceSharing>(hashCode);
  }

  return IdleResourceSharing::NOT_SET;
}

Aws::String GetNameForIdleResourceSharing(IdleResourceSharing enumValue) {
  switch (enumValue) {
    case IdleResourceSharing::NOT_SET:
      return {};
    case IdleResourceSharing::Enabled:
      return "Enabled";
    case IdleResourceSharing::Disabled:
      return "Disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IdleResourceSharingMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
