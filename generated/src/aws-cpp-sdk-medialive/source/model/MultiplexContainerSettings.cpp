/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexContainerSettings.h>
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

MultiplexContainerSettings::MultiplexContainerSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MultiplexContainerSettings& MultiplexContainerSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("multiplexM2tsSettings"))
  {
    m_multiplexM2tsSettings = jsonValue.GetObject("multiplexM2tsSettings");
    m_multiplexM2tsSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiplexContainerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_multiplexM2tsSettingsHasBeenSet)
  {
   payload.WithObject("multiplexM2tsSettings", m_multiplexM2tsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
