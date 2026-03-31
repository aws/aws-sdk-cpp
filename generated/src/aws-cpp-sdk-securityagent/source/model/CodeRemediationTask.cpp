/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CodeRemediationTask.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

CodeRemediationTask::CodeRemediationTask(JsonView jsonValue) { *this = jsonValue; }

CodeRemediationTask& CodeRemediationTask::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = CodeRemediationTaskStatusMapper::GetCodeRemediationTaskStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskDetails")) {
    Aws::Utils::Array<JsonView> taskDetailsJsonList = jsonValue.GetArray("taskDetails");
    for (unsigned taskDetailsIndex = 0; taskDetailsIndex < taskDetailsJsonList.GetLength(); ++taskDetailsIndex) {
      m_taskDetails.push_back(taskDetailsJsonList[taskDetailsIndex].AsObject());
    }
    m_taskDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeRemediationTask::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", CodeRemediationTaskStatusMapper::GetNameForCodeRemediationTaskStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_taskDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> taskDetailsJsonList(m_taskDetails.size());
    for (unsigned taskDetailsIndex = 0; taskDetailsIndex < taskDetailsJsonList.GetLength(); ++taskDetailsIndex) {
      taskDetailsJsonList[taskDetailsIndex].AsObject(m_taskDetails[taskDetailsIndex].Jsonize());
    }
    payload.WithArray("taskDetails", std::move(taskDetailsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
