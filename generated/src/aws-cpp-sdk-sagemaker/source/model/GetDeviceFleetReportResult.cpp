/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GetDeviceFleetReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_deviceFleetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceFleetName"))
  {
    m_deviceFleetName = jsonValue.GetString("DeviceFleetName");
    m_deviceFleetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReportGenerated"))
  {
    m_reportGenerated = jsonValue.GetDouble("ReportGenerated");
    m_reportGeneratedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceStats"))
  {
    m_deviceStats = jsonValue.GetObject("DeviceStats");
    m_deviceStatsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentVersions"))
  {
    Aws::Utils::Array<JsonView> agentVersionsJsonList = jsonValue.GetArray("AgentVersions");
    for(unsigned agentVersionsIndex = 0; agentVersionsIndex < agentVersionsJsonList.GetLength(); ++agentVersionsIndex)
    {
      m_agentVersions.push_back(agentVersionsJsonList[agentVersionsIndex].AsObject());
    }
    m_agentVersionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelStats"))
  {
    Aws::Utils::Array<JsonView> modelStatsJsonList = jsonValue.GetArray("ModelStats");
    for(unsigned modelStatsIndex = 0; modelStatsIndex < modelStatsJsonList.GetLength(); ++modelStatsIndex)
    {
      m_modelStats.push_back(modelStatsJsonList[modelStatsIndex].AsObject());
    }
    m_modelStatsHasBeenSet = true;
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
