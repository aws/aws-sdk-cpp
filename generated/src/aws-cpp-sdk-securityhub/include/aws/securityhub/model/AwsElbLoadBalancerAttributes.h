/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsElbLoadBalancerAccessLog.h>
#include <aws/securityhub/model/AwsElbLoadBalancerConnectionDraining.h>
#include <aws/securityhub/model/AwsElbLoadBalancerConnectionSettings.h>
#include <aws/securityhub/model/AwsElbLoadBalancerCrossZoneLoadBalancing.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsElbLoadBalancerAdditionalAttribute.h>
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
   * <p>Contains attributes for the load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerAttributes">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerAttributes
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerAttributes();
    AWS_SECURITYHUB_API AwsElbLoadBalancerAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the access log configuration for the load balancer.</p>
     * <p>If the access log is enabled, the load balancer captures detailed information
     * about all requests. It delivers the information to a specified S3 bucket.</p>
     */
    inline const AwsElbLoadBalancerAccessLog& GetAccessLog() const{ return m_accessLog; }
    inline bool AccessLogHasBeenSet() const { return m_accessLogHasBeenSet; }
    inline void SetAccessLog(const AwsElbLoadBalancerAccessLog& value) { m_accessLogHasBeenSet = true; m_accessLog = value; }
    inline void SetAccessLog(AwsElbLoadBalancerAccessLog&& value) { m_accessLogHasBeenSet = true; m_accessLog = std::move(value); }
    inline AwsElbLoadBalancerAttributes& WithAccessLog(const AwsElbLoadBalancerAccessLog& value) { SetAccessLog(value); return *this;}
    inline AwsElbLoadBalancerAttributes& WithAccessLog(AwsElbLoadBalancerAccessLog&& value) { SetAccessLog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the connection draining configuration for the load
     * balancer.</p> <p>If connection draining is enabled, the load balancer allows
     * existing requests to complete before it shifts traffic away from a deregistered
     * or unhealthy instance.</p>
     */
    inline const AwsElbLoadBalancerConnectionDraining& GetConnectionDraining() const{ return m_connectionDraining; }
    inline bool ConnectionDrainingHasBeenSet() const { return m_connectionDrainingHasBeenSet; }
    inline void SetConnectionDraining(const AwsElbLoadBalancerConnectionDraining& value) { m_connectionDrainingHasBeenSet = true; m_connectionDraining = value; }
    inline void SetConnectionDraining(AwsElbLoadBalancerConnectionDraining&& value) { m_connectionDrainingHasBeenSet = true; m_connectionDraining = std::move(value); }
    inline AwsElbLoadBalancerAttributes& WithConnectionDraining(const AwsElbLoadBalancerConnectionDraining& value) { SetConnectionDraining(value); return *this;}
    inline AwsElbLoadBalancerAttributes& WithConnectionDraining(AwsElbLoadBalancerConnectionDraining&& value) { SetConnectionDraining(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection settings for the load balancer.</p> <p>If an idle timeout is
     * configured, the load balancer allows connections to remain idle for the
     * specified duration. When a connection is idle, no data is sent over the
     * connection.</p>
     */
    inline const AwsElbLoadBalancerConnectionSettings& GetConnectionSettings() const{ return m_connectionSettings; }
    inline bool ConnectionSettingsHasBeenSet() const { return m_connectionSettingsHasBeenSet; }
    inline void SetConnectionSettings(const AwsElbLoadBalancerConnectionSettings& value) { m_connectionSettingsHasBeenSet = true; m_connectionSettings = value; }
    inline void SetConnectionSettings(AwsElbLoadBalancerConnectionSettings&& value) { m_connectionSettingsHasBeenSet = true; m_connectionSettings = std::move(value); }
    inline AwsElbLoadBalancerAttributes& WithConnectionSettings(const AwsElbLoadBalancerConnectionSettings& value) { SetConnectionSettings(value); return *this;}
    inline AwsElbLoadBalancerAttributes& WithConnectionSettings(AwsElbLoadBalancerConnectionSettings&& value) { SetConnectionSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cross-zone load balancing settings for the load balancer.</p> <p>If
     * cross-zone load balancing is enabled, the load balancer routes the request
     * traffic evenly across all instances regardless of the Availability Zones.</p>
     */
    inline const AwsElbLoadBalancerCrossZoneLoadBalancing& GetCrossZoneLoadBalancing() const{ return m_crossZoneLoadBalancing; }
    inline bool CrossZoneLoadBalancingHasBeenSet() const { return m_crossZoneLoadBalancingHasBeenSet; }
    inline void SetCrossZoneLoadBalancing(const AwsElbLoadBalancerCrossZoneLoadBalancing& value) { m_crossZoneLoadBalancingHasBeenSet = true; m_crossZoneLoadBalancing = value; }
    inline void SetCrossZoneLoadBalancing(AwsElbLoadBalancerCrossZoneLoadBalancing&& value) { m_crossZoneLoadBalancingHasBeenSet = true; m_crossZoneLoadBalancing = std::move(value); }
    inline AwsElbLoadBalancerAttributes& WithCrossZoneLoadBalancing(const AwsElbLoadBalancerCrossZoneLoadBalancing& value) { SetCrossZoneLoadBalancing(value); return *this;}
    inline AwsElbLoadBalancerAttributes& WithCrossZoneLoadBalancing(AwsElbLoadBalancerCrossZoneLoadBalancing&& value) { SetCrossZoneLoadBalancing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any additional attributes for a load balancer.</p>
     */
    inline const Aws::Vector<AwsElbLoadBalancerAdditionalAttribute>& GetAdditionalAttributes() const{ return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    inline void SetAdditionalAttributes(const Aws::Vector<AwsElbLoadBalancerAdditionalAttribute>& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }
    inline void SetAdditionalAttributes(Aws::Vector<AwsElbLoadBalancerAdditionalAttribute>&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }
    inline AwsElbLoadBalancerAttributes& WithAdditionalAttributes(const Aws::Vector<AwsElbLoadBalancerAdditionalAttribute>& value) { SetAdditionalAttributes(value); return *this;}
    inline AwsElbLoadBalancerAttributes& WithAdditionalAttributes(Aws::Vector<AwsElbLoadBalancerAdditionalAttribute>&& value) { SetAdditionalAttributes(std::move(value)); return *this;}
    inline AwsElbLoadBalancerAttributes& AddAdditionalAttributes(const AwsElbLoadBalancerAdditionalAttribute& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(value); return *this; }
    inline AwsElbLoadBalancerAttributes& AddAdditionalAttributes(AwsElbLoadBalancerAdditionalAttribute&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AwsElbLoadBalancerAccessLog m_accessLog;
    bool m_accessLogHasBeenSet = false;

    AwsElbLoadBalancerConnectionDraining m_connectionDraining;
    bool m_connectionDrainingHasBeenSet = false;

    AwsElbLoadBalancerConnectionSettings m_connectionSettings;
    bool m_connectionSettingsHasBeenSet = false;

    AwsElbLoadBalancerCrossZoneLoadBalancing m_crossZoneLoadBalancing;
    bool m_crossZoneLoadBalancingHasBeenSet = false;

    Aws::Vector<AwsElbLoadBalancerAdditionalAttribute> m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
