/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GetDeviceFleetReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeviceFleetReportResult::GetDeviceFleetReportResult()
{
}

GetDeviceFleetReportResult::GetDeviceFleetReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDeviceFleetReportResult& GetDeviceFleetReportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceFleetArn"))
  {
    m_deviceFleetArn = jsonValue.GetString("DeviceFleetArn");

  }

  if(jsonValue.ValueExists("DeviceFleetName"))
  {
    m_deviceFleetName = jsonValue.GetString("DeviceFleetName");

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ReportGenerated"))
  {
    m_reportGenerated = jsonValue.GetDouble("ReportGenerated");

  }

  if(jsonValue.ValueExists("DeviceStats"))
  {
    m_deviceStats = jsonValue.GetObject("DeviceStats");

  }

  if(jsonValue.ValueExists("AgentVersions"))
  {
    Aws::Utils::Array<JsonView> agentVersionsJsonList = jsonValue.GetArray("AgentVersions");
    for(unsigned agentVersionsIndex = 0; agentVersionsIndex < agentVersionsJsonList.GetLength(); ++agentVersionsIndex)
    {
      m_agentVersions.push_back(agentVersionsJsonList[agentVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ModelStats"))
  {
    Aws::Utils::Array<JsonView> modelStatsJsonList = jsonValue.GetArray("ModelStats");
    for(unsigned modelStatsIndex = 0; modelStatsIndex < modelStatsJsonList.GetLength(); ++modelStatsIndex)
    {
      m_modelStats.push_back(modelStatsJsonList[modelStatsIndex].AsObject());
    }
  }



  return *this;
}
