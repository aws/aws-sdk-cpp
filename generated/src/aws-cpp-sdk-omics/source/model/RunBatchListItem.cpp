/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/RunBatchListItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {

RunBatchListItem::RunBatchListItem(JsonView jsonValue) { *this = jsonValue; }

RunBatchListItem& RunBatchListItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("runSettingId")) {
    m_runSettingId = jsonValue.GetString("runSettingId");
    m_runSettingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runId")) {
    m_runId = jsonValue.GetString("runId");
    m_runIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runInternalUuid")) {
    m_runInternalUuid = jsonValue.GetString("runInternalUuid");
    m_runInternalUuidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runArn")) {
    m_runArn = jsonValue.GetString("runArn");
    m_runArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("submissionStatus")) {
    m_submissionStatus = SubmissionStatusMapper::GetSubmissionStatusForName(jsonValue.GetString("submissionStatus"));
    m_submissionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("submissionFailureReason")) {
    m_submissionFailureReason = jsonValue.GetString("submissionFailureReason");
    m_submissionFailureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("submissionFailureMessage")) {
    m_submissionFailureMessage = jsonValue.GetString("submissionFailureMessage");
    m_submissionFailureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue RunBatchListItem::Jsonize() const {
  JsonValue payload;

  if (m_runSettingIdHasBeenSet) {
    payload.WithString("runSettingId", m_runSettingId);
  }

  if (m_runIdHasBeenSet) {
    payload.WithString("runId", m_runId);
  }

  if (m_runInternalUuidHasBeenSet) {
    payload.WithString("runInternalUuid", m_runInternalUuid);
  }

  if (m_runArnHasBeenSet) {
    payload.WithString("runArn", m_runArn);
  }

  if (m_submissionStatusHasBeenSet) {
    payload.WithString("submissionStatus", SubmissionStatusMapper::GetNameForSubmissionStatus(m_submissionStatus));
  }

  if (m_submissionFailureReasonHasBeenSet) {
    payload.WithString("submissionFailureReason", m_submissionFailureReason);
  }

  if (m_submissionFailureMessageHasBeenSet) {
    payload.WithString("submissionFailureMessage", m_submissionFailureMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
