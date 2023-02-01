/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConditionalFormattingColor.h>
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

ConditionalFormattingColor::ConditionalFormattingColor() : 
    m_solidHasBeenSet(false),
    m_gradientHasBeenSet(false)
{
}

ConditionalFormattingColor::ConditionalFormattingColor(JsonView jsonValue) : 
    m_solidHasBeenSet(false),
    m_gradientHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalFormattingColor& ConditionalFormattingColor::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ConditionalFormattingColor::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
