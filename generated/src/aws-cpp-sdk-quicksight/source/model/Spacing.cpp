/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Spacing.h>
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

Spacing::Spacing() : 
    m_topHasBeenSet(false),
    m_bottomHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_rightHasBeenSet(false)
{
}

Spacing::Spacing(JsonView jsonValue) : 
    m_topHasBeenSet(false),
    m_bottomHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_rightHasBeenSet(false)
{
  *this = jsonValue;
}

Spacing& Spacing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Top"))
  {
    m_top = jsonValue.GetString("Top");

    m_topHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Bottom"))
  {
    m_bottom = jsonValue.GetString("Bottom");

    m_bottomHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Left"))
  {
    m_left = jsonValue.GetString("Left");

    m_leftHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Right"))
  {
    m_right = jsonValue.GetString("Right");

    m_rightHasBeenSet = true;
  }

  return *this;
}

JsonValue Spacing::Jsonize() const
{
  JsonValue payload;

  if(m_topHasBeenSet)
  {
   payload.WithString("Top", m_top);

  }

  if(m_bottomHasBeenSet)
  {
   payload.WithString("Bottom", m_bottom);

  }

  if(m_leftHasBeenSet)
  {
   payload.WithString("Left", m_left);

  }

  if(m_rightHasBeenSet)
  {
   payload.WithString("Right", m_right);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
