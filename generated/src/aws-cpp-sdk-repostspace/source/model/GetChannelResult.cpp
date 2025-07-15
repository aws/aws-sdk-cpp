/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/GetChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::repostspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetChannelResult::GetChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetChannelResult& GetChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("spaceId"))
  {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");
    m_channelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");
    m_channelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelDescription"))
  {
    m_channelDescription = jsonValue.GetString("channelDescription");
    m_channelDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createDateTime"))
  {
    m_createDateTime = jsonValue.GetString("createDateTime");
    m_createDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteDateTime"))
  {
    m_deleteDateTime = jsonValue.GetString("deleteDateTime");
    m_deleteDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelRoles"))
  {
    Aws::Map<Aws::String, JsonView> channelRolesJsonMap = jsonValue.GetObject("channelRoles").GetAllObjects();
    for(auto& channelRolesItem : channelRolesJsonMap)
    {
      Aws::Utils::Array<JsonView> channelRoleListJsonList = channelRolesItem.second.AsArray();
      Aws::Vector<ChannelRole> channelRoleListList;
      channelRoleListList.reserve((size_t)channelRoleListJsonList.GetLength());
      for(unsigned channelRoleListIndex = 0; channelRoleListIndex < channelRoleListJsonList.GetLength(); ++channelRoleListIndex)
      {
        channelRoleListList.push_back(ChannelRoleMapper::GetChannelRoleForName(channelRoleListJsonList[channelRoleListIndex].AsString()));
      }
      m_channelRoles[channelRolesItem.first] = std::move(channelRoleListList);
    }
    m_channelRolesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelStatus"))
  {
    m_channelStatus = ChannelStatusMapper::GetChannelStatusForName(jsonValue.GetString("channelStatus"));
    m_channelStatusHasBeenSet = true;
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
