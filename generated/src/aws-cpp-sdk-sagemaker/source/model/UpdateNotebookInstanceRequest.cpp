/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateNotebookInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNotebookInstanceRequest::UpdateNotebookInstanceRequest() : 
    m_notebookInstanceNameHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_lifecycleConfigNameHasBeenSet(false),
    m_disassociateLifecycleConfig(false),
    m_disassociateLifecycleConfigHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_defaultCodeRepositoryHasBeenSet(false),
    m_additionalCodeRepositoriesHasBeenSet(false),
    m_acceleratorTypesHasBeenSet(false),
    m_disassociateAcceleratorTypes(false),
    m_disassociateAcceleratorTypesHasBeenSet(false),
    m_disassociateDefaultCodeRepository(false),
    m_disassociateDefaultCodeRepositoryHasBeenSet(false),
    m_disassociateAdditionalCodeRepositories(false),
    m_disassociateAdditionalCodeRepositoriesHasBeenSet(false),
    m_rootAccess(RootAccess::NOT_SET),
    m_rootAccessHasBeenSet(false),
    m_instanceMetadataServiceConfigurationHasBeenSet(false)
{
}

Aws::String UpdateNotebookInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notebookInstanceNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceName", m_notebookInstanceName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_lifecycleConfigNameHasBeenSet)
  {
   payload.WithString("LifecycleConfigName", m_lifecycleConfigName);

  }

  if(m_disassociateLifecycleConfigHasBeenSet)
  {
   payload.WithBool("DisassociateLifecycleConfig", m_disassociateLifecycleConfig);

  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);

  }

  if(m_defaultCodeRepositoryHasBeenSet)
  {
   payload.WithString("DefaultCodeRepository", m_defaultCodeRepository);

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

  if(m_acceleratorTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceleratorTypesJsonList(m_acceleratorTypes.size());
   for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
   {
     acceleratorTypesJsonList[acceleratorTypesIndex].AsString(NotebookInstanceAcceleratorTypeMapper::GetNameForNotebookInstanceAcceleratorType(m_acceleratorTypes[acceleratorTypesIndex]));
   }
   payload.WithArray("AcceleratorTypes", std::move(acceleratorTypesJsonList));

  }

  if(m_disassociateAcceleratorTypesHasBeenSet)
  {
   payload.WithBool("DisassociateAcceleratorTypes", m_disassociateAcceleratorTypes);

  }

  if(m_disassociateDefaultCodeRepositoryHasBeenSet)
  {
   payload.WithBool("DisassociateDefaultCodeRepository", m_disassociateDefaultCodeRepository);

  }

  if(m_disassociateAdditionalCodeRepositoriesHasBeenSet)
  {
   payload.WithBool("DisassociateAdditionalCodeRepositories", m_disassociateAdditionalCodeRepositories);

  }

  if(m_rootAccessHasBeenSet)
  {
   payload.WithString("RootAccess", RootAccessMapper::GetNameForRootAccess(m_rootAccess));
  }

  if(m_instanceMetadataServiceConfigurationHasBeenSet)
  {
   payload.WithObject("InstanceMetadataServiceConfiguration", m_instanceMetadataServiceConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNotebookInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateNotebookInstance"));
  return headers;

}




