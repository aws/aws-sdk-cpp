/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopBottomMoversComputation.h>
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

TopBottomMoversComputation::TopBottomMoversComputation() : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_moverSize(0),
    m_moverSizeHasBeenSet(false),
    m_sortOrder(TopBottomSortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_type(TopBottomComputationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

TopBottomMoversComputation::TopBottomMoversComputation(JsonView jsonValue) : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_moverSize(0),
    m_moverSizeHasBeenSet(false),
    m_sortOrder(TopBottomSortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_type(TopBottomComputationType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

TopBottomMoversComputation& TopBottomMoversComputation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComputationId"))
  {
    m_computationId = jsonValue.GetString("ComputationId");

    m_computationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetObject("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    m_category = jsonValue.GetObject("Category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MoverSize"))
  {
    m_moverSize = jsonValue.GetInteger("MoverSize");

    m_moverSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortOrder"))
  {
    m_sortOrder = TopBottomSortOrderMapper::GetTopBottomSortOrderForName(jsonValue.GetString("SortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TopBottomComputationTypeMapper::GetTopBottomComputationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue TopBottomMoversComputation::Jsonize() const
{
  JsonValue payload;

  if(m_computationIdHasBeenSet)
  {
   payload.WithString("ComputationId", m_computationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithObject("Time", m_time.Jsonize());

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithObject("Category", m_category.Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_moverSizeHasBeenSet)
  {
   payload.WithInteger("MoverSize", m_moverSize);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", TopBottomSortOrderMapper::GetNameForTopBottomSortOrder(m_sortOrder));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TopBottomComputationTypeMapper::GetNameForTopBottomComputationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
