/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/HistogramFieldWells.h>
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

HistogramFieldWells::HistogramFieldWells() : 
    m_histogramAggregatedFieldWellsHasBeenSet(false)
{
}

HistogramFieldWells::HistogramFieldWells(JsonView jsonValue) : 
    m_histogramAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

HistogramFieldWells& HistogramFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HistogramAggregatedFieldWells"))
  {
    m_histogramAggregatedFieldWells = jsonValue.GetObject("HistogramAggregatedFieldWells");

    m_histogramAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue HistogramFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_histogramAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("HistogramAggregatedFieldWells", m_histogramAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
