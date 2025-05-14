/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/FileSourceSettings.h>
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

FileSourceSettings::FileSourceSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

FileSourceSettings& FileSourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("byteRateLimit"))
  {
    m_byteRateLimit = CaptionSourceByteRateLimitMapper::GetCaptionSourceByteRateLimitForName(jsonValue.GetString("byteRateLimit"));
    m_byteRateLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("convert608To708"))
  {
    m_convert608To708 = FileSourceConvert608To708Mapper::GetFileSourceConvert608To708ForName(jsonValue.GetString("convert608To708"));
    m_convert608To708HasBeenSet = true;
  }
  if(jsonValue.ValueExists("convertPaintToPop"))
  {
    m_convertPaintToPop = CaptionSourceConvertPaintOnToPopOnMapper::GetCaptionSourceConvertPaintOnToPopOnForName(jsonValue.GetString("convertPaintToPop"));
    m_convertPaintToPopHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerate"))
  {
    m_framerate = jsonValue.GetObject("framerate");
    m_framerateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceFile"))
  {
    m_sourceFile = jsonValue.GetString("sourceFile");
    m_sourceFileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeDelta"))
  {
    m_timeDelta = jsonValue.GetInteger("timeDelta");
    m_timeDeltaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeDeltaUnits"))
  {
    m_timeDeltaUnits = FileSourceTimeDeltaUnitsMapper::GetFileSourceTimeDeltaUnitsForName(jsonValue.GetString("timeDeltaUnits"));
    m_timeDeltaUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("upconvertSTLToTeletext"))
  {
    m_upconvertSTLToTeletext = CaptionSourceUpconvertSTLToTeletextMapper::GetCaptionSourceUpconvertSTLToTeletextForName(jsonValue.GetString("upconvertSTLToTeletext"));
    m_upconvertSTLToTeletextHasBeenSet = true;
  }
  return *this;
}

JsonValue FileSourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_byteRateLimitHasBeenSet)
  {
   payload.WithString("byteRateLimit", CaptionSourceByteRateLimitMapper::GetNameForCaptionSourceByteRateLimit(m_byteRateLimit));
  }

  if(m_convert608To708HasBeenSet)
  {
   payload.WithString("convert608To708", FileSourceConvert608To708Mapper::GetNameForFileSourceConvert608To708(m_convert608To708));
  }

  if(m_convertPaintToPopHasBeenSet)
  {
   payload.WithString("convertPaintToPop", CaptionSourceConvertPaintOnToPopOnMapper::GetNameForCaptionSourceConvertPaintOnToPopOn(m_convertPaintToPop));
  }

  if(m_framerateHasBeenSet)
  {
   payload.WithObject("framerate", m_framerate.Jsonize());

  }

  if(m_sourceFileHasBeenSet)
  {
   payload.WithString("sourceFile", m_sourceFile);

  }

  if(m_timeDeltaHasBeenSet)
  {
   payload.WithInteger("timeDelta", m_timeDelta);

  }

  if(m_timeDeltaUnitsHasBeenSet)
  {
   payload.WithString("timeDeltaUnits", FileSourceTimeDeltaUnitsMapper::GetNameForFileSourceTimeDeltaUnits(m_timeDeltaUnits));
  }

  if(m_upconvertSTLToTeletextHasBeenSet)
  {
   payload.WithString("upconvertSTLToTeletext", CaptionSourceUpconvertSTLToTeletextMapper::GetNameForCaptionSourceUpconvertSTLToTeletext(m_upconvertSTLToTeletext));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
