/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BlackoutSlate.h>
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

BlackoutSlate::BlackoutSlate() : 
    m_blackoutSlateImageHasBeenSet(false),
    m_networkEndBlackout(BlackoutSlateNetworkEndBlackout::NOT_SET),
    m_networkEndBlackoutHasBeenSet(false),
    m_networkEndBlackoutImageHasBeenSet(false),
    m_networkIdHasBeenSet(false),
    m_state(BlackoutSlateState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

BlackoutSlate::BlackoutSlate(JsonView jsonValue) : 
    m_blackoutSlateImageHasBeenSet(false),
    m_networkEndBlackout(BlackoutSlateNetworkEndBlackout::NOT_SET),
    m_networkEndBlackoutHasBeenSet(false),
    m_networkEndBlackoutImageHasBeenSet(false),
    m_networkIdHasBeenSet(false),
    m_state(BlackoutSlateState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

BlackoutSlate& BlackoutSlate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blackoutSlateImage"))
  {
    m_blackoutSlateImage = jsonValue.GetObject("blackoutSlateImage");

    m_blackoutSlateImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkEndBlackout"))
  {
    m_networkEndBlackout = BlackoutSlateNetworkEndBlackoutMapper::GetBlackoutSlateNetworkEndBlackoutForName(jsonValue.GetString("networkEndBlackout"));

    m_networkEndBlackoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkEndBlackoutImage"))
  {
    m_networkEndBlackoutImage = jsonValue.GetObject("networkEndBlackoutImage");

    m_networkEndBlackoutImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkId"))
  {
    m_networkId = jsonValue.GetString("networkId");

    m_networkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = BlackoutSlateStateMapper::GetBlackoutSlateStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue BlackoutSlate::Jsonize() const
{
  JsonValue payload;

  if(m_blackoutSlateImageHasBeenSet)
  {
   payload.WithObject("blackoutSlateImage", m_blackoutSlateImage.Jsonize());

  }

  if(m_networkEndBlackoutHasBeenSet)
  {
   payload.WithString("networkEndBlackout", BlackoutSlateNetworkEndBlackoutMapper::GetNameForBlackoutSlateNetworkEndBlackout(m_networkEndBlackout));
  }

  if(m_networkEndBlackoutImageHasBeenSet)
  {
   payload.WithObject("networkEndBlackoutImage", m_networkEndBlackoutImage.Jsonize());

  }

  if(m_networkIdHasBeenSet)
  {
   payload.WithString("networkId", m_networkId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", BlackoutSlateStateMapper::GetNameForBlackoutSlateState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
