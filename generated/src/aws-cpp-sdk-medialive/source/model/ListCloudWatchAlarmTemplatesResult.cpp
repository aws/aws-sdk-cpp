/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListCloudWatchAlarmTemplatesResult.h>
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

ListCloudWatchAlarmTemplatesResult::ListCloudWatchAlarmTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCloudWatchAlarmTemplatesResult& ListCloudWatchAlarmTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cloudWatchAlarmTemplates"))
  {
    Aws::Utils::Array<JsonView> cloudWatchAlarmTemplatesJsonList = jsonValue.GetArray("cloudWatchAlarmTemplates");
    for(unsigned cloudWatchAlarmTemplatesIndex = 0; cloudWatchAlarmTemplatesIndex < cloudWatchAlarmTemplatesJsonList.GetLength(); ++cloudWatchAlarmTemplatesIndex)
    {
      m_cloudWatchAlarmTemplates.push_back(cloudWatchAlarmTemplatesJsonList[cloudWatchAlarmTemplatesIndex].AsObject());
    }
    m_cloudWatchAlarmTemplatesHasBeenSet = true;
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
