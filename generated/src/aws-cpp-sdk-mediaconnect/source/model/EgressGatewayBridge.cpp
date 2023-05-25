/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/EgressGatewayBridge.h>
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

EgressGatewayBridge::EgressGatewayBridge() : 
    m_instanceIdHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false)
{
}

EgressGatewayBridge::EgressGatewayBridge(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false)
{
  *this = jsonValue;
}

EgressGatewayBridge& EgressGatewayBridge::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  return *this;
}

JsonValue EgressGatewayBridge::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
