/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeGatewayInformationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGatewayInformationResult::DescribeGatewayInformationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGatewayInformationResult& DescribeGatewayInformationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");
    m_gatewayARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetString("GatewayId");
    m_gatewayIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GatewayName"))
  {
    m_gatewayName = jsonValue.GetString("GatewayName");
    m_gatewayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GatewayTimezone"))
  {
    m_gatewayTimezone = jsonValue.GetString("GatewayTimezone");
    m_gatewayTimezoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GatewayState"))
  {
    m_gatewayState = jsonValue.GetString("GatewayState");
    m_gatewayStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GatewayNetworkInterfaces"))
  {
    Aws::Utils::Array<JsonView> gatewayNetworkInterfacesJsonList = jsonValue.GetArray("GatewayNetworkInterfaces");
    for(unsigned gatewayNetworkInterfacesIndex = 0; gatewayNetworkInterfacesIndex < gatewayNetworkInterfacesJsonList.GetLength(); ++gatewayNetworkInterfacesIndex)
    {
      m_gatewayNetworkInterfaces.push_back(gatewayNetworkInterfacesJsonList[gatewayNetworkInterfacesIndex].AsObject());
    }
    m_gatewayNetworkInterfacesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GatewayType"))
  {
    m_gatewayType = jsonValue.GetString("GatewayType");
    m_gatewayTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextUpdateAvailabilityDate"))
  {
    m_nextUpdateAvailabilityDate = jsonValue.GetString("NextUpdateAvailabilityDate");
    m_nextUpdateAvailabilityDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastSoftwareUpdate"))
  {
    m_lastSoftwareUpdate = jsonValue.GetString("LastSoftwareUpdate");
    m_lastSoftwareUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2InstanceId"))
  {
    m_ec2InstanceId = jsonValue.GetString("Ec2InstanceId");
    m_ec2InstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2InstanceRegion"))
  {
    m_ec2InstanceRegion = jsonValue.GetString("Ec2InstanceRegion");
    m_ec2InstanceRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VPCEndpoint"))
  {
    m_vPCEndpoint = jsonValue.GetString("VPCEndpoint");
    m_vPCEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudWatchLogGroupARN"))
  {
    m_cloudWatchLogGroupARN = jsonValue.GetString("CloudWatchLogGroupARN");
    m_cloudWatchLogGroupARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HostEnvironment"))
  {
    m_hostEnvironment = HostEnvironmentMapper::GetHostEnvironmentForName(jsonValue.GetString("HostEnvironment"));
    m_hostEnvironmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = jsonValue.GetString("EndpointType");
    m_endpointTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SoftwareUpdatesEndDate"))
  {
    m_softwareUpdatesEndDate = jsonValue.GetString("SoftwareUpdatesEndDate");
    m_softwareUpdatesEndDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeprecationDate"))
  {
    m_deprecationDate = jsonValue.GetString("DeprecationDate");
    m_deprecationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GatewayCapacity"))
  {
    m_gatewayCapacity = GatewayCapacityMapper::GetGatewayCapacityForName(jsonValue.GetString("GatewayCapacity"));
    m_gatewayCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportedGatewayCapacities"))
  {
    Aws::Utils::Array<JsonView> supportedGatewayCapacitiesJsonList = jsonValue.GetArray("SupportedGatewayCapacities");
    for(unsigned supportedGatewayCapacitiesIndex = 0; supportedGatewayCapacitiesIndex < supportedGatewayCapacitiesJsonList.GetLength(); ++supportedGatewayCapacitiesIndex)
    {
      m_supportedGatewayCapacities.push_back(GatewayCapacityMapper::GetGatewayCapacityForName(supportedGatewayCapacitiesJsonList[supportedGatewayCapacitiesIndex].AsString()));
    }
    m_supportedGatewayCapacitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HostEnvironmentId"))
  {
    m_hostEnvironmentId = jsonValue.GetString("HostEnvironmentId");
    m_hostEnvironmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SoftwareVersion"))
  {
    m_softwareVersion = jsonValue.GetString("SoftwareVersion");
    m_softwareVersionHasBeenSet = true;
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
