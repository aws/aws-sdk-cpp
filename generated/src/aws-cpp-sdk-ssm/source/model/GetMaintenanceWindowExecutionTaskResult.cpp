/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMaintenanceWindowExecutionTaskResult::GetMaintenanceWindowExecutionTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMaintenanceWindowExecutionTaskResult& GetMaintenanceWindowExecutionTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WindowExecutionId"))
  {
    m_windowExecutionId = jsonValue.GetString("WindowExecutionId");
    m_windowExecutionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskExecutionId"))
  {
    m_taskExecutionId = jsonValue.GetString("TaskExecutionId");
    m_taskExecutionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");
    m_taskArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");
    m_serviceRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = MaintenanceWindowTaskTypeMapper::GetMaintenanceWindowTaskTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskParameters"))
  {
    Aws::Utils::Array<JsonView> taskParametersJsonList = jsonValue.GetArray("TaskParameters");
    for(unsigned taskParametersIndex = 0; taskParametersIndex < taskParametersJsonList.GetLength(); ++taskParametersIndex)
    {
      Aws::Map<Aws::String, JsonView> maintenanceWindowTaskParametersJsonMap = taskParametersJsonList[taskParametersIndex].GetAllObjects();
      Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression> maintenanceWindowTaskParametersMap;
      for(auto& maintenanceWindowTaskParametersItem : maintenanceWindowTaskParametersJsonMap)
      {
        maintenanceWindowTaskParametersMap[maintenanceWindowTaskParametersItem.first] = maintenanceWindowTaskParametersItem.second.AsObject();
      }
      m_taskParameters.push_back(std::move(maintenanceWindowTaskParametersMap));
    }
    m_taskParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");
    m_priorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetString("MaxConcurrency");
    m_maxConcurrencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxErrors"))
  {
    m_maxErrors = jsonValue.GetString("MaxErrors");
    m_maxErrorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = MaintenanceWindowExecutionStatusMapper::GetMaintenanceWindowExecutionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");
    m_statusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlarmConfiguration"))
  {
    m_alarmConfiguration = jsonValue.GetObject("AlarmConfiguration");
    m_alarmConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TriggeredAlarms"))
  {
    Aws::Utils::Array<JsonView> triggeredAlarmsJsonList = jsonValue.GetArray("TriggeredAlarms");
    for(unsigned triggeredAlarmsIndex = 0; triggeredAlarmsIndex < triggeredAlarmsJsonList.GetLength(); ++triggeredAlarmsIndex)
    {
      m_triggeredAlarms.push_back(triggeredAlarmsJsonList[triggeredAlarmsIndex].AsObject());
    }
    m_triggeredAlarmsHasBeenSet = true;
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
