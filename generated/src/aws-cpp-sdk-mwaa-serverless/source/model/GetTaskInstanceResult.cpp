/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mwaa-serverless/model/GetTaskInstanceResult.h>

#include <utility>

using namespace Aws::MWAAServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTaskInstanceResult::GetTaskInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetTaskInstanceResult& GetTaskInstanceResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("WorkflowArn")) {
    m_workflowArn = jsonValue.GetString("WorkflowArn");
    m_workflowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunId")) {
    m_runId = jsonValue.GetString("RunId");
    m_runIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaskInstanceId")) {
    m_taskInstanceId = jsonValue.GetString("TaskInstanceId");
    m_taskInstanceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowVersion")) {
    m_workflowVersion = jsonValue.GetString("WorkflowVersion");
    m_workflowVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = TaskInstanceStatusMapper::GetTaskInstanceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DurationInSeconds")) {
    m_durationInSeconds = jsonValue.GetInteger("DurationInSeconds");
    m_durationInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OperatorName")) {
    m_operatorName = jsonValue.GetString("OperatorName");
    m_operatorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModifiedAt")) {
    m_modifiedAt = jsonValue.GetString("ModifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndedAt")) {
    m_endedAt = jsonValue.GetString("EndedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetString("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttemptNumber")) {
    m_attemptNumber = jsonValue.GetInteger("AttemptNumber");
    m_attemptNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaskId")) {
    m_taskId = jsonValue.GetString("TaskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogStream")) {
    m_logStream = jsonValue.GetString("LogStream");
    m_logStreamHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Xcom")) {
    Aws::Map<Aws::String, JsonView> xcomJsonMap = jsonValue.GetObject("Xcom").GetAllObjects();
    for (auto& xcomItem : xcomJsonMap) {
      m_xcom[xcomItem.first] = xcomItem.second.AsString();
    }
    m_xcomHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
