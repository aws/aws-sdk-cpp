/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListNotificationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNotificationsResult::ListNotificationsResult()
{
}

ListNotificationsResult::ListNotificationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNotificationsResult& ListNotificationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NotificationSummaries"))
  {
    Aws::Utils::Array<JsonView> notificationSummariesJsonList = jsonValue.GetArray("NotificationSummaries");
    for(unsigned notificationSummariesIndex = 0; notificationSummariesIndex < notificationSummariesJsonList.GetLength(); ++notificationSummariesIndex)
    {
      m_notificationSummaries.push_back(notificationSummariesJsonList[notificationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
