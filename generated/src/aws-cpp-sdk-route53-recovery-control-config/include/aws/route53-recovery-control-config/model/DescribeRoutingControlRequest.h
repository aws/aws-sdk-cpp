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
   */
  class DescribeRoutingControlRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API DescribeRoutingControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRoutingControl"; }

    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String SerializePayload() const override;


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
    inline DescribeRoutingControlRequest& WithRoutingControlArn(const Aws::String& value) { SetRoutingControlArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline DescribeRoutingControlRequest& WithRoutingControlArn(Aws::String&& value) { SetRoutingControlArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the routing control.</p>
     */
    inline DescribeRoutingControlRequest& WithRoutingControlArn(const char* value) { SetRoutingControlArn(value); return *this;}

  private:

    Aws::String m_routingControlArn;
    bool m_routingControlArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
