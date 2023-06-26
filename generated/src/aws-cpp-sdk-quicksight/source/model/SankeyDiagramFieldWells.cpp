/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SankeyDiagramFieldWells.h>
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

SankeyDiagramFieldWells::SankeyDiagramFieldWells() : 
    m_sankeyDiagramAggregatedFieldWellsHasBeenSet(false)
{
}

SankeyDiagramFieldWells::SankeyDiagramFieldWells(JsonView jsonValue) : 
    m_sankeyDiagramAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

SankeyDiagramFieldWells& SankeyDiagramFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SankeyDiagramAggregatedFieldWells"))
  {
    m_sankeyDiagramAggregatedFieldWells = jsonValue.GetObject("SankeyDiagramAggregatedFieldWells");

    m_sankeyDiagramAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue SankeyDiagramFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_sankeyDiagramAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("SankeyDiagramAggregatedFieldWells", m_sankeyDiagramAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
