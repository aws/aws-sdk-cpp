/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/NamespaceFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

NamespaceFilter::NamespaceFilter() : 
    m_name(NamespaceFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_condition(FilterCondition::NOT_SET),
    m_conditionHasBeenSet(false)
{
}

NamespaceFilter::NamespaceFilter(JsonView jsonValue) : 
    m_name(NamespaceFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_condition(FilterCondition::NOT_SET),
    m_conditionHasBeenSet(false)
{
  *this = jsonValue;
}

NamespaceFilter& NamespaceFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = NamespaceFilterNameMapper::GetNamespaceFilterNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
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

  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = FilterConditionMapper::GetFilterConditionForName(jsonValue.GetString("Condition"));

    m_conditionHasBeenSet = true;
  }

  return *this;
}

JsonValue NamespaceFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", NamespaceFilterNameMapper::GetNameForNamespaceFilterName(m_name));
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

  if(m_conditionHasBeenSet)
  {
   payload.WithString("Condition", FilterConditionMapper::GetNameForFilterCondition(m_condition));
  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
