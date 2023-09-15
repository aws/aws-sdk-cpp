/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/ClientCompatibilityV2.h>
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
   * <p>Private key flags for v2 templates specify the client compatibility, if the
   * private key can be exported, and if user input is required when using a private
   * key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/PrivateKeyFlagsV2">AWS
   * API Reference</a></p>
   */
  class PrivateKeyFlagsV2
  {
  public:
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV2();
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API PrivateKeyFlagsV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline const ClientCompatibilityV2& GetClientVersion() const{ return m_clientVersion; }

    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline bool ClientVersionHasBeenSet() const { return m_clientVersionHasBeenSet; }

    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline void SetClientVersion(const ClientCompatibilityV2& value) { m_clientVersionHasBeenSet = true; m_clientVersion = value; }

    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline void SetClientVersion(ClientCompatibilityV2&& value) { m_clientVersionHasBeenSet = true; m_clientVersion = std::move(value); }

    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline PrivateKeyFlagsV2& WithClientVersion(const ClientCompatibilityV2& value) { SetClientVersion(value); return *this;}

    /**
     * <p>Defines the minimum client compatibility.</p>
     */
    inline PrivateKeyFlagsV2& WithClientVersion(ClientCompatibilityV2&& value) { SetClientVersion(std::move(value)); return *this;}


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
    inline PrivateKeyFlagsV2& WithExportableKey(bool value) { SetExportableKey(value); return *this;}


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
    inline PrivateKeyFlagsV2& WithStrongKeyProtectionRequired(bool value) { SetStrongKeyProtectionRequired(value); return *this;}

  private:

    ClientCompatibilityV2 m_clientVersion;
    bool m_clientVersionHasBeenSet = false;

    bool m_exportableKey;
    bool m_exportableKeyHasBeenSet = false;

    bool m_strongKeyProtectionRequired;
    bool m_strongKeyProtectionRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
