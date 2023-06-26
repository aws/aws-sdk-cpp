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

NetworkInputSettings::NetworkInputSettings() : 
    m_hlsInputSettingsHasBeenSet(false),
    m_serverValidation(NetworkInputServerValidation::NOT_SET),
    m_serverValidationHasBeenSet(false)
{
}

NetworkInputSettings::NetworkInputSettings(JsonView jsonValue) : 
    m_hlsInputSettingsHasBeenSet(false),
    m_serverValidation(NetworkInputServerValidation::NOT_SET),
    m_serverValidationHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
