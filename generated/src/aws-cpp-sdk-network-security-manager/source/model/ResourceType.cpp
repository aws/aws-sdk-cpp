/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace ResourceTypeMapper {

static const int AWS_ApiGateway_Stage_HASH = HashingUtils::HashString("AWS::ApiGateway::Stage");
static const int AWS_CloudFront_Distribution_HASH = HashingUtils::HashString("AWS::CloudFront::Distribution");
static const int AWS_EC2_EIP_HASH = HashingUtils::HashString("AWS::EC2::EIP");
static const int AWS_ElasticLoadBalancingV2_LoadBalancer_application_HASH =
    HashingUtils::HashString("AWS::ElasticLoadBalancingV2::LoadBalancer::application");
static const int AWS_ElasticLoadBalancing_LoadBalancer_HASH = HashingUtils::HashString("AWS::ElasticLoadBalancing::LoadBalancer");
static const int AWS_WAFv2_WebACL_HASH = HashingUtils::HashString("AWS::WAFv2::WebACL");
static const int AWS_Shield_Protection_HASH = HashingUtils::HashString("AWS::Shield::Protection");
static const int AWS_ShieldRegional_Protection_HASH = HashingUtils::HashString("AWS::ShieldRegional::Protection");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_ApiGateway_Stage_HASH) {
    return ResourceType::AWS_ApiGateway_Stage;
  } else if (hashCode == AWS_CloudFront_Distribution_HASH) {
    return ResourceType::AWS_CloudFront_Distribution;
  } else if (hashCode == AWS_EC2_EIP_HASH) {
    return ResourceType::AWS_EC2_EIP;
  } else if (hashCode == AWS_ElasticLoadBalancingV2_LoadBalancer_application_HASH) {
    return ResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer_application;
  } else if (hashCode == AWS_ElasticLoadBalancing_LoadBalancer_HASH) {
    return ResourceType::AWS_ElasticLoadBalancing_LoadBalancer;
  } else if (hashCode == AWS_WAFv2_WebACL_HASH) {
    return ResourceType::AWS_WAFv2_WebACL;
  } else if (hashCode == AWS_Shield_Protection_HASH) {
    return ResourceType::AWS_Shield_Protection;
  } else if (hashCode == AWS_ShieldRegional_Protection_HASH) {
    return ResourceType::AWS_ShieldRegional_Protection;
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
    case ResourceType::AWS_ApiGateway_Stage:
      return "AWS::ApiGateway::Stage";
    case ResourceType::AWS_CloudFront_Distribution:
      return "AWS::CloudFront::Distribution";
    case ResourceType::AWS_EC2_EIP:
      return "AWS::EC2::EIP";
    case ResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer_application:
      return "AWS::ElasticLoadBalancingV2::LoadBalancer::application";
    case ResourceType::AWS_ElasticLoadBalancing_LoadBalancer:
      return "AWS::ElasticLoadBalancing::LoadBalancer";
    case ResourceType::AWS_WAFv2_WebACL:
      return "AWS::WAFv2::WebACL";
    case ResourceType::AWS_Shield_Protection:
      return "AWS::Shield::Protection";
    case ResourceType::AWS_ShieldRegional_Protection:
      return "AWS::ShieldRegional::Protection";
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
}  // namespace NetworkSecurityManager
}  // namespace Aws
