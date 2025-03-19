/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetMaintenanceWindowTaskResult.h>
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

GetMaintenanceWindowTaskResult::GetMaintenanceWindowTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMaintenanceWindowTaskResult& GetMaintenanceWindowTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WindowId"))
  {
    m_windowId = jsonValue.GetString("WindowId");
    m_windowIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WindowTaskId"))
  {
    m_windowTaskId = jsonValue.GetString("WindowTaskId");
    m_windowTaskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");
    m_taskArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceRoleArn"))
  {
    m_serviceRoleArn = jsonValue.GetString("ServiceRoleArn");
    m_serviceRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskType"))
  {
    m_taskType = MaintenanceWindowTaskTypeMapper::GetMaintenanceWindowTaskTypeForName(jsonValue.GetString("TaskType"));
    m_taskTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskParameters"))
  {
    Aws::Map<Aws::String, JsonView> taskParametersJsonMap = jsonValue.GetObject("TaskParameters").GetAllObjects();
    for(auto& taskParametersItem : taskParametersJsonMap)
    {
      m_taskParameters[taskParametersItem.first] = taskParametersItem.second.AsObject();
    }
    m_taskParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TaskInvocationParameters"))
  {
    m_taskInvocationParameters = jsonValue.GetObject("TaskInvocationParameters");
    m_taskInvocationParametersHasBeenSet = true;
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
  if(jsonValue.ValueExists("LoggingInfo"))
  {
    m_loggingInfo = jsonValue.GetObject("LoggingInfo");
    m_loggingInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CutoffBehavior"))
  {
    m_cutoffBehavior = MaintenanceWindowTaskCutoffBehaviorMapper::GetMaintenanceWindowTaskCutoffBehaviorForName(jsonValue.GetString("CutoffBehavior"));
    m_cutoffBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlarmConfiguration"))
  {
    m_alarmConfiguration = jsonValue.GetObject("AlarmConfiguration");
    m_alarmConfigurationHasBeenSet = true;
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
