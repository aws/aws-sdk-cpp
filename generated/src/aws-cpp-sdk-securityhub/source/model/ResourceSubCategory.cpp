/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ResourceSubCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ResourceSubCategoryMapper {

static const int Model_HASH = HashingUtils::HashString("Model");
static const int ModelServing_HASH = HashingUtils::HashString("ModelServing");
static const int Agent_HASH = HashingUtils::HashString("Agent");
static const int AgentFramework_HASH = HashingUtils::HashString("AgentFramework");
static const int AgentToolsAndIdentity_HASH = HashingUtils::HashString("AgentToolsAndIdentity");
static const int SafetyAndGuardrail_HASH = HashingUtils::HashString("SafetyAndGuardrail");
static const int KnowledgeAndData_HASH = HashingUtils::HashString("KnowledgeAndData");
static const int OrchestrationAndPipeline_HASH = HashingUtils::HashString("OrchestrationAndPipeline");
static const int ExternalEndpoint_HASH = HashingUtils::HashString("ExternalEndpoint");
static const int Development_HASH = HashingUtils::HashString("Development");
static const int Other_HASH = HashingUtils::HashString("Other");

ResourceSubCategory GetResourceSubCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Model_HASH) {
    return ResourceSubCategory::Model;
  } else if (hashCode == ModelServing_HASH) {
    return ResourceSubCategory::ModelServing;
  } else if (hashCode == Agent_HASH) {
    return ResourceSubCategory::Agent;
  } else if (hashCode == AgentFramework_HASH) {
    return ResourceSubCategory::AgentFramework;
  } else if (hashCode == AgentToolsAndIdentity_HASH) {
    return ResourceSubCategory::AgentToolsAndIdentity;
  } else if (hashCode == SafetyAndGuardrail_HASH) {
    return ResourceSubCategory::SafetyAndGuardrail;
  } else if (hashCode == KnowledgeAndData_HASH) {
    return ResourceSubCategory::KnowledgeAndData;
  } else if (hashCode == OrchestrationAndPipeline_HASH) {
    return ResourceSubCategory::OrchestrationAndPipeline;
  } else if (hashCode == ExternalEndpoint_HASH) {
    return ResourceSubCategory::ExternalEndpoint;
  } else if (hashCode == Development_HASH) {
    return ResourceSubCategory::Development;
  } else if (hashCode == Other_HASH) {
    return ResourceSubCategory::Other;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceSubCategory>(hashCode);
  }

  return ResourceSubCategory::NOT_SET;
}

Aws::String GetNameForResourceSubCategory(ResourceSubCategory enumValue) {
  switch (enumValue) {
    case ResourceSubCategory::NOT_SET:
      return {};
    case ResourceSubCategory::Model:
      return "Model";
    case ResourceSubCategory::ModelServing:
      return "ModelServing";
    case ResourceSubCategory::Agent:
      return "Agent";
    case ResourceSubCategory::AgentFramework:
      return "AgentFramework";
    case ResourceSubCategory::AgentToolsAndIdentity:
      return "AgentToolsAndIdentity";
    case ResourceSubCategory::SafetyAndGuardrail:
      return "SafetyAndGuardrail";
    case ResourceSubCategory::KnowledgeAndData:
      return "KnowledgeAndData";
    case ResourceSubCategory::OrchestrationAndPipeline:
      return "OrchestrationAndPipeline";
    case ResourceSubCategory::ExternalEndpoint:
      return "ExternalEndpoint";
    case ResourceSubCategory::Development:
      return "Development";
    case ResourceSubCategory::Other:
      return "Other";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceSubCategoryMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
