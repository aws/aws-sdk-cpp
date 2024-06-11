/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-cluster/model/RoutingControlState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53RecoveryCluster
{
namespace Model
{

  /**
   * <p>A routing control, which is a simple on/off switch that you can use to route
   * traffic to cells. When a routing control state is set to ON, traffic flows to a
   * cell. When the state is set to OFF, traffic does not flow. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-cluster-2019-12-02/RoutingControl">AWS
   * API Reference</a></p>
   */
  class RoutingControl
  {
  public:
    AWS_ROUTE53RECOVERYCLUSTER_API RoutingControl();
    AWS_ROUTE53RECOVERYCLUSTER_API RoutingControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API RoutingControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the control panel where the routing control
     * is located.</p>
     */
    inline const Aws::String& GetControlPanelArn() const{ return m_controlPanelArn; }
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }
    inline void SetControlPanelArn(const Aws::String& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = value; }
    inline void SetControlPanelArn(Aws::String&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::move(value); }
    inline void SetControlPanelArn(const char* value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn.assign(value); }
    inline RoutingControl& WithControlPanelArn(const Aws::String& value) { SetControlPanelArn(value); return *this;}
    inline RoutingControl& WithControlPanelArn(Aws::String&& value) { SetControlPanelArn(std::move(value)); return *this;}
    inline RoutingControl& WithControlPanelArn(const char* value) { SetControlPanelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the control panel where the routing control is located. Only
     * ASCII characters are supported for control panel names.</p>
     */
    inline const Aws::String& GetControlPanelName() const{ return m_controlPanelName; }
    inline bool ControlPanelNameHasBeenSet() const { return m_controlPanelNameHasBeenSet; }
    inline void SetControlPanelName(const Aws::String& value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName = value; }
    inline void SetControlPanelName(Aws::String&& value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName = std::move(value); }
    inline void SetControlPanelName(const char* value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName.assign(value); }
    inline RoutingControl& WithControlPanelName(const Aws::String& value) { SetControlPanelName(value); return *this;}
    inline RoutingControl& WithControlPanelName(Aws::String&& value) { SetControlPanelName(std::move(value)); return *this;}
    inline RoutingControl& WithControlPanelName(const char* value) { SetControlPanelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const{ return m_routingControlArn; }
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }
    inline void SetRoutingControlArn(const Aws::String& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = value; }
    inline void SetRoutingControlArn(Aws::String&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::move(value); }
    inline void SetRoutingControlArn(const char* value) { m_routingControlArnHasBeenSet = true; m_routingControlArn.assign(value); }
    inline RoutingControl& WithRoutingControlArn(const Aws::String& value) { SetRoutingControlArn(value); return *this;}
    inline RoutingControl& WithRoutingControlArn(Aws::String&& value) { SetRoutingControlArn(std::move(value)); return *this;}
    inline RoutingControl& WithRoutingControlArn(const char* value) { SetRoutingControlArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the routing control.</p>
     */
    inline const Aws::String& GetRoutingControlName() const{ return m_routingControlName; }
    inline bool RoutingControlNameHasBeenSet() const { return m_routingControlNameHasBeenSet; }
    inline void SetRoutingControlName(const Aws::String& value) { m_routingControlNameHasBeenSet = true; m_routingControlName = value; }
    inline void SetRoutingControlName(Aws::String&& value) { m_routingControlNameHasBeenSet = true; m_routingControlName = std::move(value); }
    inline void SetRoutingControlName(const char* value) { m_routingControlNameHasBeenSet = true; m_routingControlName.assign(value); }
    inline RoutingControl& WithRoutingControlName(const Aws::String& value) { SetRoutingControlName(value); return *this;}
    inline RoutingControl& WithRoutingControlName(Aws::String&& value) { SetRoutingControlName(std::move(value)); return *this;}
    inline RoutingControl& WithRoutingControlName(const char* value) { SetRoutingControlName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the routing control. When a routing control state is set
     * to ON, traffic flows to a cell. When the state is set to OFF, traffic does not
     * flow. </p>
     */
    inline const RoutingControlState& GetRoutingControlState() const{ return m_routingControlState; }
    inline bool RoutingControlStateHasBeenSet() const { return m_routingControlStateHasBeenSet; }
    inline void SetRoutingControlState(const RoutingControlState& value) { m_routingControlStateHasBeenSet = true; m_routingControlState = value; }
    inline void SetRoutingControlState(RoutingControlState&& value) { m_routingControlStateHasBeenSet = true; m_routingControlState = std::move(value); }
    inline RoutingControl& WithRoutingControlState(const RoutingControlState& value) { SetRoutingControlState(value); return *this;}
    inline RoutingControl& WithRoutingControlState(RoutingControlState&& value) { SetRoutingControlState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the routing control owner.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline RoutingControl& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline RoutingControl& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline RoutingControl& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}
  private:

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    Aws::String m_controlPanelName;
    bool m_controlPanelNameHasBeenSet = false;

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;

    Aws::String m_routingControlName;
    bool m_routingControlNameHasBeenSet = false;

    RoutingControlState m_routingControlState;
    bool m_routingControlStateHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
