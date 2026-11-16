/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace ResourceTypeMapper {

static const int SecurityGroup_HASH = HashingUtils::HashString("SecurityGroup");
static const int VPC_HASH = HashingUtils::HashString("VPC");
static const int Subnet_HASH = HashingUtils::HashString("Subnet");
static const int TGWAttachment_HASH = HashingUtils::HashString("TGWAttachment");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SecurityGroup_HASH) {
    return ResourceType::SecurityGroup;
  } else if (hashCode == VPC_HASH) {
    return ResourceType::VPC;
  } else if (hashCode == Subnet_HASH) {
    return ResourceType::Subnet;
  } else if (hashCode == TGWAttachment_HASH) {
    return ResourceType::TGWAttachment;
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
    case ResourceType::SecurityGroup:
      return "SecurityGroup";
    case ResourceType::VPC:
      return "VPC";
    case ResourceType::Subnet:
      return "Subnet";
    case ResourceType::TGWAttachment:
      return "TGWAttachment";
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
}  // namespace NetworkFirewall
}  // namespace Aws
