/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/SqliMatchStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

SqliMatchStatement::SqliMatchStatement() : 
    m_fieldToMatchHasBeenSet(false),
    m_textTransformationsHasBeenSet(false),
    m_sensitivityLevel(SensitivityLevel::NOT_SET),
    m_sensitivityLevelHasBeenSet(false)
{
}

SqliMatchStatement::SqliMatchStatement(JsonView jsonValue) : 
    m_fieldToMatchHasBeenSet(false),
    m_textTransformationsHasBeenSet(false),
    m_sensitivityLevel(SensitivityLevel::NOT_SET),
    m_sensitivityLevelHasBeenSet(false)
{
  *this = jsonValue;
}

SqliMatchStatement& SqliMatchStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldToMatch"))
  {
    m_fieldToMatch = jsonValue.GetObject("FieldToMatch");

    m_fieldToMatchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextTransformations"))
  {
    Aws::Utils::Array<JsonView> textTransformationsJsonList = jsonValue.GetArray("TextTransformations");
    for(unsigned textTransformationsIndex = 0; textTransformationsIndex < textTransformationsJsonList.GetLength(); ++textTransformationsIndex)
    {
      m_textTransformations.push_back(textTransformationsJsonList[textTransformationsIndex].AsObject());
    }
    m_textTransformationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SensitivityLevel"))
  {
    m_sensitivityLevel = SensitivityLevelMapper::GetSensitivityLevelForName(jsonValue.GetString("SensitivityLevel"));

    m_sensitivityLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue SqliMatchStatement::Jsonize() const
{
  JsonValue payload;

  if(m_fieldToMatchHasBeenSet)
  {
   payload.WithObject("FieldToMatch", m_fieldToMatch.Jsonize());

  }

  if(m_textTransformationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textTransformationsJsonList(m_textTransformations.size());
   for(unsigned textTransformationsIndex = 0; textTransformationsIndex < textTransformationsJsonList.GetLength(); ++textTransformationsIndex)
   {
     textTransformationsJsonList[textTransformationsIndex].AsObject(m_textTransformations[textTransformationsIndex].Jsonize());
   }
   payload.WithArray("TextTransformations", std::move(textTransformationsJsonList));

  }

  if(m_sensitivityLevelHasBeenSet)
  {
   payload.WithString("SensitivityLevel", SensitivityLevelMapper::GetNameForSensitivityLevel(m_sensitivityLevel));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
