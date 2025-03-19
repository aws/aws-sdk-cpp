/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/ClientCompatibilityV4.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Private key flags for v4 templates specify the client compatibility, if the
   * private key can be exported, if user input is required when using a private key,
   * if an alternate signature algorithm should be used, and if certificates are
   * renewed using the same private key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/PrivateKeyFlagsV4">AWS
   * API Reference</a></p>
   */
  class PrivateKeyFlagsV4
  {
  public:
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV4() = default;
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV4(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV4& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline ClientCompatibilityV4 GetClientVersion() const { return m_clientVersion; }
    inline bool ClientVersionHasBeenSet() const { return m_clientVersionHasBeenSet; }
    inline void SetClientVersion(ClientCompatibilityV4 value) { m_clientVersionHasBeenSet = true; m_clientVersion = value; }
    inline PrivateKeyFlagsV4& WithClientVersion(ClientCompatibilityV4 value) { SetClientVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows the private key to be exported.</p>
     */
    inline bool GetExportableKey() const { return m_exportableKey; }
    inline bool ExportableKeyHasBeenSet() const { return m_exportableKeyHasBeenSet; }
    inline void SetExportableKey(bool value) { m_exportableKeyHasBeenSet = true; m_exportableKey = value; }
    inline PrivateKeyFlagsV4& WithExportableKey(bool value) { SetExportableKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Requires the PKCS #1 v2.1 signature format for certificates. You should
     * verify that your CA, objects, and applications can accept this signature
     * format.</p>
     */
    inline bool GetRequireAlternateSignatureAlgorithm() const { return m_requireAlternateSignatureAlgorithm; }
    inline bool RequireAlternateSignatureAlgorithmHasBeenSet() const { return m_requireAlternateSignatureAlgorithmHasBeenSet; }
    inline void SetRequireAlternateSignatureAlgorithm(bool value) { m_requireAlternateSignatureAlgorithmHasBeenSet = true; m_requireAlternateSignatureAlgorithm = value; }
    inline PrivateKeyFlagsV4& WithRequireAlternateSignatureAlgorithm(bool value) { SetRequireAlternateSignatureAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renew certificate using the same private key.</p>
     */
    inline bool GetRequireSameKeyRenewal() const { return m_requireSameKeyRenewal; }
    inline bool RequireSameKeyRenewalHasBeenSet() const { return m_requireSameKeyRenewalHasBeenSet; }
    inline void SetRequireSameKeyRenewal(bool value) { m_requireSameKeyRenewalHasBeenSet = true; m_requireSameKeyRenewal = value; }
    inline PrivateKeyFlagsV4& WithRequireSameKeyRenewal(bool value) { SetRequireSameKeyRenewal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Require user input when using the private key for enrollment.</p>
     */
    inline bool GetStrongKeyProtectionRequired() const { return m_strongKeyProtectionRequired; }
    inline bool StrongKeyProtectionRequiredHasBeenSet() const { return m_strongKeyProtectionRequiredHasBeenSet; }
    inline void SetStrongKeyProtectionRequired(bool value) { m_strongKeyProtectionRequiredHasBeenSet = true; m_strongKeyProtectionRequired = value; }
    inline PrivateKeyFlagsV4& WithStrongKeyProtectionRequired(bool value) { SetStrongKeyProtectionRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the cryptographic service provider category used to generate
     * private keys. Set to TRUE to use Legacy Cryptographic Service Providers and
     * FALSE to use Key Storage Providers.</p>
     */
    inline bool GetUseLegacyProvider() const { return m_useLegacyProvider; }
    inline bool UseLegacyProviderHasBeenSet() const { return m_useLegacyProviderHasBeenSet; }
    inline void SetUseLegacyProvider(bool value) { m_useLegacyProviderHasBeenSet = true; m_useLegacyProvider = value; }
    inline PrivateKeyFlagsV4& WithUseLegacyProvider(bool value) { SetUseLegacyProvider(value); return *this;}
    ///@}
  private:

    ClientCompatibilityV4 m_clientVersion{ClientCompatibilityV4::NOT_SET};
    bool m_clientVersionHasBeenSet = false;

    bool m_exportableKey{false};
    bool m_exportableKeyHasBeenSet = false;

    bool m_requireAlternateSignatureAlgorithm{false};
    bool m_requireAlternateSignatureAlgorithmHasBeenSet = false;

    bool m_requireSameKeyRenewal{false};
    bool m_requireSameKeyRenewalHasBeenSet = false;

    bool m_strongKeyProtectionRequired{false};
    bool m_strongKeyProtectionRequiredHasBeenSet = false;

    bool m_useLegacyProvider{false};
    bool m_useLegacyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
