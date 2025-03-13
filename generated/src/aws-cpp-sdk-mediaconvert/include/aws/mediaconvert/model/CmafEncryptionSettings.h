/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/CmafEncryptionType.h>
#include <aws/mediaconvert/model/CmafInitializationVectorInManifest.h>
#include <aws/mediaconvert/model/SpekeKeyProviderCmaf.h>
#include <aws/mediaconvert/model/StaticKeyProvider.h>
#include <aws/mediaconvert/model/CmafKeyProviderType.h>
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
   * Settings for CMAF encryption<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CmafEncryptionSettings">AWS
   * API Reference</a></p>
   */
  class CmafEncryptionSettings
  {
  public:
    AWS_MEDIACONVERT_API CmafEncryptionSettings() = default;
    AWS_MEDIACONVERT_API CmafEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CmafEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    CmafEncryptionSettings& WithConstantInitializationVector(ConstantInitializationVectorT&& value) { SetConstantInitializationVector(std::forward<ConstantInitializationVectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the encryption scheme that you want the service to use when encrypting
     * your CMAF segments. Choose AES-CBC subsample or AES_CTR.
     */
    inline CmafEncryptionType GetEncryptionMethod() const { return m_encryptionMethod; }
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }
    inline void SetEncryptionMethod(CmafEncryptionType value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }
    inline CmafEncryptionSettings& WithEncryptionMethod(CmafEncryptionType value) { SetEncryptionMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * When you use DRM with CMAF outputs, choose whether the service writes the
     * 128-bit encryption initialization vector in the HLS and DASH manifests.
     */
    inline CmafInitializationVectorInManifest GetInitializationVectorInManifest() const { return m_initializationVectorInManifest; }
    inline bool InitializationVectorInManifestHasBeenSet() const { return m_initializationVectorInManifestHasBeenSet; }
    inline void SetInitializationVectorInManifest(CmafInitializationVectorInManifest value) { m_initializationVectorInManifestHasBeenSet = true; m_initializationVectorInManifest = value; }
    inline CmafEncryptionSettings& WithInitializationVectorInManifest(CmafInitializationVectorInManifest value) { SetInitializationVectorInManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * If your output group type is CMAF, use these settings when doing DRM encryption
     * with a SPEKE-compliant key provider. If your output group type is HLS, DASH, or
     * Microsoft Smooth, use the SpekeKeyProvider settings instead.
     */
    inline const SpekeKeyProviderCmaf& GetSpekeKeyProvider() const { return m_spekeKeyProvider; }
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }
    template<typename SpekeKeyProviderT = SpekeKeyProviderCmaf>
    void SetSpekeKeyProvider(SpekeKeyProviderT&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::forward<SpekeKeyProviderT>(value); }
    template<typename SpekeKeyProviderT = SpekeKeyProviderCmaf>
    CmafEncryptionSettings& WithSpekeKeyProvider(SpekeKeyProviderT&& value) { SetSpekeKeyProvider(std::forward<SpekeKeyProviderT>(value)); return *this;}
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
    CmafEncryptionSettings& WithStaticKeyProvider(StaticKeyProviderT&& value) { SetStaticKeyProvider(std::forward<StaticKeyProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether your DRM encryption key is static or from a key provider that
     * follows the SPEKE standard. For more information about SPEKE, see
     * https://docs.aws.amazon.com/speke/latest/documentation/what-is-speke.html.
     */
    inline CmafKeyProviderType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CmafKeyProviderType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CmafEncryptionSettings& WithType(CmafKeyProviderType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet = false;

    CmafEncryptionType m_encryptionMethod{CmafEncryptionType::NOT_SET};
    bool m_encryptionMethodHasBeenSet = false;

    CmafInitializationVectorInManifest m_initializationVectorInManifest{CmafInitializationVectorInManifest::NOT_SET};
    bool m_initializationVectorInManifestHasBeenSet = false;

    SpekeKeyProviderCmaf m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;

    StaticKeyProvider m_staticKeyProvider;
    bool m_staticKeyProviderHasBeenSet = false;

    CmafKeyProviderType m_type{CmafKeyProviderType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
