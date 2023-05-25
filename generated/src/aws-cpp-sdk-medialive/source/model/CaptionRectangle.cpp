/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CaptionRectangle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

CaptionRectangle::CaptionRectangle() : 
    m_height(0.0),
    m_heightHasBeenSet(false),
    m_leftOffset(0.0),
    m_leftOffsetHasBeenSet(false),
    m_topOffset(0.0),
    m_topOffsetHasBeenSet(false),
    m_width(0.0),
    m_widthHasBeenSet(false)
{
}

CaptionRectangle::CaptionRectangle(JsonView jsonValue) : 
    m_height(0.0),
    m_heightHasBeenSet(false),
    m_leftOffset(0.0),
    m_leftOffsetHasBeenSet(false),
    m_topOffset(0.0),
    m_topOffsetHasBeenSet(false),
    m_width(0.0),
    m_widthHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionRectangle& CaptionRectangle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetDouble("height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("leftOffset"))
  {
    m_leftOffset = jsonValue.GetDouble("leftOffset");

    m_leftOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topOffset"))
  {
    m_topOffset = jsonValue.GetDouble("topOffset");

    m_topOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetDouble("width");

    m_widthHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionRectangle::Jsonize() const
{
  JsonValue payload;

  if(m_heightHasBeenSet)
  {
   payload.WithDouble("height", m_height);

  }

  if(m_leftOffsetHasBeenSet)
  {
   payload.WithDouble("leftOffset", m_leftOffset);

  }

  if(m_topOffsetHasBeenSet)
  {
   payload.WithDouble("topOffset", m_topOffset);

  }

  if(m_widthHasBeenSet)
  {
   payload.WithDouble("width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
