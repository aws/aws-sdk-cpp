/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchFilterGroup.h>
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

PatchFilterGroup::PatchFilterGroup() : 
    m_patchFiltersHasBeenSet(false)
{
}

PatchFilterGroup::PatchFilterGroup(JsonView jsonValue) : 
    m_patchFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

PatchFilterGroup& PatchFilterGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PatchFilters"))
  {
    Aws::Utils::Array<JsonView> patchFiltersJsonList = jsonValue.GetArray("PatchFilters");
    for(unsigned patchFiltersIndex = 0; patchFiltersIndex < patchFiltersJsonList.GetLength(); ++patchFiltersIndex)
    {
      m_patchFilters.push_back(patchFiltersJsonList[patchFiltersIndex].AsObject());
    }
    m_patchFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchFilterGroup::Jsonize() const
{
  JsonValue payload;

  if(m_patchFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> patchFiltersJsonList(m_patchFilters.size());
   for(unsigned patchFiltersIndex = 0; patchFiltersIndex < patchFiltersJsonList.GetLength(); ++patchFiltersIndex)
   {
     patchFiltersJsonList[patchFiltersIndex].AsObject(m_patchFilters[patchFiltersIndex].Jsonize());
   }
   payload.WithArray("PatchFilters", std::move(patchFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
