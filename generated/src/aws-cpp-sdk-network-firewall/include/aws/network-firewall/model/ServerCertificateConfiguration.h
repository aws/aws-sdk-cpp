/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/ServerCertificate.h>
#include <aws/network-firewall/model/ServerCertificateScope.h>
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
   * <p>Configures the associated Certificate Manager Secure Sockets Layer/Transport
   * Layer Security (SSL/TLS) server certificates and scope settings Network Firewall
   * uses to decrypt traffic in a <a>TLSInspectionConfiguration</a>. For information
   * about working with SSL/TLS certificates for TLS inspection, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">
   * Requirements for using SSL/TLS server certficiates with TLS inspection
   * configurations</a> in the <i>Network Firewall Developer Guide</i>.</p> 
   * <p>If a server certificate that's associated with your
   * <a>TLSInspectionConfiguration</a> is revoked, deleted, or expired it can result
   * in client-side TLS errors.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ServerCertificateConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerCertificateConfiguration
  {
  public:
    AWS_NETWORKFIREWALL_API ServerCertificateConfiguration();
    AWS_NETWORKFIREWALL_API ServerCertificateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API ServerCertificateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of a server certificate configuration's Certificate Manager SSL/TLS
     * certificates.</p>
     */
    inline const Aws::Vector<ServerCertificate>& GetServerCertificates() const{ return m_serverCertificates; }

    /**
     * <p>The list of a server certificate configuration's Certificate Manager SSL/TLS
     * certificates.</p>
     */
    inline bool ServerCertificatesHasBeenSet() const { return m_serverCertificatesHasBeenSet; }

    /**
     * <p>The list of a server certificate configuration's Certificate Manager SSL/TLS
     * certificates.</p>
     */
    inline void SetServerCertificates(const Aws::Vector<ServerCertificate>& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates = value; }

    /**
     * <p>The list of a server certificate configuration's Certificate Manager SSL/TLS
     * certificates.</p>
     */
    inline void SetServerCertificates(Aws::Vector<ServerCertificate>&& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates = std::move(value); }

    /**
     * <p>The list of a server certificate configuration's Certificate Manager SSL/TLS
     * certificates.</p>
     */
    inline ServerCertificateConfiguration& WithServerCertificates(const Aws::Vector<ServerCertificate>& value) { SetServerCertificates(value); return *this;}

    /**
     * <p>The list of a server certificate configuration's Certificate Manager SSL/TLS
     * certificates.</p>
     */
    inline ServerCertificateConfiguration& WithServerCertificates(Aws::Vector<ServerCertificate>&& value) { SetServerCertificates(std::move(value)); return *this;}

    /**
     * <p>The list of a server certificate configuration's Certificate Manager SSL/TLS
     * certificates.</p>
     */
    inline ServerCertificateConfiguration& AddServerCertificates(const ServerCertificate& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates.push_back(value); return *this; }

    /**
     * <p>The list of a server certificate configuration's Certificate Manager SSL/TLS
     * certificates.</p>
     */
    inline ServerCertificateConfiguration& AddServerCertificates(ServerCertificate&& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of a server certificate configuration's scopes.</p>
     */
    inline const Aws::Vector<ServerCertificateScope>& GetScopes() const{ return m_scopes; }

    /**
     * <p>A list of a server certificate configuration's scopes.</p>
     */
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }

    /**
     * <p>A list of a server certificate configuration's scopes.</p>
     */
    inline void SetScopes(const Aws::Vector<ServerCertificateScope>& value) { m_scopesHasBeenSet = true; m_scopes = value; }

    /**
     * <p>A list of a server certificate configuration's scopes.</p>
     */
    inline void SetScopes(Aws::Vector<ServerCertificateScope>&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }

    /**
     * <p>A list of a server certificate configuration's scopes.</p>
     */
    inline ServerCertificateConfiguration& WithScopes(const Aws::Vector<ServerCertificateScope>& value) { SetScopes(value); return *this;}

    /**
     * <p>A list of a server certificate configuration's scopes.</p>
     */
    inline ServerCertificateConfiguration& WithScopes(Aws::Vector<ServerCertificateScope>&& value) { SetScopes(std::move(value)); return *this;}

    /**
     * <p>A list of a server certificate configuration's scopes.</p>
     */
    inline ServerCertificateConfiguration& AddScopes(const ServerCertificateScope& value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }

    /**
     * <p>A list of a server certificate configuration's scopes.</p>
     */
    inline ServerCertificateConfiguration& AddScopes(ServerCertificateScope&& value) { m_scopesHasBeenSet = true; m_scopes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ServerCertificate> m_serverCertificates;
    bool m_serverCertificatesHasBeenSet = false;

    Aws::Vector<ServerCertificateScope> m_scopes;
    bool m_scopesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
