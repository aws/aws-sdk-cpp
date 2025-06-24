/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MPA
{
namespace Model
{

Filter::Filter(JsonView jsonValue)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = FilterFieldMapper::GetFilterFieldForName(jsonValue.GetString("FieldName"));
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = OperatorMapper::GetOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", FilterFieldMapper::GetNameForFilterField(m_fieldName));
  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", OperatorMapper::GetNameForOperator(m_operator));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
