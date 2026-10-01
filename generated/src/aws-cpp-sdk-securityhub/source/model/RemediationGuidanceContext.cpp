/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationGuidanceContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationGuidanceContext::RemediationGuidanceContext(JsonView jsonValue) { *this = jsonValue; }

RemediationGuidanceContext& RemediationGuidanceContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProblemStatement")) {
    m_problemStatement = jsonValue.GetString("ProblemStatement");
    m_problemStatementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RiskAssessment")) {
    m_riskAssessment = jsonValue.GetString("RiskAssessment");
    m_riskAssessmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AffectedScope")) {
    m_affectedScope = jsonValue.GetString("AffectedScope");
    m_affectedScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Prerequisites")) {
    Aws::Utils::Array<JsonView> prerequisitesJsonList = jsonValue.GetArray("Prerequisites");
    for (unsigned prerequisitesIndex = 0; prerequisitesIndex < prerequisitesJsonList.GetLength(); ++prerequisitesIndex) {
      m_prerequisites.push_back(prerequisitesJsonList[prerequisitesIndex].AsString());
    }
    m_prerequisitesHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationGuidanceContext::Jsonize() const {
  JsonValue payload;

  if (m_problemStatementHasBeenSet) {
    payload.WithString("ProblemStatement", m_problemStatement);
  }

  if (m_riskAssessmentHasBeenSet) {
    payload.WithString("RiskAssessment", m_riskAssessment);
  }

  if (m_affectedScopeHasBeenSet) {
    payload.WithString("AffectedScope", m_affectedScope);
  }

  if (m_prerequisitesHasBeenSet) {
    Aws::Utils::Array<JsonValue> prerequisitesJsonList(m_prerequisites.size());
    for (unsigned prerequisitesIndex = 0; prerequisitesIndex < prerequisitesJsonList.GetLength(); ++prerequisitesIndex) {
      prerequisitesJsonList[prerequisitesIndex].AsString(m_prerequisites[prerequisitesIndex]);
    }
    payload.WithArray("Prerequisites", std::move(prerequisitesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
