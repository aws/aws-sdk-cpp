/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ActionReviewEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ActionReviewEvent::ActionReviewEvent() : 
    m_conversationIdHasBeenSet(false),
    m_userMessageIdHasBeenSet(false),
    m_systemMessageIdHasBeenSet(false),
    m_pluginIdHasBeenSet(false),
    m_pluginType(PluginType::NOT_SET),
    m_pluginTypeHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_payloadFieldNameSeparatorHasBeenSet(false)
{
}

ActionReviewEvent::ActionReviewEvent(JsonView jsonValue) : 
    m_conversationIdHasBeenSet(false),
    m_userMessageIdHasBeenSet(false),
    m_systemMessageIdHasBeenSet(false),
    m_pluginIdHasBeenSet(false),
    m_pluginType(PluginType::NOT_SET),
    m_pluginTypeHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_payloadFieldNameSeparatorHasBeenSet(false)
{
  *this = jsonValue;
}

ActionReviewEvent& ActionReviewEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conversationId"))
  {
    m_conversationId = jsonValue.GetString("conversationId");

    m_conversationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userMessageId"))
  {
    m_userMessageId = jsonValue.GetString("userMessageId");

    m_userMessageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemMessageId"))
  {
    m_systemMessageId = jsonValue.GetString("systemMessageId");

    m_systemMessageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");

    m_pluginIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pluginType"))
  {
    m_pluginType = PluginTypeMapper::GetPluginTypeForName(jsonValue.GetString("pluginType"));

    m_pluginTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    Aws::Map<Aws::String, JsonView> payloadJsonMap = jsonValue.GetObject("payload").GetAllObjects();
    for(auto& payloadItem : payloadJsonMap)
    {
      m_payload[payloadItem.first] = payloadItem.second.AsObject();
    }
    m_payloadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payloadFieldNameSeparator"))
  {
    m_payloadFieldNameSeparator = jsonValue.GetString("payloadFieldNameSeparator");

    m_payloadFieldNameSeparatorHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionReviewEvent::Jsonize() const
{
  JsonValue payload;

  if(m_conversationIdHasBeenSet)
  {
   payload.WithString("conversationId", m_conversationId);

  }

  if(m_userMessageIdHasBeenSet)
  {
   payload.WithString("userMessageId", m_userMessageId);

  }

  if(m_systemMessageIdHasBeenSet)
  {
   payload.WithString("systemMessageId", m_systemMessageId);

  }

  if(m_pluginIdHasBeenSet)
  {
   payload.WithString("pluginId", m_pluginId);

  }

  if(m_pluginTypeHasBeenSet)
  {
   payload.WithString("pluginType", PluginTypeMapper::GetNameForPluginType(m_pluginType));
  }

  if(m_payloadHasBeenSet)
  {
   JsonValue payloadJsonMap;
   for(auto& payloadItem : m_payload)
   {
     payloadJsonMap.WithObject(payloadItem.first, payloadItem.second.Jsonize());
   }
   payload.WithObject("payload", std::move(payloadJsonMap));

  }

  if(m_payloadFieldNameSeparatorHasBeenSet)
  {
   payload.WithString("payloadFieldNameSeparator", m_payloadFieldNameSeparator);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
