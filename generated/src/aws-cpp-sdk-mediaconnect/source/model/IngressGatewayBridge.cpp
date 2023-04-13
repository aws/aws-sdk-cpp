/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/IngressGatewayBridge.h>
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

IngressGatewayBridge::IngressGatewayBridge() : 
    m_instanceIdHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_maxOutputs(0),
    m_maxOutputsHasBeenSet(false)
{
}

IngressGatewayBridge::IngressGatewayBridge(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_maxOutputs(0),
    m_maxOutputsHasBeenSet(false)
{
  *this = jsonValue;
}

IngressGatewayBridge& IngressGatewayBridge::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("maxOutputs"))
  {
    m_maxOutputs = jsonValue.GetInteger("maxOutputs");

    m_maxOutputsHasBeenSet = true;
  }

  return *this;
}

JsonValue IngressGatewayBridge::Jsonize() const
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

  if(m_maxOutputsHasBeenSet)
  {
   payload.WithInteger("maxOutputs", m_maxOutputs);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
