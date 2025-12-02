/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class ResourceType {
  NOT_SET,
  AWS_EC2_Instance,
  AWS_EC2_VPC,
  AWS_Lambda_Function,
  AWS_CloudTrail,
  AWS_EKS_Cluster,
  AWS_WAFv2_WebACL,
  AWS_ElasticLoadBalancingV2_LoadBalancer,
  AWS_Route53Resolver_ResolverEndpoint,
  AWS_BedrockAgentCore_Runtime,
  AWS_BedrockAgentCore_Browser,
  AWS_BedrockAgentCore_CodeInterpreter
};

namespace ResourceTypeMapper {
AWS_OBSERVABILITYADMIN_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
