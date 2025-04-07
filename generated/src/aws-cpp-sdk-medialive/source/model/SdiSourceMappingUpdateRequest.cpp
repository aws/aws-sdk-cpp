/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SdiSourceMappingUpdateRequest.h>
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

SdiSourceMappingUpdateRequest::SdiSourceMappingUpdateRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

SdiSourceMappingUpdateRequest& SdiSourceMappingUpdateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cardNumber"))
  {
    m_cardNumber = jsonValue.GetInteger("cardNumber");
    m_cardNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelNumber"))
  {
    m_channelNumber = jsonValue.GetInteger("channelNumber");
    m_channelNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sdiSource"))
  {
    m_sdiSource = jsonValue.GetString("sdiSource");
    m_sdiSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue SdiSourceMappingUpdateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_cardNumberHasBeenSet)
  {
   payload.WithInteger("cardNumber", m_cardNumber);

  }

  if(m_channelNumberHasBeenSet)
  {
   payload.WithInteger("channelNumber", m_channelNumber);

  }

  if(m_sdiSourceHasBeenSet)
  {
   payload.WithString("sdiSource", m_sdiSource);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
