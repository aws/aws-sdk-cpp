/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/TestStateResult.h>
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

TestStateResult::TestStateResult() : 
    m_status(TestExecutionStatus::NOT_SET)
{
}

TestStateResult::TestStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TestExecutionStatus::NOT_SET)
{
  *this = result;
}

TestStateResult& TestStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");

  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = jsonValue.GetString("cause");

  }

  if(jsonValue.ValueExists("inspectionData"))
  {
    m_inspectionData = jsonValue.GetObject("inspectionData");

  }

  if(jsonValue.ValueExists("nextState"))
  {
    m_nextState = jsonValue.GetString("nextState");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TestExecutionStatusMapper::GetTestExecutionStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
