/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/EmbeddedSourceSettings.h>
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

EmbeddedSourceSettings::EmbeddedSourceSettings() : 
    m_convert608To708(EmbeddedConvert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_source608ChannelNumber(0),
    m_source608ChannelNumberHasBeenSet(false),
    m_source608TrackNumber(0),
    m_source608TrackNumberHasBeenSet(false),
    m_terminateCaptions(EmbeddedTerminateCaptions::NOT_SET),
    m_terminateCaptionsHasBeenSet(false)
{
}

EmbeddedSourceSettings::EmbeddedSourceSettings(JsonView jsonValue) : 
    m_convert608To708(EmbeddedConvert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_source608ChannelNumber(0),
    m_source608ChannelNumberHasBeenSet(false),
    m_source608TrackNumber(0),
    m_source608TrackNumberHasBeenSet(false),
    m_terminateCaptions(EmbeddedTerminateCaptions::NOT_SET),
    m_terminateCaptionsHasBeenSet(false)
{
  *this = jsonValue;
}

EmbeddedSourceSettings& EmbeddedSourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("convert608To708"))
  {
    m_convert608To708 = EmbeddedConvert608To708Mapper::GetEmbeddedConvert608To708ForName(jsonValue.GetString("convert608To708"));

    m_convert608To708HasBeenSet = true;
  }

  if(jsonValue.ValueExists("source608ChannelNumber"))
  {
    m_source608ChannelNumber = jsonValue.GetInteger("source608ChannelNumber");

    m_source608ChannelNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source608TrackNumber"))
  {
    m_source608TrackNumber = jsonValue.GetInteger("source608TrackNumber");

    m_source608TrackNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("terminateCaptions"))
  {
    m_terminateCaptions = EmbeddedTerminateCaptionsMapper::GetEmbeddedTerminateCaptionsForName(jsonValue.GetString("terminateCaptions"));

    m_terminateCaptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EmbeddedSourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_convert608To708HasBeenSet)
  {
   payload.WithString("convert608To708", EmbeddedConvert608To708Mapper::GetNameForEmbeddedConvert608To708(m_convert608To708));
  }

  if(m_source608ChannelNumberHasBeenSet)
  {
   payload.WithInteger("source608ChannelNumber", m_source608ChannelNumber);

  }

  if(m_source608TrackNumberHasBeenSet)
  {
   payload.WithInteger("source608TrackNumber", m_source608TrackNumber);

  }

  if(m_terminateCaptionsHasBeenSet)
  {
   payload.WithString("terminateCaptions", EmbeddedTerminateCaptionsMapper::GetNameForEmbeddedTerminateCaptions(m_terminateCaptions));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
