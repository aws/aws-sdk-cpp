/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddEgressGatewayBridgeRequest.h>
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

AddEgressGatewayBridgeRequest::AddEgressGatewayBridgeRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

AddEgressGatewayBridgeRequest& AddEgressGatewayBridgeRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");
    m_maxBitrateHasBeenSet = true;
  }
  return *this;
}

JsonValue AddEgressGatewayBridgeRequest::Jsonize() const
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
