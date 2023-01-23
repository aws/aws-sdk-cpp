/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UdpContainerSettings.h>
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

UdpContainerSettings::UdpContainerSettings() : 
    m_m2tsSettingsHasBeenSet(false)
{
}

UdpContainerSettings::UdpContainerSettings(JsonView jsonValue) : 
    m_m2tsSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

UdpContainerSettings& UdpContainerSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("m2tsSettings"))
  {
    m_m2tsSettings = jsonValue.GetObject("m2tsSettings");

    m_m2tsSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue UdpContainerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_m2tsSettingsHasBeenSet)
  {
   payload.WithObject("m2tsSettings", m_m2tsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
