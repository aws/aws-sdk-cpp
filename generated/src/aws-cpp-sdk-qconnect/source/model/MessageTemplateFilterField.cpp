/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateFilterField.h>
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

MessageTemplateFilterField::MessageTemplateFilterField() : 
    m_includeNoExistence(false),
    m_includeNoExistenceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_operator(MessageTemplateFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

MessageTemplateFilterField::MessageTemplateFilterField(JsonView jsonValue)
  : MessageTemplateFilterField()
{
  *this = jsonValue;
}

MessageTemplateFilterField& MessageTemplateFilterField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("includeNoExistence"))
  {
    m_includeNoExistence = jsonValue.GetBool("includeNoExistence");

    m_includeNoExistenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = MessageTemplateFilterOperatorMapper::GetMessageTemplateFilterOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageTemplateFilterField::Jsonize() const
{
  JsonValue payload;

  if(m_includeNoExistenceHasBeenSet)
  {
   payload.WithBool("includeNoExistence", m_includeNoExistence);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", MessageTemplateFilterOperatorMapper::GetNameForMessageTemplateFilterOperator(m_operator));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
