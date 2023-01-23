/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/LineItemFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

LineItemFields::LineItemFields() : 
    m_lineItemExpenseFieldsHasBeenSet(false)
{
}

LineItemFields::LineItemFields(JsonView jsonValue) : 
    m_lineItemExpenseFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

LineItemFields& LineItemFields::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LineItemExpenseFields"))
  {
    Aws::Utils::Array<JsonView> lineItemExpenseFieldsJsonList = jsonValue.GetArray("LineItemExpenseFields");
    for(unsigned lineItemExpenseFieldsIndex = 0; lineItemExpenseFieldsIndex < lineItemExpenseFieldsJsonList.GetLength(); ++lineItemExpenseFieldsIndex)
    {
      m_lineItemExpenseFields.push_back(lineItemExpenseFieldsJsonList[lineItemExpenseFieldsIndex].AsObject());
    }
    m_lineItemExpenseFieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue LineItemFields::Jsonize() const
{
  JsonValue payload;

  if(m_lineItemExpenseFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lineItemExpenseFieldsJsonList(m_lineItemExpenseFields.size());
   for(unsigned lineItemExpenseFieldsIndex = 0; lineItemExpenseFieldsIndex < lineItemExpenseFieldsJsonList.GetLength(); ++lineItemExpenseFieldsIndex)
   {
     lineItemExpenseFieldsJsonList[lineItemExpenseFieldsIndex].AsObject(m_lineItemExpenseFields[lineItemExpenseFieldsIndex].Jsonize());
   }
   payload.WithArray("LineItemExpenseFields", std::move(lineItemExpenseFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
