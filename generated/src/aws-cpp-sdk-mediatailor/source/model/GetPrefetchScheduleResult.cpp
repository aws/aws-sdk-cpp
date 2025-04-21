/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/GetPrefetchScheduleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPrefetchScheduleResult::GetPrefetchScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPrefetchScheduleResult& GetPrefetchScheduleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Consumption"))
  {
    m_consumption = jsonValue.GetObject("Consumption");
    m_consumptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlaybackConfigurationName"))
  {
    m_playbackConfigurationName = jsonValue.GetString("PlaybackConfigurationName");
    m_playbackConfigurationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Retrieval"))
  {
    m_retrieval = jsonValue.GetObject("Retrieval");
    m_retrievalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduleType"))
  {
    m_scheduleType = PrefetchScheduleTypeMapper::GetPrefetchScheduleTypeForName(jsonValue.GetString("ScheduleType"));
    m_scheduleTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecurringPrefetchConfiguration"))
  {
    m_recurringPrefetchConfiguration = jsonValue.GetObject("RecurringPrefetchConfiguration");
    m_recurringPrefetchConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamId"))
  {
    m_streamId = jsonValue.GetString("StreamId");
    m_streamIdHasBeenSet = true;
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
