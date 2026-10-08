/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/security-ir/model/GetFindingMetricsResult.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFindingMetricsResult::GetFindingMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetFindingMetricsResult& GetFindingMetricsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("findingsIngestedSecurityHub")) {
    m_findingsIngestedSecurityHub = jsonValue.GetInt64("findingsIngestedSecurityHub");
    m_findingsIngestedSecurityHubHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsIngestedGuardDuty")) {
    m_findingsIngestedGuardDuty = jsonValue.GetInt64("findingsIngestedGuardDuty");
    m_findingsIngestedGuardDutyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsTriaged")) {
    m_findingsTriaged = jsonValue.GetInt64("findingsTriaged");
    m_findingsTriagedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsTriagedFalsePositive")) {
    m_findingsTriagedFalsePositive = jsonValue.GetInt64("findingsTriagedFalsePositive");
    m_findingsTriagedFalsePositiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsInvestigated")) {
    m_findingsInvestigated = jsonValue.GetInt64("findingsInvestigated");
    m_findingsInvestigatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsInvestigatedFalsePositive")) {
    m_findingsInvestigatedFalsePositive = jsonValue.GetInt64("findingsInvestigatedFalsePositive");
    m_findingsInvestigatedFalsePositiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsEscalated")) {
    m_findingsEscalated = jsonValue.GetInt64("findingsEscalated");
    m_findingsEscalatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsEscalatedFalsePositive")) {
    m_findingsEscalatedFalsePositive = jsonValue.GetInt64("findingsEscalatedFalsePositive");
    m_findingsEscalatedFalsePositiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsTruePositive")) {
    m_findingsTruePositive = jsonValue.GetInt64("findingsTruePositive");
    m_findingsTruePositiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsInvestigatedInProgress")) {
    m_findingsInvestigatedInProgress = jsonValue.GetInt64("findingsInvestigatedInProgress");
    m_findingsInvestigatedInProgressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingsEscalatedInProgress")) {
    m_findingsEscalatedInProgress = jsonValue.GetInt64("findingsEscalatedInProgress");
    m_findingsEscalatedInProgressHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
