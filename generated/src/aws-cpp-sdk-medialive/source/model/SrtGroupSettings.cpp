/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SrtGroupSettings.h>
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

SrtGroupSettings::SrtGroupSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

SrtGroupSettings& SrtGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputLossAction"))
  {
    m_inputLossAction = InputLossActionForUdpOutMapper::GetInputLossActionForUdpOutForName(jsonValue.GetString("inputLossAction"));
    m_inputLossActionHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_inputLossActionHasBeenSet)
  {
   payload.WithString("inputLossAction", InputLossActionForUdpOutMapper::GetNameForInputLossActionForUdpOut(m_inputLossAction));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
