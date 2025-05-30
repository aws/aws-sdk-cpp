﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetDataLakeExceptionSubscriptionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataLakeExceptionSubscriptionResult::GetDataLakeExceptionSubscriptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataLakeExceptionSubscriptionResult& GetDataLakeExceptionSubscriptionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("exceptionTimeToLive"))
  {
    m_exceptionTimeToLive = jsonValue.GetInt64("exceptionTimeToLive");
    m_exceptionTimeToLiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notificationEndpoint"))
  {
    m_notificationEndpoint = jsonValue.GetString("notificationEndpoint");
    m_notificationEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subscriptionProtocol"))
  {
    m_subscriptionProtocol = jsonValue.GetString("subscriptionProtocol");
    m_subscriptionProtocolHasBeenSet = true;
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
