/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ClipLimits.h>
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

ClipLimits::ClipLimits(JsonView jsonValue)
{
  *this = jsonValue;
}

ClipLimits& ClipLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maximumRGBTolerance"))
  {
    m_maximumRGBTolerance = jsonValue.GetInteger("maximumRGBTolerance");
    m_maximumRGBToleranceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maximumYUV"))
  {
    m_maximumYUV = jsonValue.GetInteger("maximumYUV");
    m_maximumYUVHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minimumRGBTolerance"))
  {
    m_minimumRGBTolerance = jsonValue.GetInteger("minimumRGBTolerance");
    m_minimumRGBToleranceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minimumYUV"))
  {
    m_minimumYUV = jsonValue.GetInteger("minimumYUV");
    m_minimumYUVHasBeenSet = true;
  }
  return *this;
}

JsonValue ClipLimits::Jsonize() const
{
  JsonValue payload;

  if(m_maximumRGBToleranceHasBeenSet)
  {
   payload.WithInteger("maximumRGBTolerance", m_maximumRGBTolerance);

  }

  if(m_maximumYUVHasBeenSet)
  {
   payload.WithInteger("maximumYUV", m_maximumYUV);

  }

  if(m_minimumRGBToleranceHasBeenSet)
  {
   payload.WithInteger("minimumRGBTolerance", m_minimumRGBTolerance);

  }

  if(m_minimumYUVHasBeenSet)
  {
   payload.WithInteger("minimumYUV", m_minimumYUV);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
