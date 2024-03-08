/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/BatchGetLifecyclePolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetLifecyclePolicyResult::BatchGetLifecyclePolicyResult()
{
}

BatchGetLifecyclePolicyResult::BatchGetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetLifecyclePolicyResult& BatchGetLifecyclePolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("lifecyclePolicyDetails"))
  {
    Aws::Utils::Array<JsonView> lifecyclePolicyDetailsJsonList = jsonValue.GetArray("lifecyclePolicyDetails");
    for(unsigned lifecyclePolicyDetailsIndex = 0; lifecyclePolicyDetailsIndex < lifecyclePolicyDetailsJsonList.GetLength(); ++lifecyclePolicyDetailsIndex)
    {
      m_lifecyclePolicyDetails.push_back(lifecyclePolicyDetailsJsonList[lifecyclePolicyDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("lifecyclePolicyErrorDetails"))
  {
    Aws::Utils::Array<JsonView> lifecyclePolicyErrorDetailsJsonList = jsonValue.GetArray("lifecyclePolicyErrorDetails");
    for(unsigned lifecyclePolicyErrorDetailsIndex = 0; lifecyclePolicyErrorDetailsIndex < lifecyclePolicyErrorDetailsJsonList.GetLength(); ++lifecyclePolicyErrorDetailsIndex)
    {
      m_lifecyclePolicyErrorDetails.push_back(lifecyclePolicyErrorDetailsJsonList[lifecyclePolicyErrorDetailsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
