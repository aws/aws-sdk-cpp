/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialColor.h>
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

GeospatialColor::GeospatialColor(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialColor& GeospatialColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Solid"))
  {
    m_solid = jsonValue.GetObject("Solid");
    m_solidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Gradient"))
  {
    m_gradient = jsonValue.GetObject("Gradient");
    m_gradientHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Categorical"))
  {
    m_categorical = jsonValue.GetObject("Categorical");
    m_categoricalHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialColor::Jsonize() const
{
  JsonValue payload;

  if(m_solidHasBeenSet)
  {
   payload.WithObject("Solid", m_solid.Jsonize());

  }

  if(m_gradientHasBeenSet)
  {
   payload.WithObject("Gradient", m_gradient.Jsonize());

  }

  if(m_categoricalHasBeenSet)
  {
   payload.WithObject("Categorical", m_categorical.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
