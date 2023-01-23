/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UdpGroupSettings.h>
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

UdpGroupSettings::UdpGroupSettings() : 
    m_inputLossAction(InputLossActionForUdpOut::NOT_SET),
    m_inputLossActionHasBeenSet(false),
    m_timedMetadataId3Frame(UdpTimedMetadataId3Frame::NOT_SET),
    m_timedMetadataId3FrameHasBeenSet(false),
    m_timedMetadataId3Period(0),
    m_timedMetadataId3PeriodHasBeenSet(false)
{
}

UdpGroupSettings::UdpGroupSettings(JsonView jsonValue) : 
    m_inputLossAction(InputLossActionForUdpOut::NOT_SET),
    m_inputLossActionHasBeenSet(false),
    m_timedMetadataId3Frame(UdpTimedMetadataId3Frame::NOT_SET),
    m_timedMetadataId3FrameHasBeenSet(false),
    m_timedMetadataId3Period(0),
    m_timedMetadataId3PeriodHasBeenSet(false)
{
  *this = jsonValue;
}

UdpGroupSettings& UdpGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputLossAction"))
  {
    m_inputLossAction = InputLossActionForUdpOutMapper::GetInputLossActionForUdpOutForName(jsonValue.GetString("inputLossAction"));

    m_inputLossActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataId3Frame"))
  {
    m_timedMetadataId3Frame = UdpTimedMetadataId3FrameMapper::GetUdpTimedMetadataId3FrameForName(jsonValue.GetString("timedMetadataId3Frame"));

    m_timedMetadataId3FrameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataId3Period"))
  {
    m_timedMetadataId3Period = jsonValue.GetInteger("timedMetadataId3Period");

    m_timedMetadataId3PeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue UdpGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_inputLossActionHasBeenSet)
  {
   payload.WithString("inputLossAction", InputLossActionForUdpOutMapper::GetNameForInputLossActionForUdpOut(m_inputLossAction));
  }

  if(m_timedMetadataId3FrameHasBeenSet)
  {
   payload.WithString("timedMetadataId3Frame", UdpTimedMetadataId3FrameMapper::GetNameForUdpTimedMetadataId3Frame(m_timedMetadataId3Frame));
  }

  if(m_timedMetadataId3PeriodHasBeenSet)
  {
   payload.WithInteger("timedMetadataId3Period", m_timedMetadataId3Period);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
