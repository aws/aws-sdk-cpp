/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableFieldWells.h>
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

TableFieldWells::TableFieldWells() : 
    m_tableAggregatedFieldWellsHasBeenSet(false),
    m_tableUnaggregatedFieldWellsHasBeenSet(false)
{
}

TableFieldWells::TableFieldWells(JsonView jsonValue) : 
    m_tableAggregatedFieldWellsHasBeenSet(false),
    m_tableUnaggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

TableFieldWells& TableFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableAggregatedFieldWells"))
  {
    m_tableAggregatedFieldWells = jsonValue.GetObject("TableAggregatedFieldWells");

    m_tableAggregatedFieldWellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableUnaggregatedFieldWells"))
  {
    m_tableUnaggregatedFieldWells = jsonValue.GetObject("TableUnaggregatedFieldWells");

    m_tableUnaggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue TableFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_tableAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("TableAggregatedFieldWells", m_tableAggregatedFieldWells.Jsonize());

  }

  if(m_tableUnaggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("TableUnaggregatedFieldWells", m_tableUnaggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
