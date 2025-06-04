/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/LoggingConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{
  class DescribeLoggingConfigurationResult
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeLoggingConfigurationResult() = default;
    AWS_NETWORKFIREWALL_API DescribeLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DescribeLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
    template<typename FirewallArnT = Aws::String>
    void SetFirewallArn(FirewallArnT&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::forward<FirewallArnT>(value); }
    template<typename FirewallArnT = Aws::String>
    DescribeLoggingConfigurationResult& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    void SetLoggingConfiguration(LoggingConfigurationT&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::forward<LoggingConfigurationT>(value); }
    template<typename LoggingConfigurationT = LoggingConfiguration>
    DescribeLoggingConfigurationResult& WithLoggingConfiguration(LoggingConfigurationT&& value) { SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean that reflects whether or not the firewall monitoring dashboard is
     * enabled on a firewall.</p> <p> Returns <code>TRUE</code> when the firewall
     * monitoring dashboard is enabled on the firewall. Returns <code>FALSE</code> when
     * the firewall monitoring dashboard is not enabled on the firewall. </p>
     */
    inline bool GetEnableMonitoringDashboard() const { return m_enableMonitoringDashboard; }
    inline void SetEnableMonitoringDashboard(bool value) { m_enableMonitoringDashboardHasBeenSet = true; m_enableMonitoringDashboard = value; }
    inline DescribeLoggingConfigurationResult& WithEnableMonitoringDashboard(bool value) { SetEnableMonitoringDashboard(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLoggingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    bool m_enableMonitoringDashboard{false};
    bool m_enableMonitoringDashboardHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
