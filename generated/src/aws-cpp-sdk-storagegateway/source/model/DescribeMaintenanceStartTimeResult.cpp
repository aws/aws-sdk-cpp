/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeMaintenanceStartTimeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMaintenanceStartTimeResult::DescribeMaintenanceStartTimeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMaintenanceStartTimeResult& DescribeMaintenanceStartTimeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");
    m_gatewayARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HourOfDay"))
  {
    m_hourOfDay = jsonValue.GetInteger("HourOfDay");
    m_hourOfDayHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinuteOfHour"))
  {
    m_minuteOfHour = jsonValue.GetInteger("MinuteOfHour");
    m_minuteOfHourHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DayOfWeek"))
  {
    m_dayOfWeek = jsonValue.GetInteger("DayOfWeek");
    m_dayOfWeekHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetInteger("DayOfMonth");
    m_dayOfMonthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");
    m_timezoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SoftwareUpdatePreferences"))
  {
    m_softwareUpdatePreferences = jsonValue.GetObject("SoftwareUpdatePreferences");
    m_softwareUpdatePreferencesHasBeenSet = true;
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
