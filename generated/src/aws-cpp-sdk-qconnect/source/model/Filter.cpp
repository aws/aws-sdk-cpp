/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/Filter.h>
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

Filter::Filter() : 
    m_field(FilterField::NOT_SET),
    m_fieldHasBeenSet(false),
    m_operator(FilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_field(FilterField::NOT_SET),
    m_fieldHasBeenSet(false),
    m_operator(FilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("field"))
  {
    m_field = FilterFieldMapper::GetFilterFieldForName(jsonValue.GetString("field"));

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = FilterOperatorMapper::GetFilterOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", FilterFieldMapper::GetNameForFilterField(m_field));
  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", FilterOperatorMapper::GetNameForFilterOperator(m_operator));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
