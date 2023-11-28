/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/CreateKnowledgeBaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateKnowledgeBaseRequest::CreateKnowledgeBaseRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_knowledgeBaseType(KnowledgeBaseType::NOT_SET),
    m_knowledgeBaseTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_renderingConfigurationHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateKnowledgeBaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_knowledgeBaseTypeHasBeenSet)
  {
   payload.WithString("knowledgeBaseType", KnowledgeBaseTypeMapper::GetNameForKnowledgeBaseType(m_knowledgeBaseType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_renderingConfigurationHasBeenSet)
  {
   payload.WithObject("renderingConfiguration", m_renderingConfiguration.Jsonize());

  }

  if(m_serverSideEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("serverSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());

  }

  if(m_sourceConfigurationHasBeenSet)
  {
   payload.WithObject("sourceConfiguration", m_sourceConfiguration.Jsonize());

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




