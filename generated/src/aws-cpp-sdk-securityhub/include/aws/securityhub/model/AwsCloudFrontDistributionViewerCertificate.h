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
   * <p>Provides information about the TLS/SSL configuration that the CloudFront
   * distribution uses to communicate with viewers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionViewerCertificate">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionViewerCertificate
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionViewerCertificate() = default;
    AWS_SECURITYHUB_API AwsCloudFrontDistributionViewerCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionViewerCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the ACM certificate. Used if the certificate is stored in ACM. If
     * you provide an ACM certificate ARN, you must also provide
     * <code>MinimumCertificateVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline const Aws::String& GetAcmCertificateArn() const { return m_acmCertificateArn; }
    inline bool AcmCertificateArnHasBeenSet() const { return m_acmCertificateArnHasBeenSet; }
    template<typename AcmCertificateArnT = Aws::String>
    void SetAcmCertificateArn(AcmCertificateArnT&& value) { m_acmCertificateArnHasBeenSet = true; m_acmCertificateArn = std::forward<AcmCertificateArnT>(value); }
    template<typename AcmCertificateArnT = Aws::String>
    AwsCloudFrontDistributionViewerCertificate& WithAcmCertificateArn(AcmCertificateArnT&& value) { SetAcmCertificateArn(std::forward<AcmCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the certificate. Note that in CloudFront, this attribute is
     * deprecated.</p>
     */
    inline const Aws::String& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = Aws::String>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = Aws::String>
    AwsCloudFrontDistributionViewerCertificate& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the certificate identified by <code>Certificate</code>. Note
     * that in CloudFront, this attribute is deprecated.</p>
     */
    inline const Aws::String& GetCertificateSource() const { return m_certificateSource; }
    inline bool CertificateSourceHasBeenSet() const { return m_certificateSourceHasBeenSet; }
    template<typename CertificateSourceT = Aws::String>
    void SetCertificateSource(CertificateSourceT&& value) { m_certificateSourceHasBeenSet = true; m_certificateSource = std::forward<CertificateSourceT>(value); }
    template<typename CertificateSourceT = Aws::String>
    AwsCloudFrontDistributionViewerCertificate& WithCertificateSource(CertificateSourceT&& value) { SetCertificateSource(std::forward<CertificateSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the distribution uses the CloudFront domain name. If set to
     * <code>false</code>, then you provide either <code>AcmCertificateArn</code> or
     * <code>IamCertificateId</code>.</p>
     */
    inline bool GetCloudFrontDefaultCertificate() const { return m_cloudFrontDefaultCertificate; }
    inline bool CloudFrontDefaultCertificateHasBeenSet() const { return m_cloudFrontDefaultCertificateHasBeenSet; }
    inline void SetCloudFrontDefaultCertificate(bool value) { m_cloudFrontDefaultCertificateHasBeenSet = true; m_cloudFrontDefaultCertificate = value; }
    inline AwsCloudFrontDistributionViewerCertificate& WithCloudFrontDefaultCertificate(bool value) { SetCloudFrontDefaultCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the IAM certificate. Used if the certificate is stored in
     * IAM. If you provide <code>IamCertificateId</code>, then you also must provide
     * <code>MinimumProtocolVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline const Aws::String& GetIamCertificateId() const { return m_iamCertificateId; }
    inline bool IamCertificateIdHasBeenSet() const { return m_iamCertificateIdHasBeenSet; }
    template<typename IamCertificateIdT = Aws::String>
    void SetIamCertificateId(IamCertificateIdT&& value) { m_iamCertificateIdHasBeenSet = true; m_iamCertificateId = std::forward<IamCertificateIdT>(value); }
    template<typename IamCertificateIdT = Aws::String>
    AwsCloudFrontDistributionViewerCertificate& WithIamCertificateId(IamCertificateIdT&& value) { SetIamCertificateId(std::forward<IamCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security policy that CloudFront uses for HTTPS connections with viewers.
     * If <code>SslSupportMethod</code> is <code>sni-only</code>, then
     * <code>MinimumProtocolVersion</code> must be <code>TLSv1</code> or higher.</p>
     */
    inline const Aws::String& GetMinimumProtocolVersion() const { return m_minimumProtocolVersion; }
    inline bool MinimumProtocolVersionHasBeenSet() const { return m_minimumProtocolVersionHasBeenSet; }
    template<typename MinimumProtocolVersionT = Aws::String>
    void SetMinimumProtocolVersion(MinimumProtocolVersionT&& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = std::forward<MinimumProtocolVersionT>(value); }
    template<typename MinimumProtocolVersionT = Aws::String>
    AwsCloudFrontDistributionViewerCertificate& WithMinimumProtocolVersion(MinimumProtocolVersionT&& value) { SetMinimumProtocolVersion(std::forward<MinimumProtocolVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The viewers that the distribution accepts HTTPS connections from.</p>
     */
    inline const Aws::String& GetSslSupportMethod() const { return m_sslSupportMethod; }
    inline bool SslSupportMethodHasBeenSet() const { return m_sslSupportMethodHasBeenSet; }
    template<typename SslSupportMethodT = Aws::String>
    void SetSslSupportMethod(SslSupportMethodT&& value) { m_sslSupportMethodHasBeenSet = true; m_sslSupportMethod = std::forward<SslSupportMethodT>(value); }
    template<typename SslSupportMethodT = Aws::String>
    AwsCloudFrontDistributionViewerCertificate& WithSslSupportMethod(SslSupportMethodT&& value) { SetSslSupportMethod(std::forward<SslSupportMethodT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acmCertificateArn;
    bool m_acmCertificateArnHasBeenSet = false;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::String m_certificateSource;
    bool m_certificateSourceHasBeenSet = false;

    bool m_cloudFrontDefaultCertificate{false};
    bool m_cloudFrontDefaultCertificateHasBeenSet = false;

    Aws::String m_iamCertificateId;
    bool m_iamCertificateIdHasBeenSet = false;

    Aws::String m_minimumProtocolVersion;
    bool m_minimumProtocolVersionHasBeenSet = false;

    Aws::String m_sslSupportMethod;
    bool m_sslSupportMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
