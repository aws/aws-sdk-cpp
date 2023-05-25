/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MotionImageInsertionOffset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

MotionImageInsertionOffset::MotionImageInsertionOffset() : 
    m_imageX(0),
    m_imageXHasBeenSet(false),
    m_imageY(0),
    m_imageYHasBeenSet(false)
{
}

MotionImageInsertionOffset::MotionImageInsertionOffset(JsonView jsonValue) : 
    m_imageX(0),
    m_imageXHasBeenSet(false),
    m_imageY(0),
    m_imageYHasBeenSet(false)
{
  *this = jsonValue;
}

MotionImageInsertionOffset& MotionImageInsertionOffset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageX"))
  {
    m_imageX = jsonValue.GetInteger("imageX");

    m_imageXHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageY"))
  {
    m_imageY = jsonValue.GetInteger("imageY");

    m_imageYHasBeenSet = true;
  }

  return *this;
}

JsonValue MotionImageInsertionOffset::Jsonize() const
{
  JsonValue payload;

  if(m_imageXHasBeenSet)
  {
   payload.WithInteger("imageX", m_imageX);

  }

  if(m_imageYHasBeenSet)
  {
   payload.WithInteger("imageY", m_imageY);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
