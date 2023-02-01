/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TreeMapFieldWells.h>
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

TreeMapFieldWells::TreeMapFieldWells() : 
    m_treeMapAggregatedFieldWellsHasBeenSet(false)
{
}

TreeMapFieldWells::TreeMapFieldWells(JsonView jsonValue) : 
    m_treeMapAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

TreeMapFieldWells& TreeMapFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TreeMapAggregatedFieldWells"))
  {
    m_treeMapAggregatedFieldWells = jsonValue.GetObject("TreeMapAggregatedFieldWells");

    m_treeMapAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue TreeMapFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_treeMapAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("TreeMapAggregatedFieldWells", m_treeMapAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
