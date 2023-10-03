/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoOverlay.h>
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

VideoOverlay::VideoOverlay() : 
    m_endTimecodeHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_startTimecodeHasBeenSet(false)
{
}

VideoOverlay::VideoOverlay(JsonView jsonValue) : 
    m_endTimecodeHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_startTimecodeHasBeenSet(false)
{
  *this = jsonValue;
}

VideoOverlay& VideoOverlay::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTimecode"))
  {
    m_endTimecode = jsonValue.GetString("endTimecode");

    m_endTimecodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetObject("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimecode"))
  {
    m_startTimecode = jsonValue.GetString("startTimecode");

    m_startTimecodeHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoOverlay::Jsonize() const
{
  JsonValue payload;

  if(m_endTimecodeHasBeenSet)
  {
   payload.WithString("endTimecode", m_endTimecode);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithObject("input", m_input.Jsonize());

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
