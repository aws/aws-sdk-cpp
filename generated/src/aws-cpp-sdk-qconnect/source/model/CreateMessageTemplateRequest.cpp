/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/CreateMessageTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMessageTemplateRequest::CreateMessageTemplateRequest() : 
    m_channelSubtype(ChannelSubtype::NOT_SET),
    m_channelSubtypeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_contentHasBeenSet(false),
    m_defaultAttributesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupingConfigurationHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateMessageTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelSubtypeHasBeenSet)
  {
   payload.WithString("channelSubtype", ChannelSubtypeMapper::GetNameForChannelSubtype(m_channelSubtype));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_defaultAttributesHasBeenSet)
  {
   payload.WithObject("defaultAttributes", m_defaultAttributes.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_groupingConfigurationHasBeenSet)
  {
   payload.WithObject("groupingConfiguration", m_groupingConfiguration.Jsonize());

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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




