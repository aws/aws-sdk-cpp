/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ResourcesNumberField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ResourcesNumberFieldMapper {

static const int FindingsSummary_TotalFindings_HASH = HashingUtils::HashString("FindingsSummary.TotalFindings");
static const int FindingsSummary_Severities_Other_HASH = HashingUtils::HashString("FindingsSummary.Severities.Other");
static const int FindingsSummary_Severities_Fatal_HASH = HashingUtils::HashString("FindingsSummary.Severities.Fatal");
static const int FindingsSummary_Severities_Critical_HASH = HashingUtils::HashString("FindingsSummary.Severities.Critical");
static const int FindingsSummary_Severities_High_HASH = HashingUtils::HashString("FindingsSummary.Severities.High");
static const int FindingsSummary_Severities_Medium_HASH = HashingUtils::HashString("FindingsSummary.Severities.Medium");
static const int FindingsSummary_Severities_Low_HASH = HashingUtils::HashString("FindingsSummary.Severities.Low");
static const int FindingsSummary_Severities_Informational_HASH = HashingUtils::HashString("FindingsSummary.Severities.Informational");
static const int FindingsSummary_Severities_Unknown_HASH = HashingUtils::HashString("FindingsSummary.Severities.Unknown");
static const int ResourceInfo_AIDetails_SelfHostedAIModelResourceCount_HASH =
    HashingUtils::HashString("ResourceInfo.AIDetails.SelfHostedAIModelResourceCount");
static const int ResourceInfo_AIDetails_SelfHostedAIAgentResourceCount_HASH =
    HashingUtils::HashString("ResourceInfo.AIDetails.SelfHostedAIAgentResourceCount");
static const int ResourceInfo_AIDetails_SelfHostedAIModelServingResourceCount_HASH =
    HashingUtils::HashString("ResourceInfo.AIDetails.SelfHostedAIModelServingResourceCount");
static const int ResourceInfo_AIDetails_SelfHostedAIExternalEndpointResourceCount_HASH =
    HashingUtils::HashString("ResourceInfo.AIDetails.SelfHostedAIExternalEndpointResourceCount");
static const int ResourceInfo_AIDetails_SelfHostedAIDevelopmentResourceCount_HASH =
    HashingUtils::HashString("ResourceInfo.AIDetails.SelfHostedAIDevelopmentResourceCount");
static const int ResourceInfo_AIDetails_SelfHostedAIAgentFrameworkResourceCount_HASH =
    HashingUtils::HashString("ResourceInfo.AIDetails.SelfHostedAIAgentFrameworkResourceCount");
static const int ResourceInfo_AIDetails_SelfHostedAIAgentToolsAndIdentityResourceCount_HASH =
    HashingUtils::HashString("ResourceInfo.AIDetails.SelfHostedAIAgentToolsAndIdentityResourceCount");
static const int ResourceInfo_AIDetails_SelfHostedTotalAIResourceCount_HASH =
    HashingUtils::HashString("ResourceInfo.AIDetails.SelfHostedTotalAIResourceCount");

ResourcesNumberField GetResourcesNumberFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FindingsSummary_TotalFindings_HASH) {
    return ResourcesNumberField::FindingsSummary_TotalFindings;
  } else if (hashCode == FindingsSummary_Severities_Other_HASH) {
    return ResourcesNumberField::FindingsSummary_Severities_Other;
  } else if (hashCode == FindingsSummary_Severities_Fatal_HASH) {
    return ResourcesNumberField::FindingsSummary_Severities_Fatal;
  } else if (hashCode == FindingsSummary_Severities_Critical_HASH) {
    return ResourcesNumberField::FindingsSummary_Severities_Critical;
  } else if (hashCode == FindingsSummary_Severities_High_HASH) {
    return ResourcesNumberField::FindingsSummary_Severities_High;
  } else if (hashCode == FindingsSummary_Severities_Medium_HASH) {
    return ResourcesNumberField::FindingsSummary_Severities_Medium;
  } else if (hashCode == FindingsSummary_Severities_Low_HASH) {
    return ResourcesNumberField::FindingsSummary_Severities_Low;
  } else if (hashCode == FindingsSummary_Severities_Informational_HASH) {
    return ResourcesNumberField::FindingsSummary_Severities_Informational;
  } else if (hashCode == FindingsSummary_Severities_Unknown_HASH) {
    return ResourcesNumberField::FindingsSummary_Severities_Unknown;
  } else if (hashCode == ResourceInfo_AIDetails_SelfHostedAIModelResourceCount_HASH) {
    return ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIModelResourceCount;
  } else if (hashCode == ResourceInfo_AIDetails_SelfHostedAIAgentResourceCount_HASH) {
    return ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIAgentResourceCount;
  } else if (hashCode == ResourceInfo_AIDetails_SelfHostedAIModelServingResourceCount_HASH) {
    return ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIModelServingResourceCount;
  } else if (hashCode == ResourceInfo_AIDetails_SelfHostedAIExternalEndpointResourceCount_HASH) {
    return ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIExternalEndpointResourceCount;
  } else if (hashCode == ResourceInfo_AIDetails_SelfHostedAIDevelopmentResourceCount_HASH) {
    return ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIDevelopmentResourceCount;
  } else if (hashCode == ResourceInfo_AIDetails_SelfHostedAIAgentFrameworkResourceCount_HASH) {
    return ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIAgentFrameworkResourceCount;
  } else if (hashCode == ResourceInfo_AIDetails_SelfHostedAIAgentToolsAndIdentityResourceCount_HASH) {
    return ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIAgentToolsAndIdentityResourceCount;
  } else if (hashCode == ResourceInfo_AIDetails_SelfHostedTotalAIResourceCount_HASH) {
    return ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedTotalAIResourceCount;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourcesNumberField>(hashCode);
  }

  return ResourcesNumberField::NOT_SET;
}

