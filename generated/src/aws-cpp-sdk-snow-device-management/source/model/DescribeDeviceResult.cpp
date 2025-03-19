/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/DescribeDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SnowDeviceManagement::Model;
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
  if(jsonValue.ValueExists("associatedWithJob"))
  {
    m_associatedWithJob = jsonValue.GetString("associatedWithJob");
    m_associatedWithJobHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceCapacities"))
  {
    Aws::Utils::Array<JsonView> deviceCapacitiesJsonList = jsonValue.GetArray("deviceCapacities");
    for(unsigned deviceCapacitiesIndex = 0; deviceCapacitiesIndex < deviceCapacitiesJsonList.GetLength(); ++deviceCapacitiesIndex)
    {
      m_deviceCapacities.push_back(deviceCapacitiesJsonList[deviceCapacitiesIndex].AsObject());
    }
    m_deviceCapacitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceState"))
  {
    m_deviceState = UnlockStateMapper::GetUnlockStateForName(jsonValue.GetString("deviceState"));
    m_deviceStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = jsonValue.GetString("deviceType");
    m_deviceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastReachedOutAt"))
  {
    m_lastReachedOutAt = jsonValue.GetDouble("lastReachedOutAt");
    m_lastReachedOutAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedDeviceArn"))
  {
    m_managedDeviceArn = jsonValue.GetString("managedDeviceArn");
    m_managedDeviceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedDeviceId"))
  {
    m_managedDeviceId = jsonValue.GetString("managedDeviceId");
    m_managedDeviceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("physicalNetworkInterfaces"))
  {
    Aws::Utils::Array<JsonView> physicalNetworkInterfacesJsonList = jsonValue.GetArray("physicalNetworkInterfaces");
    for(unsigned physicalNetworkInterfacesIndex = 0; physicalNetworkInterfacesIndex < physicalNetworkInterfacesJsonList.GetLength(); ++physicalNetworkInterfacesIndex)
    {
      m_physicalNetworkInterfaces.push_back(physicalNetworkInterfacesJsonList[physicalNetworkInterfacesIndex].AsObject());
    }
    m_physicalNetworkInterfacesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("software"))
  {
    m_software = jsonValue.GetObject("software");
    m_softwareHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
