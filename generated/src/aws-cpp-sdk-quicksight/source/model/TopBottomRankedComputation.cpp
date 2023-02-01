/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopBottomRankedComputation.h>
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

TopBottomRankedComputation::TopBottomRankedComputation() : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_resultSize(0),
    m_resultSizeHasBeenSet(false),
    m_type(TopBottomComputationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

TopBottomRankedComputation::TopBottomRankedComputation(JsonView jsonValue) : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_resultSize(0),
    m_resultSizeHasBeenSet(false),
    m_type(TopBottomComputationType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

TopBottomRankedComputation& TopBottomRankedComputation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ResultSize"))
  {
    m_resultSize = jsonValue.GetInteger("ResultSize");

    m_resultSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TopBottomComputationTypeMapper::GetTopBottomComputationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue TopBottomRankedComputation::Jsonize() const
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

  if(m_categoryHasBeenSet)
  {
   payload.WithObject("Category", m_category.Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_resultSizeHasBeenSet)
  {
   payload.WithInteger("ResultSize", m_resultSize);

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
