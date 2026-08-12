/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/RecommendationSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace RecommendationSourceMapper {

static const int TRUSTED_ADVISOR_HASH = HashingUtils::HashString("TRUSTED_ADVISOR");
static const int COST_EXPLORER_HASH = HashingUtils::HashString("COST_EXPLORER");
static const int CLOUDWATCH_HASH = HashingUtils::HashString("CLOUDWATCH");
static const int WELL_ARCHITECTED_TOOL_HASH = HashingUtils::HashString("WELL_ARCHITECTED_TOOL");
static const int WELL_ARCHITECTED_AGENT_HASH = HashingUtils::HashString("WELL_ARCHITECTED_AGENT");
static const int CUSTOMER_IAC_HASH = HashingUtils::HashString("CUSTOMER_IAC");

RecommendationSource GetRecommendationSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TRUSTED_ADVISOR_HASH) {
    return RecommendationSource::TRUSTED_ADVISOR;
  } else if (hashCode == COST_EXPLORER_HASH) {
    return RecommendationSource::COST_EXPLORER;
  } else if (hashCode == CLOUDWATCH_HASH) {
    return RecommendationSource::CLOUDWATCH;
  } else if (hashCode == WELL_ARCHITECTED_TOOL_HASH) {
    return RecommendationSource::WELL_ARCHITECTED_TOOL;
  } else if (hashCode == WELL_ARCHITECTED_AGENT_HASH) {
    return RecommendationSource::WELL_ARCHITECTED_AGENT;
  } else if (hashCode == CUSTOMER_IAC_HASH) {
    return RecommendationSource::CUSTOMER_IAC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationSource>(hashCode);
  }

  return RecommendationSource::NOT_SET;
}

Aws::String GetNameForRecommendationSource(RecommendationSource enumValue) {
  switch (enumValue) {
    case RecommendationSource::NOT_SET:
      return {};
    case RecommendationSource::TRUSTED_ADVISOR:
      return "TRUSTED_ADVISOR";
    case RecommendationSource::COST_EXPLORER:
      return "COST_EXPLORER";
    case RecommendationSource::CLOUDWATCH:
      return "CLOUDWATCH";
    case RecommendationSource::WELL_ARCHITECTED_TOOL:
      return "WELL_ARCHITECTED_TOOL";
    case RecommendationSource::WELL_ARCHITECTED_AGENT:
      return "WELL_ARCHITECTED_AGENT";
    case RecommendationSource::CUSTOMER_IAC:
      return "CUSTOMER_IAC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationSourceMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
