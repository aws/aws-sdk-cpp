/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

MessageTemplateAttributes::MessageTemplateAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageTemplateAttributes& MessageTemplateAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("systemAttributes"))
  {
    m_systemAttributes = jsonValue.GetObject("systemAttributes");
    m_systemAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentAttributes"))
  {
    m_agentAttributes = jsonValue.GetObject("agentAttributes");
    m_agentAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerProfileAttributes"))
  {
    m_customerProfileAttributes = jsonValue.GetObject("customerProfileAttributes");
    m_customerProfileAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customAttributes"))
  {
    Aws::Map<Aws::String, JsonView> customAttributesJsonMap = jsonValue.GetObject("customAttributes").GetAllObjects();
    for(auto& customAttributesItem : customAttributesJsonMap)
    {
      m_customAttributes[customAttributesItem.first] = customAttributesItem.second.AsString();
    }
    m_customAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageTemplateAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_systemAttributesHasBeenSet)
  {
   payload.WithObject("systemAttributes", m_systemAttributes.Jsonize());

  }

  if(m_agentAttributesHasBeenSet)
  {
   payload.WithObject("agentAttributes", m_agentAttributes.Jsonize());

  }

  if(m_customerProfileAttributesHasBeenSet)
  {
   payload.WithObject("customerProfileAttributes", m_customerProfileAttributes.Jsonize());

  }

  if(m_customAttributesHasBeenSet)
  {
   JsonValue customAttributesJsonMap;
   for(auto& customAttributesItem : m_customAttributes)
   {
     customAttributesJsonMap.WithString(customAttributesItem.first, customAttributesItem.second);
   }
   payload.WithObject("customAttributes", std::move(customAttributesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
