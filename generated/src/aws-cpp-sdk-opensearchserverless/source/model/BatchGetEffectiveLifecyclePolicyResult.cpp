/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/BatchGetEffectiveLifecyclePolicyResult.h>
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

BatchGetEffectiveLifecyclePolicyResult::BatchGetEffectiveLifecyclePolicyResult()
{
}

BatchGetEffectiveLifecyclePolicyResult::BatchGetEffectiveLifecyclePolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetEffectiveLifecyclePolicyResult& BatchGetEffectiveLifecyclePolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("effectiveLifecyclePolicyDetails"))
  {
    Aws::Utils::Array<JsonView> effectiveLifecyclePolicyDetailsJsonList = jsonValue.GetArray("effectiveLifecyclePolicyDetails");
    for(unsigned effectiveLifecyclePolicyDetailsIndex = 0; effectiveLifecyclePolicyDetailsIndex < effectiveLifecyclePolicyDetailsJsonList.GetLength(); ++effectiveLifecyclePolicyDetailsIndex)
    {
      m_effectiveLifecyclePolicyDetails.push_back(effectiveLifecyclePolicyDetailsJsonList[effectiveLifecyclePolicyDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("effectiveLifecyclePolicyErrorDetails"))
  {
    Aws::Utils::Array<JsonView> effectiveLifecyclePolicyErrorDetailsJsonList = jsonValue.GetArray("effectiveLifecyclePolicyErrorDetails");
    for(unsigned effectiveLifecyclePolicyErrorDetailsIndex = 0; effectiveLifecyclePolicyErrorDetailsIndex < effectiveLifecyclePolicyErrorDetailsJsonList.GetLength(); ++effectiveLifecyclePolicyErrorDetailsIndex)
    {
      m_effectiveLifecyclePolicyErrorDetails.push_back(effectiveLifecyclePolicyErrorDetailsJsonList[effectiveLifecyclePolicyErrorDetailsIndex].AsObject());
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
