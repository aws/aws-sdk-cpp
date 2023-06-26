/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime/model/InvokeEndpointAsyncResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMakerRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InvokeEndpointAsyncResult::InvokeEndpointAsyncResult()
{
}

InvokeEndpointAsyncResult::InvokeEndpointAsyncResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

InvokeEndpointAsyncResult& InvokeEndpointAsyncResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InferenceId"))
  {
    m_inferenceId = jsonValue.GetString("InferenceId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& outputLocationIter = headers.find("x-amzn-sagemaker-outputlocation");
  if(outputLocationIter != headers.end())
  {
    m_outputLocation = outputLocationIter->second;
  }

  const auto& failureLocationIter = headers.find("x-amzn-sagemaker-failurelocation");
  if(failureLocationIter != headers.end())
  {
    m_failureLocation = failureLocationIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
