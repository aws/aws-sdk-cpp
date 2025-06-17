/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourcesFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ResourcesFilters::ResourcesFilters(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourcesFilters& ResourcesFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompositeFilters"))
  {
    Aws::Utils::Array<JsonView> compositeFiltersJsonList = jsonValue.GetArray("CompositeFilters");
    for(unsigned compositeFiltersIndex = 0; compositeFiltersIndex < compositeFiltersJsonList.GetLength(); ++compositeFiltersIndex)
    {
      m_compositeFilters.push_back(compositeFiltersJsonList[compositeFiltersIndex].AsObject());
    }
    m_compositeFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompositeOperator"))
  {
    m_compositeOperator = AllowedOperatorsMapper::GetAllowedOperatorsForName(jsonValue.GetString("CompositeOperator"));
    m_compositeOperatorHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourcesFilters::Jsonize() const
{
  JsonValue payload;

  if(m_compositeFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> compositeFiltersJsonList(m_compositeFilters.size());
   for(unsigned compositeFiltersIndex = 0; compositeFiltersIndex < compositeFiltersJsonList.GetLength(); ++compositeFiltersIndex)
   {
     compositeFiltersJsonList[compositeFiltersIndex].AsObject(m_compositeFilters[compositeFiltersIndex].Jsonize());
   }
   payload.WithArray("CompositeFilters", std::move(compositeFiltersJsonList));

  }

  if(m_compositeOperatorHasBeenSet)
  {
   payload.WithString("CompositeOperator", AllowedOperatorsMapper::GetNameForAllowedOperators(m_compositeOperator));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
