/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ResourceConfigDnsResolution.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ResourceConfigDnsResolutionMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
static const int IN_VPC_HASH = HashingUtils::HashString("IN_VPC");

ResourceConfigDnsResolution GetResourceConfigDnsResolutionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return ResourceConfigDnsResolution::PUBLIC_;
  } else if (hashCode == IN_VPC_HASH) {
    return ResourceConfigDnsResolution::IN_VPC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceConfigDnsResolution>(hashCode);
  }

  return ResourceConfigDnsResolution::NOT_SET;
}

Aws::String GetNameForResourceConfigDnsResolution(ResourceConfigDnsResolution enumValue) {
  switch (enumValue) {
    case ResourceConfigDnsResolution::NOT_SET:
      return {};
    case ResourceConfigDnsResolution::PUBLIC_:
      return "PUBLIC";
    case ResourceConfigDnsResolution::IN_VPC:
      return "IN_VPC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceConfigDnsResolutionMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
