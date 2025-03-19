/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeDeviceResult.h>
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

DescribeDeviceResult::DescribeDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDeviceResult& DescribeDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceArn"))
  {
    m_deviceArn = jsonValue.GetString("DeviceArn");
    m_deviceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");
    m_deviceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceFleetName"))
  {
    m_deviceFleetName = jsonValue.GetString("DeviceFleetName");
    m_deviceFleetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IotThingName"))
  {
    m_iotThingName = jsonValue.GetString("IotThingName");
    m_iotThingNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegistrationTime"))
  {
    m_registrationTime = jsonValue.GetDouble("RegistrationTime");
    m_registrationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestHeartbeat"))
  {
    m_latestHeartbeat = jsonValue.GetDouble("LatestHeartbeat");
    m_latestHeartbeatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Models"))
  {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("Models");
    for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
    {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
    m_modelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxModels"))
  {
    m_maxModels = jsonValue.GetInteger("MaxModels");
    m_maxModelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentVersion"))
  {
    m_agentVersion = jsonValue.GetString("AgentVersion");
    m_agentVersionHasBeenSet = true;
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
