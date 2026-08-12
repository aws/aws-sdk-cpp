/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wellarchitected/model/GetAgentRecommendationResult.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAgentRecommendationResult::GetAgentRecommendationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAgentRecommendationResult& GetAgentRecommendationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("recommendationArn")) {
    m_recommendationArn = jsonValue.GetString("recommendationArn");
    m_recommendationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profileArn")) {
    m_profileArn = jsonValue.GetString("profileArn");
    m_profileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = RecommendationTypeMapper::GetRecommendationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pillar")) {
    m_pillar = PillarMapper::GetPillarForName(jsonValue.GetString("pillar"));
    m_pillarHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = PriorityMapper::GetPriorityForName(jsonValue.GetString("priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("effort")) {
    m_effort = EffortMapper::GetEffortForName(jsonValue.GetString("effort"));
    m_effortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = RecommendationStatusMapper::GetRecommendationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = RecommendationStateMapper::GetRecommendationStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateReason")) {
    m_updateReason = jsonValue.GetString("updateReason");
    m_updateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impact")) {
    m_impact = ImpactCategoryMapper::GetImpactCategoryForName(jsonValue.GetString("impact"));
    m_impactHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roi")) {
    m_roi = jsonValue.GetObject("roi");
    m_roiHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberOfResources")) {
    m_numberOfResources = jsonValue.GetInteger("numberOfResources");
    m_numberOfResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsServices")) {
    Aws::Utils::Array<JsonView> awsServicesJsonList = jsonValue.GetArray("awsServices");
    for (unsigned awsServicesIndex = 0; awsServicesIndex < awsServicesJsonList.GetLength(); ++awsServicesIndex) {
      m_awsServices.push_back(awsServicesJsonList[awsServicesIndex].AsString());
    }
    m_awsServicesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("businessUnits")) {
    Aws::Utils::Array<JsonView> businessUnitsJsonList = jsonValue.GetArray("businessUnits");
    for (unsigned businessUnitsIndex = 0; businessUnitsIndex < businessUnitsJsonList.GetLength(); ++businessUnitsIndex) {
      m_businessUnits.push_back(businessUnitsJsonList[businessUnitsIndex].AsString());
    }
    m_businessUnitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applications")) {
    Aws::Utils::Array<JsonView> applicationsJsonList = jsonValue.GetArray("applications");
    for (unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex) {
      m_applications.push_back(applicationsJsonList[applicationsIndex].AsString());
    }
    m_applicationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impactDetails")) {
    Aws::Utils::Array<JsonView> impactDetailsJsonList = jsonValue.GetArray("impactDetails");
    for (unsigned impactDetailsIndex = 0; impactDetailsIndex < impactDetailsJsonList.GetLength(); ++impactDetailsIndex) {
      m_impactDetails.push_back(impactDetailsJsonList[impactDetailsIndex].AsString());
    }
    m_impactDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("insights")) {
    Aws::Utils::Array<JsonView> insightsJsonList = jsonValue.GetArray("insights");
    for (unsigned insightsIndex = 0; insightsIndex < insightsJsonList.GetLength(); ++insightsIndex) {
      m_insights.push_back(insightsJsonList[insightsIndex].AsObject());
    }
    m_insightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("highlights")) {
    Aws::Utils::Array<JsonView> highlightsJsonList = jsonValue.GetArray("highlights");
    for (unsigned highlightsIndex = 0; highlightsIndex < highlightsJsonList.GetLength(); ++highlightsIndex) {
      m_highlights.push_back(highlightsJsonList[highlightsIndex].AsString());
    }
    m_highlightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediationSummary")) {
    m_remediationSummary = jsonValue.GetObject("remediationSummary");
    m_remediationSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("crossPillarBenefits")) {
    Aws::Utils::Array<JsonView> crossPillarBenefitsJsonList = jsonValue.GetArray("crossPillarBenefits");
    for (unsigned crossPillarBenefitsIndex = 0; crossPillarBenefitsIndex < crossPillarBenefitsJsonList.GetLength();
         ++crossPillarBenefitsIndex) {
      m_crossPillarBenefits.push_back(crossPillarBenefitsJsonList[crossPillarBenefitsIndex].AsObject());
    }
    m_crossPillarBenefitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tradeOffs")) {
    Aws::Utils::Array<JsonView> tradeOffsJsonList = jsonValue.GetArray("tradeOffs");
    for (unsigned tradeOffsIndex = 0; tradeOffsIndex < tradeOffsJsonList.GetLength(); ++tradeOffsIndex) {
      m_tradeOffs.push_back(tradeOffsJsonList[tradeOffsIndex].AsObject());
    }
    m_tradeOffsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sources")) {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for (unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex) {
      m_sources.push_back(RecommendationSourceMapper::GetRecommendationSourceForName(sourcesJsonList[sourcesIndex].AsString()));
    }
    m_sourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("goals")) {
    Aws::Utils::Array<JsonView> goalsJsonList = jsonValue.GetArray("goals");
    for (unsigned goalsIndex = 0; goalsIndex < goalsJsonList.GetLength(); ++goalsIndex) {
      m_goals.push_back(goalsJsonList[goalsIndex].AsObject());
    }
    m_goalsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedBy")) {
    m_lastModifiedBy = jsonValue.GetString("lastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedAt")) {
    m_lastModifiedAt = jsonValue.GetString("lastModifiedAt");
    m_lastModifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediations")) {
    Aws::Utils::Array<JsonView> remediationsJsonList = jsonValue.GetArray("remediations");
    for (unsigned remediationsIndex = 0; remediationsIndex < remediationsJsonList.GetLength(); ++remediationsIndex) {
      m_remediations.push_back(remediationsJsonList[remediationsIndex].AsObject());
    }
    m_remediationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
