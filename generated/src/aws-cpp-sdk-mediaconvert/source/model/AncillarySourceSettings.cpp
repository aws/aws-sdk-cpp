/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AncillarySourceSettings.h>
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

AncillarySourceSettings::AncillarySourceSettings() : 
    m_convert608To708(AncillaryConvert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_sourceAncillaryChannelNumber(0),
    m_sourceAncillaryChannelNumberHasBeenSet(false),
    m_terminateCaptions(AncillaryTerminateCaptions::NOT_SET),
    m_terminateCaptionsHasBeenSet(false)
{
}

AncillarySourceSettings::AncillarySourceSettings(JsonView jsonValue) : 
    m_convert608To708(AncillaryConvert608To708::NOT_SET),
    m_convert608To708HasBeenSet(false),
    m_sourceAncillaryChannelNumber(0),
    m_sourceAncillaryChannelNumberHasBeenSet(false),
    m_terminateCaptions(AncillaryTerminateCaptions::NOT_SET),
    m_terminateCaptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AncillarySourceSettings& AncillarySourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("convert608To708"))
  {
    m_convert608To708 = AncillaryConvert608To708Mapper::GetAncillaryConvert608To708ForName(jsonValue.GetString("convert608To708"));

    m_convert608To708HasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceAncillaryChannelNumber"))
  {
    m_sourceAncillaryChannelNumber = jsonValue.GetInteger("sourceAncillaryChannelNumber");

    m_sourceAncillaryChannelNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("terminateCaptions"))
  {
    m_terminateCaptions = AncillaryTerminateCaptionsMapper::GetAncillaryTerminateCaptionsForName(jsonValue.GetString("terminateCaptions"));

    m_terminateCaptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AncillarySourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_convert608To708HasBeenSet)
  {
   payload.WithString("convert608To708", AncillaryConvert608To708Mapper::GetNameForAncillaryConvert608To708(m_convert608To708));
  }

  if(m_sourceAncillaryChannelNumberHasBeenSet)
  {
   payload.WithInteger("sourceAncillaryChannelNumber", m_sourceAncillaryChannelNumber);

  }

  if(m_terminateCaptionsHasBeenSet)
  {
   payload.WithString("terminateCaptions", AncillaryTerminateCaptionsMapper::GetNameForAncillaryTerminateCaptions(m_terminateCaptions));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
