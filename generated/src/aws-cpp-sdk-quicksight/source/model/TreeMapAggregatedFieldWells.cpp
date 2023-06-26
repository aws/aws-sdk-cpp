/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TreeMapAggregatedFieldWells.h>
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

TreeMapAggregatedFieldWells::TreeMapAggregatedFieldWells() : 
    m_groupsHasBeenSet(false),
    m_sizesHasBeenSet(false),
    m_colorsHasBeenSet(false)
{
}

TreeMapAggregatedFieldWells::TreeMapAggregatedFieldWells(JsonView jsonValue) : 
    m_groupsHasBeenSet(false),
    m_sizesHasBeenSet(false),
    m_colorsHasBeenSet(false)
{
  *this = jsonValue;
}

TreeMapAggregatedFieldWells& TreeMapAggregatedFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsObject());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sizes"))
  {
    Aws::Utils::Array<JsonView> sizesJsonList = jsonValue.GetArray("Sizes");
    for(unsigned sizesIndex = 0; sizesIndex < sizesJsonList.GetLength(); ++sizesIndex)
    {
      m_sizes.push_back(sizesJsonList[sizesIndex].AsObject());
    }
    m_sizesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Colors"))
  {
    Aws::Utils::Array<JsonView> colorsJsonList = jsonValue.GetArray("Colors");
    for(unsigned colorsIndex = 0; colorsIndex < colorsJsonList.GetLength(); ++colorsIndex)
    {
      m_colors.push_back(colorsJsonList[colorsIndex].AsObject());
    }
    m_colorsHasBeenSet = true;
  }

  return *this;
}

JsonValue TreeMapAggregatedFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsObject(m_groups[groupsIndex].Jsonize());
   }
   payload.WithArray("Groups", std::move(groupsJsonList));

  }

  if(m_sizesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sizesJsonList(m_sizes.size());
   for(unsigned sizesIndex = 0; sizesIndex < sizesJsonList.GetLength(); ++sizesIndex)
   {
     sizesJsonList[sizesIndex].AsObject(m_sizes[sizesIndex].Jsonize());
   }
   payload.WithArray("Sizes", std::move(sizesJsonList));

  }

  if(m_colorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> colorsJsonList(m_colors.size());
   for(unsigned colorsIndex = 0; colorsIndex < colorsJsonList.GetLength(); ++colorsIndex)
   {
     colorsJsonList[colorsIndex].AsObject(m_colors[colorsIndex].Jsonize());
   }
   payload.WithArray("Colors", std::move(colorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
