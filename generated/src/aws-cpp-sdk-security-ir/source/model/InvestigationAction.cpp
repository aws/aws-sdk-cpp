/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/security-ir/model/InvestigationAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityIR {
namespace Model {

InvestigationAction::InvestigationAction(JsonView jsonValue) { *this = jsonValue; }

InvestigationAction& InvestigationAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("investigationId")) {
    m_investigationId = jsonValue.GetString("investigationId");
    m_investigationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actionType")) {
    m_actionType = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("actionType"));
    m_actionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdated")) {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");
    m_lastUpdatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("feedback")) {
    m_feedback = jsonValue.GetObject("feedback");
    m_feedbackHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationAction::Jsonize() const {
  JsonValue payload;

  if (m_investigationIdHasBeenSet) {
    payload.WithString("investigationId", m_investigationId);
  }

  if (m_actionTypeHasBeenSet) {
    payload.WithString("actionType", ActionTypeMapper::GetNameForActionType(m_actionType));
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("content", m_content);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ExecutionStatusMapper::GetNameForExecutionStatus(m_status));
  }

  if (m_lastUpdatedHasBeenSet) {
    payload.WithDouble("lastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if (m_feedbackHasBeenSet) {
    payload.WithObject("feedback", m_feedback.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
