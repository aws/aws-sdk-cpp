/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NetworkInputSettings.h>
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

NetworkInputSettings::NetworkInputSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkInputSettings& NetworkInputSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hlsInputSettings"))
  {
    m_hlsInputSettings = jsonValue.GetObject("hlsInputSettings");
    m_hlsInputSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serverValidation"))
  {
    m_serverValidation = NetworkInputServerValidationMapper::GetNetworkInputServerValidationForName(jsonValue.GetString("serverValidation"));
    m_serverValidationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("multicastInputSettings"))
  {
    m_multicastInputSettings = jsonValue.GetObject("multicastInputSettings");
    m_multicastInputSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkInputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_hlsInputSettingsHasBeenSet)
  {
   payload.WithObject("hlsInputSettings", m_hlsInputSettings.Jsonize());

  }

  if(m_serverValidationHasBeenSet)
  {
   payload.WithString("serverValidation", NetworkInputServerValidationMapper::GetNameForNetworkInputServerValidation(m_serverValidation));
  }

  if(m_multicastInputSettingsHasBeenSet)
  {
   payload.WithObject("multicastInputSettings", m_multicastInputSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
