/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexSettingsSummary.h>
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

MultiplexSettingsSummary::MultiplexSettingsSummary() : 
    m_transportStreamBitrate(0),
    m_transportStreamBitrateHasBeenSet(false)
{
}

MultiplexSettingsSummary::MultiplexSettingsSummary(JsonView jsonValue) : 
    m_transportStreamBitrate(0),
    m_transportStreamBitrateHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexSettingsSummary& MultiplexSettingsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transportStreamBitrate"))
  {
    m_transportStreamBitrate = jsonValue.GetInteger("transportStreamBitrate");

    m_transportStreamBitrateHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexSettingsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_transportStreamBitrateHasBeenSet)
  {
   payload.WithInteger("transportStreamBitrate", m_transportStreamBitrate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
