/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AssociationSetDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AssociationSetDetails::AssociationSetDetails() : 
    m_associationStateHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_main(false),
    m_mainHasBeenSet(false),
    m_routeTableAssociationIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

AssociationSetDetails::AssociationSetDetails(JsonView jsonValue) : 
    m_associationStateHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_main(false),
    m_mainHasBeenSet(false),
    m_routeTableAssociationIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationSetDetails& AssociationSetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationState"))
  {
    m_associationState = jsonValue.GetObject("AssociationState");

    m_associationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetString("GatewayId");

    m_gatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Main"))
  {
    m_main = jsonValue.GetBool("Main");

    m_mainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableAssociationId"))
  {
    m_routeTableAssociationId = jsonValue.GetString("RouteTableAssociationId");

    m_routeTableAssociationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableId"))
  {
    m_routeTableId = jsonValue.GetString("RouteTableId");

    m_routeTableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationSetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_associationStateHasBeenSet)
  {
   payload.WithObject("AssociationState", m_associationState.Jsonize());

  }

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("GatewayId", m_gatewayId);

  }

  if(m_mainHasBeenSet)
  {
   payload.WithBool("Main", m_main);

  }

  if(m_routeTableAssociationIdHasBeenSet)
  {
   payload.WithString("RouteTableAssociationId", m_routeTableAssociationId);

  }

  if(m_routeTableIdHasBeenSet)
  {
   payload.WithString("RouteTableId", m_routeTableId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
