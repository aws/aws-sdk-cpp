/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ListManagedNotificationChildEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListManagedNotificationChildEventsResult::ListManagedNotificationChildEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListManagedNotificationChildEventsResult& ListManagedNotificationChildEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedNotificationChildEvents"))
  {
    Aws::Utils::Array<JsonView> managedNotificationChildEventsJsonList = jsonValue.GetArray("managedNotificationChildEvents");
    for(unsigned managedNotificationChildEventsIndex = 0; managedNotificationChildEventsIndex < managedNotificationChildEventsJsonList.GetLength(); ++managedNotificationChildEventsIndex)
    {
      m_managedNotificationChildEvents.push_back(managedNotificationChildEventsJsonList[managedNotificationChildEventsIndex].AsObject());
    }
    m_managedNotificationChildEventsHasBeenSet = true;
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
