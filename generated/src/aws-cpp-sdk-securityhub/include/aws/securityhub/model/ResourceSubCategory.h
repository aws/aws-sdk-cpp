/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class ResourceSubCategory {
  NOT_SET,
  Model,
  ModelServing,
  Agent,
  AgentFramework,
  AgentToolsAndIdentity,
  SafetyAndGuardrail,
  KnowledgeAndData,
  OrchestrationAndPipeline,
  ExternalEndpoint,
  Development,
  Other
};

namespace ResourceSubCategoryMapper {
AWS_SECURITYHUB_API ResourceSubCategory GetResourceSubCategoryForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourceSubCategory(ResourceSubCategory value);
}  // namespace ResourceSubCategoryMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
