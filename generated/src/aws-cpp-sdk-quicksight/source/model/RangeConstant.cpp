/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RangeConstant.h>
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

RangeConstant::RangeConstant() : 
    m_minimumHasBeenSet(false),
    m_maximumHasBeenSet(false)
{
}

RangeConstant::RangeConstant(JsonView jsonValue) : 
    m_minimumHasBeenSet(false),
    m_maximumHasBeenSet(false)
{
  *this = jsonValue;
}

RangeConstant& RangeConstant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Minimum"))
  {
    m_minimum = jsonValue.GetString("Minimum");

    m_minimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Maximum"))
  {
    m_maximum = jsonValue.GetString("Maximum");

    m_maximumHasBeenSet = true;
  }

  return *this;
}

JsonValue RangeConstant::Jsonize() const
{
  JsonValue payload;

  if(m_minimumHasBeenSet)
  {
   payload.WithString("Minimum", m_minimum);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithString("Maximum", m_maximum);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
