/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/StringAttributeBoostingConfiguration.h>
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

StringAttributeBoostingConfiguration::StringAttributeBoostingConfiguration() : 
    m_attributeValueBoostingHasBeenSet(false),
    m_boostingLevel(DocumentAttributeBoostingLevel::NOT_SET),
    m_boostingLevelHasBeenSet(false)
{
}

StringAttributeBoostingConfiguration::StringAttributeBoostingConfiguration(JsonView jsonValue) : 
    m_attributeValueBoostingHasBeenSet(false),
    m_boostingLevel(DocumentAttributeBoostingLevel::NOT_SET),
    m_boostingLevelHasBeenSet(false)
{
  *this = jsonValue;
}

StringAttributeBoostingConfiguration& StringAttributeBoostingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributeValueBoosting"))
  {
    Aws::Map<Aws::String, JsonView> attributeValueBoostingJsonMap = jsonValue.GetObject("attributeValueBoosting").GetAllObjects();
    for(auto& attributeValueBoostingItem : attributeValueBoostingJsonMap)
    {
      m_attributeValueBoosting[attributeValueBoostingItem.first] = StringAttributeValueBoostingLevelMapper::GetStringAttributeValueBoostingLevelForName(attributeValueBoostingItem.second.AsString());
    }
    m_attributeValueBoostingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("boostingLevel"))
  {
    m_boostingLevel = DocumentAttributeBoostingLevelMapper::GetDocumentAttributeBoostingLevelForName(jsonValue.GetString("boostingLevel"));

    m_boostingLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue StringAttributeBoostingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_attributeValueBoostingHasBeenSet)
  {
   JsonValue attributeValueBoostingJsonMap;
   for(auto& attributeValueBoostingItem : m_attributeValueBoosting)
   {
     attributeValueBoostingJsonMap.WithString(attributeValueBoostingItem.first, StringAttributeValueBoostingLevelMapper::GetNameForStringAttributeValueBoostingLevel(attributeValueBoostingItem.second));
   }
   payload.WithObject("attributeValueBoosting", std::move(attributeValueBoostingJsonMap));

  }

  if(m_boostingLevelHasBeenSet)
  {
   payload.WithString("boostingLevel", DocumentAttributeBoostingLevelMapper::GetNameForDocumentAttributeBoostingLevel(m_boostingLevel));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
