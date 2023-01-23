/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetMaintenanceWindowExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMaintenanceWindowExecutionResult::GetMaintenanceWindowExecutionResult() : 
    m_status(MaintenanceWindowExecutionStatus::NOT_SET)
{
}

GetMaintenanceWindowExecutionResult::GetMaintenanceWindowExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MaintenanceWindowExecutionStatus::NOT_SET)
{
  *this = result;
}

GetMaintenanceWindowExecutionResult& GetMaintenanceWindowExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WindowExecutionId"))
  {
    m_windowExecutionId = jsonValue.GetString("WindowExecutionId");

  }

  if(jsonValue.ValueExists("TaskIds"))
  {
    Aws::Utils::Array<JsonView> taskIdsJsonList = jsonValue.GetArray("TaskIds");
    for(unsigned taskIdsIndex = 0; taskIdsIndex < taskIdsJsonList.GetLength(); ++taskIdsIndex)
    {
      m_taskIds.push_back(taskIdsJsonList[taskIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MaintenanceWindowExecutionStatusMapper::GetMaintenanceWindowExecutionStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }



  return *this;
}
