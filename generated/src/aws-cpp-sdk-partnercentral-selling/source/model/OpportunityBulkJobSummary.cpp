/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunityBulkJobSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunityBulkJobSummary::OpportunityBulkJobSummary(JsonView jsonValue) { *this = jsonValue; }

OpportunityBulkJobSummary& OpportunityBulkJobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("JobId")) {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = BulkJobStatusMapper::GetBulkJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalRecords")) {
    m_totalRecords = jsonValue.GetInteger("TotalRecords");
    m_totalRecordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcessedRecords")) {
    m_processedRecords = jsonValue.GetInteger("ProcessedRecords");
    m_processedRecordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SuccessCount")) {
    m_successCount = jsonValue.GetInteger("SuccessCount");
    m_successCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureCount")) {
    m_failureCount = jsonValue.GetInteger("FailureCount");
    m_failureCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetString("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompletedAt")) {
    m_completedAt = jsonValue.GetString("CompletedAt");
    m_completedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileName")) {
    m_fileName = jsonValue.GetString("FileName");
    m_fileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OperationType")) {
    m_operationType = BulkOperationTypeMapper::GetBulkOperationTypeForName(jsonValue.GetString("OperationType"));
    m_operationTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunityBulkJobSummary::Jsonize() const {
  JsonValue payload;

  if (m_jobIdHasBeenSet) {
    payload.WithString("JobId", m_jobId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", BulkJobStatusMapper::GetNameForBulkJobStatus(m_status));
  }

  if (m_totalRecordsHasBeenSet) {
    payload.WithInteger("TotalRecords", m_totalRecords);
  }

  if (m_processedRecordsHasBeenSet) {
    payload.WithInteger("ProcessedRecords", m_processedRecords);
  }

  if (m_successCountHasBeenSet) {
    payload.WithInteger("SuccessCount", m_successCount);
  }

  if (m_failureCountHasBeenSet) {
    payload.WithInteger("FailureCount", m_failureCount);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("StartedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_completedAtHasBeenSet) {
    payload.WithString("CompletedAt", m_completedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("FailureReason", m_failureReason);
  }

  if (m_fileNameHasBeenSet) {
    payload.WithString("FileName", m_fileName);
  }

  if (m_operationTypeHasBeenSet) {
    payload.WithString("OperationType", BulkOperationTypeMapper::GetNameForBulkOperationType(m_operationType));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
