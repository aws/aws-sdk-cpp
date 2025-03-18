/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/ClientCompatibilityV3.h>
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
   * <p>Private key flags for v3 templates specify the client compatibility, if the
   * private key can be exported, if user input is required when using a private key,
   * and if an alternate signature algorithm should be used.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/PrivateKeyFlagsV3">AWS
   * API Reference</a></p>
   */
  class PrivateKeyFlagsV3
  {
  public:
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV3() = default;
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV3(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline ClientCompatibilityV3 GetClientVersion() const { return m_clientVersion; }
    inline bool ClientVersionHasBeenSet() const { return m_clientVersionHasBeenSet; }
    inline void SetClientVersion(ClientCompatibilityV3 value) { m_clientVersionHasBeenSet = true; m_clientVersion = value; }
    inline PrivateKeyFlagsV3& WithClientVersion(ClientCompatibilityV3 value) { SetClientVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows the private key to be exported.</p>
     */
    inline bool GetExportableKey() const { return m_exportableKey; }
    inline bool ExportableKeyHasBeenSet() const { return m_exportableKeyHasBeenSet; }
    inline void SetExportableKey(bool value) { m_exportableKeyHasBeenSet = true; m_exportableKey = value; }
    inline PrivateKeyFlagsV3& WithExportableKey(bool value) { SetExportableKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reguires the PKCS #1 v2.1 signature format for certificates. You should
     * verify that your CA, objects, and applications can accept this signature
     * format.</p>
     */
    inline bool GetRequireAlternateSignatureAlgorithm() const { return m_requireAlternateSignatureAlgorithm; }
    inline bool RequireAlternateSignatureAlgorithmHasBeenSet() const { return m_requireAlternateSignatureAlgorithmHasBeenSet; }
    inline void SetRequireAlternateSignatureAlgorithm(bool value) { m_requireAlternateSignatureAlgorithmHasBeenSet = true; m_requireAlternateSignatureAlgorithm = value; }
    inline PrivateKeyFlagsV3& WithRequireAlternateSignatureAlgorithm(bool value) { SetRequireAlternateSignatureAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Requirer user input when using the private key for enrollment.</p>
     */
    inline bool GetStrongKeyProtectionRequired() const { return m_strongKeyProtectionRequired; }
    inline bool StrongKeyProtectionRequiredHasBeenSet() const { return m_strongKeyProtectionRequiredHasBeenSet; }
    inline void SetStrongKeyProtectionRequired(bool value) { m_strongKeyProtectionRequiredHasBeenSet = true; m_strongKeyProtectionRequired = value; }
    inline PrivateKeyFlagsV3& WithStrongKeyProtectionRequired(bool value) { SetStrongKeyProtectionRequired(value); return *this;}
    ///@}
  private:

    ClientCompatibilityV3 m_clientVersion{ClientCompatibilityV3::NOT_SET};
    bool m_clientVersionHasBeenSet = false;

    bool m_exportableKey{false};
    bool m_exportableKeyHasBeenSet = false;

    bool m_requireAlternateSignatureAlgorithm{false};
    bool m_requireAlternateSignatureAlgorithmHasBeenSet = false;

    bool m_strongKeyProtectionRequired{false};
    bool m_strongKeyProtectionRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
