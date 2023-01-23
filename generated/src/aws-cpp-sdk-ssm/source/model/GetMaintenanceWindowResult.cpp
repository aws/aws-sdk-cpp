/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetMaintenanceWindowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMaintenanceWindowResult::GetMaintenanceWindowResult() : 
    m_scheduleOffset(0),
    m_duration(0),
    m_cutoff(0),
    m_allowUnassociatedTargets(false),
    m_enabled(false)
{
}

GetMaintenanceWindowResult::GetMaintenanceWindowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_scheduleOffset(0),
    m_duration(0),
    m_cutoff(0),
    m_allowUnassociatedTargets(false),
    m_enabled(false)
{
  *this = result;
}

GetMaintenanceWindowResult& GetMaintenanceWindowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WindowId"))
  {
    m_windowId = jsonValue.GetString("WindowId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetString("StartDate");

  }

  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetString("EndDate");

  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetString("Schedule");

  }

  if(jsonValue.ValueExists("ScheduleTimezone"))
  {
    m_scheduleTimezone = jsonValue.GetString("ScheduleTimezone");

  }

  if(jsonValue.ValueExists("ScheduleOffset"))
  {
    m_scheduleOffset = jsonValue.GetInteger("ScheduleOffset");

  }

  if(jsonValue.ValueExists("NextExecutionTime"))
  {
    m_nextExecutionTime = jsonValue.GetString("NextExecutionTime");

  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInteger("Duration");

  }

  if(jsonValue.ValueExists("Cutoff"))
  {
    m_cutoff = jsonValue.GetInteger("Cutoff");

  }

  if(jsonValue.ValueExists("AllowUnassociatedTargets"))
  {
    m_allowUnassociatedTargets = jsonValue.GetBool("AllowUnassociatedTargets");

  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

  }

  if(jsonValue.ValueExists("ModifiedDate"))
  {
    m_modifiedDate = jsonValue.GetDouble("ModifiedDate");

  }



  return *this;
}
