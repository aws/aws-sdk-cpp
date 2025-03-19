/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListCloudWatchAlarmTemplateGroupsResult.h>
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

ListCloudWatchAlarmTemplateGroupsResult::ListCloudWatchAlarmTemplateGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCloudWatchAlarmTemplateGroupsResult& ListCloudWatchAlarmTemplateGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cloudWatchAlarmTemplateGroups"))
  {
    Aws::Utils::Array<JsonView> cloudWatchAlarmTemplateGroupsJsonList = jsonValue.GetArray("cloudWatchAlarmTemplateGroups");
    for(unsigned cloudWatchAlarmTemplateGroupsIndex = 0; cloudWatchAlarmTemplateGroupsIndex < cloudWatchAlarmTemplateGroupsJsonList.GetLength(); ++cloudWatchAlarmTemplateGroupsIndex)
    {
      m_cloudWatchAlarmTemplateGroups.push_back(cloudWatchAlarmTemplateGroupsJsonList[cloudWatchAlarmTemplateGroupsIndex].AsObject());
    }
    m_cloudWatchAlarmTemplateGroupsHasBeenSet = true;
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
