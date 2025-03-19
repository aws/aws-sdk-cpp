/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35SpliceInsert.h>
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

Scte35SpliceInsert::Scte35SpliceInsert(JsonView jsonValue)
{
  *this = jsonValue;
}

Scte35SpliceInsert& Scte35SpliceInsert::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adAvailOffset"))
  {
    m_adAvailOffset = jsonValue.GetInteger("adAvailOffset");
    m_adAvailOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("noRegionalBlackoutFlag"))
  {
    m_noRegionalBlackoutFlag = Scte35SpliceInsertNoRegionalBlackoutBehaviorMapper::GetScte35SpliceInsertNoRegionalBlackoutBehaviorForName(jsonValue.GetString("noRegionalBlackoutFlag"));
    m_noRegionalBlackoutFlagHasBeenSet = true;
  }
  if(jsonValue.ValueExists("webDeliveryAllowedFlag"))
  {
    m_webDeliveryAllowedFlag = Scte35SpliceInsertWebDeliveryAllowedBehaviorMapper::GetScte35SpliceInsertWebDeliveryAllowedBehaviorForName(jsonValue.GetString("webDeliveryAllowedFlag"));
    m_webDeliveryAllowedFlagHasBeenSet = true;
  }
  return *this;
}

JsonValue Scte35SpliceInsert::Jsonize() const
{
  JsonValue payload;

  if(m_adAvailOffsetHasBeenSet)
  {
   payload.WithInteger("adAvailOffset", m_adAvailOffset);

  }

  if(m_noRegionalBlackoutFlagHasBeenSet)
  {
   payload.WithString("noRegionalBlackoutFlag", Scte35SpliceInsertNoRegionalBlackoutBehaviorMapper::GetNameForScte35SpliceInsertNoRegionalBlackoutBehavior(m_noRegionalBlackoutFlag));
  }

  if(m_webDeliveryAllowedFlagHasBeenSet)
  {
   payload.WithString("webDeliveryAllowedFlag", Scte35SpliceInsertWebDeliveryAllowedBehaviorMapper::GetNameForScte35SpliceInsertWebDeliveryAllowedBehavior(m_webDeliveryAllowedFlag));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
