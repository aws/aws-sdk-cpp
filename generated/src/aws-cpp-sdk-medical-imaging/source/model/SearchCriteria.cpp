﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/SearchCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

SearchCriteria::SearchCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchCriteria& SearchCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sort"))
  {
    m_sort = jsonValue.GetObject("sort");
    m_sortHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("sort", m_sort.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
