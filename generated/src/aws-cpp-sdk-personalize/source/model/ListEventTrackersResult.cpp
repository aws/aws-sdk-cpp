/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ListEventTrackersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEventTrackersResult::ListEventTrackersResult()
{
}

ListEventTrackersResult::ListEventTrackersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEventTrackersResult& ListEventTrackersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eventTrackers"))
  {
    Aws::Utils::Array<JsonView> eventTrackersJsonList = jsonValue.GetArray("eventTrackers");
    for(unsigned eventTrackersIndex = 0; eventTrackersIndex < eventTrackersJsonList.GetLength(); ++eventTrackersIndex)
    {
      m_eventTrackers.push_back(eventTrackersJsonList[eventTrackersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
