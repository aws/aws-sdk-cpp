/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/ControlPanel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

ControlPanel::ControlPanel() : 
    m_clusterArnHasBeenSet(false),
    m_controlPanelArnHasBeenSet(false),
    m_defaultControlPanel(false),
    m_defaultControlPanelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_routingControlCount(0),
    m_routingControlCountHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

ControlPanel::ControlPanel(JsonView jsonValue) : 
    m_clusterArnHasBeenSet(false),
    m_controlPanelArnHasBeenSet(false),
    m_defaultControlPanel(false),
    m_defaultControlPanelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_routingControlCount(0),
    m_routingControlCountHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
  *this = jsonValue;
}

ControlPanel& ControlPanel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlPanelArn"))
  {
    m_controlPanelArn = jsonValue.GetString("ControlPanelArn");

    m_controlPanelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultControlPanel"))
  {
    m_defaultControlPanel = jsonValue.GetBool("DefaultControlPanel");

    m_defaultControlPanelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingControlCount"))
  {
    m_routingControlCount = jsonValue.GetInteger("RoutingControlCount");

    m_routingControlCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  return *this;
}

JsonValue ControlPanel::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  if(m_controlPanelArnHasBeenSet)
  {
   payload.WithString("ControlPanelArn", m_controlPanelArn);

  }

  if(m_defaultControlPanelHasBeenSet)
  {
   payload.WithBool("DefaultControlPanel", m_defaultControlPanel);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_routingControlCountHasBeenSet)
  {
   payload.WithInteger("RoutingControlCount", m_routingControlCount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
