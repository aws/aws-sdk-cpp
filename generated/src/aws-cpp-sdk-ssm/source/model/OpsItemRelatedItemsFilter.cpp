/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemRelatedItemsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemRelatedItemsFilter::OpsItemRelatedItemsFilter() : 
    m_key(OpsItemRelatedItemsFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(OpsItemRelatedItemsFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

OpsItemRelatedItemsFilter::OpsItemRelatedItemsFilter(JsonView jsonValue) : 
    m_key(OpsItemRelatedItemsFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(OpsItemRelatedItemsFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemRelatedItemsFilter& OpsItemRelatedItemsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = OpsItemRelatedItemsFilterKeyMapper::GetOpsItemRelatedItemsFilterKeyForName(jsonValue.GetString("Key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = OpsItemRelatedItemsFilterOperatorMapper::GetOpsItemRelatedItemsFilterOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemRelatedItemsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", OpsItemRelatedItemsFilterKeyMapper::GetNameForOpsItemRelatedItemsFilterKey(m_key));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", OpsItemRelatedItemsFilterOperatorMapper::GetNameForOpsItemRelatedItemsFilterOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
