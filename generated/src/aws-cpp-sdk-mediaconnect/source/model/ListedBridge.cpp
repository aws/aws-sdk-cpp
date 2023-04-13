/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ListedBridge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

ListedBridge::ListedBridge() : 
    m_bridgeArnHasBeenSet(false),
    m_bridgeState(BridgeState::NOT_SET),
    m_bridgeStateHasBeenSet(false),
    m_bridgeTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_placementArnHasBeenSet(false)
{
}

ListedBridge::ListedBridge(JsonView jsonValue) : 
    m_bridgeArnHasBeenSet(false),
    m_bridgeState(BridgeState::NOT_SET),
    m_bridgeStateHasBeenSet(false),
    m_bridgeTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_placementArnHasBeenSet(false)
{
  *this = jsonValue;
}

ListedBridge& ListedBridge::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bridgeArn"))
  {
    m_bridgeArn = jsonValue.GetString("bridgeArn");

    m_bridgeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bridgeState"))
  {
    m_bridgeState = BridgeStateMapper::GetBridgeStateForName(jsonValue.GetString("bridgeState"));

    m_bridgeStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bridgeType"))
  {
    m_bridgeType = jsonValue.GetString("bridgeType");

    m_bridgeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("placementArn"))
  {
    m_placementArn = jsonValue.GetString("placementArn");

    m_placementArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedBridge::Jsonize() const
{
  JsonValue payload;

  if(m_bridgeArnHasBeenSet)
  {
   payload.WithString("bridgeArn", m_bridgeArn);

  }

  if(m_bridgeStateHasBeenSet)
  {
   payload.WithString("bridgeState", BridgeStateMapper::GetNameForBridgeState(m_bridgeState));
  }

  if(m_bridgeTypeHasBeenSet)
  {
   payload.WithString("bridgeType", m_bridgeType);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_placementArnHasBeenSet)
  {
   payload.WithString("placementArn", m_placementArn);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
