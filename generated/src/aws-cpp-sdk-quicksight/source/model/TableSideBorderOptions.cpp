/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableSideBorderOptions.h>
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

TableSideBorderOptions::TableSideBorderOptions() : 
    m_innerVerticalHasBeenSet(false),
    m_innerHorizontalHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_rightHasBeenSet(false),
    m_topHasBeenSet(false),
    m_bottomHasBeenSet(false)
{
}

TableSideBorderOptions::TableSideBorderOptions(JsonView jsonValue) : 
    m_innerVerticalHasBeenSet(false),
    m_innerHorizontalHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_rightHasBeenSet(false),
    m_topHasBeenSet(false),
    m_bottomHasBeenSet(false)
{
  *this = jsonValue;
}

TableSideBorderOptions& TableSideBorderOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InnerVertical"))
  {
    m_innerVertical = jsonValue.GetObject("InnerVertical");

    m_innerVerticalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InnerHorizontal"))
  {
    m_innerHorizontal = jsonValue.GetObject("InnerHorizontal");

    m_innerHorizontalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Left"))
  {
    m_left = jsonValue.GetObject("Left");

    m_leftHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Right"))
  {
    m_right = jsonValue.GetObject("Right");

    m_rightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Top"))
  {
    m_top = jsonValue.GetObject("Top");

    m_topHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Bottom"))
  {
    m_bottom = jsonValue.GetObject("Bottom");

    m_bottomHasBeenSet = true;
  }

  return *this;
}

JsonValue TableSideBorderOptions::Jsonize() const
{
  JsonValue payload;

  if(m_innerVerticalHasBeenSet)
  {
   payload.WithObject("InnerVertical", m_innerVertical.Jsonize());

  }

  if(m_innerHorizontalHasBeenSet)
  {
   payload.WithObject("InnerHorizontal", m_innerHorizontal.Jsonize());

  }

  if(m_leftHasBeenSet)
  {
   payload.WithObject("Left", m_left.Jsonize());

  }

  if(m_rightHasBeenSet)
  {
   payload.WithObject("Right", m_right.Jsonize());

  }

  if(m_topHasBeenSet)
  {
   payload.WithObject("Top", m_top.Jsonize());

  }

  if(m_bottomHasBeenSet)
  {
   payload.WithObject("Bottom", m_bottom.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
