/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ListManagedNotificationConfigurationsResult.h>
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

ListManagedNotificationConfigurationsResult::ListManagedNotificationConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListManagedNotificationConfigurationsResult& ListManagedNotificationConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedNotificationConfigurations"))
  {
    Aws::Utils::Array<JsonView> managedNotificationConfigurationsJsonList = jsonValue.GetArray("managedNotificationConfigurations");
    for(unsigned managedNotificationConfigurationsIndex = 0; managedNotificationConfigurationsIndex < managedNotificationConfigurationsJsonList.GetLength(); ++managedNotificationConfigurationsIndex)
    {
      m_managedNotificationConfigurations.push_back(managedNotificationConfigurationsJsonList[managedNotificationConfigurationsIndex].AsObject());
    }
    m_managedNotificationConfigurationsHasBeenSet = true;
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
