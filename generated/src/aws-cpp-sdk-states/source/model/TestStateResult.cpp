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

TestStateResult::TestStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TestStateResult& TestStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");
    m_outputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cause"))
  {
    m_cause = jsonValue.GetString("cause");
    m_causeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inspectionData"))
  {
    m_inspectionData = jsonValue.GetObject("inspectionData");
    m_inspectionDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextState"))
  {
    m_nextState = jsonValue.GetString("nextState");
    m_nextStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TestExecutionStatusMapper::GetTestExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
