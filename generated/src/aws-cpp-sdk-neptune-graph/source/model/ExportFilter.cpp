/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ExportFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

ExportFilter::ExportFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportFilter& ExportFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vertexFilter"))
  {
    Aws::Map<Aws::String, JsonView> vertexFilterJsonMap = jsonValue.GetObject("vertexFilter").GetAllObjects();
    for(auto& vertexFilterItem : vertexFilterJsonMap)
    {
      m_vertexFilter[vertexFilterItem.first] = vertexFilterItem.second.AsObject();
    }
    m_vertexFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("edgeFilter"))
  {
    Aws::Map<Aws::String, JsonView> edgeFilterJsonMap = jsonValue.GetObject("edgeFilter").GetAllObjects();
    for(auto& edgeFilterItem : edgeFilterJsonMap)
    {
      m_edgeFilter[edgeFilterItem.first] = edgeFilterItem.second.AsObject();
    }
    m_edgeFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportFilter::Jsonize() const
{
  JsonValue payload;

  if(m_vertexFilterHasBeenSet)
  {
   JsonValue vertexFilterJsonMap;
   for(auto& vertexFilterItem : m_vertexFilter)
   {
     vertexFilterJsonMap.WithObject(vertexFilterItem.first, vertexFilterItem.second.Jsonize());
   }
   payload.WithObject("vertexFilter", std::move(vertexFilterJsonMap));

  }

  if(m_edgeFilterHasBeenSet)
  {
   JsonValue edgeFilterJsonMap;
   for(auto& edgeFilterItem : m_edgeFilter)
   {
     edgeFilterJsonMap.WithObject(edgeFilterItem.first, edgeFilterItem.second.Jsonize());
   }
   payload.WithObject("edgeFilter", std::move(edgeFilterJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
