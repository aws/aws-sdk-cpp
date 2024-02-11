/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/DescribeExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeExecutionResult::DescribeExecutionResult() : 
    m_status(ExecutionStatus::NOT_SET),
    m_redriveCount(0),
    m_redriveStatus(ExecutionRedriveStatus::NOT_SET)
{
}

DescribeExecutionResult::DescribeExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ExecutionStatus::NOT_SET),
    m_redriveCount(0),
    m_redriveStatus(ExecutionRedriveStatus::NOT_SET)
{
  *this = result;
}

DescribeExecutionResult& DescribeExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("executionArn"))
  {
    m_executionArn = jsonValue.GetString("executionArn");

  }

  if(jsonValue.ValueExists("stateMachineArn"))
  {
    m_stateMachineArn = jsonValue.GetString("stateMachineArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("startDate"))
  {
    m_startDate = jsonValue.GetDouble("startDate");

  }

  if(jsonValue.ValueExists("stopDate"))
  {
    m_stopDate = jsonValue.GetDouble("stopDate");

  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

  }

  if(jsonValue.ValueExists("inputDetails"))
  {
    m_inputDetails = jsonValue.GetObject("inputDetails");

  }

  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");

  }

  if(jsonValue.ValueExists("outputDetails"))
  {
    m_outputDetails = jsonValue.GetObject("outputDetails");

  }

  if(jsonValue.ValueExists("traceHeader"))
  {
    m_traceHeader = jsonValue.GetString("traceHeader");

  }

  if(jsonValue.ValueExists("mapRunArn"))
  {
    m_mapRunArn = jsonValue.GetString("mapRunArn");

  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = jsonValue.GetString("cause");

  }

  if(jsonValue.ValueExists("stateMachineVersionArn"))
  {
    m_stateMachineVersionArn = jsonValue.GetString("stateMachineVersionArn");

  }

  if(jsonValue.ValueExists("stateMachineAliasArn"))
  {
    m_stateMachineAliasArn = jsonValue.GetString("stateMachineAliasArn");

  }

  if(jsonValue.ValueExists("redriveCount"))
  {
    m_redriveCount = jsonValue.GetInteger("redriveCount");

  }

  if(jsonValue.ValueExists("redriveDate"))
  {
    m_redriveDate = jsonValue.GetDouble("redriveDate");

  }

  if(jsonValue.ValueExists("redriveStatus"))
  {
    m_redriveStatus = ExecutionRedriveStatusMapper::GetExecutionRedriveStatusForName(jsonValue.GetString("redriveStatus"));

  }

  if(jsonValue.ValueExists("redriveStatusReason"))
  {
    m_redriveStatusReason = jsonValue.GetString("redriveStatusReason");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
