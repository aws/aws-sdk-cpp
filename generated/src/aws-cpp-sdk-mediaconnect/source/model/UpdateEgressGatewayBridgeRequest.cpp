/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateEgressGatewayBridgeRequest.h>
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

UpdateEgressGatewayBridgeRequest::UpdateEgressGatewayBridgeRequest() : 
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false)
{
}

UpdateEgressGatewayBridgeRequest::UpdateEgressGatewayBridgeRequest(JsonView jsonValue) : 
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateEgressGatewayBridgeRequest& UpdateEgressGatewayBridgeRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateEgressGatewayBridgeRequest::Jsonize() const
{
  JsonValue payload;

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
