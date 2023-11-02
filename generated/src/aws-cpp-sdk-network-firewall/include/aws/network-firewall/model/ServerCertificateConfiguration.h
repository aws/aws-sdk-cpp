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
    AWS_NETWORKFIREWALL_API ServerCertificateConfiguration();
    AWS_NETWORKFIREWALL_API ServerCertificateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API ServerCertificateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of server certificates to use for inbound SSL/TLS inspection.</p>
     */
    inline const Aws::Vector<ServerCertificate>& GetServerCertificates() const{ return m_serverCertificates; }

    /**
     * <p>The list of server certificates to use for inbound SSL/TLS inspection.</p>
     */
    inline bool ServerCertificatesHasBeenSet() const { return m_serverCertificatesHasBeenSet; }

    /**
     * <p>The list of server certificates to use for inbound SSL/TLS inspection.</p>
     */
    inline void SetServerCertificates(const Aws::Vector<ServerCertificate>& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates = value; }

    /**
     * <p>The list of server certificates to use for inbound SSL/TLS inspection.</p>
     */
    inline void SetServerCertificates(Aws::Vector<ServerCertificate>&& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates = std::move(value); }

    /**
     * <p>The list of server certificates to use for inbound SSL/TLS inspection.</p>
     */
    inline ServerCertificateConfiguration& WithServerCertificates(const Aws::Vector<ServerCertificate>& value) { SetServerCertificates(value); return *this;}

    /**
     * <p>The list of server certificates to use for inbound SSL/TLS inspection.</p>
     */
    inline ServerCertificateConfiguration& WithServerCertificates(Aws::Vector<ServerCertificate>&& value) { SetServerCertificates(std::move(value)); return *this;}

    /**
     * <p>The list of server certificates to use for inbound SSL/TLS inspection.</p>
     */
    inline ServerCertificateConfiguration& AddServerCertificates(const ServerCertificate& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates.push_back(value); return *this; }

    /**
     * <p>The list of server certificates to use for inbound SSL/TLS inspection.</p>
     */
    inline ServerCertificateConfiguration& AddServerCertificates(ServerCertificate&& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of scopes.</p>
     */
    inline const Aws::Vector<ServerCertificateScope>& GetScopes() const{ return m_scopes; }

    /**
     * <p>A list of scopes.</p>
     */
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }

    /**
     * <p>A list of scopes.</p>
     */
    inline void SetScopes(const Aws::Vector<ServerCertificateScope>& value) { m_scopesHasBeenSet = true; m_scopes = value; }

    /**
     * <p>A list of scopes.</p>
     */
    inline void SetScopes(Aws::Vector<ServerCertificateScope>&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }

    /**
     * <p>A list of scopes.</p>
     */
    inline ServerCertificateConfiguration& WithScopes(const Aws::Vector<ServerCertificateScope>& value) { SetScopes(value); return *this;}

    /**
     * <p>A list of scopes.</p>
     */
    inline ServerCertificateConfiguration& WithScopes(Aws::Vector<ServerCertificateScope>&& value) { SetScopes(std::move(value)); return *this;}

    /**
     * <p>A list of scopes.</p>
     */
    inline ServerCertificateConfiguration& AddScopes(const ServerCertificateScope& value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }

    /**
     * <p>A list of scopes.</p>
     */
    inline ServerCertificateConfiguration& AddScopes(ServerCertificateScope&& value) { m_scopesHasBeenSet = true; m_scopes.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the imported certificate authority (CA)
     * certificate within Certificate Manager (ACM) to use for outbound SSL/TLS
     * inspection.</p> <p>The following limitations apply:</p> <ul> <li> <p>You can use
     * CA certificates that you imported into ACM, but you can't generate CA
     * certificates with ACM.</p> </li> <li> <p>You can't use certificates issued by
     * Private Certificate Authority.</p> </li> </ul> <p>For more information about
     * configuring certificates for outbound inspection, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">Using
     * SSL/TLS certificates with certificates with TLS inspection configurations</a> in
     * the <i>Network Firewall Developer Guide</i>. </p> <p>For information about
     * working with certificates in ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates</a> in the <i>Certificate Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the imported certificate authority (CA)
     * certificate within Certificate Manager (ACM) to use for outbound SSL/TLS
     * inspection.</p> <p>The following limitations apply:</p> <ul> <li> <p>You can use
     * CA certificates that you imported into ACM, but you can't generate CA
     * certificates with ACM.</p> </li> <li> <p>You can't use certificates issued by
     * Private Certificate Authority.</p> </li> </ul> <p>For more information about
     * configuring certificates for outbound inspection, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">Using
     * SSL/TLS certificates with certificates with TLS inspection configurations</a> in
     * the <i>Network Firewall Developer Guide</i>. </p> <p>For information about
     * working with certificates in ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates</a> in the <i>Certificate Manager User Guide</i>.</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the imported certificate authority (CA)
     * certificate within Certificate Manager (ACM) to use for outbound SSL/TLS
     * inspection.</p> <p>The following limitations apply:</p> <ul> <li> <p>You can use
     * CA certificates that you imported into ACM, but you can't generate CA
     * certificates with ACM.</p> </li> <li> <p>You can't use certificates issued by
     * Private Certificate Authority.</p> </li> </ul> <p>For more information about
     * configuring certificates for outbound inspection, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">Using
     * SSL/TLS certificates with certificates with TLS inspection configurations</a> in
     * the <i>Network Firewall Developer Guide</i>. </p> <p>For information about
     * working with certificates in ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates</a> in the <i>Certificate Manager User Guide</i>.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the imported certificate authority (CA)
     * certificate within Certificate Manager (ACM) to use for outbound SSL/TLS
     * inspection.</p> <p>The following limitations apply:</p> <ul> <li> <p>You can use
     * CA certificates that you imported into ACM, but you can't generate CA
     * certificates with ACM.</p> </li> <li> <p>You can't use certificates issued by
     * Private Certificate Authority.</p> </li> </ul> <p>For more information about
     * configuring certificates for outbound inspection, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">Using
     * SSL/TLS certificates with certificates with TLS inspection configurations</a> in
     * the <i>Network Firewall Developer Guide</i>. </p> <p>For information about
     * working with certificates in ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates</a> in the <i>Certificate Manager User Guide</i>.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the imported certificate authority (CA)
     * certificate within Certificate Manager (ACM) to use for outbound SSL/TLS
     * inspection.</p> <p>The following limitations apply:</p> <ul> <li> <p>You can use
     * CA certificates that you imported into ACM, but you can't generate CA
     * certificates with ACM.</p> </li> <li> <p>You can't use certificates issued by
     * Private Certificate Authority.</p> </li> </ul> <p>For more information about
     * configuring certificates for outbound inspection, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">Using
     * SSL/TLS certificates with certificates with TLS inspection configurations</a> in
     * the <i>Network Firewall Developer Guide</i>. </p> <p>For information about
     * working with certificates in ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates</a> in the <i>Certificate Manager User Guide</i>.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the imported certificate authority (CA)
     * certificate within Certificate Manager (ACM) to use for outbound SSL/TLS
     * inspection.</p> <p>The following limitations apply:</p> <ul> <li> <p>You can use
     * CA certificates that you imported into ACM, but you can't generate CA
     * certificates with ACM.</p> </li> <li> <p>You can't use certificates issued by
     * Private Certificate Authority.</p> </li> </ul> <p>For more information about
     * configuring certificates for outbound inspection, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">Using
     * SSL/TLS certificates with certificates with TLS inspection configurations</a> in
     * the <i>Network Firewall Developer Guide</i>. </p> <p>For information about
     * working with certificates in ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates</a> in the <i>Certificate Manager User Guide</i>.</p>
     */
    inline ServerCertificateConfiguration& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the imported certificate authority (CA)
     * certificate within Certificate Manager (ACM) to use for outbound SSL/TLS
     * inspection.</p> <p>The following limitations apply:</p> <ul> <li> <p>You can use
     * CA certificates that you imported into ACM, but you can't generate CA
     * certificates with ACM.</p> </li> <li> <p>You can't use certificates issued by
     * Private Certificate Authority.</p> </li> </ul> <p>For more information about
     * configuring certificates for outbound inspection, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">Using
     * SSL/TLS certificates with certificates with TLS inspection configurations</a> in
     * the <i>Network Firewall Developer Guide</i>. </p> <p>For information about
     * working with certificates in ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates</a> in the <i>Certificate Manager User Guide</i>.</p>
     */
    inline ServerCertificateConfiguration& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the imported certificate authority (CA)
     * certificate within Certificate Manager (ACM) to use for outbound SSL/TLS
     * inspection.</p> <p>The following limitations apply:</p> <ul> <li> <p>You can use
     * CA certificates that you imported into ACM, but you can't generate CA
     * certificates with ACM.</p> </li> <li> <p>You can't use certificates issued by
     * Private Certificate Authority.</p> </li> </ul> <p>For more information about
     * configuring certificates for outbound inspection, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-certificate-requirements.html">Using
     * SSL/TLS certificates with certificates with TLS inspection configurations</a> in
     * the <i>Network Firewall Developer Guide</i>. </p> <p>For information about
     * working with certificates in ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates</a> in the <i>Certificate Manager User Guide</i>.</p>
     */
    inline ServerCertificateConfiguration& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>When enabled, Network Firewall checks if the server certificate presented by
     * the server in the SSL/TLS connection has a revoked or unkown status. If the
     * certificate has an unknown or revoked status, you must specify the actions that
     * Network Firewall takes on outbound traffic. To check the certificate revocation
     * status, you must also specify a <code>CertificateAuthorityArn</code> in
     * <a>ServerCertificateConfiguration</a>.</p>
     */
    inline const CheckCertificateRevocationStatusActions& GetCheckCertificateRevocationStatus() const{ return m_checkCertificateRevocationStatus; }

    /**
     * <p>When enabled, Network Firewall checks if the server certificate presented by
     * the server in the SSL/TLS connection has a revoked or unkown status. If the
     * certificate has an unknown or revoked status, you must specify the actions that
     * Network Firewall takes on outbound traffic. To check the certificate revocation
     * status, you must also specify a <code>CertificateAuthorityArn</code> in
     * <a>ServerCertificateConfiguration</a>.</p>
     */
    inline bool CheckCertificateRevocationStatusHasBeenSet() const { return m_checkCertificateRevocationStatusHasBeenSet; }

    /**
     * <p>When enabled, Network Firewall checks if the server certificate presented by
     * the server in the SSL/TLS connection has a revoked or unkown status. If the
     * certificate has an unknown or revoked status, you must specify the actions that
     * Network Firewall takes on outbound traffic. To check the certificate revocation
     * status, you must also specify a <code>CertificateAuthorityArn</code> in
     * <a>ServerCertificateConfiguration</a>.</p>
     */
    inline void SetCheckCertificateRevocationStatus(const CheckCertificateRevocationStatusActions& value) { m_checkCertificateRevocationStatusHasBeenSet = true; m_checkCertificateRevocationStatus = value; }

    /**
     * <p>When enabled, Network Firewall checks if the server certificate presented by
     * the server in the SSL/TLS connection has a revoked or unkown status. If the
     * certificate has an unknown or revoked status, you must specify the actions that
     * Network Firewall takes on outbound traffic. To check the certificate revocation
     * status, you must also specify a <code>CertificateAuthorityArn</code> in
     * <a>ServerCertificateConfiguration</a>.</p>
     */
    inline void SetCheckCertificateRevocationStatus(CheckCertificateRevocationStatusActions&& value) { m_checkCertificateRevocationStatusHasBeenSet = true; m_checkCertificateRevocationStatus = std::move(value); }

    /**
     * <p>When enabled, Network Firewall checks if the server certificate presented by
     * the server in the SSL/TLS connection has a revoked or unkown status. If the
     * certificate has an unknown or revoked status, you must specify the actions that
     * Network Firewall takes on outbound traffic. To check the certificate revocation
     * status, you must also specify a <code>CertificateAuthorityArn</code> in
     * <a>ServerCertificateConfiguration</a>.</p>
     */
    inline ServerCertificateConfiguration& WithCheckCertificateRevocationStatus(const CheckCertificateRevocationStatusActions& value) { SetCheckCertificateRevocationStatus(value); return *this;}

    /**
     * <p>When enabled, Network Firewall checks if the server certificate presented by
     * the server in the SSL/TLS connection has a revoked or unkown status. If the
     * certificate has an unknown or revoked status, you must specify the actions that
     * Network Firewall takes on outbound traffic. To check the certificate revocation
     * status, you must also specify a <code>CertificateAuthorityArn</code> in
     * <a>ServerCertificateConfiguration</a>.</p>
     */
    inline ServerCertificateConfiguration& WithCheckCertificateRevocationStatus(CheckCertificateRevocationStatusActions&& value) { SetCheckCertificateRevocationStatus(std::move(value)); return *this;}

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
