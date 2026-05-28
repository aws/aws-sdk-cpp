/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/Finding.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

Finding::Finding(JsonView jsonValue) { *this = jsonValue; }

Finding& Finding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureCategory")) {
    m_failureCategory = FailureCategoryMapper::GetFailureCategoryForName(jsonValue.GetString("failureCategory"));
    m_failureCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reasoning")) {
    m_reasoning = jsonValue.GetString("reasoning");
    m_reasoningHasBeenSet = true;
  }
  if (jsonValue.ValueExists("comment")) {
    m_comment = jsonValue.GetString("comment");
    m_commentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = FindingSeverityMapper::GetFindingSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceFunctions")) {
    Aws::Utils::Array<JsonView> serviceFunctionsJsonList = jsonValue.GetArray("serviceFunctions");
    for (unsigned serviceFunctionsIndex = 0; serviceFunctionsIndex < serviceFunctionsJsonList.GetLength(); ++serviceFunctionsIndex) {
      m_serviceFunctions.push_back(serviceFunctionsJsonList[serviceFunctionsIndex].AsString());
    }
    m_serviceFunctionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyComponent")) {
    m_policyComponent = PolicyComponentMapper::GetPolicyComponentForName(jsonValue.GetString("policyComponent"));
    m_policyComponentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("infrastructureAndCodeRecommendations")) {
    Aws::Utils::Array<JsonView> infrastructureAndCodeRecommendationsJsonList = jsonValue.GetArray("infrastructureAndCodeRecommendations");
    for (unsigned infrastructureAndCodeRecommendationsIndex = 0;
         infrastructureAndCodeRecommendationsIndex < infrastructureAndCodeRecommendationsJsonList.GetLength();
         ++infrastructureAndCodeRecommendationsIndex) {
      m_infrastructureAndCodeRecommendations.push_back(
          infrastructureAndCodeRecommendationsJsonList[infrastructureAndCodeRecommendationsIndex].AsObject());
    }
    m_infrastructureAndCodeRecommendationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("observabilityRecommendations")) {
    Aws::Utils::Array<JsonView> observabilityRecommendationsJsonList = jsonValue.GetArray("observabilityRecommendations");
    for (unsigned observabilityRecommendationsIndex = 0;
         observabilityRecommendationsIndex < observabilityRecommendationsJsonList.GetLength(); ++observabilityRecommendationsIndex) {
      m_observabilityRecommendations.push_back(observabilityRecommendationsJsonList[observabilityRecommendationsIndex].AsObject());
    }
    m_observabilityRecommendationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testingRecommendations")) {
    Aws::Utils::Array<JsonView> testingRecommendationsJsonList = jsonValue.GetArray("testingRecommendations");
    for (unsigned testingRecommendationsIndex = 0; testingRecommendationsIndex < testingRecommendationsJsonList.GetLength();
         ++testingRecommendationsIndex) {
      m_testingRecommendations.push_back(testingRecommendationsJsonList[testingRecommendationsIndex].AsObject());
    }
    m_testingRecommendationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Finding::Jsonize() const {
  JsonValue payload;

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_failureCategoryHasBeenSet) {
    payload.WithString("failureCategory", FailureCategoryMapper::GetNameForFailureCategory(m_failureCategory));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", FindingStatusMapper::GetNameForFindingStatus(m_status));
  }

  if (m_reasoningHasBeenSet) {
    payload.WithString("reasoning", m_reasoning);
  }

  if (m_commentHasBeenSet) {
    payload.WithString("comment", m_comment);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("severity", FindingSeverityMapper::GetNameForFindingSeverity(m_severity));
  }

  if (m_serviceFunctionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> serviceFunctionsJsonList(m_serviceFunctions.size());
    for (unsigned serviceFunctionsIndex = 0; serviceFunctionsIndex < serviceFunctionsJsonList.GetLength(); ++serviceFunctionsIndex) {
      serviceFunctionsJsonList[serviceFunctionsIndex].AsString(m_serviceFunctions[serviceFunctionsIndex]);
    }
    payload.WithArray("serviceFunctions", std::move(serviceFunctionsJsonList));
  }

  if (m_policyComponentHasBeenSet) {
    payload.WithString("policyComponent", PolicyComponentMapper::GetNameForPolicyComponent(m_policyComponent));
  }

  if (m_infrastructureAndCodeRecommendationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> infrastructureAndCodeRecommendationsJsonList(m_infrastructureAndCodeRecommendations.size());
    for (unsigned infrastructureAndCodeRecommendationsIndex = 0;
         infrastructureAndCodeRecommendationsIndex < infrastructureAndCodeRecommendationsJsonList.GetLength();
         ++infrastructureAndCodeRecommendationsIndex) {
      infrastructureAndCodeRecommendationsJsonList[infrastructureAndCodeRecommendationsIndex].AsObject(
          m_infrastructureAndCodeRecommendations[infrastructureAndCodeRecommendationsIndex].Jsonize());
    }
    payload.WithArray("infrastructureAndCodeRecommendations", std::move(infrastructureAndCodeRecommendationsJsonList));
  }

  if (m_observabilityRecommendationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> observabilityRecommendationsJsonList(m_observabilityRecommendations.size());
    for (unsigned observabilityRecommendationsIndex = 0;
         observabilityRecommendationsIndex < observabilityRecommendationsJsonList.GetLength(); ++observabilityRecommendationsIndex) {
      observabilityRecommendationsJsonList[observabilityRecommendationsIndex].AsObject(
          m_observabilityRecommendations[observabilityRecommendationsIndex].Jsonize());
    }
    payload.WithArray("observabilityRecommendations", std::move(observabilityRecommendationsJsonList));
  }

  if (m_testingRecommendationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> testingRecommendationsJsonList(m_testingRecommendations.size());
    for (unsigned testingRecommendationsIndex = 0; testingRecommendationsIndex < testingRecommendationsJsonList.GetLength();
         ++testingRecommendationsIndex) {
      testingRecommendationsJsonList[testingRecommendationsIndex].AsObject(m_testingRecommendations[testingRecommendationsIndex].Jsonize());
    }
    payload.WithArray("testingRecommendations", std::move(testingRecommendationsJsonList));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
