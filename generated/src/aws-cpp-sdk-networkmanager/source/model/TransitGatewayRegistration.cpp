/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/TransitGatewayRegistration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

TransitGatewayRegistration::TransitGatewayRegistration() : 
    m_globalNetworkIdHasBeenSet(false),
    m_transitGatewayArnHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

TransitGatewayRegistration::TransitGatewayRegistration(JsonView jsonValue) : 
    m_globalNetworkIdHasBeenSet(false),
    m_transitGatewayArnHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

TransitGatewayRegistration& TransitGatewayRegistration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlobalNetworkId"))
  {
    m_globalNetworkId = jsonValue.GetString("GlobalNetworkId");

    m_globalNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitGatewayArn"))
  {
    m_transitGatewayArn = jsonValue.GetString("TransitGatewayArn");

    m_transitGatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetObject("State");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue TransitGatewayRegistration::Jsonize() const
{
  JsonValue payload;

  if(m_globalNetworkIdHasBeenSet)
  {
   payload.WithString("GlobalNetworkId", m_globalNetworkId);

  }

  if(m_transitGatewayArnHasBeenSet)
  {
   payload.WithString("TransitGatewayArn", m_transitGatewayArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("State", m_state.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
