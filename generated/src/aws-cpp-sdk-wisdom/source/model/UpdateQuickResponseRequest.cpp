/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/UpdateQuickResponseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQuickResponseRequest::UpdateQuickResponseRequest() : 
    m_channelsHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupingConfigurationHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_quickResponseIdHasBeenSet(false),
    m_removeDescription(false),
    m_removeDescriptionHasBeenSet(false),
    m_removeGroupingConfiguration(false),
    m_removeGroupingConfigurationHasBeenSet(false),
    m_removeShortcutKey(false),
    m_removeShortcutKeyHasBeenSet(false),
    m_shortcutKeyHasBeenSet(false)
{
}

Aws::String UpdateQuickResponseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelsJsonList(m_channels.size());
   for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
   {
     channelsJsonList[channelsIndex].AsString(m_channels[channelsIndex]);
   }
   payload.WithArray("channels", std::move(channelsJsonList));

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_groupingConfigurationHasBeenSet)
  {
   payload.WithObject("groupingConfiguration", m_groupingConfiguration.Jsonize());

  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_removeDescriptionHasBeenSet)
  {
   payload.WithBool("removeDescription", m_removeDescription);

  }

  if(m_removeGroupingConfigurationHasBeenSet)
  {
   payload.WithBool("removeGroupingConfiguration", m_removeGroupingConfiguration);

  }

  if(m_removeShortcutKeyHasBeenSet)
  {
   payload.WithBool("removeShortcutKey", m_removeShortcutKey);

  }

  if(m_shortcutKeyHasBeenSet)
  {
   payload.WithString("shortcutKey", m_shortcutKey);

  }

  return payload.View().WriteReadable();
}




