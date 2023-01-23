/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeMaintenanceStartTimeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMaintenanceStartTimeResult::DescribeMaintenanceStartTimeResult() : 
    m_hourOfDay(0),
    m_minuteOfHour(0),
    m_dayOfWeek(0),
    m_dayOfMonth(0)
{
}

DescribeMaintenanceStartTimeResult::DescribeMaintenanceStartTimeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hourOfDay(0),
    m_minuteOfHour(0),
    m_dayOfWeek(0),
    m_dayOfMonth(0)
{
  *this = result;
}

DescribeMaintenanceStartTimeResult& DescribeMaintenanceStartTimeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("HourOfDay"))
  {
    m_hourOfDay = jsonValue.GetInteger("HourOfDay");

  }

  if(jsonValue.ValueExists("MinuteOfHour"))
  {
    m_minuteOfHour = jsonValue.GetInteger("MinuteOfHour");

  }

  if(jsonValue.ValueExists("DayOfWeek"))
  {
    m_dayOfWeek = jsonValue.GetInteger("DayOfWeek");

  }

  if(jsonValue.ValueExists("DayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetInteger("DayOfMonth");

  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

  }



  return *this;
}
