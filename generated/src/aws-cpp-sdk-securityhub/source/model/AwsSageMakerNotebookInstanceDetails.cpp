/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSageMakerNotebookInstanceDetails.h>
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

AwsSageMakerNotebookInstanceDetails::AwsSageMakerNotebookInstanceDetails() : 
    m_acceleratorTypesHasBeenSet(false),
    m_additionalCodeRepositoriesHasBeenSet(false),
    m_defaultCodeRepositoryHasBeenSet(false),
    m_directInternetAccessHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_instanceMetadataServiceConfigurationHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_notebookInstanceArnHasBeenSet(false),
    m_notebookInstanceLifecycleConfigNameHasBeenSet(false),
    m_notebookInstanceNameHasBeenSet(false),
    m_notebookInstanceStatusHasBeenSet(false),
    m_platformIdentifierHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_rootAccessHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false)
{
}

AwsSageMakerNotebookInstanceDetails::AwsSageMakerNotebookInstanceDetails(JsonView jsonValue) : 
    m_acceleratorTypesHasBeenSet(false),
    m_additionalCodeRepositoriesHasBeenSet(false),
    m_defaultCodeRepositoryHasBeenSet(false),
    m_directInternetAccessHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_instanceMetadataServiceConfigurationHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_notebookInstanceArnHasBeenSet(false),
    m_notebookInstanceLifecycleConfigNameHasBeenSet(false),
    m_notebookInstanceNameHasBeenSet(false),
    m_notebookInstanceStatusHasBeenSet(false),
    m_platformIdentifierHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_rootAccessHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSageMakerNotebookInstanceDetails& AwsSageMakerNotebookInstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceleratorTypes"))
  {
    Aws::Utils::Array<JsonView> acceleratorTypesJsonList = jsonValue.GetArray("AcceleratorTypes");
    for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
    {
      m_acceleratorTypes.push_back(acceleratorTypesJsonList[acceleratorTypesIndex].AsString());
    }
    m_acceleratorTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalCodeRepositories"))
  {
    Aws::Utils::Array<JsonView> additionalCodeRepositoriesJsonList = jsonValue.GetArray("AdditionalCodeRepositories");
    for(unsigned additionalCodeRepositoriesIndex = 0; additionalCodeRepositoriesIndex < additionalCodeRepositoriesJsonList.GetLength(); ++additionalCodeRepositoriesIndex)
    {
      m_additionalCodeRepositories.push_back(additionalCodeRepositoriesJsonList[additionalCodeRepositoriesIndex].AsString());
    }
    m_additionalCodeRepositoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultCodeRepository"))
  {
    m_defaultCodeRepository = jsonValue.GetString("DefaultCodeRepository");

    m_defaultCodeRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectInternetAccess"))
  {
    m_directInternetAccess = jsonValue.GetString("DirectInternetAccess");

    m_directInternetAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceMetadataServiceConfiguration"))
  {
    m_instanceMetadataServiceConfiguration = jsonValue.GetObject("InstanceMetadataServiceConfiguration");

    m_instanceMetadataServiceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookInstanceArn"))
  {
    m_notebookInstanceArn = jsonValue.GetString("NotebookInstanceArn");

    m_notebookInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigName"))
  {
    m_notebookInstanceLifecycleConfigName = jsonValue.GetString("NotebookInstanceLifecycleConfigName");

    m_notebookInstanceLifecycleConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookInstanceName"))
  {
    m_notebookInstanceName = jsonValue.GetString("NotebookInstanceName");

    m_notebookInstanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotebookInstanceStatus"))
  {
    m_notebookInstanceStatus = jsonValue.GetString("NotebookInstanceStatus");

    m_notebookInstanceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformIdentifier"))
  {
    m_platformIdentifier = jsonValue.GetString("PlatformIdentifier");

    m_platformIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootAccess"))
  {
    m_rootAccess = jsonValue.GetString("RootAccess");

    m_rootAccessHasBeenSet = true;
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

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeSizeInGB"))
  {
    m_volumeSizeInGB = jsonValue.GetInteger("VolumeSizeInGB");

    m_volumeSizeInGBHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSageMakerNotebookInstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_acceleratorTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceleratorTypesJsonList(m_acceleratorTypes.size());
   for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
   {
     acceleratorTypesJsonList[acceleratorTypesIndex].AsString(m_acceleratorTypes[acceleratorTypesIndex]);
   }
   payload.WithArray("AcceleratorTypes", std::move(acceleratorTypesJsonList));

  }

  if(m_additionalCodeRepositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalCodeRepositoriesJsonList(m_additionalCodeRepositories.size());
   for(unsigned additionalCodeRepositoriesIndex = 0; additionalCodeRepositoriesIndex < additionalCodeRepositoriesJsonList.GetLength(); ++additionalCodeRepositoriesIndex)
   {
     additionalCodeRepositoriesJsonList[additionalCodeRepositoriesIndex].AsString(m_additionalCodeRepositories[additionalCodeRepositoriesIndex]);
   }
   payload.WithArray("AdditionalCodeRepositories", std::move(additionalCodeRepositoriesJsonList));

  }

  if(m_defaultCodeRepositoryHasBeenSet)
  {
   payload.WithString("DefaultCodeRepository", m_defaultCodeRepository);

  }

  if(m_directInternetAccessHasBeenSet)
  {
   payload.WithString("DirectInternetAccess", m_directInternetAccess);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_instanceMetadataServiceConfigurationHasBeenSet)
  {
   payload.WithObject("InstanceMetadataServiceConfiguration", m_instanceMetadataServiceConfiguration.Jsonize());

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceId", m_networkInterfaceId);

  }

  if(m_notebookInstanceArnHasBeenSet)
  {
   payload.WithString("NotebookInstanceArn", m_notebookInstanceArn);

  }

  if(m_notebookInstanceLifecycleConfigNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceLifecycleConfigName", m_notebookInstanceLifecycleConfigName);

  }

  if(m_notebookInstanceNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceName", m_notebookInstanceName);

  }

  if(m_notebookInstanceStatusHasBeenSet)
  {
   payload.WithString("NotebookInstanceStatus", m_notebookInstanceStatus);

  }

  if(m_platformIdentifierHasBeenSet)
  {
   payload.WithString("PlatformIdentifier", m_platformIdentifier);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_rootAccessHasBeenSet)
  {
   payload.WithString("RootAccess", m_rootAccess);

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

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
