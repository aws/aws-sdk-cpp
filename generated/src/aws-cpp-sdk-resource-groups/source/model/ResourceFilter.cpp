/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/ResourceFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

ResourceFilter::ResourceFilter() : 
    m_name(ResourceFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

ResourceFilter::ResourceFilter(JsonView jsonValue) : 
    m_name(ResourceFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceFilter& ResourceFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ResourceFilterNameMapper::GetResourceFilterNameForName(jsonValue.GetString("Name"));

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

  return *this;
}

JsonValue ResourceFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ResourceFilterNameMapper::GetNameForResourceFilterName(m_name));
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

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
