/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetDatalakeExceptionsSubscriptionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatalakeExceptionsSubscriptionResult::GetDatalakeExceptionsSubscriptionResult()
{
}

GetDatalakeExceptionsSubscriptionResult::GetDatalakeExceptionsSubscriptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDatalakeExceptionsSubscriptionResult& GetDatalakeExceptionsSubscriptionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("protocolAndNotificationEndpoint"))
  {
    m_protocolAndNotificationEndpoint = jsonValue.GetObject("protocolAndNotificationEndpoint");

  }



  return *this;
}
