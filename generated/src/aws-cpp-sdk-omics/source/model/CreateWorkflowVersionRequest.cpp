/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateWorkflowVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWorkflowVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("versionName", m_versionName);

  }

  if(m_definitionZipHasBeenSet)
  {
   payload.WithString("definitionZip", HashingUtils::Base64Encode(m_definitionZip));
  }

  if(m_definitionUriHasBeenSet)
  {
   payload.WithString("definitionUri", m_definitionUri);

  }

  if(m_acceleratorsHasBeenSet)
  {
   payload.WithString("accelerators", AcceleratorsMapper::GetNameForAccelerators(m_accelerators));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("engine", WorkflowEngineMapper::GetNameForWorkflowEngine(m_engine));
  }

  if(m_mainHasBeenSet)
  {
   payload.WithString("main", m_main);

  }

  if(m_parameterTemplateHasBeenSet)
  {
   JsonValue parameterTemplateJsonMap;
   for(auto& parameterTemplateItem : m_parameterTemplate)
   {
     parameterTemplateJsonMap.WithObject(parameterTemplateItem.first, parameterTemplateItem.second.Jsonize());
   }
   payload.WithObject("parameterTemplate", std::move(parameterTemplateJsonMap));

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("storageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  if(m_storageCapacityHasBeenSet)
  {
   payload.WithInteger("storageCapacity", m_storageCapacity);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_workflowBucketOwnerIdHasBeenSet)
  {
   payload.WithString("workflowBucketOwnerId", m_workflowBucketOwnerId);

  }

  if(m_containerRegistryMapHasBeenSet)
  {
   payload.WithObject("containerRegistryMap", m_containerRegistryMap.Jsonize());

  }

  if(m_containerRegistryMapUriHasBeenSet)
  {
   payload.WithString("containerRegistryMapUri", m_containerRegistryMapUri);

  }

  if(m_readmeMarkdownHasBeenSet)
  {
   payload.WithString("readmeMarkdown", m_readmeMarkdown);

  }

  if(m_parameterTemplatePathHasBeenSet)
  {
   payload.WithString("parameterTemplatePath", m_parameterTemplatePath);

  }

  if(m_readmePathHasBeenSet)
  {
   payload.WithString("readmePath", m_readmePath);

  }

  if(m_definitionRepositoryHasBeenSet)
  {
   payload.WithObject("definitionRepository", m_definitionRepository.Jsonize());

  }

  if(m_readmeUriHasBeenSet)
  {
   payload.WithString("readmeUri", m_readmeUri);

  }

  return payload.View().WriteReadable();
}




