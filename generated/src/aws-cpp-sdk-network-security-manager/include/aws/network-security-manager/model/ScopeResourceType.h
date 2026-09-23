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
enum class ScopeResourceType {
  NOT_SET,
  AWS_ApiGateway_Stage,
  AWS_CloudFront_Distribution,
  AWS_EC2_EIP,
  AWS_ElasticLoadBalancingV2_LoadBalancer_application,
  AWS_ElasticLoadBalancing_LoadBalancer
};

namespace ScopeResourceTypeMapper {
AWS_NETWORKSECURITYMANAGER_API ScopeResourceType GetScopeResourceTypeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForScopeResourceType(ScopeResourceType value);
}  // namespace ScopeResourceTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
