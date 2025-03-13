/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/WavSettings.h>
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

WavSettings::WavSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

WavSettings& WavSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitDepth"))
  {
    m_bitDepth = jsonValue.GetDouble("bitDepth");
    m_bitDepthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codingMode"))
  {
    m_codingMode = WavCodingModeMapper::GetWavCodingModeForName(jsonValue.GetString("codingMode"));
    m_codingModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetDouble("sampleRate");
    m_sampleRateHasBeenSet = true;
  }
  return *this;
}

JsonValue WavSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bitDepthHasBeenSet)
  {
   payload.WithDouble("bitDepth", m_bitDepth);

  }

  if(m_codingModeHasBeenSet)
  {
   payload.WithString("codingMode", WavCodingModeMapper::GetNameForWavCodingMode(m_codingMode));
  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithDouble("sampleRate", m_sampleRate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
