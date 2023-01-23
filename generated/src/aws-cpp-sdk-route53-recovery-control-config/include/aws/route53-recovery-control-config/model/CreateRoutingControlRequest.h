/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>The details of the routing control that you're creating.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/CreateRoutingControlRequest">AWS
   * API Reference</a></p>
   */
  class CreateRoutingControlRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateRoutingControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoutingControl"; }

    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline CreateRoutingControlRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline CreateRoutingControlRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline CreateRoutingControlRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the routing
     * control.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the routing
     * control.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the routing
     * control.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the routing
     * control.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the routing
     * control.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the routing
     * control.</p>
     */
    inline CreateRoutingControlRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the routing
     * control.</p>
     */
    inline CreateRoutingControlRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that includes the routing
     * control.</p>
     */
    inline CreateRoutingControlRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


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
    inline CreateRoutingControlRequest& WithControlPanelArn(const Aws::String& value) { SetControlPanelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel that includes the routing
     * control.</p>
     */
    inline CreateRoutingControlRequest& WithControlPanelArn(Aws::String&& value) { SetControlPanelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the control panel that includes the routing
     * control.</p>
     */
    inline CreateRoutingControlRequest& WithControlPanelArn(const char* value) { SetControlPanelArn(value); return *this;}


    /**
     * <p>The name of the routing control.</p>
     */
    inline const Aws::String& GetRoutingControlName() const{ return m_routingControlName; }

    /**
     * <p>The name of the routing control.</p>
     */
    inline bool RoutingControlNameHasBeenSet() const { return m_routingControlNameHasBeenSet; }

    /**
     * <p>The name of the routing control.</p>
     */
    inline void SetRoutingControlName(const Aws::String& value) { m_routingControlNameHasBeenSet = true; m_routingControlName = value; }

    /**
     * <p>The name of the routing control.</p>
     */
    inline void SetRoutingControlName(Aws::String&& value) { m_routingControlNameHasBeenSet = true; m_routingControlName = std::move(value); }

    /**
     * <p>The name of the routing control.</p>
     */
    inline void SetRoutingControlName(const char* value) { m_routingControlNameHasBeenSet = true; m_routingControlName.assign(value); }

    /**
     * <p>The name of the routing control.</p>
     */
    inline CreateRoutingControlRequest& WithRoutingControlName(const Aws::String& value) { SetRoutingControlName(value); return *this;}

    /**
     * <p>The name of the routing control.</p>
     */
    inline CreateRoutingControlRequest& WithRoutingControlName(Aws::String&& value) { SetRoutingControlName(std::move(value)); return *this;}

    /**
     * <p>The name of the routing control.</p>
     */
    inline CreateRoutingControlRequest& WithRoutingControlName(const char* value) { SetRoutingControlName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_controlPanelArn;
    bool m_controlPanelArnHasBeenSet = false;

    Aws::String m_routingControlName;
    bool m_routingControlNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
