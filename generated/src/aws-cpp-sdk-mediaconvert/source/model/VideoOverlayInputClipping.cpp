/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoOverlayInputClipping.h>
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

VideoOverlayInputClipping::VideoOverlayInputClipping() : 
    m_endTimecodeHasBeenSet(false),
    m_startTimecodeHasBeenSet(false)
{
}

VideoOverlayInputClipping::VideoOverlayInputClipping(JsonView jsonValue) : 
    m_endTimecodeHasBeenSet(false),
    m_startTimecodeHasBeenSet(false)
{
  *this = jsonValue;
}

VideoOverlayInputClipping& VideoOverlayInputClipping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTimecode"))
  {
    m_endTimecode = jsonValue.GetString("endTimecode");

    m_endTimecodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimecode"))
  {
    m_startTimecode = jsonValue.GetString("startTimecode");

    m_startTimecodeHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoOverlayInputClipping::Jsonize() const
{
  JsonValue payload;

  if(m_endTimecodeHasBeenSet)
  {
   payload.WithString("endTimecode", m_endTimecode);

  }

  if(m_startTimecodeHasBeenSet)
  {
   payload.WithString("startTimecode", m_startTimecode);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
