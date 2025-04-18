﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ListAutomaticTapeCreationPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAutomaticTapeCreationPoliciesResult::ListAutomaticTapeCreationPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAutomaticTapeCreationPoliciesResult& ListAutomaticTapeCreationPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutomaticTapeCreationPolicyInfos"))
  {
    Aws::Utils::Array<JsonView> automaticTapeCreationPolicyInfosJsonList = jsonValue.GetArray("AutomaticTapeCreationPolicyInfos");
    for(unsigned automaticTapeCreationPolicyInfosIndex = 0; automaticTapeCreationPolicyInfosIndex < automaticTapeCreationPolicyInfosJsonList.GetLength(); ++automaticTapeCreationPolicyInfosIndex)
    {
      m_automaticTapeCreationPolicyInfos.push_back(automaticTapeCreationPolicyInfosJsonList[automaticTapeCreationPolicyInfosIndex].AsObject());
    }
    m_automaticTapeCreationPolicyInfosHasBeenSet = true;
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
