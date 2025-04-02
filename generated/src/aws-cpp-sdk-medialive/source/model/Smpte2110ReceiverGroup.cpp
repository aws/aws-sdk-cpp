/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Smpte2110ReceiverGroup.h>
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

Smpte2110ReceiverGroup::Smpte2110ReceiverGroup(JsonView jsonValue)
{
  *this = jsonValue;
}

Smpte2110ReceiverGroup& Smpte2110ReceiverGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sdpSettings"))
  {
    m_sdpSettings = jsonValue.GetObject("sdpSettings");
    m_sdpSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue Smpte2110ReceiverGroup::Jsonize() const
{
  JsonValue payload;

  if(m_sdpSettingsHasBeenSet)
  {
   payload.WithObject("sdpSettings", m_sdpSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
