/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/model/RoutingControl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryCluster
{
namespace Model
{

RoutingControl::RoutingControl() : 
    m_controlPanelArnHasBeenSet(false),
    m_controlPanelNameHasBeenSet(false),
    m_routingControlArnHasBeenSet(false),
    m_routingControlNameHasBeenSet(false),
    m_routingControlState(RoutingControlState::NOT_SET),
    m_routingControlStateHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

RoutingControl::RoutingControl(JsonView jsonValue) : 
    m_controlPanelArnHasBeenSet(false),
    m_controlPanelNameHasBeenSet(false),
    m_routingControlArnHasBeenSet(false),
    m_routingControlNameHasBeenSet(false),
    m_routingControlState(RoutingControlState::NOT_SET),
    m_routingControlStateHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
  *this = jsonValue;
}

RoutingControl& RoutingControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ControlPanelArn"))
  {
    m_controlPanelArn = jsonValue.GetString("ControlPanelArn");

    m_controlPanelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlPanelName"))
  {
    m_controlPanelName = jsonValue.GetString("ControlPanelName");

    m_controlPanelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingControlArn"))
  {
    m_routingControlArn = jsonValue.GetString("RoutingControlArn");

    m_routingControlArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingControlName"))
  {
    m_routingControlName = jsonValue.GetString("RoutingControlName");

    m_routingControlNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingControlState"))
  {
    m_routingControlState = RoutingControlStateMapper::GetRoutingControlStateForName(jsonValue.GetString("RoutingControlState"));

    m_routingControlStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  return *this;
}

JsonValue RoutingControl::Jsonize() const
{
  JsonValue payload;

  if(m_controlPanelArnHasBeenSet)
  {
   payload.WithString("ControlPanelArn", m_controlPanelArn);

  }

  if(m_controlPanelNameHasBeenSet)
  {
   payload.WithString("ControlPanelName", m_controlPanelName);

  }

  if(m_routingControlArnHasBeenSet)
  {
   payload.WithString("RoutingControlArn", m_routingControlArn);

  }

  if(m_routingControlNameHasBeenSet)
  {
   payload.WithString("RoutingControlName", m_routingControlName);

  }

  if(m_routingControlStateHasBeenSet)
  {
   payload.WithString("RoutingControlState", RoutingControlStateMapper::GetNameForRoutingControlState(m_routingControlState));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
