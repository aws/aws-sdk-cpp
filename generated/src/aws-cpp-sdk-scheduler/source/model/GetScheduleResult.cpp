/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/GetScheduleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Scheduler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetScheduleResult::GetScheduleResult() : 
    m_state(ScheduleState::NOT_SET)
{
}

GetScheduleResult::GetScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(ScheduleState::NOT_SET)
{
  *this = result;
}

GetScheduleResult& GetScheduleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetDouble("EndDate");

  }

  if(jsonValue.ValueExists("FlexibleTimeWindow"))
  {
    m_flexibleTimeWindow = jsonValue.GetObject("FlexibleTimeWindow");

  }

  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

  }

  if(jsonValue.ValueExists("LastModificationDate"))
  {
    m_lastModificationDate = jsonValue.GetDouble("LastModificationDate");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

  }

  if(jsonValue.ValueExists("ScheduleExpressionTimezone"))
  {
    m_scheduleExpressionTimezone = jsonValue.GetString("ScheduleExpressionTimezone");

  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetDouble("StartDate");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ScheduleStateMapper::GetScheduleStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetObject("Target");

  }



  return *this;
}
