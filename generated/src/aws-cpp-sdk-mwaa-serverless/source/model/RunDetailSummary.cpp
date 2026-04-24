/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/RunDetailSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {

RunDetailSummary::RunDetailSummary(JsonView jsonValue) { *this = jsonValue; }

RunDetailSummary& RunDetailSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = WorkflowRunStatusMapper::GetWorkflowRunStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedOn")) {
    m_createdOn = jsonValue.GetString("CreatedOn");
    m_createdOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetString("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndedAt")) {
    m_endedAt = jsonValue.GetString("EndedAt");
    m_endedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue RunDetailSummary::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", WorkflowRunStatusMapper::GetNameForWorkflowRunStatus(m_status));
  }

  if (m_createdOnHasBeenSet) {
    payload.WithString("CreatedOn", m_createdOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("StartedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endedAtHasBeenSet) {
    payload.WithString("EndedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
