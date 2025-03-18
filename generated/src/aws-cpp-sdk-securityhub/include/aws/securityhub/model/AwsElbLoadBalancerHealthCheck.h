/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about the health checks that are conducted on the load
   * balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerHealthCheck">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerHealthCheck
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerHealthCheck() = default;
    AWS_SECURITYHUB_API AwsElbLoadBalancerHealthCheck(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerHealthCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of consecutive health check successes required before the instance
     * is moved to the Healthy state.</p>
     */
    inline int GetHealthyThreshold() const { return m_healthyThreshold; }
    inline bool HealthyThresholdHasBeenSet() const { return m_healthyThresholdHasBeenSet; }
    inline void SetHealthyThreshold(int value) { m_healthyThresholdHasBeenSet = true; m_healthyThreshold = value; }
    inline AwsElbLoadBalancerHealthCheck& WithHealthyThreshold(int value) { SetHealthyThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * instance.</p>
     */
    inline int GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline AwsElbLoadBalancerHealthCheck& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance that is being checked. The target specifies the protocol and
     * port. The available protocols are TCP, SSL, HTTP, and HTTPS. The range of valid
     * ports is 1 through 65535.</p> <p>For the HTTP and HTTPS protocols, the target
     * also specifies the ping path.</p> <p>For the TCP protocol, the target is
     * specified as <code>TCP: <i>&lt;port&gt;</i> </code>.</p> <p>For the SSL
     * protocol, the target is specified as <code>SSL.<i>&lt;port&gt;</i> </code>.</p>
     * <p>For the HTTP and HTTPS protocols, the target is specified as <code>
     * <i>&lt;protocol&gt;</i>:<i>&lt;port&gt;</i>/<i>&lt;path to ping&gt;</i>
     * </code>.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    AwsElbLoadBalancerHealthCheck& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check.</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline AwsElbLoadBalancerHealthCheck& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health check failures that must occur before the
     * instance is moved to the Unhealthy state.</p>
     */
    inline int GetUnhealthyThreshold() const { return m_unhealthyThreshold; }
    inline bool UnhealthyThresholdHasBeenSet() const { return m_unhealthyThresholdHasBeenSet; }
    inline void SetUnhealthyThreshold(int value) { m_unhealthyThresholdHasBeenSet = true; m_unhealthyThreshold = value; }
    inline AwsElbLoadBalancerHealthCheck& WithUnhealthyThreshold(int value) { SetUnhealthyThreshold(value); return *this;}
    ///@}
  private:

    int m_healthyThreshold{0};
    bool m_healthyThresholdHasBeenSet = false;

    int m_interval{0};
    bool m_intervalHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    int m_unhealthyThreshold{0};
    bool m_unhealthyThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
