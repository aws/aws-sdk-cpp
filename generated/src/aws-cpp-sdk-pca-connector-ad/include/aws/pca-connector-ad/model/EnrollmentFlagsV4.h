/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>

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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Template configurations for v4 template schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/EnrollmentFlagsV4">AWS
   * API Reference</a></p>
   */
  class EnrollmentFlagsV4
  {
  public:
    AWS_PCACONNECTORAD_API EnrollmentFlagsV4();
    AWS_PCACONNECTORAD_API EnrollmentFlagsV4(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API EnrollmentFlagsV4& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allow renewal using the same key.</p>
     */
    inline bool GetEnableKeyReuseOnNtTokenKeysetStorageFull() const{ return m_enableKeyReuseOnNtTokenKeysetStorageFull; }

    /**
     * <p>Allow renewal using the same key.</p>
     */
    inline bool EnableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet() const { return m_enableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet; }

    /**
     * <p>Allow renewal using the same key.</p>
     */
    inline void SetEnableKeyReuseOnNtTokenKeysetStorageFull(bool value) { m_enableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet = true; m_enableKeyReuseOnNtTokenKeysetStorageFull = value; }

    /**
     * <p>Allow renewal using the same key.</p>
     */
    inline EnrollmentFlagsV4& WithEnableKeyReuseOnNtTokenKeysetStorageFull(bool value) { SetEnableKeyReuseOnNtTokenKeysetStorageFull(value); return *this;}


    /**
     * <p>Include symmetric algorithms allowed by the subject.</p>
     */
    inline bool GetIncludeSymmetricAlgorithms() const{ return m_includeSymmetricAlgorithms; }

    /**
     * <p>Include symmetric algorithms allowed by the subject.</p>
     */
    inline bool IncludeSymmetricAlgorithmsHasBeenSet() const { return m_includeSymmetricAlgorithmsHasBeenSet; }

    /**
     * <p>Include symmetric algorithms allowed by the subject.</p>
     */
    inline void SetIncludeSymmetricAlgorithms(bool value) { m_includeSymmetricAlgorithmsHasBeenSet = true; m_includeSymmetricAlgorithms = value; }

    /**
     * <p>Include symmetric algorithms allowed by the subject.</p>
     */
    inline EnrollmentFlagsV4& WithIncludeSymmetricAlgorithms(bool value) { SetIncludeSymmetricAlgorithms(value); return *this;}


    /**
     * <p>This flag instructs the CA to not include the security extension
     * szOID_NTDS_CA_SECURITY_EXT (OID:1.3.6.1.4.1.311.25.2), as specified in [MS-WCCE]
     * sections 2.2.2.7.7.4 and 3.2.2.6.2.1.4.5.9, in the issued certificate. This
     * addresses a Windows Kerberos elevation-of-privilege vulnerability.</p>
     */
    inline bool GetNoSecurityExtension() const{ return m_noSecurityExtension; }

    /**
     * <p>This flag instructs the CA to not include the security extension
     * szOID_NTDS_CA_SECURITY_EXT (OID:1.3.6.1.4.1.311.25.2), as specified in [MS-WCCE]
     * sections 2.2.2.7.7.4 and 3.2.2.6.2.1.4.5.9, in the issued certificate. This
     * addresses a Windows Kerberos elevation-of-privilege vulnerability.</p>
     */
    inline bool NoSecurityExtensionHasBeenSet() const { return m_noSecurityExtensionHasBeenSet; }

    /**
     * <p>This flag instructs the CA to not include the security extension
     * szOID_NTDS_CA_SECURITY_EXT (OID:1.3.6.1.4.1.311.25.2), as specified in [MS-WCCE]
     * sections 2.2.2.7.7.4 and 3.2.2.6.2.1.4.5.9, in the issued certificate. This
     * addresses a Windows Kerberos elevation-of-privilege vulnerability.</p>
     */
    inline void SetNoSecurityExtension(bool value) { m_noSecurityExtensionHasBeenSet = true; m_noSecurityExtension = value; }

    /**
     * <p>This flag instructs the CA to not include the security extension
     * szOID_NTDS_CA_SECURITY_EXT (OID:1.3.6.1.4.1.311.25.2), as specified in [MS-WCCE]
     * sections 2.2.2.7.7.4 and 3.2.2.6.2.1.4.5.9, in the issued certificate. This
     * addresses a Windows Kerberos elevation-of-privilege vulnerability.</p>
     */
    inline EnrollmentFlagsV4& WithNoSecurityExtension(bool value) { SetNoSecurityExtension(value); return *this;}


    /**
     * <p>Delete expired or revoked certificates instead of archiving them.</p>
     */
    inline bool GetRemoveInvalidCertificateFromPersonalStore() const{ return m_removeInvalidCertificateFromPersonalStore; }

    /**
     * <p>Delete expired or revoked certificates instead of archiving them.</p>
     */
    inline bool RemoveInvalidCertificateFromPersonalStoreHasBeenSet() const { return m_removeInvalidCertificateFromPersonalStoreHasBeenSet; }

    /**
     * <p>Delete expired or revoked certificates instead of archiving them.</p>
     */
    inline void SetRemoveInvalidCertificateFromPersonalStore(bool value) { m_removeInvalidCertificateFromPersonalStoreHasBeenSet = true; m_removeInvalidCertificateFromPersonalStore = value; }

    /**
     * <p>Delete expired or revoked certificates instead of archiving them.</p>
     */
    inline EnrollmentFlagsV4& WithRemoveInvalidCertificateFromPersonalStore(bool value) { SetRemoveInvalidCertificateFromPersonalStore(value); return *this;}


    /**
     * <p>Require user interaction when the subject is enrolled and the private key
     * associated with the certificate is used.</p>
     */
    inline bool GetUserInteractionRequired() const{ return m_userInteractionRequired; }

    /**
     * <p>Require user interaction when the subject is enrolled and the private key
     * associated with the certificate is used.</p>
     */
    inline bool UserInteractionRequiredHasBeenSet() const { return m_userInteractionRequiredHasBeenSet; }

    /**
     * <p>Require user interaction when the subject is enrolled and the private key
     * associated with the certificate is used.</p>
     */
    inline void SetUserInteractionRequired(bool value) { m_userInteractionRequiredHasBeenSet = true; m_userInteractionRequired = value; }

    /**
     * <p>Require user interaction when the subject is enrolled and the private key
     * associated with the certificate is used.</p>
     */
    inline EnrollmentFlagsV4& WithUserInteractionRequired(bool value) { SetUserInteractionRequired(value); return *this;}

  private:

    bool m_enableKeyReuseOnNtTokenKeysetStorageFull;
    bool m_enableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet = false;

    bool m_includeSymmetricAlgorithms;
    bool m_includeSymmetricAlgorithmsHasBeenSet = false;

    bool m_noSecurityExtension;
    bool m_noSecurityExtensionHasBeenSet = false;

    bool m_removeInvalidCertificateFromPersonalStore;
    bool m_removeInvalidCertificateFromPersonalStoreHasBeenSet = false;

    bool m_userInteractionRequired;
    bool m_userInteractionRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
