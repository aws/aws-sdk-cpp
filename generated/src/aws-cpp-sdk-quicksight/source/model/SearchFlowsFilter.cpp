/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SearchFlowsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SearchFlowsFilter::SearchFlowsFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchFlowsFilter& SearchFlowsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = FieldNameMapper::GetFieldNameForName(jsonValue.GetString("Name"));
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = SearchFilterOperatorMapper::GetSearchFilterOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchFlowsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", FieldNameMapper::GetNameForFieldName(m_name));
  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", SearchFilterOperatorMapper::GetNameForSearchFilterOperator(m_operator));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
