﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BatchDeleteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteResult::BatchDeleteResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteResult& BatchDeleteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("failed"))
  {
    Aws::Utils::Array<JsonView> failedJsonList = jsonValue.GetArray("failed");
    for(unsigned failedIndex = 0; failedIndex < failedJsonList.GetLength(); ++failedIndex)
    {
      m_failed.push_back(failedJsonList[failedIndex].AsObject());
    }
    m_failedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("successful"))
  {
    Aws::Utils::Array<JsonView> successfulJsonList = jsonValue.GetArray("successful");
    for(unsigned successfulIndex = 0; successfulIndex < successfulJsonList.GetLength(); ++successfulIndex)
    {
      m_successful.push_back(successfulJsonList[successfulIndex].AsObject());
    }
    m_successfulHasBeenSet = true;
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
