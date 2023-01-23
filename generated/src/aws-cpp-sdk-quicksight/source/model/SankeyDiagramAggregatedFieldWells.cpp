/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SankeyDiagramAggregatedFieldWells.h>
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

SankeyDiagramAggregatedFieldWells::SankeyDiagramAggregatedFieldWells() : 
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

SankeyDiagramAggregatedFieldWells::SankeyDiagramAggregatedFieldWells(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_weightHasBeenSet(false)
{
  *this = jsonValue;
}

SankeyDiagramAggregatedFieldWells& SankeyDiagramAggregatedFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Source"))
  {
    Aws::Utils::Array<JsonView> sourceJsonList = jsonValue.GetArray("Source");
    for(unsigned sourceIndex = 0; sourceIndex < sourceJsonList.GetLength(); ++sourceIndex)
    {
      m_source.push_back(sourceJsonList[sourceIndex].AsObject());
    }
    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destination"))
  {
    Aws::Utils::Array<JsonView> destinationJsonList = jsonValue.GetArray("Destination");
    for(unsigned destinationIndex = 0; destinationIndex < destinationJsonList.GetLength(); ++destinationIndex)
    {
      m_destination.push_back(destinationJsonList[destinationIndex].AsObject());
    }
    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Weight"))
  {
    Aws::Utils::Array<JsonView> weightJsonList = jsonValue.GetArray("Weight");
    for(unsigned weightIndex = 0; weightIndex < weightJsonList.GetLength(); ++weightIndex)
    {
      m_weight.push_back(weightJsonList[weightIndex].AsObject());
    }
    m_weightHasBeenSet = true;
  }

  return *this;
}

JsonValue SankeyDiagramAggregatedFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceJsonList(m_source.size());
   for(unsigned sourceIndex = 0; sourceIndex < sourceJsonList.GetLength(); ++sourceIndex)
   {
     sourceJsonList[sourceIndex].AsObject(m_source[sourceIndex].Jsonize());
   }
   payload.WithArray("Source", std::move(sourceJsonList));

  }

  if(m_destinationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationJsonList(m_destination.size());
   for(unsigned destinationIndex = 0; destinationIndex < destinationJsonList.GetLength(); ++destinationIndex)
   {
     destinationJsonList[destinationIndex].AsObject(m_destination[destinationIndex].Jsonize());
   }
   payload.WithArray("Destination", std::move(destinationJsonList));

  }

  if(m_weightHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> weightJsonList(m_weight.size());
   for(unsigned weightIndex = 0; weightIndex < weightJsonList.GetLength(); ++weightIndex)
   {
     weightJsonList[weightIndex].AsObject(m_weight[weightIndex].Jsonize());
   }
   payload.WithArray("Weight", std::move(weightJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
