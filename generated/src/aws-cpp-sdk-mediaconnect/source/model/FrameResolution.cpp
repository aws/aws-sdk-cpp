/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/FrameResolution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

FrameResolution::FrameResolution() : 
    m_frameHeight(0),
    m_frameHeightHasBeenSet(false),
    m_frameWidth(0),
    m_frameWidthHasBeenSet(false)
{
}

FrameResolution::FrameResolution(JsonView jsonValue) : 
    m_frameHeight(0),
    m_frameHeightHasBeenSet(false),
    m_frameWidth(0),
    m_frameWidthHasBeenSet(false)
{
  *this = jsonValue;
}

FrameResolution& FrameResolution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("frameHeight"))
  {
    m_frameHeight = jsonValue.GetInteger("frameHeight");

    m_frameHeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frameWidth"))
  {
    m_frameWidth = jsonValue.GetInteger("frameWidth");

    m_frameWidthHasBeenSet = true;
  }

  return *this;
}

JsonValue FrameResolution::Jsonize() const
{
  JsonValue payload;

  if(m_frameHeightHasBeenSet)
  {
   payload.WithInteger("frameHeight", m_frameHeight);

  }

  if(m_frameWidthHasBeenSet)
  {
   payload.WithInteger("frameWidth", m_frameWidth);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
