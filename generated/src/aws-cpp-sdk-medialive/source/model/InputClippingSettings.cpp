/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputClippingSettings.h>
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

InputClippingSettings::InputClippingSettings() : 
    m_inputTimecodeSource(InputTimecodeSource::NOT_SET),
    m_inputTimecodeSourceHasBeenSet(false),
    m_startTimecodeHasBeenSet(false),
    m_stopTimecodeHasBeenSet(false)
{
}

InputClippingSettings::InputClippingSettings(JsonView jsonValue) : 
    m_inputTimecodeSource(InputTimecodeSource::NOT_SET),
    m_inputTimecodeSourceHasBeenSet(false),
    m_startTimecodeHasBeenSet(false),
    m_stopTimecodeHasBeenSet(false)
{
  *this = jsonValue;
}

InputClippingSettings& InputClippingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputTimecodeSource"))
  {
    m_inputTimecodeSource = InputTimecodeSourceMapper::GetInputTimecodeSourceForName(jsonValue.GetString("inputTimecodeSource"));

    m_inputTimecodeSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimecode"))
  {
    m_startTimecode = jsonValue.GetObject("startTimecode");

    m_startTimecodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopTimecode"))
  {
    m_stopTimecode = jsonValue.GetObject("stopTimecode");

    m_stopTimecodeHasBeenSet = true;
  }

  return *this;
}

JsonValue InputClippingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_inputTimecodeSourceHasBeenSet)
  {
   payload.WithString("inputTimecodeSource", InputTimecodeSourceMapper::GetNameForInputTimecodeSource(m_inputTimecodeSource));
  }

  if(m_startTimecodeHasBeenSet)
  {
   payload.WithObject("startTimecode", m_startTimecode.Jsonize());

  }

  if(m_stopTimecodeHasBeenSet)
  {
   payload.WithObject("stopTimecode", m_stopTimecode.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
