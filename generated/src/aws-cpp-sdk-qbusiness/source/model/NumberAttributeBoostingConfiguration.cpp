/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/NumberAttributeBoostingConfiguration.h>
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

NumberAttributeBoostingConfiguration::NumberAttributeBoostingConfiguration() : 
    m_boostingLevel(DocumentAttributeBoostingLevel::NOT_SET),
    m_boostingLevelHasBeenSet(false),
    m_boostingType(NumberAttributeBoostingType::NOT_SET),
    m_boostingTypeHasBeenSet(false)
{
}

NumberAttributeBoostingConfiguration::NumberAttributeBoostingConfiguration(JsonView jsonValue) : 
    m_boostingLevel(DocumentAttributeBoostingLevel::NOT_SET),
    m_boostingLevelHasBeenSet(false),
    m_boostingType(NumberAttributeBoostingType::NOT_SET),
    m_boostingTypeHasBeenSet(false)
{
  *this = jsonValue;
}

NumberAttributeBoostingConfiguration& NumberAttributeBoostingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("boostingLevel"))
  {
    m_boostingLevel = DocumentAttributeBoostingLevelMapper::GetDocumentAttributeBoostingLevelForName(jsonValue.GetString("boostingLevel"));

    m_boostingLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("boostingType"))
  {
    m_boostingType = NumberAttributeBoostingTypeMapper::GetNumberAttributeBoostingTypeForName(jsonValue.GetString("boostingType"));

    m_boostingTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue NumberAttributeBoostingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_boostingLevelHasBeenSet)
  {
   payload.WithString("boostingLevel", DocumentAttributeBoostingLevelMapper::GetNameForDocumentAttributeBoostingLevel(m_boostingLevel));
  }

  if(m_boostingTypeHasBeenSet)
  {
   payload.WithString("boostingType", NumberAttributeBoostingTypeMapper::GetNameForNumberAttributeBoostingType(m_boostingType));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
