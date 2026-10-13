/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/DevOpsAgentInvestigation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

DevOpsAgentInvestigation::DevOpsAgentInvestigation(JsonView jsonValue) { *this = jsonValue; }

DevOpsAgentInvestigation& DevOpsAgentInvestigation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("verdict")) {
    m_verdict = DevOpsAgentVerdictMapper::GetDevOpsAgentVerdictForName(jsonValue.GetString("verdict"));
    m_verdictHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = DevOpsAgentConfidenceMapper::GetDevOpsAgentConfidenceForName(jsonValue.GetString("confidence"));
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deepLink")) {
    m_deepLink = jsonValue.GetString("deepLink");
    m_deepLinkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DevOpsAgentInvestigationStatusMapper::GetDevOpsAgentInvestigationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("summary")) {
    m_summary = jsonValue.GetString("summary");
    m_summaryHasBeenSet = true;
  }
  return *this;
}

JsonValue DevOpsAgentInvestigation::Jsonize() const {
  JsonValue payload;

  if (m_verdictHasBeenSet) {
    payload.WithString("verdict", DevOpsAgentVerdictMapper::GetNameForDevOpsAgentVerdict(m_verdict));
  }

  if (m_confidenceHasBeenSet) {
    payload.WithString("confidence", DevOpsAgentConfidenceMapper::GetNameForDevOpsAgentConfidence(m_confidence));
  }

  if (m_deepLinkHasBeenSet) {
    payload.WithString("deepLink", m_deepLink);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DevOpsAgentInvestigationStatusMapper::GetNameForDevOpsAgentInvestigationStatus(m_status));
  }

  if (m_summaryHasBeenSet) {
    payload.WithString("summary", m_summary);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
