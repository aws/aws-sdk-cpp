/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-control-config/model/Status.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>A control panel represents a group of routing controls that can be changed
   * together in a single transaction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ControlPanel">AWS
   * API Reference</a></p>
   */
  class ControlPanel
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ControlPanel() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ControlPanel(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ControlPanel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the control
     * panel.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    ControlPanel& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the control panel.</p>
     */
    inline const Aws::String& GetControlPanelArn() const { return m_controlPanelArn; }
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }
    template<typename ControlPanelArnT = Aws::String>
    void SetControlPanelArn(ControlPanelArnT&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::forward<ControlPanelArnT>(value); }
    template<typename ControlPanelArnT = Aws::String>
    ControlPanel& WithControlPanelArn(ControlPanelArnT&& value) { SetControlPanelArn(std::forward<ControlPanelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that Amazon Route 53 Application Recovery Controller sets to true to
     * designate the default control panel for a cluster. When you create a cluster,
     * Amazon Route 53 Application Recovery Controller creates a control panel, and
     * sets this flag for that control panel. If you create a control panel yourself,
     * this flag is set to false.</p>
     */
    inline bool GetDefaultControlPanel() const { return m_defaultControlPanel; }
    inline bool DefaultControlPanelHasBeenSet() const { return m_defaultControlPanelHasBeenSet; }
    inline void SetDefaultControlPanel(bool value) { m_defaultControlPanelHasBeenSet = true; m_defaultControlPanel = value; }
    inline ControlPanel& WithDefaultControlPanel(bool value) { SetDefaultControlPanel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the control panel. You can use any non-white space character in
     * the name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ControlPanel& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of routing controls in the control panel.</p>
     */
    inline int GetRoutingControlCount() const { return m_routingControlCount; }
    inline bool RoutingControlCountHasBeenSet() const { return m_routingControlCountHasBeenSet; }
    inline void SetRoutingControlCount(int value) { m_routingControlCountHasBeenSet = true; m_routingControlCount = value; }
    inline ControlPanel& WithRoutingControlCount(int value) { SetRoutingControlCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status of control panel. Status can be one of the following:
     * PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline ControlPanel& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the control panel owner.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    ControlPanel& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    bool m_defaultControlPanel{false};
    bool m_defaultControlPanelHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_routingControlCount{0};
    bool m_routingControlCountHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
