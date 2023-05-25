/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UniqueValuesComputation.h>
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

UniqueValuesComputation::UniqueValuesComputation() : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
}

UniqueValuesComputation::UniqueValuesComputation(JsonView jsonValue) : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
  *this = jsonValue;
}

UniqueValuesComputation& UniqueValuesComputation::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue UniqueValuesComputation::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
