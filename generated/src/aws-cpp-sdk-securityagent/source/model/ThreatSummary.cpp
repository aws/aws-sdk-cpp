/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ThreatSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ThreatSummary::ThreatSummary(JsonView jsonValue) { *this = jsonValue; }

ThreatSummary& ThreatSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("threatId")) {
    m_threatId = jsonValue.GetString("threatId");
    m_threatIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatJobId")) {
    m_threatJobId = jsonValue.GetString("threatJobId");
    m_threatJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statement")) {
    m_statement = jsonValue.GetString("statement");
    m_statementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = ThreatSeverityMapper::GetThreatSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ThreatStatusMapper::GetThreatStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stride")) {
    Aws::Utils::Array<JsonView> strideJsonList = jsonValue.GetArray("stride");
    for (unsigned strideIndex = 0; strideIndex < strideJsonList.GetLength(); ++strideIndex) {
      m_stride.push_back(StrideCategoryMapper::GetStrideCategoryForName(strideJsonList[strideIndex].AsString()));
    }
    m_strideHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = ThreatActorMapper::GetThreatActorForName(jsonValue.GetString("createdBy"));
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedBy")) {
    m_updatedBy = ThreatActorMapper::GetThreatActorForName(jsonValue.GetString("updatedBy"));
    m_updatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ThreatSummary::Jsonize() const {
  JsonValue payload;

  if (m_threatIdHasBeenSet) {
    payload.WithString("threatId", m_threatId);
  }

  if (m_threatJobIdHasBeenSet) {
    payload.WithString("threatJobId", m_threatJobId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_statementHasBeenSet) {
    payload.WithString("statement", m_statement);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("severity", ThreatSeverityMapper::GetNameForThreatSeverity(m_severity));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ThreatStatusMapper::GetNameForThreatStatus(m_status));
  }

  if (m_strideHasBeenSet) {
    Aws::Utils::Array<JsonValue> strideJsonList(m_stride.size());
    for (unsigned strideIndex = 0; strideIndex < strideJsonList.GetLength(); ++strideIndex) {
      strideJsonList[strideIndex].AsString(StrideCategoryMapper::GetNameForStrideCategory(m_stride[strideIndex]));
    }
    payload.WithArray("stride", std::move(strideJsonList));
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", ThreatActorMapper::GetNameForThreatActor(m_createdBy));
  }

  if (m_updatedByHasBeenSet) {
    payload.WithString("updatedBy", ThreatActorMapper::GetNameForThreatActor(m_updatedBy));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
