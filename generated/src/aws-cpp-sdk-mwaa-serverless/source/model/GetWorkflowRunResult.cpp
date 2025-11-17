/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mwaa-serverless/model/GetWorkflowRunResult.h>

#include <utility>

using namespace Aws::MWAAServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowRunResult::GetWorkflowRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetWorkflowRunResult& GetWorkflowRunResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("WorkflowArn")) {
    m_workflowArn = jsonValue.GetString("WorkflowArn");
    m_workflowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowVersion")) {
    m_workflowVersion = jsonValue.GetString("WorkflowVersion");
    m_workflowVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunId")) {
    m_runId = jsonValue.GetString("RunId");
    m_runIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunType")) {
    m_runType = RunTypeMapper::GetRunTypeForName(jsonValue.GetString("RunType"));
    m_runTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OverrideParameters")) {
    Aws::Map<Aws::String, JsonView> overrideParametersJsonMap = jsonValue.GetObject("OverrideParameters").GetAllObjects();
    for (auto& overrideParametersItem : overrideParametersJsonMap) {
      m_overrideParameters[overrideParametersItem.first] = overrideParametersItem.second.AsObject();
    }
    m_overrideParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunDetail")) {
    m_runDetail = jsonValue.GetObject("RunDetail");
    m_runDetailHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
