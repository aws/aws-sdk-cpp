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
   * <p>Template configurations for v3 template schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/EnrollmentFlagsV3">AWS
   * API Reference</a></p>
   */
  class EnrollmentFlagsV3
  {
  public:
    AWS_PCACONNECTORAD_API EnrollmentFlagsV3() = default;
    AWS_PCACONNECTORAD_API EnrollmentFlagsV3(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API EnrollmentFlagsV3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allow renewal using the same key.</p>
     */
    inline bool GetEnableKeyReuseOnNtTokenKeysetStorageFull() const { return m_enableKeyReuseOnNtTokenKeysetStorageFull; }
    inline bool EnableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet() const { return m_enableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet; }
    inline void SetEnableKeyReuseOnNtTokenKeysetStorageFull(bool value) { m_enableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet = true; m_enableKeyReuseOnNtTokenKeysetStorageFull = value; }
    inline EnrollmentFlagsV3& WithEnableKeyReuseOnNtTokenKeysetStorageFull(bool value) { SetEnableKeyReuseOnNtTokenKeysetStorageFull(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include symmetric algorithms allowed by the subject.</p>
     */
    inline bool GetIncludeSymmetricAlgorithms() const { return m_includeSymmetricAlgorithms; }
    inline bool IncludeSymmetricAlgorithmsHasBeenSet() const { return m_includeSymmetricAlgorithmsHasBeenSet; }
    inline void SetIncludeSymmetricAlgorithms(bool value) { m_includeSymmetricAlgorithmsHasBeenSet = true; m_includeSymmetricAlgorithms = value; }
    inline EnrollmentFlagsV3& WithIncludeSymmetricAlgorithms(bool value) { SetIncludeSymmetricAlgorithms(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag instructs the CA to not include the security extension
     * szOID_NTDS_CA_SECURITY_EXT (OID:1.3.6.1.4.1.311.25.2), as specified in [MS-WCCE]
     * sections 2.2.2.7.7.4 and 3.2.2.6.2.1.4.5.9, in the issued certificate. This
     * addresses a Windows Kerberos elevation-of-privilege vulnerability.</p>
     */
    inline bool GetNoSecurityExtension() const { return m_noSecurityExtension; }
    inline bool NoSecurityExtensionHasBeenSet() const { return m_noSecurityExtensionHasBeenSet; }
    inline void SetNoSecurityExtension(bool value) { m_noSecurityExtensionHasBeenSet = true; m_noSecurityExtension = value; }
    inline EnrollmentFlagsV3& WithNoSecurityExtension(bool value) { SetNoSecurityExtension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Delete expired or revoked certificates instead of archiving them.</p>
     */
    inline bool GetRemoveInvalidCertificateFromPersonalStore() const { return m_removeInvalidCertificateFromPersonalStore; }
    inline bool RemoveInvalidCertificateFromPersonalStoreHasBeenSet() const { return m_removeInvalidCertificateFromPersonalStoreHasBeenSet; }
    inline void SetRemoveInvalidCertificateFromPersonalStore(bool value) { m_removeInvalidCertificateFromPersonalStoreHasBeenSet = true; m_removeInvalidCertificateFromPersonalStore = value; }
    inline EnrollmentFlagsV3& WithRemoveInvalidCertificateFromPersonalStore(bool value) { SetRemoveInvalidCertificateFromPersonalStore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Require user interaction when the subject is enrolled and the private key
     * associated with the certificate is used.</p>
     */
    inline bool GetUserInteractionRequired() const { return m_userInteractionRequired; }
    inline bool UserInteractionRequiredHasBeenSet() const { return m_userInteractionRequiredHasBeenSet; }
    inline void SetUserInteractionRequired(bool value) { m_userInteractionRequiredHasBeenSet = true; m_userInteractionRequired = value; }
    inline EnrollmentFlagsV3& WithUserInteractionRequired(bool value) { SetUserInteractionRequired(value); return *this;}
    ///@}
  private:

    bool m_enableKeyReuseOnNtTokenKeysetStorageFull{false};
    bool m_enableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet = false;

    bool m_includeSymmetricAlgorithms{false};
    bool m_includeSymmetricAlgorithmsHasBeenSet = false;

    bool m_noSecurityExtension{false};
    bool m_noSecurityExtensionHasBeenSet = false;

    bool m_removeInvalidCertificateFromPersonalStore{false};
    bool m_removeInvalidCertificateFromPersonalStoreHasBeenSet = false;

    bool m_userInteractionRequired{false};
    bool m_userInteractionRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
