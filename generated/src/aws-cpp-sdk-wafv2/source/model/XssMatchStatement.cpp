/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/XssMatchStatement.h>
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

XssMatchStatement::XssMatchStatement() : 
    m_fieldToMatchHasBeenSet(false),
    m_textTransformationsHasBeenSet(false)
{
}

XssMatchStatement::XssMatchStatement(JsonView jsonValue) : 
    m_fieldToMatchHasBeenSet(false),
    m_textTransformationsHasBeenSet(false)
{
  *this = jsonValue;
}

XssMatchStatement& XssMatchStatement::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue XssMatchStatement::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
