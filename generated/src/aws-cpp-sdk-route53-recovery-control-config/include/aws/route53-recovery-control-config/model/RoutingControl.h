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
   * <p>A routing control has one of two states: ON and OFF. You can map the routing
   * control state to the state of an Amazon Route 53 health check, which can be used
   * to control traffic routing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/RoutingControl">AWS
   * API Reference</a></p>
   */
  class RoutingControl
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API RoutingControl();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API RoutingControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API RoutingControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the control panel that includes the routing
     * control.</p>
     */
    inline const Aws::String& GetControlPanelArn() const{ return m_controlPanelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel that includes the routing
     * control.</p>
     */
    inline bool ControlPanelArnHasBeenSet() const { return m_controlPanelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel that includes the routing
     * control.</p>
     */
    inline void SetControlPanelArn(const Aws::String& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel that includes the routing
     * control.</p>
     */
    inline void SetControlPanelArn(Aws::String&& value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel that includes the routing
     * control.</p>
     */
    inline void SetControlPanelArn(const char* value) { m_controlPanelArnHasBeenSet = true; m_controlPanelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel that includes the routing
     * control.</p>
     */
    inline RoutingControl& WithControlPanelArn(const Aws::String& value) { SetControlPanelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel that includes the routing
     * control.</p>
     */
    inline RoutingControl& WithControlPanelArn(Aws::String&& value) { SetControlPanelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel that includes the routing
     * control.</p>
     */
    inline RoutingControl& WithControlPanelArn(const char* value) { SetControlPanelArn(value); return *this;}


    /**
     * <p>The name of the routing control.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the routing control.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the routing control.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the routing control.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the routing control.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the routing control.</p>
     */
    inline RoutingControl& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the routing control.</p>
     */
    inline RoutingControl& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the routing control.</p>
     */
    inline RoutingControl& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const{ return m_routingControlArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline void SetRoutingControlArn(const Aws::String& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline void SetRoutingControlArn(Aws::String&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline void SetRoutingControlArn(const char* value) { m_routingControlArnHasBeenSet = true; m_routingControlArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline RoutingControl& WithRoutingControlArn(const Aws::String& value) { SetRoutingControlArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline RoutingControl& WithRoutingControlArn(Aws::String&& value) { SetRoutingControlArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline RoutingControl& WithRoutingControlArn(const char* value) { SetRoutingControlArn(value); return *this;}


    /**
     * <p>The deployment status of a routing control. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The deployment status of a routing control. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The deployment status of a routing control. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The deployment status of a routing control. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The deployment status of a routing control. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline RoutingControl& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The deployment status of a routing control. Status can be one of the
     * following: PENDING, DEPLOYED, PENDING_DELETION.</p>
     */
    inline RoutingControl& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
