/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateQueryField.h>
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

MessageTemplateQueryField::MessageTemplateQueryField(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageTemplateQueryField& MessageTemplateQueryField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
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
  if(jsonValue.ValueExists("operator"))
  {
    m_operator = MessageTemplateQueryOperatorMapper::GetMessageTemplateQueryOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowFuzziness"))
  {
    m_allowFuzziness = jsonValue.GetBool("allowFuzziness");
    m_allowFuzzinessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("priority"))
  {
    m_priority = PriorityMapper::GetPriorityForName(jsonValue.GetString("priority"));
    m_priorityHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageTemplateQueryField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", MessageTemplateQueryOperatorMapper::GetNameForMessageTemplateQueryOperator(m_operator));
  }

  if(m_allowFuzzinessHasBeenSet)
  {
   payload.WithBool("allowFuzziness", m_allowFuzziness);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithString("priority", PriorityMapper::GetNameForPriority(m_priority));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
