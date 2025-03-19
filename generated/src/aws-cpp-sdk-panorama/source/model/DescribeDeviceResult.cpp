/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
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
  if(jsonValue.ValueExists("AlternateSoftwares"))
  {
    Aws::Utils::Array<JsonView> alternateSoftwaresJsonList = jsonValue.GetArray("AlternateSoftwares");
    for(unsigned alternateSoftwaresIndex = 0; alternateSoftwaresIndex < alternateSoftwaresJsonList.GetLength(); ++alternateSoftwaresIndex)
    {
      m_alternateSoftwares.push_back(alternateSoftwaresJsonList[alternateSoftwaresIndex].AsObject());
    }
    m_alternateSoftwaresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Brand"))
  {
    m_brand = DeviceBrandMapper::GetDeviceBrandForName(jsonValue.GetString("Brand"));
    m_brandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentNetworkingStatus"))
  {
    m_currentNetworkingStatus = jsonValue.GetObject("CurrentNetworkingStatus");
    m_currentNetworkingStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentSoftware"))
  {
    m_currentSoftware = jsonValue.GetString("CurrentSoftware");
    m_currentSoftwareHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceAggregatedStatus"))
  {
    m_deviceAggregatedStatus = DeviceAggregatedStatusMapper::GetDeviceAggregatedStatusForName(jsonValue.GetString("DeviceAggregatedStatus"));
    m_deviceAggregatedStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceConnectionStatus"))
  {
    m_deviceConnectionStatus = DeviceConnectionStatusMapper::GetDeviceConnectionStatusForName(jsonValue.GetString("DeviceConnectionStatus"));
    m_deviceConnectionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");
    m_deviceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestAlternateSoftware"))
  {
    m_latestAlternateSoftware = jsonValue.GetString("LatestAlternateSoftware");
    m_latestAlternateSoftwareHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestDeviceJob"))
  {
    m_latestDeviceJob = jsonValue.GetObject("LatestDeviceJob");
    m_latestDeviceJobHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LatestSoftware"))
  {
    m_latestSoftware = jsonValue.GetString("LatestSoftware");
    m_latestSoftwareHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LeaseExpirationTime"))
  {
    m_leaseExpirationTime = jsonValue.GetDouble("LeaseExpirationTime");
    m_leaseExpirationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkingConfiguration"))
  {
    m_networkingConfiguration = jsonValue.GetObject("NetworkingConfiguration");
    m_networkingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisioningStatus"))
  {
    m_provisioningStatus = DeviceStatusMapper::GetDeviceStatusForName(jsonValue.GetString("ProvisioningStatus"));
    m_provisioningStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SerialNumber"))
  {
    m_serialNumber = jsonValue.GetString("SerialNumber");
    m_serialNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = DeviceTypeMapper::GetDeviceTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
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
