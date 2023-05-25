/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisDisplayRange.h>
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

AxisDisplayRange::AxisDisplayRange() : 
    m_minMaxHasBeenSet(false),
    m_dataDrivenHasBeenSet(false)
{
}

AxisDisplayRange::AxisDisplayRange(JsonView jsonValue) : 
    m_minMaxHasBeenSet(false),
    m_dataDrivenHasBeenSet(false)
{
  *this = jsonValue;
}

AxisDisplayRange& AxisDisplayRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinMax"))
  {
    m_minMax = jsonValue.GetObject("MinMax");

    m_minMaxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataDriven"))
  {
    m_dataDriven = jsonValue.GetObject("DataDriven");

    m_dataDrivenHasBeenSet = true;
  }

  return *this;
}

JsonValue AxisDisplayRange::Jsonize() const
{
  JsonValue payload;

  if(m_minMaxHasBeenSet)
  {
   payload.WithObject("MinMax", m_minMax.Jsonize());

  }

  if(m_dataDrivenHasBeenSet)
  {
   payload.WithObject("DataDriven", m_dataDriven.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