Aws::String GetNameForResourcesNumberField(ResourcesNumberField enumValue) {
  switch (enumValue) {
    case ResourcesNumberField::NOT_SET:
      return {};
    case ResourcesNumberField::FindingsSummary_TotalFindings:
      return "FindingsSummary.TotalFindings";
    case ResourcesNumberField::FindingsSummary_Severities_Other:
      return "FindingsSummary.Severities.Other";
    case ResourcesNumberField::FindingsSummary_Severities_Fatal:
      return "FindingsSummary.Severities.Fatal";
    case ResourcesNumberField::FindingsSummary_Severities_Critical:
      return "FindingsSummary.Severities.Critical";
    case ResourcesNumberField::FindingsSummary_Severities_High:
      return "FindingsSummary.Severities.High";
    case ResourcesNumberField::FindingsSummary_Severities_Medium:
      return "FindingsSummary.Severities.Medium";
    case ResourcesNumberField::FindingsSummary_Severities_Low:
      return "FindingsSummary.Severities.Low";
    case ResourcesNumberField::FindingsSummary_Severities_Informational:
      return "FindingsSummary.Severities.Informational";
    case ResourcesNumberField::FindingsSummary_Severities_Unknown:
      return "FindingsSummary.Severities.Unknown";
    case ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIModelResourceCount:
      return "ResourceInfo.AIDetails.SelfHostedAIModelResourceCount";
    case ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIAgentResourceCount:
      return "ResourceInfo.AIDetails.SelfHostedAIAgentResourceCount";
    case ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIModelServingResourceCount:
      return "ResourceInfo.AIDetails.SelfHostedAIModelServingResourceCount";
    case ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIExternalEndpointResourceCount:
      return "ResourceInfo.AIDetails.SelfHostedAIExternalEndpointResourceCount";
    case ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIDevelopmentResourceCount:
      return "ResourceInfo.AIDetails.SelfHostedAIDevelopmentResourceCount";
    case ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIAgentFrameworkResourceCount:
      return "ResourceInfo.AIDetails.SelfHostedAIAgentFrameworkResourceCount";
    case ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedAIAgentToolsAndIdentityResourceCount:
      return "ResourceInfo.AIDetails.SelfHostedAIAgentToolsAndIdentityResourceCount";
    case ResourcesNumberField::ResourceInfo_AIDetails_SelfHostedTotalAIResourceCount:
      return "ResourceInfo.AIDetails.SelfHostedTotalAIResourceCount";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourcesNumberFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
