/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2LaunchTemplateDataDetails::AwsEc2LaunchTemplateDataDetails() : 
    m_blockDeviceMappingSetHasBeenSet(false),
    m_capacityReservationSpecificationHasBeenSet(false),
    m_cpuOptionsHasBeenSet(false),
    m_creditSpecificationHasBeenSet(false),
    m_disableApiStop(false),
    m_disableApiStopHasBeenSet(false),
    m_disableApiTermination(false),
    m_disableApiTerminationHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_elasticGpuSpecificationSetHasBeenSet(false),
    m_elasticInferenceAcceleratorSetHasBeenSet(false),
    m_enclaveOptionsHasBeenSet(false),
    m_hibernationOptionsHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceInitiatedShutdownBehaviorHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_instanceRequirementsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_licenseSetHasBeenSet(false),
    m_maintenanceOptionsHasBeenSet(false),
    m_metadataOptionsHasBeenSet(false),
    m_monitoringHasBeenSet(false),
    m_networkInterfaceSetHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_privateDnsNameOptionsHasBeenSet(false),
    m_ramDiskIdHasBeenSet(false),
    m_securityGroupIdSetHasBeenSet(false),
    m_securityGroupSetHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataDetails::AwsEc2LaunchTemplateDataDetails(JsonView jsonValue) : 
    m_blockDeviceMappingSetHasBeenSet(false),
    m_capacityReservationSpecificationHasBeenSet(false),
    m_cpuOptionsHasBeenSet(false),
    m_creditSpecificationHasBeenSet(false),
    m_disableApiStop(false),
    m_disableApiStopHasBeenSet(false),
    m_disableApiTermination(false),
    m_disableApiTerminationHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_elasticGpuSpecificationSetHasBeenSet(false),
    m_elasticInferenceAcceleratorSetHasBeenSet(false),
    m_enclaveOptionsHasBeenSet(false),
    m_hibernationOptionsHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceInitiatedShutdownBehaviorHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_instanceRequirementsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_licenseSetHasBeenSet(false),
    m_maintenanceOptionsHasBeenSet(false),
    m_metadataOptionsHasBeenSet(false),
    m_monitoringHasBeenSet(false),
    m_networkInterfaceSetHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_privateDnsNameOptionsHasBeenSet(false),
    m_ramDiskIdHasBeenSet(false),
    m_securityGroupIdSetHasBeenSet(false),
    m_securityGroupSetHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataDetails& AwsEc2LaunchTemplateDataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockDeviceMappingSet"))
  {
    Aws::Utils::Array<JsonView> blockDeviceMappingSetJsonList = jsonValue.GetArray("BlockDeviceMappingSet");
    for(unsigned blockDeviceMappingSetIndex = 0; blockDeviceMappingSetIndex < blockDeviceMappingSetJsonList.GetLength(); ++blockDeviceMappingSetIndex)
    {
      m_blockDeviceMappingSet.push_back(blockDeviceMappingSetJsonList[blockDeviceMappingSetIndex].AsObject());
    }
    m_blockDeviceMappingSetHasBeenSet = true;
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

  if(jsonValue.ValueExists("DisableApiTermination"))
  {
    m_disableApiTermination = jsonValue.GetBool("DisableApiTermination");

    m_disableApiTerminationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsOptimized"))
  {
    m_ebsOptimized = jsonValue.GetBool("EbsOptimized");

    m_ebsOptimizedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticGpuSpecificationSet"))
  {
    Aws::Utils::Array<JsonView> elasticGpuSpecificationSetJsonList = jsonValue.GetArray("ElasticGpuSpecificationSet");
    for(unsigned elasticGpuSpecificationSetIndex = 0; elasticGpuSpecificationSetIndex < elasticGpuSpecificationSetJsonList.GetLength(); ++elasticGpuSpecificationSetIndex)
    {
      m_elasticGpuSpecificationSet.push_back(elasticGpuSpecificationSetJsonList[elasticGpuSpecificationSetIndex].AsObject());
    }
    m_elasticGpuSpecificationSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticInferenceAcceleratorSet"))
  {
    Aws::Utils::Array<JsonView> elasticInferenceAcceleratorSetJsonList = jsonValue.GetArray("ElasticInferenceAcceleratorSet");
    for(unsigned elasticInferenceAcceleratorSetIndex = 0; elasticInferenceAcceleratorSetIndex < elasticInferenceAcceleratorSetJsonList.GetLength(); ++elasticInferenceAcceleratorSetIndex)
    {
      m_elasticInferenceAcceleratorSet.push_back(elasticInferenceAcceleratorSetJsonList[elasticInferenceAcceleratorSetIndex].AsObject());
    }
    m_elasticInferenceAcceleratorSetHasBeenSet = true;
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

  if(jsonValue.ValueExists("InstanceInitiatedShutdownBehavior"))
  {
    m_instanceInitiatedShutdownBehavior = jsonValue.GetString("InstanceInitiatedShutdownBehavior");

    m_instanceInitiatedShutdownBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceMarketOptions"))
  {
    m_instanceMarketOptions = jsonValue.GetObject("InstanceMarketOptions");

    m_instanceMarketOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceRequirements"))
  {
    m_instanceRequirements = jsonValue.GetObject("InstanceRequirements");

    m_instanceRequirementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("LicenseSet"))
  {
    Aws::Utils::Array<JsonView> licenseSetJsonList = jsonValue.GetArray("LicenseSet");
    for(unsigned licenseSetIndex = 0; licenseSetIndex < licenseSetJsonList.GetLength(); ++licenseSetIndex)
    {
      m_licenseSet.push_back(licenseSetJsonList[licenseSetIndex].AsObject());
    }
    m_licenseSetHasBeenSet = true;
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

  if(jsonValue.ValueExists("NetworkInterfaceSet"))
  {
    Aws::Utils::Array<JsonView> networkInterfaceSetJsonList = jsonValue.GetArray("NetworkInterfaceSet");
    for(unsigned networkInterfaceSetIndex = 0; networkInterfaceSetIndex < networkInterfaceSetJsonList.GetLength(); ++networkInterfaceSetIndex)
    {
      m_networkInterfaceSet.push_back(networkInterfaceSetJsonList[networkInterfaceSetIndex].AsObject());
    }
    m_networkInterfaceSetHasBeenSet = true;
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

  if(jsonValue.ValueExists("RamDiskId"))
  {
    m_ramDiskId = jsonValue.GetString("RamDiskId");

    m_ramDiskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIdSet"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdSetJsonList = jsonValue.GetArray("SecurityGroupIdSet");
    for(unsigned securityGroupIdSetIndex = 0; securityGroupIdSetIndex < securityGroupIdSetJsonList.GetLength(); ++securityGroupIdSetIndex)
    {
      m_securityGroupIdSet.push_back(securityGroupIdSetJsonList[securityGroupIdSetIndex].AsString());
    }
    m_securityGroupIdSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupSet"))
  {
    Aws::Utils::Array<JsonView> securityGroupSetJsonList = jsonValue.GetArray("SecurityGroupSet");
    for(unsigned securityGroupSetIndex = 0; securityGroupSetIndex < securityGroupSetJsonList.GetLength(); ++securityGroupSetIndex)
    {
      m_securityGroupSet.push_back(securityGroupSetJsonList[securityGroupSetIndex].AsString());
    }
    m_securityGroupSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserData"))
  {
    m_userData = jsonValue.GetString("UserData");

    m_userDataHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_blockDeviceMappingSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockDeviceMappingSetJsonList(m_blockDeviceMappingSet.size());
   for(unsigned blockDeviceMappingSetIndex = 0; blockDeviceMappingSetIndex < blockDeviceMappingSetJsonList.GetLength(); ++blockDeviceMappingSetIndex)
   {
     blockDeviceMappingSetJsonList[blockDeviceMappingSetIndex].AsObject(m_blockDeviceMappingSet[blockDeviceMappingSetIndex].Jsonize());
   }
   payload.WithArray("BlockDeviceMappingSet", std::move(blockDeviceMappingSetJsonList));

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

  if(m_disableApiTerminationHasBeenSet)
  {
   payload.WithBool("DisableApiTermination", m_disableApiTermination);

  }

  if(m_ebsOptimizedHasBeenSet)
  {
   payload.WithBool("EbsOptimized", m_ebsOptimized);

  }

  if(m_elasticGpuSpecificationSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> elasticGpuSpecificationSetJsonList(m_elasticGpuSpecificationSet.size());
   for(unsigned elasticGpuSpecificationSetIndex = 0; elasticGpuSpecificationSetIndex < elasticGpuSpecificationSetJsonList.GetLength(); ++elasticGpuSpecificationSetIndex)
   {
     elasticGpuSpecificationSetJsonList[elasticGpuSpecificationSetIndex].AsObject(m_elasticGpuSpecificationSet[elasticGpuSpecificationSetIndex].Jsonize());
   }
   payload.WithArray("ElasticGpuSpecificationSet", std::move(elasticGpuSpecificationSetJsonList));

  }

  if(m_elasticInferenceAcceleratorSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> elasticInferenceAcceleratorSetJsonList(m_elasticInferenceAcceleratorSet.size());
   for(unsigned elasticInferenceAcceleratorSetIndex = 0; elasticInferenceAcceleratorSetIndex < elasticInferenceAcceleratorSetJsonList.GetLength(); ++elasticInferenceAcceleratorSetIndex)
   {
     elasticInferenceAcceleratorSetJsonList[elasticInferenceAcceleratorSetIndex].AsObject(m_elasticInferenceAcceleratorSet[elasticInferenceAcceleratorSetIndex].Jsonize());
   }
   payload.WithArray("ElasticInferenceAcceleratorSet", std::move(elasticInferenceAcceleratorSetJsonList));

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

  if(m_instanceInitiatedShutdownBehaviorHasBeenSet)
  {
   payload.WithString("InstanceInitiatedShutdownBehavior", m_instanceInitiatedShutdownBehavior);

  }

  if(m_instanceMarketOptionsHasBeenSet)
  {
   payload.WithObject("InstanceMarketOptions", m_instanceMarketOptions.Jsonize());

  }

  if(m_instanceRequirementsHasBeenSet)
  {
   payload.WithObject("InstanceRequirements", m_instanceRequirements.Jsonize());

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_kernelIdHasBeenSet)
  {
   payload.WithString("KernelId", m_kernelId);

  }

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("KeyName", m_keyName);

  }

  if(m_licenseSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseSetJsonList(m_licenseSet.size());
   for(unsigned licenseSetIndex = 0; licenseSetIndex < licenseSetJsonList.GetLength(); ++licenseSetIndex)
   {
     licenseSetJsonList[licenseSetIndex].AsObject(m_licenseSet[licenseSetIndex].Jsonize());
   }
   payload.WithArray("LicenseSet", std::move(licenseSetJsonList));

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

  if(m_networkInterfaceSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfaceSetJsonList(m_networkInterfaceSet.size());
   for(unsigned networkInterfaceSetIndex = 0; networkInterfaceSetIndex < networkInterfaceSetJsonList.GetLength(); ++networkInterfaceSetIndex)
   {
     networkInterfaceSetJsonList[networkInterfaceSetIndex].AsObject(m_networkInterfaceSet[networkInterfaceSetIndex].Jsonize());
   }
   payload.WithArray("NetworkInterfaceSet", std::move(networkInterfaceSetJsonList));

  }

  if(m_placementHasBeenSet)
  {
   payload.WithObject("Placement", m_placement.Jsonize());

  }

  if(m_privateDnsNameOptionsHasBeenSet)
  {
   payload.WithObject("PrivateDnsNameOptions", m_privateDnsNameOptions.Jsonize());

  }

  if(m_ramDiskIdHasBeenSet)
  {
   payload.WithString("RamDiskId", m_ramDiskId);

  }

  if(m_securityGroupIdSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdSetJsonList(m_securityGroupIdSet.size());
   for(unsigned securityGroupIdSetIndex = 0; securityGroupIdSetIndex < securityGroupIdSetJsonList.GetLength(); ++securityGroupIdSetIndex)
   {
     securityGroupIdSetJsonList[securityGroupIdSetIndex].AsString(m_securityGroupIdSet[securityGroupIdSetIndex]);
   }
   payload.WithArray("SecurityGroupIdSet", std::move(securityGroupIdSetJsonList));

  }

  if(m_securityGroupSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupSetJsonList(m_securityGroupSet.size());
   for(unsigned securityGroupSetIndex = 0; securityGroupSetIndex < securityGroupSetJsonList.GetLength(); ++securityGroupSetIndex)
   {
     securityGroupSetJsonList[securityGroupSetIndex].AsString(m_securityGroupSet[securityGroupSetIndex]);
   }
   payload.WithArray("SecurityGroupSet", std::move(securityGroupSetJsonList));

  }

  if(m_userDataHasBeenSet)
  {
   payload.WithString("UserData", m_userData);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
