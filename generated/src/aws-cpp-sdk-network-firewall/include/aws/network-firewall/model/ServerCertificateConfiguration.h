/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/CheckCertificateRevocationStatusActions.h>
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
   * <p>Configures the Certificate Manager certificates and scope that Network
   * Firewall uses to decrypt and re-encrypt traffic using a
   * <a>TLSInspectionConfiguration</a>. You can configure
   * <code>ServerCertificates</code> for inbound SSL/TLS inspection, a
   * <code>CertificateAuthorityArn</code> for outbound SSL/TLS inspection, or both.
   * For information about working with certificates for TLS inspection, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">
   * Using SSL/TLS server certficiates with TLS inspection configurations</a> in the
   * <i>Network Firewall Developer Guide</i>.</p>  <p>If a server certificate
   * that's associated with your <a>TLSInspectionConfiguration</a> is revoked,
   * deleted, or expired it can result in client-side TLS errors.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ServerCertificateConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerCertificateConfiguration
  {
  public:
    AWS_NETWORKFIREWALL_API ServerCertificateConfiguration() = default;
    AWS_NETWORKFIREWALL_API ServerCertificateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API ServerCertificateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of server certificates to use for inbound SSL/TLS inspection.</p>
     */
    inline const Aws::Vector<ServerCertificate>& GetServerCertificates() const { return m_serverCertificates; }
    inline bool ServerCertificatesHasBeenSet() const { return m_serverCertificatesHasBeenSet; }
    template<typename ServerCertificatesT = Aws::Vector<ServerCertificate>>
    void SetServerCertificates(ServerCertificatesT&& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates = std::forward<ServerCertificatesT>(value); }
    template<typename ServerCertificatesT = Aws::Vector<ServerCertificate>>
    ServerCertificateConfiguration& WithServerCertificates(ServerCertificatesT&& value) { SetServerCertificates(std::forward<ServerCertificatesT>(value)); return *this;}
    template<typename ServerCertificatesT = ServerCertificate>
    ServerCertificateConfiguration& AddServerCertificates(ServerCertificatesT&& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates.emplace_back(std::forward<ServerCertificatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of scopes.</p>
     */
    inline const Aws::Vector<ServerCertificateScope>& GetScopes() const { return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    template<typename ScopesT = Aws::Vector<ServerCertificateScope>>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::Vector<ServerCertificateScope>>
    ServerCertificateConfiguration& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    template<typename ScopesT = ServerCertificateScope>
    ServerCertificateConfiguration& AddScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes.emplace_back(std::forward<ScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the imported certificate authority (CA)
     * certificate within Certificate Manager (ACM) to use for outbound SSL/TLS
     * inspection.</p> <p>The following limitations apply:</p> <ul> <li> <p>You can use
     * CA certificates that you imported into ACM, but you can't generate CA
     * certificates with ACM.</p> </li> <li> <p>You can't use certificates issued by
     * Private Certificate Authority.</p> </li> </ul> <p>For more information about
     * configuring certificates for outbound inspection, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">Using
     * SSL/TLS certificates with TLS inspection configurations</a> in the <i>Network
     * Firewall Developer Guide</i>. </p> <p>For information about working with
     * certificates in ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates</a> in the <i>Certificate Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const { return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    template<typename CertificateAuthorityArnT = Aws::String>
    void SetCertificateAuthorityArn(CertificateAuthorityArnT&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::forward<CertificateAuthorityArnT>(value); }
    template<typename CertificateAuthorityArnT = Aws::String>
    ServerCertificateConfiguration& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When enabled, Network Firewall checks if the server certificate presented by
     * the server in the SSL/TLS connection has a revoked or unkown status. If the
     * certificate has an unknown or revoked status, you must specify the actions that
     * Network Firewall takes on outbound traffic. To check the certificate revocation
     * status, you must also specify a <code>CertificateAuthorityArn</code> in
     * <a>ServerCertificateConfiguration</a>.</p>
     */
    inline const CheckCertificateRevocationStatusActions& GetCheckCertificateRevocationStatus() const { return m_checkCertificateRevocationStatus; }
    inline bool CheckCertificateRevocationStatusHasBeenSet() const { return m_checkCertificateRevocationStatusHasBeenSet; }
    template<typename CheckCertificateRevocationStatusT = CheckCertificateRevocationStatusActions>
    void SetCheckCertificateRevocationStatus(CheckCertificateRevocationStatusT&& value) { m_checkCertificateRevocationStatusHasBeenSet = true; m_checkCertificateRevocationStatus = std::forward<CheckCertificateRevocationStatusT>(value); }
    template<typename CheckCertificateRevocationStatusT = CheckCertificateRevocationStatusActions>
    ServerCertificateConfiguration& WithCheckCertificateRevocationStatus(CheckCertificateRevocationStatusT&& value) { SetCheckCertificateRevocationStatus(std::forward<CheckCertificateRevocationStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServerCertificate> m_serverCertificates;
    bool m_serverCertificatesHasBeenSet = false;

    Aws::Vector<ServerCertificateScope> m_scopes;
    bool m_scopesHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    CheckCertificateRevocationStatusActions m_checkCertificateRevocationStatus;
    bool m_checkCertificateRevocationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
