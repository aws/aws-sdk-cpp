/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mq/model/SharedResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MQ {
namespace Model {
namespace SharedResourceTypeMapper {

static const int RESOURCE_SHARE_HASH = HashingUtils::HashString("RESOURCE_SHARE");
static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");

SharedResourceType GetSharedResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESOURCE_SHARE_HASH) {
    return SharedResourceType::RESOURCE_SHARE;
  } else if (hashCode == RESOURCE_HASH) {
    return SharedResourceType::RESOURCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SharedResourceType>(hashCode);
  }

  return SharedResourceType::NOT_SET;
}

Aws::String GetNameForSharedResourceType(SharedResourceType enumValue) {
  switch (enumValue) {
    case SharedResourceType::NOT_SET:
      return {};
    case SharedResourceType::RESOURCE_SHARE:
      return "RESOURCE_SHARE";
    case SharedResourceType::RESOURCE:
      return "RESOURCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SharedResourceTypeMapper
}  // namespace Model
}  // namespace MQ
}  // namespace Aws
