/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/DescribeDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SnowDeviceManagement::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDeviceResult::DescribeDeviceResult() : 
    m_deviceState(UnlockState::NOT_SET)
{
}

DescribeDeviceResult::DescribeDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_deviceState(UnlockState::NOT_SET)
{
  *this = result;
}

DescribeDeviceResult& DescribeDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("associatedWithJob"))
  {
    m_associatedWithJob = jsonValue.GetString("associatedWithJob");

  }

  if(jsonValue.ValueExists("deviceCapacities"))
  {
    Aws::Utils::Array<JsonView> deviceCapacitiesJsonList = jsonValue.GetArray("deviceCapacities");
    for(unsigned deviceCapacitiesIndex = 0; deviceCapacitiesIndex < deviceCapacitiesJsonList.GetLength(); ++deviceCapacitiesIndex)
    {
      m_deviceCapacities.push_back(deviceCapacitiesJsonList[deviceCapacitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("deviceState"))
  {
    m_deviceState = UnlockStateMapper::GetUnlockStateForName(jsonValue.GetString("deviceState"));

  }

  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = jsonValue.GetString("deviceType");

  }

  if(jsonValue.ValueExists("lastReachedOutAt"))
  {
    m_lastReachedOutAt = jsonValue.GetDouble("lastReachedOutAt");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("managedDeviceArn"))
  {
    m_managedDeviceArn = jsonValue.GetString("managedDeviceArn");

  }

  if(jsonValue.ValueExists("managedDeviceId"))
  {
    m_managedDeviceId = jsonValue.GetString("managedDeviceId");

  }

  if(jsonValue.ValueExists("physicalNetworkInterfaces"))
  {
    Aws::Utils::Array<JsonView> physicalNetworkInterfacesJsonList = jsonValue.GetArray("physicalNetworkInterfaces");
    for(unsigned physicalNetworkInterfacesIndex = 0; physicalNetworkInterfacesIndex < physicalNetworkInterfacesJsonList.GetLength(); ++physicalNetworkInterfacesIndex)
    {
      m_physicalNetworkInterfaces.push_back(physicalNetworkInterfacesJsonList[physicalNetworkInterfacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("software"))
  {
    m_software = jsonValue.GetObject("software");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
