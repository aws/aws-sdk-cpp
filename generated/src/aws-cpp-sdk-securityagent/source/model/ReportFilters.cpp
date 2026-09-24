/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ReportFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ReportFilters::ReportFilters(JsonView jsonValue) { *this = jsonValue; }

ReportFilters& ReportFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("riskLevels")) {
    Aws::Utils::Array<JsonView> riskLevelsJsonList = jsonValue.GetArray("riskLevels");
    for (unsigned riskLevelsIndex = 0; riskLevelsIndex < riskLevelsJsonList.GetLength(); ++riskLevelsIndex) {
      m_riskLevels.push_back(RiskLevelMapper::GetRiskLevelForName(riskLevelsJsonList[riskLevelsIndex].AsString()));
    }
    m_riskLevelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidenceLevels")) {
    Aws::Utils::Array<JsonView> confidenceLevelsJsonList = jsonValue.GetArray("confidenceLevels");
    for (unsigned confidenceLevelsIndex = 0; confidenceLevelsIndex < confidenceLevelsJsonList.GetLength(); ++confidenceLevelsIndex) {
      m_confidenceLevels.push_back(
          ConfidenceLevelMapper::GetConfidenceLevelForName(confidenceLevelsJsonList[confidenceLevelsIndex].AsString()));
    }
    m_confidenceLevelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statuses")) {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("statuses");
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      m_statuses.push_back(FindingStatusMapper::GetFindingStatusForName(statusesJsonList[statusesIndex].AsString()));
    }
    m_statusesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskTypes")) {
    Aws::Utils::Array<JsonView> riskTypesJsonList = jsonValue.GetArray("riskTypes");
    for (unsigned riskTypesIndex = 0; riskTypesIndex < riskTypesJsonList.GetLength(); ++riskTypesIndex) {
      m_riskTypes.push_back(RiskTypeMapper::GetRiskTypeForName(riskTypesJsonList[riskTypesIndex].AsString()));
    }
    m_riskTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingTypes")) {
    Aws::Utils::Array<JsonView> findingTypesJsonList = jsonValue.GetArray("findingTypes");
    for (unsigned findingTypesIndex = 0; findingTypesIndex < findingTypesJsonList.GetLength(); ++findingTypesIndex) {
      m_findingTypes.push_back(findingTypesJsonList[findingTypesIndex].AsString());
    }
    m_findingTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskStatuses")) {
    Aws::Utils::Array<JsonView> taskStatusesJsonList = jsonValue.GetArray("taskStatuses");
    for (unsigned taskStatusesIndex = 0; taskStatusesIndex < taskStatusesJsonList.GetLength(); ++taskStatusesIndex) {
      m_taskStatuses.push_back(
          TaskExecutionStatusMapper::GetTaskExecutionStatusForName(taskStatusesJsonList[taskStatusesIndex].AsString()));
    }
    m_taskStatusesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("annotationNotes")) {
    m_annotationNotes = jsonValue.GetBool("annotationNotes");
    m_annotationNotesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("complianceReport")) {
    m_complianceReport = jsonValue.GetBool("complianceReport");
    m_complianceReportHasBeenSet = true;
  }
  return *this;
}

JsonValue ReportFilters::Jsonize() const {
  JsonValue payload;

  if (m_riskLevelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> riskLevelsJsonList(m_riskLevels.size());
    for (unsigned riskLevelsIndex = 0; riskLevelsIndex < riskLevelsJsonList.GetLength(); ++riskLevelsIndex) {
      riskLevelsJsonList[riskLevelsIndex].AsString(RiskLevelMapper::GetNameForRiskLevel(m_riskLevels[riskLevelsIndex]));
    }
    payload.WithArray("riskLevels", std::move(riskLevelsJsonList));
  }

  if (m_confidenceLevelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> confidenceLevelsJsonList(m_confidenceLevels.size());
    for (unsigned confidenceLevelsIndex = 0; confidenceLevelsIndex < confidenceLevelsJsonList.GetLength(); ++confidenceLevelsIndex) {
      confidenceLevelsJsonList[confidenceLevelsIndex].AsString(
          ConfidenceLevelMapper::GetNameForConfidenceLevel(m_confidenceLevels[confidenceLevelsIndex]));
    }
    payload.WithArray("confidenceLevels", std::move(confidenceLevelsJsonList));
  }

  if (m_statusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      statusesJsonList[statusesIndex].AsString(FindingStatusMapper::GetNameForFindingStatus(m_statuses[statusesIndex]));
    }
    payload.WithArray("statuses", std::move(statusesJsonList));
  }

  if (m_riskTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> riskTypesJsonList(m_riskTypes.size());
    for (unsigned riskTypesIndex = 0; riskTypesIndex < riskTypesJsonList.GetLength(); ++riskTypesIndex) {
      riskTypesJsonList[riskTypesIndex].AsString(RiskTypeMapper::GetNameForRiskType(m_riskTypes[riskTypesIndex]));
    }
    payload.WithArray("riskTypes", std::move(riskTypesJsonList));
  }

  if (m_findingTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingTypesJsonList(m_findingTypes.size());
    for (unsigned findingTypesIndex = 0; findingTypesIndex < findingTypesJsonList.GetLength(); ++findingTypesIndex) {
      findingTypesJsonList[findingTypesIndex].AsString(m_findingTypes[findingTypesIndex]);
    }
    payload.WithArray("findingTypes", std::move(findingTypesJsonList));
  }

  if (m_taskStatusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> taskStatusesJsonList(m_taskStatuses.size());
    for (unsigned taskStatusesIndex = 0; taskStatusesIndex < taskStatusesJsonList.GetLength(); ++taskStatusesIndex) {
      taskStatusesJsonList[taskStatusesIndex].AsString(
          TaskExecutionStatusMapper::GetNameForTaskExecutionStatus(m_taskStatuses[taskStatusesIndex]));
    }
    payload.WithArray("taskStatuses", std::move(taskStatusesJsonList));
  }

  if (m_annotationNotesHasBeenSet) {
    payload.WithBool("annotationNotes", m_annotationNotes);
  }

  if (m_complianceReportHasBeenSet) {
    payload.WithBool("complianceReport", m_complianceReport);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
