/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetCommandInvocationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCommandInvocationResult::GetCommandInvocationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCommandInvocationResult& GetCommandInvocationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CommandId"))
  {
    m_commandId = jsonValue.GetString("CommandId");
    m_commandIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");
    m_instanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Comment"))
  {
    m_comment = jsonValue.GetString("Comment");
    m_commentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DocumentName"))
  {
    m_documentName = jsonValue.GetString("DocumentName");
    m_documentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");
    m_documentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PluginName"))
  {
    m_pluginName = jsonValue.GetString("PluginName");
    m_pluginNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResponseCode"))
  {
    m_responseCode = jsonValue.GetInteger("ResponseCode");
    m_responseCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionStartDateTime"))
  {
    m_executionStartDateTime = jsonValue.GetString("ExecutionStartDateTime");
    m_executionStartDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionElapsedTime"))
  {
    m_executionElapsedTime = jsonValue.GetString("ExecutionElapsedTime");
    m_executionElapsedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionEndDateTime"))
  {
    m_executionEndDateTime = jsonValue.GetString("ExecutionEndDateTime");
    m_executionEndDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = CommandInvocationStatusMapper::GetCommandInvocationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");
    m_statusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StandardOutputContent"))
  {
    m_standardOutputContent = jsonValue.GetString("StandardOutputContent");
    m_standardOutputContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StandardOutputUrl"))
  {
    m_standardOutputUrl = jsonValue.GetString("StandardOutputUrl");
    m_standardOutputUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StandardErrorContent"))
  {
    m_standardErrorContent = jsonValue.GetString("StandardErrorContent");
    m_standardErrorContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StandardErrorUrl"))
  {
    m_standardErrorUrl = jsonValue.GetString("StandardErrorUrl");
    m_standardErrorUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudWatchOutputConfig"))
  {
    m_cloudWatchOutputConfig = jsonValue.GetObject("CloudWatchOutputConfig");
    m_cloudWatchOutputConfigHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
