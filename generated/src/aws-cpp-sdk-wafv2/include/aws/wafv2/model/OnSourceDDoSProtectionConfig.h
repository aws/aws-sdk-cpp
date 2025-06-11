/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/LowReputationMode.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Configures the level of DDoS protection that applies to web ACLs associated
   * with Application Load Balancers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/OnSourceDDoSProtectionConfig">AWS
   * API Reference</a></p>
   */
  class OnSourceDDoSProtectionConfig
  {
  public:
    AWS_WAFV2_API OnSourceDDoSProtectionConfig() = default;
    AWS_WAFV2_API OnSourceDDoSProtectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API OnSourceDDoSProtectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The level of DDoS protection that applies to web ACLs associated with
     * Application Load Balancers. <code>ACTIVE_UNDER_DDOS</code> protection is enabled
     * by default whenever a web ACL is associated with an Application Load Balancer.
     * In the event that an Application Load Balancer experiences high-load conditions
     * or suspected DDoS attacks, the <code>ACTIVE_UNDER_DDOS</code> protection
     * automatically rate limits traffic from known low reputation sources without
     * disrupting Application Load Balancer availability. <code>ALWAYS_ON</code>
     * protection provides constant, always-on monitoring of known low reputation
     * sources for suspected DDoS attacks. While this provides a higher level of
     * protection, there may be potential impacts on legitimate traffic.</p>
     */
    inline LowReputationMode GetALBLowReputationMode() const { return m_aLBLowReputationMode; }
    inline bool ALBLowReputationModeHasBeenSet() const { return m_aLBLowReputationModeHasBeenSet; }
    inline void SetALBLowReputationMode(LowReputationMode value) { m_aLBLowReputationModeHasBeenSet = true; m_aLBLowReputationMode = value; }
    inline OnSourceDDoSProtectionConfig& WithALBLowReputationMode(LowReputationMode value) { SetALBLowReputationMode(value); return *this;}
    ///@}
  private:

    LowReputationMode m_aLBLowReputationMode{LowReputationMode::NOT_SET};
    bool m_aLBLowReputationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
