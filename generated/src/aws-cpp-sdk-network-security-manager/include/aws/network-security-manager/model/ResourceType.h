/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
enum class ResourceType {
  NOT_SET,
  AWS_ApiGateway_Stage,
  AWS_CloudFront_Distribution,
  AWS_EC2_EIP,
  AWS_ElasticLoadBalancingV2_LoadBalancer_application,
  AWS_ElasticLoadBalancing_LoadBalancer,
  AWS_WAFv2_WebACL,
  AWS_Shield_Protection,
  AWS_ShieldRegional_Protection
};

namespace ResourceTypeMapper {
AWS_NETWORKSECURITYMANAGER_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
