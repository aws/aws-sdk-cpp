/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbNitSettings.h>
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

DvbNitSettings::DvbNitSettings() : 
    m_networkId(0),
    m_networkIdHasBeenSet(false),
    m_networkNameHasBeenSet(false),
    m_nitInterval(0),
    m_nitIntervalHasBeenSet(false)
{
}

DvbNitSettings::DvbNitSettings(JsonView jsonValue) : 
    m_networkId(0),
    m_networkIdHasBeenSet(false),
    m_networkNameHasBeenSet(false),
    m_nitInterval(0),
    m_nitIntervalHasBeenSet(false)
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

  if(jsonValue.ValueExists("nitInterval"))
  {
    m_nitInterval = jsonValue.GetInteger("nitInterval");

    m_nitIntervalHasBeenSet = true;
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

  if(m_nitIntervalHasBeenSet)
  {
   payload.WithInteger("nitInterval", m_nitInterval);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
