/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Eac3AtmosSettings.h>
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

Eac3AtmosSettings::Eac3AtmosSettings() : 
    m_bitrate(0.0),
    m_bitrateHasBeenSet(false),
    m_codingMode(Eac3AtmosCodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_dialnorm(0),
    m_dialnormHasBeenSet(false),
    m_drcLine(Eac3AtmosDrcLine::NOT_SET),
    m_drcLineHasBeenSet(false),
    m_drcRf(Eac3AtmosDrcRf::NOT_SET),
    m_drcRfHasBeenSet(false),
    m_heightTrim(0.0),
    m_heightTrimHasBeenSet(false),
    m_surroundTrim(0.0),
    m_surroundTrimHasBeenSet(false)
{
}

Eac3AtmosSettings::Eac3AtmosSettings(JsonView jsonValue) : 
    m_bitrate(0.0),
    m_bitrateHasBeenSet(false),
    m_codingMode(Eac3AtmosCodingMode::NOT_SET),
    m_codingModeHasBeenSet(false),
    m_dialnorm(0),
    m_dialnormHasBeenSet(false),
    m_drcLine(Eac3AtmosDrcLine::NOT_SET),
    m_drcLineHasBeenSet(false),
    m_drcRf(Eac3AtmosDrcRf::NOT_SET),
    m_drcRfHasBeenSet(false),
    m_heightTrim(0.0),
    m_heightTrimHasBeenSet(false),
    m_surroundTrim(0.0),
    m_surroundTrimHasBeenSet(false)
{
  *this = jsonValue;
}

Eac3AtmosSettings& Eac3AtmosSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetDouble("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codingMode"))
  {
    m_codingMode = Eac3AtmosCodingModeMapper::GetEac3AtmosCodingModeForName(jsonValue.GetString("codingMode"));

    m_codingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dialnorm"))
  {
    m_dialnorm = jsonValue.GetInteger("dialnorm");

    m_dialnormHasBeenSet = true;
  }

  if(jsonValue.ValueExists("drcLine"))
  {
    m_drcLine = Eac3AtmosDrcLineMapper::GetEac3AtmosDrcLineForName(jsonValue.GetString("drcLine"));

    m_drcLineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("drcRf"))
  {
    m_drcRf = Eac3AtmosDrcRfMapper::GetEac3AtmosDrcRfForName(jsonValue.GetString("drcRf"));

    m_drcRfHasBeenSet = true;
  }

  if(jsonValue.ValueExists("heightTrim"))
  {
    m_heightTrim = jsonValue.GetDouble("heightTrim");

    m_heightTrimHasBeenSet = true;
  }

  if(jsonValue.ValueExists("surroundTrim"))
  {
    m_surroundTrim = jsonValue.GetDouble("surroundTrim");

    m_surroundTrimHasBeenSet = true;
  }

  return *this;
}

JsonValue Eac3AtmosSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateHasBeenSet)
  {
   payload.WithDouble("bitrate", m_bitrate);

  }

  if(m_codingModeHasBeenSet)
  {
   payload.WithString("codingMode", Eac3AtmosCodingModeMapper::GetNameForEac3AtmosCodingMode(m_codingMode));
  }

  if(m_dialnormHasBeenSet)
  {
   payload.WithInteger("dialnorm", m_dialnorm);

  }

  if(m_drcLineHasBeenSet)
  {
   payload.WithString("drcLine", Eac3AtmosDrcLineMapper::GetNameForEac3AtmosDrcLine(m_drcLine));
  }

  if(m_drcRfHasBeenSet)
  {
   payload.WithString("drcRf", Eac3AtmosDrcRfMapper::GetNameForEac3AtmosDrcRf(m_drcRf));
  }

  if(m_heightTrimHasBeenSet)
  {
   payload.WithDouble("heightTrim", m_heightTrim);

  }

  if(m_surroundTrimHasBeenSet)
  {
   payload.WithDouble("surroundTrim", m_surroundTrim);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
