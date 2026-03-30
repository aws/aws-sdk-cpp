/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/Insight.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

Insight::Insight(JsonView jsonValue) { *this = jsonValue; }

Insight& Insight::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InsightId")) {
    m_insightId = jsonValue.GetString("InsightId");
    m_insightIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisplayName")) {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = InsightTypeMapper::GetInsightTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Priority")) {
    m_priority = InsightPriorityLevelMapper::GetInsightPriorityLevelForName(jsonValue.GetString("Priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = InsightStatusMapper::GetInsightStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdateTime")) {
    m_updateTime = jsonValue.GetDouble("UpdateTime");
    m_updateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsExperimental")) {
    m_isExperimental = jsonValue.GetBool("IsExperimental");
    m_isExperimentalHasBeenSet = true;
  }
  return *this;
}

JsonValue Insight::Jsonize() const {
  JsonValue payload;

  if (m_insightIdHasBeenSet) {
    payload.WithString("InsightId", m_insightId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", InsightTypeMapper::GetNameForInsightType(m_type));
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("Priority", InsightPriorityLevelMapper::GetNameForInsightPriorityLevel(m_priority));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", InsightStatusMapper::GetNameForInsightStatus(m_status));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_updateTimeHasBeenSet) {
    payload.WithDouble("UpdateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if (m_isExperimentalHasBeenSet) {
    payload.WithBool("IsExperimental", m_isExperimental);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
