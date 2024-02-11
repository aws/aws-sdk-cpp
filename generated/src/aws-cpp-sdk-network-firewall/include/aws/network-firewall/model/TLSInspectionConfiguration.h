/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/ServerCertificateConfiguration.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The object that defines a TLS inspection configuration. This, along with
   * <a>TLSInspectionConfigurationResponse</a>, define the TLS inspection
   * configuration. You can retrieve all objects for a TLS inspection configuration
   * by calling <a>DescribeTLSInspectionConfiguration</a>. </p> <p>Network Firewall
   * uses a TLS inspection configuration to decrypt traffic. Network Firewall
   * re-encrypts the traffic before sending it to its destination.</p> <p>To use a
   * TLS inspection configuration, you add it to a new Network Firewall firewall
   * policy, then you apply the firewall policy to a firewall. Network Firewall acts
   * as a proxy service to decrypt and inspect the traffic traveling through your
   * firewalls. You can reference a TLS inspection configuration from more than one
   * firewall policy, and you can use a firewall policy in more than one firewall.
   * For more information about using TLS inspection configurations, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection.html">Inspecting
   * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
   * Firewall Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TLSInspectionConfiguration">AWS
   * API Reference</a></p>
   */
  class TLSInspectionConfiguration
  {
  public:
    AWS_NETWORKFIREWALL_API TLSInspectionConfiguration();
    AWS_NETWORKFIREWALL_API TLSInspectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API TLSInspectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lists the server certificate configurations that are associated with the TLS
     * configuration.</p>
     */
    inline const Aws::Vector<ServerCertificateConfiguration>& GetServerCertificateConfigurations() const{ return m_serverCertificateConfigurations; }

    /**
     * <p>Lists the server certificate configurations that are associated with the TLS
     * configuration.</p>
     */
    inline bool ServerCertificateConfigurationsHasBeenSet() const { return m_serverCertificateConfigurationsHasBeenSet; }

    /**
     * <p>Lists the server certificate configurations that are associated with the TLS
     * configuration.</p>
     */
    inline void SetServerCertificateConfigurations(const Aws::Vector<ServerCertificateConfiguration>& value) { m_serverCertificateConfigurationsHasBeenSet = true; m_serverCertificateConfigurations = value; }

    /**
     * <p>Lists the server certificate configurations that are associated with the TLS
     * configuration.</p>
     */
    inline void SetServerCertificateConfigurations(Aws::Vector<ServerCertificateConfiguration>&& value) { m_serverCertificateConfigurationsHasBeenSet = true; m_serverCertificateConfigurations = std::move(value); }

    /**
     * <p>Lists the server certificate configurations that are associated with the TLS
     * configuration.</p>
     */
    inline TLSInspectionConfiguration& WithServerCertificateConfigurations(const Aws::Vector<ServerCertificateConfiguration>& value) { SetServerCertificateConfigurations(value); return *this;}

    /**
     * <p>Lists the server certificate configurations that are associated with the TLS
     * configuration.</p>
     */
    inline TLSInspectionConfiguration& WithServerCertificateConfigurations(Aws::Vector<ServerCertificateConfiguration>&& value) { SetServerCertificateConfigurations(std::move(value)); return *this;}

    /**
     * <p>Lists the server certificate configurations that are associated with the TLS
     * configuration.</p>
     */
    inline TLSInspectionConfiguration& AddServerCertificateConfigurations(const ServerCertificateConfiguration& value) { m_serverCertificateConfigurationsHasBeenSet = true; m_serverCertificateConfigurations.push_back(value); return *this; }

    /**
     * <p>Lists the server certificate configurations that are associated with the TLS
     * configuration.</p>
     */
    inline TLSInspectionConfiguration& AddServerCertificateConfigurations(ServerCertificateConfiguration&& value) { m_serverCertificateConfigurationsHasBeenSet = true; m_serverCertificateConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ServerCertificateConfiguration> m_serverCertificateConfigurations;
    bool m_serverCertificateConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
