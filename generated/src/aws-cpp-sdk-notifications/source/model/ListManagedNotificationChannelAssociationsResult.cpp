/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ListManagedNotificationChannelAssociationsResult.h>
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

ListManagedNotificationChannelAssociationsResult::ListManagedNotificationChannelAssociationsResult()
{
}

ListManagedNotificationChannelAssociationsResult::ListManagedNotificationChannelAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListManagedNotificationChannelAssociationsResult& ListManagedNotificationChannelAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("channelAssociations"))
  {
    Aws::Utils::Array<JsonView> channelAssociationsJsonList = jsonValue.GetArray("channelAssociations");
    for(unsigned channelAssociationsIndex = 0; channelAssociationsIndex < channelAssociationsJsonList.GetLength(); ++channelAssociationsIndex)
    {
      m_channelAssociations.push_back(channelAssociationsJsonList[channelAssociationsIndex].AsObject());
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
