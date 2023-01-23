/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SankeyDiagramSortConfiguration.h>
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

SankeyDiagramSortConfiguration::SankeyDiagramSortConfiguration() : 
    m_weightSortHasBeenSet(false),
    m_sourceItemsLimitHasBeenSet(false),
    m_destinationItemsLimitHasBeenSet(false)
{
}

SankeyDiagramSortConfiguration::SankeyDiagramSortConfiguration(JsonView jsonValue) : 
    m_weightSortHasBeenSet(false),
    m_sourceItemsLimitHasBeenSet(false),
    m_destinationItemsLimitHasBeenSet(false)
{
  *this = jsonValue;
}

SankeyDiagramSortConfiguration& SankeyDiagramSortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WeightSort"))
  {
    Aws::Utils::Array<JsonView> weightSortJsonList = jsonValue.GetArray("WeightSort");
    for(unsigned weightSortIndex = 0; weightSortIndex < weightSortJsonList.GetLength(); ++weightSortIndex)
    {
      m_weightSort.push_back(weightSortJsonList[weightSortIndex].AsObject());
    }
    m_weightSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceItemsLimit"))
  {
    m_sourceItemsLimit = jsonValue.GetObject("SourceItemsLimit");

    m_sourceItemsLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationItemsLimit"))
  {
    m_destinationItemsLimit = jsonValue.GetObject("DestinationItemsLimit");

    m_destinationItemsLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue SankeyDiagramSortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_weightSortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> weightSortJsonList(m_weightSort.size());
   for(unsigned weightSortIndex = 0; weightSortIndex < weightSortJsonList.GetLength(); ++weightSortIndex)
   {
     weightSortJsonList[weightSortIndex].AsObject(m_weightSort[weightSortIndex].Jsonize());
   }
   payload.WithArray("WeightSort", std::move(weightSortJsonList));

  }

  if(m_sourceItemsLimitHasBeenSet)
  {
   payload.WithObject("SourceItemsLimit", m_sourceItemsLimit.Jsonize());

  }

  if(m_destinationItemsLimitHasBeenSet)
  {
   payload.WithObject("DestinationItemsLimit", m_destinationItemsLimit.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
