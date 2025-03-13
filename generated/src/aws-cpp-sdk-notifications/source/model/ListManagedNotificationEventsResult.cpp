/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ListManagedNotificationEventsResult.h>
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

ListManagedNotificationEventsResult::ListManagedNotificationEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListManagedNotificationEventsResult& ListManagedNotificationEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedNotificationEvents"))
  {
    Aws::Utils::Array<JsonView> managedNotificationEventsJsonList = jsonValue.GetArray("managedNotificationEvents");
    for(unsigned managedNotificationEventsIndex = 0; managedNotificationEventsIndex < managedNotificationEventsJsonList.GetLength(); ++managedNotificationEventsIndex)
    {
      m_managedNotificationEvents.push_back(managedNotificationEventsJsonList[managedNotificationEventsIndex].AsObject());
    }
    m_managedNotificationEventsHasBeenSet = true;
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
