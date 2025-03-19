/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/HlsEncryptionType.h>
#include <aws/mediaconvert/model/HlsInitializationVectorInManifest.h>
#include <aws/mediaconvert/model/HlsOfflineEncrypted.h>
#include <aws/mediaconvert/model/SpekeKeyProvider.h>
#include <aws/mediaconvert/model/StaticKeyProvider.h>
#include <aws/mediaconvert/model/HlsKeyProviderType.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for HLS encryption<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsEncryptionSettings">AWS
   * API Reference</a></p>
   */
  class HlsEncryptionSettings
  {
  public:
    AWS_MEDIACONVERT_API HlsEncryptionSettings() = default;
    AWS_MEDIACONVERT_API HlsEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HlsEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline const Aws::String& GetConstantInitializationVector() const { return m_constantInitializationVector; }
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }
    template<typename ConstantInitializationVectorT = Aws::String>
    void SetConstantInitializationVector(ConstantInitializationVectorT&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::forward<ConstantInitializationVectorT>(value); }
    template<typename ConstantInitializationVectorT = Aws::String>
    HlsEncryptionSettings& WithConstantInitializationVector(ConstantInitializationVectorT&& value) { SetConstantInitializationVector(std::forward<ConstantInitializationVectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Encrypts the segments with the given encryption scheme. Leave blank to disable.
     * Selecting 'Disabled' in the web interface also disables encryption.
     */
    inline HlsEncryptionType GetEncryptionMethod() const { return m_encryptionMethod; }
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }
    inline void SetEncryptionMethod(HlsEncryptionType value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }
    inline HlsEncryptionSettings& WithEncryptionMethod(HlsEncryptionType value) { SetEncryptionMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * The Initialization Vector is a 128-bit number used in conjunction with the key
     * for encrypting blocks. If set to INCLUDE, Initialization Vector is listed in the
     * manifest. Otherwise Initialization Vector is not in the manifest.
     */
    inline HlsInitializationVectorInManifest GetInitializationVectorInManifest() const { return m_initializationVectorInManifest; }
    inline bool InitializationVectorInManifestHasBeenSet() const { return m_initializationVectorInManifestHasBeenSet; }
    inline void SetInitializationVectorInManifest(HlsInitializationVectorInManifest value) { m_initializationVectorInManifestHasBeenSet = true; m_initializationVectorInManifest = value; }
    inline HlsEncryptionSettings& WithInitializationVectorInManifest(HlsInitializationVectorInManifest value) { SetInitializationVectorInManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable this setting to insert the EXT-X-SESSION-KEY element into the master
     * playlist. This allows for offline Apple HLS FairPlay content protection.
     */
    inline HlsOfflineEncrypted GetOfflineEncrypted() const { return m_offlineEncrypted; }
    inline bool OfflineEncryptedHasBeenSet() const { return m_offlineEncryptedHasBeenSet; }
    inline void SetOfflineEncrypted(HlsOfflineEncrypted value) { m_offlineEncryptedHasBeenSet = true; m_offlineEncrypted = value; }
    inline HlsEncryptionSettings& WithOfflineEncrypted(HlsOfflineEncrypted value) { SetOfflineEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * If your output group type is HLS, DASH, or Microsoft Smooth, use these settings
     * when doing DRM encryption with a SPEKE-compliant key provider. If your output
     * group type is CMAF, use the SpekeKeyProviderCmaf settings instead.
     */
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const { return m_spekeKeyProvider; }
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    void SetSpekeKeyProvider(SpekeKeyProviderT&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::forward<SpekeKeyProviderT>(value); }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    HlsEncryptionSettings& WithSpekeKeyProvider(SpekeKeyProviderT&& value) { SetSpekeKeyProvider(std::forward<SpekeKeyProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use these settings to set up encryption with a static key provider.
     */
    inline const StaticKeyProvider& GetStaticKeyProvider() const { return m_staticKeyProvider; }
    inline bool StaticKeyProviderHasBeenSet() const { return m_staticKeyProviderHasBeenSet; }
    template<typename StaticKeyProviderT = StaticKeyProvider>
    void SetStaticKeyProvider(StaticKeyProviderT&& value) { m_staticKeyProviderHasBeenSet = true; m_staticKeyProvider = std::forward<StaticKeyProviderT>(value); }
    template<typename StaticKeyProviderT = StaticKeyProvider>
    HlsEncryptionSettings& WithStaticKeyProvider(StaticKeyProviderT&& value) { SetStaticKeyProvider(std::forward<StaticKeyProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether your DRM encryption key is static or from a key provider that
     * follows the SPEKE standard. For more information about SPEKE, see
     * https://docs.aws.amazon.com/speke/latest/documentation/what-is-speke.html.
     */
    inline HlsKeyProviderType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(HlsKeyProviderType value) { m_typeHasBeenSet = true; m_type = value; }
    inline HlsEncryptionSettings& WithType(HlsKeyProviderType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet = false;

    HlsEncryptionType m_encryptionMethod{HlsEncryptionType::NOT_SET};
    bool m_encryptionMethodHasBeenSet = false;

    HlsInitializationVectorInManifest m_initializationVectorInManifest{HlsInitializationVectorInManifest::NOT_SET};
    bool m_initializationVectorInManifestHasBeenSet = false;

    HlsOfflineEncrypted m_offlineEncrypted{HlsOfflineEncrypted::NOT_SET};
    bool m_offlineEncryptedHasBeenSet = false;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;

    StaticKeyProvider m_staticKeyProvider;
    bool m_staticKeyProviderHasBeenSet = false;

    HlsKeyProviderType m_type{HlsKeyProviderType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
