/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>Contains connection settings for the load balancer.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerConnectionSettings">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerConnectionSettings
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerConnectionSettings();
    AWS_SECURITYHUB_API AwsElbLoadBalancerConnectionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerConnectionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time, in seconds, that the connection can be idle (no data is sent over
     * the connection) before it is closed by the load balancer.</p>
     */
    inline int GetIdleTimeout() const{ return m_idleTimeout; }

    /**
     * <p>The time, in seconds, that the connection can be idle (no data is sent over
     * the connection) before it is closed by the load balancer.</p>
     */
    inline bool IdleTimeoutHasBeenSet() const { return m_idleTimeoutHasBeenSet; }

    /**
     * <p>The time, in seconds, that the connection can be idle (no data is sent over
     * the connection) before it is closed by the load balancer.</p>
     */
    inline void SetIdleTimeout(int value) { m_idleTimeoutHasBeenSet = true; m_idleTimeout = value; }

    /**
     * <p>The time, in seconds, that the connection can be idle (no data is sent over
     * the connection) before it is closed by the load balancer.</p>
     */
    inline AwsElbLoadBalancerConnectionSettings& WithIdleTimeout(int value) { SetIdleTimeout(value); return *this;}

  private:

    int m_idleTimeout;
    bool m_idleTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
