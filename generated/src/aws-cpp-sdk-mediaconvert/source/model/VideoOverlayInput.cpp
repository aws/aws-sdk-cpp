/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoOverlayInput.h>
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

VideoOverlayInput::VideoOverlayInput() : 
    m_fileInputHasBeenSet(false),
    m_inputClippingsHasBeenSet(false),
    m_timecodeSource(InputTimecodeSource::NOT_SET),
    m_timecodeSourceHasBeenSet(false),
    m_timecodeStartHasBeenSet(false)
{
}

VideoOverlayInput::VideoOverlayInput(JsonView jsonValue) : 
    m_fileInputHasBeenSet(false),
    m_inputClippingsHasBeenSet(false),
    m_timecodeSource(InputTimecodeSource::NOT_SET),
    m_timecodeSourceHasBeenSet(false),
    m_timecodeStartHasBeenSet(false)
{
  *this = jsonValue;
}

VideoOverlayInput& VideoOverlayInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileInput"))
  {
    m_fileInput = jsonValue.GetString("fileInput");

    m_fileInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputClippings"))
  {
    Aws::Utils::Array<JsonView> inputClippingsJsonList = jsonValue.GetArray("inputClippings");
    for(unsigned inputClippingsIndex = 0; inputClippingsIndex < inputClippingsJsonList.GetLength(); ++inputClippingsIndex)
    {
      m_inputClippings.push_back(inputClippingsJsonList[inputClippingsIndex].AsObject());
    }
    m_inputClippingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeSource"))
  {
    m_timecodeSource = InputTimecodeSourceMapper::GetInputTimecodeSourceForName(jsonValue.GetString("timecodeSource"));

    m_timecodeSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeStart"))
  {
    m_timecodeStart = jsonValue.GetString("timecodeStart");

    m_timecodeStartHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoOverlayInput::Jsonize() const
{
  JsonValue payload;

  if(m_fileInputHasBeenSet)
  {
   payload.WithString("fileInput", m_fileInput);

  }

  if(m_inputClippingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputClippingsJsonList(m_inputClippings.size());
   for(unsigned inputClippingsIndex = 0; inputClippingsIndex < inputClippingsJsonList.GetLength(); ++inputClippingsIndex)
   {
     inputClippingsJsonList[inputClippingsIndex].AsObject(m_inputClippings[inputClippingsIndex].Jsonize());
   }
   payload.WithArray("inputClippings", std::move(inputClippingsJsonList));

  }

  if(m_timecodeSourceHasBeenSet)
  {
   payload.WithString("timecodeSource", InputTimecodeSourceMapper::GetNameForInputTimecodeSource(m_timecodeSource));
  }

  if(m_timecodeStartHasBeenSet)
  {
   payload.WithString("timecodeStart", m_timecodeStart);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
