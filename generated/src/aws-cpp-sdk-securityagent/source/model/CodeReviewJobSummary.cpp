/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CodeReviewJobSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

CodeReviewJobSummary::CodeReviewJobSummary(JsonView jsonValue) { *this = jsonValue; }

CodeReviewJobSummary& CodeReviewJobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codeReviewJobId")) {
    m_codeReviewJobId = jsonValue.GetString("codeReviewJobId");
    m_codeReviewJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeReviewId")) {
    m_codeReviewId = jsonValue.GetString("codeReviewId");
    m_codeReviewIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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

JsonValue CodeReviewJobSummary::Jsonize() const {
  JsonValue payload;

  if (m_codeReviewJobIdHasBeenSet) {
    payload.WithString("codeReviewJobId", m_codeReviewJobId);
  }

  if (m_codeReviewIdHasBeenSet) {
    payload.WithString("codeReviewId", m_codeReviewId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
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
