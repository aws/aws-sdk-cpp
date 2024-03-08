/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QueryConditionItem.h>
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

QueryConditionItem::QueryConditionItem() : 
    m_comparator(QueryConditionComparisonOperator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_field(QueryConditionFieldName::NOT_SET),
    m_fieldHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

QueryConditionItem::QueryConditionItem(JsonView jsonValue) : 
    m_comparator(QueryConditionComparisonOperator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_field(QueryConditionFieldName::NOT_SET),
    m_fieldHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

QueryConditionItem& QueryConditionItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparator"))
  {
    m_comparator = QueryConditionComparisonOperatorMapper::GetQueryConditionComparisonOperatorForName(jsonValue.GetString("comparator"));

    m_comparatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("field"))
  {
    m_field = QueryConditionFieldNameMapper::GetQueryConditionFieldNameForName(jsonValue.GetString("field"));

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryConditionItem::Jsonize() const
{
  JsonValue payload;

  if(m_comparatorHasBeenSet)
  {
   payload.WithString("comparator", QueryConditionComparisonOperatorMapper::GetNameForQueryConditionComparisonOperator(m_comparator));
  }

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", QueryConditionFieldNameMapper::GetNameForQueryConditionFieldName(m_field));
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
