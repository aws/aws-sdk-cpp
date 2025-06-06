﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/AddressConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

AddressConfiguration::AddressConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AddressConfiguration& AddressConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BodyOverride"))
  {
    m_bodyOverride = jsonValue.GetString("BodyOverride");
    m_bodyOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelType"))
  {
    m_channelType = ChannelTypeMapper::GetChannelTypeForName(jsonValue.GetString("ChannelType"));
    m_channelTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Context"))
  {
    Aws::Map<Aws::String, JsonView> contextJsonMap = jsonValue.GetObject("Context").GetAllObjects();
    for(auto& contextItem : contextJsonMap)
    {
      m_context[contextItem.first] = contextItem.second.AsString();
    }
    m_contextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RawContent"))
  {
    m_rawContent = jsonValue.GetString("RawContent");
    m_rawContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Substitutions"))
  {
    Aws::Map<Aws::String, JsonView> substitutionsJsonMap = jsonValue.GetObject("Substitutions").GetAllObjects();
    for(auto& substitutionsItem : substitutionsJsonMap)
    {
      Aws::Utils::Array<JsonView> listOf__stringJsonList = substitutionsItem.second.AsArray();
      Aws::Vector<Aws::String> listOf__stringList;
      listOf__stringList.reserve((size_t)listOf__stringJsonList.GetLength());
      for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
      {
        listOf__stringList.push_back(listOf__stringJsonList[listOf__stringIndex].AsString());
      }
      m_substitutions[substitutionsItem.first] = std::move(listOf__stringList);
    }
    m_substitutionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TitleOverride"))
  {
    m_titleOverride = jsonValue.GetString("TitleOverride");
    m_titleOverrideHasBeenSet = true;
  }
  return *this;
}

JsonValue AddressConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bodyOverrideHasBeenSet)
  {
   payload.WithString("BodyOverride", m_bodyOverride);

  }

  if(m_channelTypeHasBeenSet)
  {
   payload.WithString("ChannelType", ChannelTypeMapper::GetNameForChannelType(m_channelType));
  }

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("Context", std::move(contextJsonMap));

  }

  if(m_rawContentHasBeenSet)
  {
   payload.WithString("RawContent", m_rawContent);

  }

  if(m_substitutionsHasBeenSet)
  {
   JsonValue substitutionsJsonMap;
   for(auto& substitutionsItem : m_substitutions)
   {
     Aws::Utils::Array<JsonValue> listOf__stringJsonList(substitutionsItem.second.size());
     for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
     {
       listOf__stringJsonList[listOf__stringIndex].AsString(substitutionsItem.second[listOf__stringIndex]);
     }
     substitutionsJsonMap.WithArray(substitutionsItem.first, std::move(listOf__stringJsonList));
   }
   payload.WithObject("Substitutions", std::move(substitutionsJsonMap));

  }

  if(m_titleOverrideHasBeenSet)
  {
   payload.WithString("TitleOverride", m_titleOverride);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
