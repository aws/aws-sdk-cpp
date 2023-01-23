/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkflowRequest::CreateWorkflowRequest() : 
    m_definitionUriHasBeenSet(false),
    m_definitionZipHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engine(WorkflowEngine::NOT_SET),
    m_engineHasBeenSet(false),
    m_mainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parameterTemplateHasBeenSet(false),
    m_requestId(Aws::Utils::UUID::RandomUUID()),
    m_requestIdHasBeenSet(true),
    m_storageCapacity(0),
    m_storageCapacityHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateWorkflowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_definitionUriHasBeenSet)
  {
   payload.WithString("definitionUri", m_definitionUri);

  }

  if(m_definitionZipHasBeenSet)
  {
   payload.WithString("definitionZip", HashingUtils::Base64Encode(m_definitionZip));
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

  return payload.View().WriteReadable();
}




