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
    AWS_ROUTE53RECOVERYCLUSTER_API RoutingControl() = default;
    AWS_ROUTE53RECOVERYCLUSTER_API RoutingControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API RoutingControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCLUSTER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the control panel where the routing control
     * is located.</p>
     */
    inline const Aws::String& GetControlPanelArn() const { return m_controlPanelArn; }
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }
    template<typename ControlPanelArnT = Aws::String>
    void SetControlPanelArn(ControlPanelArnT&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::forward<ControlPanelArnT>(value); }
    template<typename ControlPanelArnT = Aws::String>
    RoutingControl& WithControlPanelArn(ControlPanelArnT&& value) { SetControlPanelArn(std::forward<ControlPanelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the control panel where the routing control is located. Only
     * ASCII characters are supported for control panel names.</p>
     */
    inline const Aws::String& GetControlPanelName() const { return m_controlPanelName; }
    inline bool ControlPanelNameHasBeenSet() const { return m_controlPanelNameHasBeenSet; }
    template<typename ControlPanelNameT = Aws::String>
    void SetControlPanelName(ControlPanelNameT&& value) { m_controlPanelNameHasBeenSet = true; m_controlPanelName = std::forward<ControlPanelNameT>(value); }
    template<typename ControlPanelNameT = Aws::String>
    RoutingControl& WithControlPanelName(ControlPanelNameT&& value) { SetControlPanelName(std::forward<ControlPanelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const { return m_routingControlArn; }
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }
    template<typename RoutingControlArnT = Aws::String>
    void SetRoutingControlArn(RoutingControlArnT&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::forward<RoutingControlArnT>(value); }
    template<typename RoutingControlArnT = Aws::String>
    RoutingControl& WithRoutingControlArn(RoutingControlArnT&& value) { SetRoutingControlArn(std::forward<RoutingControlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the routing control.</p>
     */
    inline const Aws::String& GetRoutingControlName() const { return m_routingControlName; }
    inline bool RoutingControlNameHasBeenSet() const { return m_routingControlNameHasBeenSet; }
    template<typename RoutingControlNameT = Aws::String>
    void SetRoutingControlName(RoutingControlNameT&& value) { m_routingControlNameHasBeenSet = true; m_routingControlName = std::forward<RoutingControlNameT>(value); }
    template<typename RoutingControlNameT = Aws::String>
    RoutingControl& WithRoutingControlName(RoutingControlNameT&& value) { SetRoutingControlName(std::forward<RoutingControlNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the routing control. When a routing control state is set
     * to ON, traffic flows to a cell. When the state is set to OFF, traffic does not
     * flow. </p>
     */
    inline RoutingControlState GetRoutingControlState() const { return m_routingControlState; }
    inline bool RoutingControlStateHasBeenSet() const { return m_routingControlStateHasBeenSet; }
    inline void SetRoutingControlState(RoutingControlState value) { m_routingControlStateHasBeenSet = true; m_routingControlState = value; }
    inline RoutingControl& WithRoutingControlState(RoutingControlState value) { SetRoutingControlState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the routing control owner.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    RoutingControl& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
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

    RoutingControlState m_routingControlState{RoutingControlState::NOT_SET};
    bool m_routingControlStateHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
