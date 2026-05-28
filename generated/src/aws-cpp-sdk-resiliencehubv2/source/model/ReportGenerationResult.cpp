/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ReportGenerationResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ReportGenerationResult::ReportGenerationResult(JsonView jsonValue) { *this = jsonValue; }

ReportGenerationResult& ReportGenerationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reportType")) {
    m_reportType = ReportTypeMapper::GetReportTypeForName(jsonValue.GetString("reportType"));
    m_reportTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ReportGenerationStatusMapper::GetReportGenerationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assessmentId")) {
    m_assessmentId = jsonValue.GetString("assessmentId");
    m_assessmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reportOutput")) {
    m_reportOutput = jsonValue.GetObject("reportOutput");
    m_reportOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue ReportGenerationResult::Jsonize() const {
  JsonValue payload;

  if (m_reportTypeHasBeenSet) {
    payload.WithString("reportType", ReportTypeMapper::GetNameForReportType(m_reportType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ReportGenerationStatusMapper::GetNameForReportGenerationStatus(m_status));
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_assessmentIdHasBeenSet) {
    payload.WithString("assessmentId", m_assessmentId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_reportOutputHasBeenSet) {
    payload.WithObject("reportOutput", m_reportOutput.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
