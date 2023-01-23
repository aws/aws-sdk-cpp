/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilledMapFieldWells.h>
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

FilledMapFieldWells::FilledMapFieldWells() : 
    m_filledMapAggregatedFieldWellsHasBeenSet(false)
{
}

FilledMapFieldWells::FilledMapFieldWells(JsonView jsonValue) : 
    m_filledMapAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

FilledMapFieldWells& FilledMapFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilledMapAggregatedFieldWells"))
  {
    m_filledMapAggregatedFieldWells = jsonValue.GetObject("FilledMapAggregatedFieldWells");

    m_filledMapAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue FilledMapFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_filledMapAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("FilledMapAggregatedFieldWells", m_filledMapAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
