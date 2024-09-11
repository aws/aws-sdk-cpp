/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SrtOutputSettings.h>
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

SrtOutputSettings::SrtOutputSettings() : 
    m_bufferMsec(0),
    m_bufferMsecHasBeenSet(false),
    m_containerSettingsHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_encryptionType(SrtEncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_latency(0),
    m_latencyHasBeenSet(false)
{
}

SrtOutputSettings::SrtOutputSettings(JsonView jsonValue)
  : SrtOutputSettings()
{
  *this = jsonValue;
}

SrtOutputSettings& SrtOutputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bufferMsec"))
  {
    m_bufferMsec = jsonValue.GetInteger("bufferMsec");

    m_bufferMsecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerSettings"))
  {
    m_containerSettings = jsonValue.GetObject("containerSettings");

    m_containerSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = SrtEncryptionTypeMapper::GetSrtEncryptionTypeForName(jsonValue.GetString("encryptionType"));

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latency"))
  {
    m_latency = jsonValue.GetInteger("latency");

    m_latencyHasBeenSet = true;
  }

  return *this;
}

JsonValue SrtOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bufferMsecHasBeenSet)
  {
   payload.WithInteger("bufferMsec", m_bufferMsec);

  }

  if(m_containerSettingsHasBeenSet)
  {
   payload.WithObject("containerSettings", m_containerSettings.Jsonize());

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", SrtEncryptionTypeMapper::GetNameForSrtEncryptionType(m_encryptionType));
  }

  if(m_latencyHasBeenSet)
  {
   payload.WithInteger("latency", m_latency);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
