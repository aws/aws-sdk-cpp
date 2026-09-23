/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/ScopeResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace ScopeResourceTypeMapper {

static const int AWS_ApiGateway_Stage_HASH = HashingUtils::HashString("AWS::ApiGateway::Stage");
static const int AWS_CloudFront_Distribution_HASH = HashingUtils::HashString("AWS::CloudFront::Distribution");
static const int AWS_EC2_EIP_HASH = HashingUtils::HashString("AWS::EC2::EIP");
static const int AWS_ElasticLoadBalancingV2_LoadBalancer_application_HASH =
    HashingUtils::HashString("AWS::ElasticLoadBalancingV2::LoadBalancer::application");
static const int AWS_ElasticLoadBalancing_LoadBalancer_HASH = HashingUtils::HashString("AWS::ElasticLoadBalancing::LoadBalancer");

ScopeResourceType GetScopeResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_ApiGateway_Stage_HASH) {
    return ScopeResourceType::AWS_ApiGateway_Stage;
  } else if (hashCode == AWS_CloudFront_Distribution_HASH) {
    return ScopeResourceType::AWS_CloudFront_Distribution;
  } else if (hashCode == AWS_EC2_EIP_HASH) {
    return ScopeResourceType::AWS_EC2_EIP;
  } else if (hashCode == AWS_ElasticLoadBalancingV2_LoadBalancer_application_HASH) {
    return ScopeResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer_application;
  } else if (hashCode == AWS_ElasticLoadBalancing_LoadBalancer_HASH) {
    return ScopeResourceType::AWS_ElasticLoadBalancing_LoadBalancer;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScopeResourceType>(hashCode);
  }

  return ScopeResourceType::NOT_SET;
}

Aws::String GetNameForScopeResourceType(ScopeResourceType enumValue) {
  switch (enumValue) {
    case ScopeResourceType::NOT_SET:
      return {};
    case ScopeResourceType::AWS_ApiGateway_Stage:
      return "AWS::ApiGateway::Stage";
    case ScopeResourceType::AWS_CloudFront_Distribution:
      return "AWS::CloudFront::Distribution";
    case ScopeResourceType::AWS_EC2_EIP:
      return "AWS::EC2::EIP";
    case ScopeResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer_application:
      return "AWS::ElasticLoadBalancingV2::LoadBalancer::application";
    case ScopeResourceType::AWS_ElasticLoadBalancing_LoadBalancer:
      return "AWS::ElasticLoadBalancing::LoadBalancer";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScopeResourceTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
