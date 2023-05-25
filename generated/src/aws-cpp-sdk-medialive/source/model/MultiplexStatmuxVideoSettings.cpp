/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexStatmuxVideoSettings.h>
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

MultiplexStatmuxVideoSettings::MultiplexStatmuxVideoSettings() : 
    m_maximumBitrate(0),
    m_maximumBitrateHasBeenSet(false),
    m_minimumBitrate(0),
    m_minimumBitrateHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

MultiplexStatmuxVideoSettings::MultiplexStatmuxVideoSettings(JsonView jsonValue) : 
    m_maximumBitrate(0),
    m_maximumBitrateHasBeenSet(false),
    m_minimumBitrate(0),
    m_minimumBitrateHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexStatmuxVideoSettings& MultiplexStatmuxVideoSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maximumBitrate"))
  {
    m_maximumBitrate = jsonValue.GetInteger("maximumBitrate");

    m_maximumBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumBitrate"))
  {
    m_minimumBitrate = jsonValue.GetInteger("minimumBitrate");

    m_minimumBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

    m_priorityHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexStatmuxVideoSettings::Jsonize() const
{
  JsonValue payload;

  if(m_maximumBitrateHasBeenSet)
  {
   payload.WithInteger("maximumBitrate", m_maximumBitrate);

  }

  if(m_minimumBitrateHasBeenSet)
  {
   payload.WithInteger("minimumBitrate", m_minimumBitrate);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
