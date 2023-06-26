/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSourceSearchFilter.h>
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

DataSourceSearchFilter::DataSourceSearchFilter() : 
    m_operator(FilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_name(DataSourceFilterAttribute::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

DataSourceSearchFilter::DataSourceSearchFilter(JsonView jsonValue) : 
    m_operator(FilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_name(DataSourceFilterAttribute::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceSearchFilter& DataSourceSearchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = FilterOperatorMapper::GetFilterOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = DataSourceFilterAttributeMapper::GetDataSourceFilterAttributeForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceSearchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", FilterOperatorMapper::GetNameForFilterOperator(m_operator));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", DataSourceFilterAttributeMapper::GetNameForDataSourceFilterAttribute(m_name));
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
