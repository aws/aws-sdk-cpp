/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbNitSettings.h>
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

DvbNitSettings::DvbNitSettings() : 
    m_networkId(0),
    m_networkIdHasBeenSet(false),
    m_networkNameHasBeenSet(false),
    m_repInterval(0),
    m_repIntervalHasBeenSet(false)
{
}

DvbNitSettings::DvbNitSettings(JsonView jsonValue) : 
    m_networkId(0),
    m_networkIdHasBeenSet(false),
    m_networkNameHasBeenSet(false),
    m_repInterval(0),
    m_repIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

DvbNitSettings& DvbNitSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("networkId"))
  {
    m_networkId = jsonValue.GetInteger("networkId");

    m_networkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkName"))
  {
    m_networkName = jsonValue.GetString("networkName");

    m_networkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repInterval"))
  {
    m_repInterval = jsonValue.GetInteger("repInterval");

    m_repIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue DvbNitSettings::Jsonize() const
{
  JsonValue payload;

  if(m_networkIdHasBeenSet)
  {
   payload.WithInteger("networkId", m_networkId);

  }

  if(m_networkNameHasBeenSet)
  {
   payload.WithString("networkName", m_networkName);

  }

  if(m_repIntervalHasBeenSet)
  {
   payload.WithInteger("repInterval", m_repInterval);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
