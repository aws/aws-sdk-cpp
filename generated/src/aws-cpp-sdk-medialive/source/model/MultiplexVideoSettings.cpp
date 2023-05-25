/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexVideoSettings.h>
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

MultiplexVideoSettings::MultiplexVideoSettings() : 
    m_constantBitrate(0),
    m_constantBitrateHasBeenSet(false),
    m_statmuxSettingsHasBeenSet(false)
{
}

MultiplexVideoSettings::MultiplexVideoSettings(JsonView jsonValue) : 
    m_constantBitrate(0),
    m_constantBitrateHasBeenSet(false),
    m_statmuxSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexVideoSettings& MultiplexVideoSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("constantBitrate"))
  {
    m_constantBitrate = jsonValue.GetInteger("constantBitrate");

    m_constantBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statmuxSettings"))
  {
    m_statmuxSettings = jsonValue.GetObject("statmuxSettings");

    m_statmuxSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexVideoSettings::Jsonize() const
{
  JsonValue payload;

  if(m_constantBitrateHasBeenSet)
  {
   payload.WithInteger("constantBitrate", m_constantBitrate);

  }

  if(m_statmuxSettingsHasBeenSet)
  {
   payload.WithObject("statmuxSettings", m_statmuxSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
