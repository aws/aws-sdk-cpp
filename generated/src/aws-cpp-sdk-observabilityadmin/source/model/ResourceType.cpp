/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace ResourceTypeMapper {

static const int AWS_EC2_Instance_HASH = HashingUtils::HashString("AWS::EC2::Instance");
static const int AWS_EC2_VPC_HASH = HashingUtils::HashString("AWS::EC2::VPC");
static const int AWS_Lambda_Function_HASH = HashingUtils::HashString("AWS::Lambda::Function");
static const int AWS_CloudTrail_HASH = HashingUtils::HashString("AWS::CloudTrail");
static const int AWS_EKS_Cluster_HASH = HashingUtils::HashString("AWS::EKS::Cluster");
static const int AWS_WAFv2_WebACL_HASH = HashingUtils::HashString("AWS::WAFv2::WebACL");
static const int AWS_ElasticLoadBalancingV2_LoadBalancer_HASH = HashingUtils::HashString("AWS::ElasticLoadBalancingV2::LoadBalancer");
static const int AWS_Route53Resolver_ResolverEndpoint_HASH = HashingUtils::HashString("AWS::Route53Resolver::ResolverEndpoint");
static const int AWS_BedrockAgentCore_Runtime_HASH = HashingUtils::HashString("AWS::BedrockAgentCore::Runtime");
static const int AWS_BedrockAgentCore_Browser_HASH = HashingUtils::HashString("AWS::BedrockAgentCore::Browser");
static const int AWS_BedrockAgentCore_CodeInterpreter_HASH = HashingUtils::HashString("AWS::BedrockAgentCore::CodeInterpreter");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_EC2_Instance_HASH) {
    return ResourceType::AWS_EC2_Instance;
  } else if (hashCode == AWS_EC2_VPC_HASH) {
    return ResourceType::AWS_EC2_VPC;
  } else if (hashCode == AWS_Lambda_Function_HASH) {
    return ResourceType::AWS_Lambda_Function;
  } else if (hashCode == AWS_CloudTrail_HASH) {
    return ResourceType::AWS_CloudTrail;
  } else if (hashCode == AWS_EKS_Cluster_HASH) {
    return ResourceType::AWS_EKS_Cluster;
  } else if (hashCode == AWS_WAFv2_WebACL_HASH) {
    return ResourceType::AWS_WAFv2_WebACL;
  } else if (hashCode == AWS_ElasticLoadBalancingV2_LoadBalancer_HASH) {
    return ResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer;
  } else if (hashCode == AWS_Route53Resolver_ResolverEndpoint_HASH) {
    return ResourceType::AWS_Route53Resolver_ResolverEndpoint;
  } else if (hashCode == AWS_BedrockAgentCore_Runtime_HASH) {
    return ResourceType::AWS_BedrockAgentCore_Runtime;
  } else if (hashCode == AWS_BedrockAgentCore_Browser_HASH) {
    return ResourceType::AWS_BedrockAgentCore_Browser;
  } else if (hashCode == AWS_BedrockAgentCore_CodeInterpreter_HASH) {
    return ResourceType::AWS_BedrockAgentCore_CodeInterpreter;
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
    case ResourceType::AWS_EC2_Instance:
      return "AWS::EC2::Instance";
    case ResourceType::AWS_EC2_VPC:
      return "AWS::EC2::VPC";
    case ResourceType::AWS_Lambda_Function:
      return "AWS::Lambda::Function";
    case ResourceType::AWS_CloudTrail:
      return "AWS::CloudTrail";
    case ResourceType::AWS_EKS_Cluster:
      return "AWS::EKS::Cluster";
    case ResourceType::AWS_WAFv2_WebACL:
      return "AWS::WAFv2::WebACL";
    case ResourceType::AWS_ElasticLoadBalancingV2_LoadBalancer:
      return "AWS::ElasticLoadBalancingV2::LoadBalancer";
    case ResourceType::AWS_Route53Resolver_ResolverEndpoint:
      return "AWS::Route53Resolver::ResolverEndpoint";
    case ResourceType::AWS_BedrockAgentCore_Runtime:
      return "AWS::BedrockAgentCore::Runtime";
    case ResourceType::AWS_BedrockAgentCore_Browser:
      return "AWS::BedrockAgentCore::Browser";
    case ResourceType::AWS_BedrockAgentCore_CodeInterpreter:
      return "AWS::BedrockAgentCore::CodeInterpreter";
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
}  // namespace ObservabilityAdmin
}  // namespace Aws
