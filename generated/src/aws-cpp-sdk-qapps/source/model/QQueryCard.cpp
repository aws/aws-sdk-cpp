/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/QQueryCard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

QQueryCard::QQueryCard(JsonView jsonValue)
{
  *this = jsonValue;
}

QQueryCard& QQueryCard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dependencies"))
  {
    Aws::Utils::Array<JsonView> dependenciesJsonList = jsonValue.GetArray("dependencies");
    for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
    {
      m_dependencies.push_back(dependenciesJsonList[dependenciesIndex].AsString());
    }
    m_dependenciesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = CardTypeMapper::GetCardTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("prompt"))
  {
    m_prompt = jsonValue.GetString("prompt");
    m_promptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputSource"))
  {
    m_outputSource = CardOutputSourceMapper::GetCardOutputSourceForName(jsonValue.GetString("outputSource"));
    m_outputSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attributeFilter"))
  {
    m_attributeFilter = jsonValue.GetObject("attributeFilter");
    m_attributeFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memoryReferences"))
  {
    Aws::Utils::Array<JsonView> memoryReferencesJsonList = jsonValue.GetArray("memoryReferences");
    for(unsigned memoryReferencesIndex = 0; memoryReferencesIndex < memoryReferencesJsonList.GetLength(); ++memoryReferencesIndex)
    {
      m_memoryReferences.push_back(memoryReferencesJsonList[memoryReferencesIndex].AsString());
    }
    m_memoryReferencesHasBeenSet = true;
  }
  return *this;
}

JsonValue QQueryCard::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_dependenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependenciesJsonList(m_dependencies.size());
   for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
   {
     dependenciesJsonList[dependenciesIndex].AsString(m_dependencies[dependenciesIndex]);
   }
   payload.WithArray("dependencies", std::move(dependenciesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CardTypeMapper::GetNameForCardType(m_type));
  }

  if(m_promptHasBeenSet)
  {
   payload.WithString("prompt", m_prompt);

  }

  if(m_outputSourceHasBeenSet)
  {
   payload.WithString("outputSource", CardOutputSourceMapper::GetNameForCardOutputSource(m_outputSource));
  }

  if(m_attributeFilterHasBeenSet)
  {
   payload.WithObject("attributeFilter", m_attributeFilter.Jsonize());

  }

  if(m_memoryReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memoryReferencesJsonList(m_memoryReferences.size());
   for(unsigned memoryReferencesIndex = 0; memoryReferencesIndex < memoryReferencesJsonList.GetLength(); ++memoryReferencesIndex)
   {
     memoryReferencesJsonList[memoryReferencesIndex].AsString(m_memoryReferences[memoryReferencesIndex]);
   }
   payload.WithArray("memoryReferences", std::move(memoryReferencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
