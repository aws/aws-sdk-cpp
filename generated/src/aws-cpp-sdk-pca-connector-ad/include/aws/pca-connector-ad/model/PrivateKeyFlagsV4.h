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
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV4();
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV4(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV4& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline const ClientCompatibilityV4& GetClientVersion() const{ return m_clientVersion; }

    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline bool ClientVersionHasBeenSet() const { return m_clientVersionHasBeenSet; }

    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline void SetClientVersion(const ClientCompatibilityV4& value) { m_clientVersionHasBeenSet = true; m_clientVersion = value; }

    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline void SetClientVersion(ClientCompatibilityV4&& value) { m_clientVersionHasBeenSet = true; m_clientVersion = std::move(value); }

    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline PrivateKeyFlagsV4& WithClientVersion(const ClientCompatibilityV4& value) { SetClientVersion(value); return *this;}

    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline PrivateKeyFlagsV4& WithClientVersion(ClientCompatibilityV4&& value) { SetClientVersion(std::move(value)); return *this;}


    /**
     * <p>Allows the private key to be exported.</p>
     */
    inline bool GetExportableKey() const{ return m_exportableKey; }

    /**
     * <p>Allows the private key to be exported.</p>
     */
    inline bool ExportableKeyHasBeenSet() const { return m_exportableKeyHasBeenSet; }

    /**
     * <p>Allows the private key to be exported.</p>
     */
    inline void SetExportableKey(bool value) { m_exportableKeyHasBeenSet = true; m_exportableKey = value; }

    /**
     * <p>Allows the private key to be exported.</p>
     */
    inline PrivateKeyFlagsV4& WithExportableKey(bool value) { SetExportableKey(value); return *this;}


    /**
     * <p>Requires the PKCS #1 v2.1 signature format for certificates. You should
     * verify that your CA, objects, and applications can accept this signature
     * format.</p>
     */
    inline bool GetRequireAlternateSignatureAlgorithm() const{ return m_requireAlternateSignatureAlgorithm; }

    /**
     * <p>Requires the PKCS #1 v2.1 signature format for certificates. You should
     * verify that your CA, objects, and applications can accept this signature
     * format.</p>
     */
    inline bool RequireAlternateSignatureAlgorithmHasBeenSet() const { return m_requireAlternateSignatureAlgorithmHasBeenSet; }

    /**
     * <p>Requires the PKCS #1 v2.1 signature format for certificates. You should
     * verify that your CA, objects, and applications can accept this signature
     * format.</p>
     */
    inline void SetRequireAlternateSignatureAlgorithm(bool value) { m_requireAlternateSignatureAlgorithmHasBeenSet = true; m_requireAlternateSignatureAlgorithm = value; }

    /**
     * <p>Requires the PKCS #1 v2.1 signature format for certificates. You should
     * verify that your CA, objects, and applications can accept this signature
     * format.</p>
     */
    inline PrivateKeyFlagsV4& WithRequireAlternateSignatureAlgorithm(bool value) { SetRequireAlternateSignatureAlgorithm(value); return *this;}


    /**
     * <p>Renew certificate using the same private key.</p>
     */
    inline bool GetRequireSameKeyRenewal() const{ return m_requireSameKeyRenewal; }

    /**
     * <p>Renew certificate using the same private key.</p>
     */
    inline bool RequireSameKeyRenewalHasBeenSet() const { return m_requireSameKeyRenewalHasBeenSet; }

    /**
     * <p>Renew certificate using the same private key.</p>
     */
    inline void SetRequireSameKeyRenewal(bool value) { m_requireSameKeyRenewalHasBeenSet = true; m_requireSameKeyRenewal = value; }

    /**
     * <p>Renew certificate using the same private key.</p>
     */
    inline PrivateKeyFlagsV4& WithRequireSameKeyRenewal(bool value) { SetRequireSameKeyRenewal(value); return *this;}


    /**
     * <p>Require user input when using the private key for enrollment.</p>
     */
    inline bool GetStrongKeyProtectionRequired() const{ return m_strongKeyProtectionRequired; }

    /**
     * <p>Require user input when using the private key for enrollment.</p>
     */
    inline bool StrongKeyProtectionRequiredHasBeenSet() const { return m_strongKeyProtectionRequiredHasBeenSet; }

    /**
     * <p>Require user input when using the private key for enrollment.</p>
     */
    inline void SetStrongKeyProtectionRequired(bool value) { m_strongKeyProtectionRequiredHasBeenSet = true; m_strongKeyProtectionRequired = value; }

    /**
     * <p>Require user input when using the private key for enrollment.</p>
     */
    inline PrivateKeyFlagsV4& WithStrongKeyProtectionRequired(bool value) { SetStrongKeyProtectionRequired(value); return *this;}


    /**
     * <p>Specifies the cryptographic service provider category used to generate
     * private keys. Set to TRUE to use Legacy Cryptographic Service Providers and
     * FALSE to use Key Storage Providers.</p>
     */
    inline bool GetUseLegacyProvider() const{ return m_useLegacyProvider; }

    /**
     * <p>Specifies the cryptographic service provider category used to generate
     * private keys. Set to TRUE to use Legacy Cryptographic Service Providers and
     * FALSE to use Key Storage Providers.</p>
     */
    inline bool UseLegacyProviderHasBeenSet() const { return m_useLegacyProviderHasBeenSet; }

    /**
     * <p>Specifies the cryptographic service provider category used to generate
     * private keys. Set to TRUE to use Legacy Cryptographic Service Providers and
     * FALSE to use Key Storage Providers.</p>
     */
    inline void SetUseLegacyProvider(bool value) { m_useLegacyProviderHasBeenSet = true; m_useLegacyProvider = value; }

    /**
     * <p>Specifies the cryptographic service provider category used to generate
     * private keys. Set to TRUE to use Legacy Cryptographic Service Providers and
     * FALSE to use Key Storage Providers.</p>
     */
    inline PrivateKeyFlagsV4& WithUseLegacyProvider(bool value) { SetUseLegacyProvider(value); return *this;}

  private:

    ClientCompatibilityV4 m_clientVersion;
    bool m_clientVersionHasBeenSet = false;

    bool m_exportableKey;
    bool m_exportableKeyHasBeenSet = false;

    bool m_requireAlternateSignatureAlgorithm;
    bool m_requireAlternateSignatureAlgorithmHasBeenSet = false;

    bool m_requireSameKeyRenewal;
    bool m_requireSameKeyRenewalHasBeenSet = false;

    bool m_strongKeyProtectionRequired;
    bool m_strongKeyProtectionRequiredHasBeenSet = false;

    bool m_useLegacyProvider;
    bool m_useLegacyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
