/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/ActSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

ActSummary::ActSummary(JsonView jsonValue) { *this = jsonValue; }

ActSummary& ActSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("workflowRunId")) {
    m_workflowRunId = jsonValue.GetString("workflowRunId");
    m_workflowRunIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actId")) {
    m_actId = jsonValue.GetString("actId");
    m_actIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ActStatusMapper::GetActStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("traceLocation")) {
    m_traceLocation = jsonValue.GetObject("traceLocation");
    m_traceLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue ActSummary::Jsonize() const {
  JsonValue payload;

  if (m_workflowRunIdHasBeenSet) {
    payload.WithString("workflowRunId", m_workflowRunId);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_actIdHasBeenSet) {
    payload.WithString("actId", m_actId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ActStatusMapper::GetNameForActStatus(m_status));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endedAtHasBeenSet) {
    payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_traceLocationHasBeenSet) {
    payload.WithObject("traceLocation", m_traceLocation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
