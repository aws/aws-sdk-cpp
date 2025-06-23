/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/ManagedInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

ManagedInstanceRequest::ManagedInstanceRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedInstanceRequest& ManagedInstanceRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockDeviceMappings"))
  {
    Aws::Utils::Array<JsonView> blockDeviceMappingsJsonList = jsonValue.GetArray("BlockDeviceMappings");
    for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
    {
      m_blockDeviceMappings.push_back(blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject());
    }
    m_blockDeviceMappingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityReservationSpecification"))
  {
    m_capacityReservationSpecification = jsonValue.GetObject("CapacityReservationSpecification");
    m_capacityReservationSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CpuOptions"))
  {
    m_cpuOptions = jsonValue.GetObject("CpuOptions");
    m_cpuOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreditSpecification"))
  {
    m_creditSpecification = jsonValue.GetObject("CreditSpecification");
    m_creditSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisableApiStop"))
  {
    m_disableApiStop = jsonValue.GetBool("DisableApiStop");
    m_disableApiStopHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EbsOptimized"))
  {
    m_ebsOptimized = jsonValue.GetBool("EbsOptimized");
    m_ebsOptimizedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnablePrimaryIpv6"))
  {
    m_enablePrimaryIpv6 = jsonValue.GetBool("EnablePrimaryIpv6");
    m_enablePrimaryIpv6HasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnclaveOptions"))
  {
    m_enclaveOptions = jsonValue.GetObject("EnclaveOptions");
    m_enclaveOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HibernationOptions"))
  {
    m_hibernationOptions = jsonValue.GetObject("HibernationOptions");
    m_hibernationOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IamInstanceProfile"))
  {
    m_iamInstanceProfile = jsonValue.GetObject("IamInstanceProfile");
    m_iamInstanceProfileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");
    m_imageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceMarketOptions"))
  {
    m_instanceMarketOptions = jsonValue.GetObject("InstanceMarketOptions");
    m_instanceMarketOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ipv6Addresses"))
  {
    Aws::Utils::Array<JsonView> ipv6AddressesJsonList = jsonValue.GetArray("Ipv6Addresses");
    for(unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex)
    {
      m_ipv6Addresses.push_back(ipv6AddressesJsonList[ipv6AddressesIndex].AsObject());
    }
    m_ipv6AddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ipv6AddressCount"))
  {
    m_ipv6AddressCount = jsonValue.GetInteger("Ipv6AddressCount");
    m_ipv6AddressCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KernelId"))
  {
    m_kernelId = jsonValue.GetString("KernelId");
    m_kernelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyName"))
  {
    m_keyName = jsonValue.GetString("KeyName");
    m_keyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LicenseSpecifications"))
  {
    Aws::Utils::Array<JsonView> licenseSpecificationsJsonList = jsonValue.GetArray("LicenseSpecifications");
    for(unsigned licenseSpecificationsIndex = 0; licenseSpecificationsIndex < licenseSpecificationsJsonList.GetLength(); ++licenseSpecificationsIndex)
    {
      m_licenseSpecifications.push_back(licenseSpecificationsJsonList[licenseSpecificationsIndex].AsObject());
    }
    m_licenseSpecificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaintenanceOptions"))
  {
    m_maintenanceOptions = jsonValue.GetObject("MaintenanceOptions");
    m_maintenanceOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetadataOptions"))
  {
    m_metadataOptions = jsonValue.GetObject("MetadataOptions");
    m_metadataOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Monitoring"))
  {
    m_monitoring = jsonValue.GetObject("Monitoring");
    m_monitoringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("NetworkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkPerformanceOptions"))
  {
    m_networkPerformanceOptions = jsonValue.GetObject("NetworkPerformanceOptions");
    m_networkPerformanceOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Placement"))
  {
    m_placement = jsonValue.GetObject("Placement");
    m_placementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrivateDnsNameOptions"))
  {
    m_privateDnsNameOptions = jsonValue.GetObject("PrivateDnsNameOptions");
    m_privateDnsNameOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrivateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("PrivateIpAddress");
    m_privateIpAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RamdiskId"))
  {
    m_ramdiskId = jsonValue.GetString("RamdiskId");
    m_ramdiskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");
    m_subnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TagSpecifications"))
  {
    Aws::Utils::Array<JsonView> tagSpecificationsJsonList = jsonValue.GetArray("TagSpecifications");
    for(unsigned tagSpecificationsIndex = 0; tagSpecificationsIndex < tagSpecificationsJsonList.GetLength(); ++tagSpecificationsIndex)
    {
      m_tagSpecifications.push_back(tagSpecificationsJsonList[tagSpecificationsIndex].AsObject());
    }
    m_tagSpecificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserData"))
  {
    m_userData = jsonValue.GetString("UserData");
    m_userDataHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedInstanceRequest::Jsonize() const
{
  JsonValue payload;

  if(m_blockDeviceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockDeviceMappingsJsonList(m_blockDeviceMappings.size());
   for(unsigned blockDeviceMappingsIndex = 0; blockDeviceMappingsIndex < blockDeviceMappingsJsonList.GetLength(); ++blockDeviceMappingsIndex)
   {
     blockDeviceMappingsJsonList[blockDeviceMappingsIndex].AsObject(m_blockDeviceMappings[blockDeviceMappingsIndex].Jsonize());
   }
   payload.WithArray("BlockDeviceMappings", std::move(blockDeviceMappingsJsonList));

  }

  if(m_capacityReservationSpecificationHasBeenSet)
  {
   payload.WithObject("CapacityReservationSpecification", m_capacityReservationSpecification.Jsonize());

  }

  if(m_cpuOptionsHasBeenSet)
  {
   payload.WithObject("CpuOptions", m_cpuOptions.Jsonize());

  }

  if(m_creditSpecificationHasBeenSet)
  {
   payload.WithObject("CreditSpecification", m_creditSpecification.Jsonize());

  }

  if(m_disableApiStopHasBeenSet)
  {
   payload.WithBool("DisableApiStop", m_disableApiStop);

  }

  if(m_ebsOptimizedHasBeenSet)
  {
   payload.WithBool("EbsOptimized", m_ebsOptimized);

  }

  if(m_enablePrimaryIpv6HasBeenSet)
  {
   payload.WithBool("EnablePrimaryIpv6", m_enablePrimaryIpv6);

  }

  if(m_enclaveOptionsHasBeenSet)
  {
   payload.WithObject("EnclaveOptions", m_enclaveOptions.Jsonize());

  }

  if(m_hibernationOptionsHasBeenSet)
  {
   payload.WithObject("HibernationOptions", m_hibernationOptions.Jsonize());

  }

  if(m_iamInstanceProfileHasBeenSet)
  {
   payload.WithObject("IamInstanceProfile", m_iamInstanceProfile.Jsonize());

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_instanceMarketOptionsHasBeenSet)
  {
   payload.WithObject("InstanceMarketOptions", m_instanceMarketOptions.Jsonize());

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_ipv6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv6AddressesJsonList(m_ipv6Addresses.size());
   for(unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex)
   {
     ipv6AddressesJsonList[ipv6AddressesIndex].AsObject(m_ipv6Addresses[ipv6AddressesIndex].Jsonize());
   }
   payload.WithArray("Ipv6Addresses", std::move(ipv6AddressesJsonList));

  }

  if(m_ipv6AddressCountHasBeenSet)
  {
   payload.WithInteger("Ipv6AddressCount", m_ipv6AddressCount);

  }

  if(m_kernelIdHasBeenSet)
  {
   payload.WithString("KernelId", m_kernelId);

  }

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("KeyName", m_keyName);

  }

  if(m_licenseSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseSpecificationsJsonList(m_licenseSpecifications.size());
   for(unsigned licenseSpecificationsIndex = 0; licenseSpecificationsIndex < licenseSpecificationsJsonList.GetLength(); ++licenseSpecificationsIndex)
   {
     licenseSpecificationsJsonList[licenseSpecificationsIndex].AsObject(m_licenseSpecifications[licenseSpecificationsIndex].Jsonize());
   }
   payload.WithArray("LicenseSpecifications", std::move(licenseSpecificationsJsonList));

  }

  if(m_maintenanceOptionsHasBeenSet)
  {
   payload.WithObject("MaintenanceOptions", m_maintenanceOptions.Jsonize());

  }

  if(m_metadataOptionsHasBeenSet)
  {
   payload.WithObject("MetadataOptions", m_metadataOptions.Jsonize());

  }

  if(m_monitoringHasBeenSet)
  {
   payload.WithObject("Monitoring", m_monitoring.Jsonize());

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("NetworkInterfaces", std::move(networkInterfacesJsonList));

  }

  if(m_networkPerformanceOptionsHasBeenSet)
  {
   payload.WithObject("NetworkPerformanceOptions", m_networkPerformanceOptions.Jsonize());

  }

  if(m_placementHasBeenSet)
  {
   payload.WithObject("Placement", m_placement.Jsonize());

  }

  if(m_privateDnsNameOptionsHasBeenSet)
  {
   payload.WithObject("PrivateDnsNameOptions", m_privateDnsNameOptions.Jsonize());

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("PrivateIpAddress", m_privateIpAddress);

  }

  if(m_ramdiskIdHasBeenSet)
  {
   payload.WithString("RamdiskId", m_ramdiskId);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_tagSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagSpecificationsJsonList(m_tagSpecifications.size());
   for(unsigned tagSpecificationsIndex = 0; tagSpecificationsIndex < tagSpecificationsJsonList.GetLength(); ++tagSpecificationsIndex)
   {
     tagSpecificationsJsonList[tagSpecificationsIndex].AsObject(m_tagSpecifications[tagSpecificationsIndex].Jsonize());
   }
   payload.WithArray("TagSpecifications", std::move(tagSpecificationsJsonList));

  }

  if(m_userDataHasBeenSet)
  {
   payload.WithString("UserData", m_userData);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
