/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rbin/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RecycleBin {
namespace Model {
namespace ResourceTypeMapper {

static const int EBS_SNAPSHOT_HASH = HashingUtils::HashString("EBS_SNAPSHOT");
static const int EC2_IMAGE_HASH = HashingUtils::HashString("EC2_IMAGE");
static const int EBS_VOLUME_HASH = HashingUtils::HashString("EBS_VOLUME");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EBS_SNAPSHOT_HASH) {
    return ResourceType::EBS_SNAPSHOT;
  } else if (hashCode == EC2_IMAGE_HASH) {
    return ResourceType::EC2_IMAGE;
  } else if (hashCode == EBS_VOLUME_HASH) {
    return ResourceType::EBS_VOLUME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceType>(hashCode);
  }

  return ResourceType::NOT_SET;
}

Aws::String GetNameForResourceType(ResourceType enumValue) {
  switch (enumValue) {
    case ResourceType::NOT_SET:
      return {};
    case ResourceType::EBS_SNAPSHOT:
      return "EBS_SNAPSHOT";
    case ResourceType::EC2_IMAGE:
      return "EC2_IMAGE";
    case ResourceType::EBS_VOLUME:
      return "EBS_VOLUME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace RecycleBin
}  // namespace Aws
