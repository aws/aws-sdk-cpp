/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreateSubscriptionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSubscriptionResult::CreateSubscriptionResult()
{
}

CreateSubscriptionResult::CreateSubscriptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSubscriptionResult& CreateSubscriptionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("subscriptionId"))
  {
    m_subscriptionId = jsonValue.GetString("subscriptionId");

  }

  if(jsonValue.ValueExists("subscriptionArn"))
  {
    m_subscriptionArn = jsonValue.GetString("subscriptionArn");

  }

  if(jsonValue.ValueExists("currentSubscription"))
  {
    m_currentSubscription = jsonValue.GetObject("currentSubscription");

  }

  if(jsonValue.ValueExists("nextSubscription"))
  {
    m_nextSubscription = jsonValue.GetObject("nextSubscription");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
