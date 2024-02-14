/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/StringListAttributeBoostingConfiguration.h>
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

StringListAttributeBoostingConfiguration::StringListAttributeBoostingConfiguration() : 
    m_boostingLevel(DocumentAttributeBoostingLevel::NOT_SET),
    m_boostingLevelHasBeenSet(false)
{
}

StringListAttributeBoostingConfiguration::StringListAttributeBoostingConfiguration(JsonView jsonValue) : 
    m_boostingLevel(DocumentAttributeBoostingLevel::NOT_SET),
    m_boostingLevelHasBeenSet(false)
{
  *this = jsonValue;
}

StringListAttributeBoostingConfiguration& StringListAttributeBoostingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("boostingLevel"))
  {
    m_boostingLevel = DocumentAttributeBoostingLevelMapper::GetDocumentAttributeBoostingLevelForName(jsonValue.GetString("boostingLevel"));

    m_boostingLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue StringListAttributeBoostingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_boostingLevelHasBeenSet)
  {
   payload.WithString("boostingLevel", DocumentAttributeBoostingLevelMapper::GetNameForDocumentAttributeBoostingLevel(m_boostingLevel));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
