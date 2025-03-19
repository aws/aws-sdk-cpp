/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListChannelPlacementGroupsSdkResult.h>
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

ListChannelPlacementGroupsSdkResult::ListChannelPlacementGroupsSdkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChannelPlacementGroupsSdkResult& ListChannelPlacementGroupsSdkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("channelPlacementGroups"))
  {
    Aws::Utils::Array<JsonView> channelPlacementGroupsJsonList = jsonValue.GetArray("channelPlacementGroups");
    for(unsigned channelPlacementGroupsIndex = 0; channelPlacementGroupsIndex < channelPlacementGroupsJsonList.GetLength(); ++channelPlacementGroupsIndex)
    {
      m_channelPlacementGroups.push_back(channelPlacementGroupsJsonList[channelPlacementGroupsIndex].AsObject());
    }
    m_channelPlacementGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
