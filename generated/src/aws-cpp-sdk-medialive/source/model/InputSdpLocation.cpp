/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputSdpLocation.h>
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

InputSdpLocation::InputSdpLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

InputSdpLocation& InputSdpLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mediaIndex"))
  {
    m_mediaIndex = jsonValue.GetInteger("mediaIndex");
    m_mediaIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sdpUrl"))
  {
    m_sdpUrl = jsonValue.GetString("sdpUrl");
    m_sdpUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue InputSdpLocation::Jsonize() const
{
  JsonValue payload;

  if(m_mediaIndexHasBeenSet)
  {
   payload.WithInteger("mediaIndex", m_mediaIndex);

  }

  if(m_sdpUrlHasBeenSet)
  {
   payload.WithString("sdpUrl", m_sdpUrl);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
