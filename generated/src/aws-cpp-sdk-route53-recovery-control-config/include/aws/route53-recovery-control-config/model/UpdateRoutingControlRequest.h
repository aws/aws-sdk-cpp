/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>The details of the routing control that you're updating.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UpdateRoutingControlRequest">AWS
   * API Reference</a></p>
   */
  class UpdateRoutingControlRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateRoutingControlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoutingControl"; }

    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline const Aws::String& GetRoutingControlArn() const { return m_routingControlArn; }
    inline bool RoutingControlArnHasBeenSet() const { return m_routingControlArnHasBeenSet; }
    template<typename RoutingControlArnT = Aws::String>
    void SetRoutingControlArn(RoutingControlArnT&& value) { m_routingControlArnHasBeenSet = true; m_routingControlArn = std::forward<RoutingControlArnT>(value); }
    template<typename RoutingControlArnT = Aws::String>
    UpdateRoutingControlRequest& WithRoutingControlArn(RoutingControlArnT&& value) { SetRoutingControlArn(std::forward<RoutingControlArnT>(value)); return *this;}
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
    UpdateRoutingControlRequest& WithRoutingControlName(RoutingControlNameT&& value) { SetRoutingControlName(std::forward<RoutingControlNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;

    Aws::String m_routingControlName;
    bool m_routingControlNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
