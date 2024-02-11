/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ColorCorrection.h>
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

ColorCorrection::ColorCorrection() : 
    m_inputColorSpace(ColorSpace::NOT_SET),
    m_inputColorSpaceHasBeenSet(false),
    m_outputColorSpace(ColorSpace::NOT_SET),
    m_outputColorSpaceHasBeenSet(false),
    m_uriHasBeenSet(false)
{
}

ColorCorrection::ColorCorrection(JsonView jsonValue) : 
    m_inputColorSpace(ColorSpace::NOT_SET),
    m_inputColorSpaceHasBeenSet(false),
    m_outputColorSpace(ColorSpace::NOT_SET),
    m_outputColorSpaceHasBeenSet(false),
    m_uriHasBeenSet(false)
{
  *this = jsonValue;
}

ColorCorrection& ColorCorrection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputColorSpace"))
  {
    m_inputColorSpace = ColorSpaceMapper::GetColorSpaceForName(jsonValue.GetString("inputColorSpace"));

    m_inputColorSpaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputColorSpace"))
  {
    m_outputColorSpace = ColorSpaceMapper::GetColorSpaceForName(jsonValue.GetString("outputColorSpace"));

    m_outputColorSpaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");

    m_uriHasBeenSet = true;
  }

  return *this;
}

JsonValue ColorCorrection::Jsonize() const
{
  JsonValue payload;

  if(m_inputColorSpaceHasBeenSet)
  {
   payload.WithString("inputColorSpace", ColorSpaceMapper::GetNameForColorSpace(m_inputColorSpace));
  }

  if(m_outputColorSpaceHasBeenSet)
  {
   payload.WithString("outputColorSpace", ColorSpaceMapper::GetNameForColorSpace(m_outputColorSpace));
  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
