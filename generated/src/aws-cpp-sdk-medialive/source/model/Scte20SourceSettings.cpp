/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte20SourceSettings.h>
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

Scte20SourceSettings::Scte20SourceSettings() : 
    m_convert608To708(Scte20Convert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_source608ChannelNumber(0),
    m_source608ChannelNumberHasBeenSet(false)
{
}

Scte20SourceSettings::Scte20SourceSettings(JsonView jsonValue) : 
    m_convert608To708(Scte20Convert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_source608ChannelNumber(0),
    m_source608ChannelNumberHasBeenSet(false)
{
  *this = jsonValue;
}

Scte20SourceSettings& Scte20SourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("convert608To708"))
  {
    m_convert608To708 = Scte20Convert608To708Mapper::GetScte20Convert608To708ForName(jsonValue.GetString("convert608To708"));

    m_convert608To708HasBeenSet = true;
  }

  if(jsonValue.ValueExists("source608ChannelNumber"))
  {
    m_source608ChannelNumber = jsonValue.GetInteger("source608ChannelNumber");

    m_source608ChannelNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte20SourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_convert608To708HasBeenSet)
  {
   payload.WithString("convert608To708", Scte20Convert608To708Mapper::GetNameForScte20Convert608To708(m_convert608To708));
  }

  if(m_source608ChannelNumberHasBeenSet)
  {
   payload.WithInteger("source608ChannelNumber", m_source608ChannelNumber);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
