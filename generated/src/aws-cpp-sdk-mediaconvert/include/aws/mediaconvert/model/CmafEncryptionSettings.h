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
    AWS_MEDIACONVERT_API CmafEncryptionSettings();
    AWS_MEDIACONVERT_API CmafEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CmafEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline const Aws::String& GetConstantInitializationVector() const{ return m_constantInitializationVector; }
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }
    inline void SetConstantInitializationVector(const Aws::String& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = value; }
    inline void SetConstantInitializationVector(Aws::String&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::move(value); }
    inline void SetConstantInitializationVector(const char* value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector.assign(value); }
    inline CmafEncryptionSettings& WithConstantInitializationVector(const Aws::String& value) { SetConstantInitializationVector(value); return *this;}
    inline CmafEncryptionSettings& WithConstantInitializationVector(Aws::String&& value) { SetConstantInitializationVector(std::move(value)); return *this;}
    inline CmafEncryptionSettings& WithConstantInitializationVector(const char* value) { SetConstantInitializationVector(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the encryption scheme that you want the service to use when encrypting
     * your CMAF segments. Choose AES-CBC subsample or AES_CTR.
     */
    inline const CmafEncryptionType& GetEncryptionMethod() const{ return m_encryptionMethod; }
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }
    inline void SetEncryptionMethod(const CmafEncryptionType& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }
    inline void SetEncryptionMethod(CmafEncryptionType&& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = std::move(value); }
    inline CmafEncryptionSettings& WithEncryptionMethod(const CmafEncryptionType& value) { SetEncryptionMethod(value); return *this;}
    inline CmafEncryptionSettings& WithEncryptionMethod(CmafEncryptionType&& value) { SetEncryptionMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * When you use DRM with CMAF outputs, choose whether the service writes the
     * 128-bit encryption initialization vector in the HLS and DASH manifests.
     */
    inline const CmafInitializationVectorInManifest& GetInitializationVectorInManifest() const{ return m_initializationVectorInManifest; }
    inline bool InitializationVectorInManifestHasBeenSet() const { return m_initializationVectorInManifestHasBeenSet; }
    inline void SetInitializationVectorInManifest(const CmafInitializationVectorInManifest& value) { m_initializationVectorInManifestHasBeenSet = true; m_initializationVectorInManifest = value; }
    inline void SetInitializationVectorInManifest(CmafInitializationVectorInManifest&& value) { m_initializationVectorInManifestHasBeenSet = true; m_initializationVectorInManifest = std::move(value); }
    inline CmafEncryptionSettings& WithInitializationVectorInManifest(const CmafInitializationVectorInManifest& value) { SetInitializationVectorInManifest(value); return *this;}
    inline CmafEncryptionSettings& WithInitializationVectorInManifest(CmafInitializationVectorInManifest&& value) { SetInitializationVectorInManifest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * If your output group type is CMAF, use these settings when doing DRM encryption
     * with a SPEKE-compliant key provider. If your output group type is HLS, DASH, or
     * Microsoft Smooth, use the SpekeKeyProvider settings instead.
     */
    inline const SpekeKeyProviderCmaf& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }
    inline void SetSpekeKeyProvider(const SpekeKeyProviderCmaf& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }
    inline void SetSpekeKeyProvider(SpekeKeyProviderCmaf&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }
    inline CmafEncryptionSettings& WithSpekeKeyProvider(const SpekeKeyProviderCmaf& value) { SetSpekeKeyProvider(value); return *this;}
    inline CmafEncryptionSettings& WithSpekeKeyProvider(SpekeKeyProviderCmaf&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use these settings to set up encryption with a static key provider.
     */
    inline const StaticKeyProvider& GetStaticKeyProvider() const{ return m_staticKeyProvider; }
    inline bool StaticKeyProviderHasBeenSet() const { return m_staticKeyProviderHasBeenSet; }
    inline void SetStaticKeyProvider(const StaticKeyProvider& value) { m_staticKeyProviderHasBeenSet = true; m_staticKeyProvider = value; }
    inline void SetStaticKeyProvider(StaticKeyProvider&& value) { m_staticKeyProviderHasBeenSet = true; m_staticKeyProvider = std::move(value); }
    inline CmafEncryptionSettings& WithStaticKeyProvider(const StaticKeyProvider& value) { SetStaticKeyProvider(value); return *this;}
    inline CmafEncryptionSettings& WithStaticKeyProvider(StaticKeyProvider&& value) { SetStaticKeyProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether your DRM encryption key is static or from a key provider that
     * follows the SPEKE standard. For more information about SPEKE, see
     * https://docs.aws.amazon.com/speke/latest/documentation/what-is-speke.html.
     */
    inline const CmafKeyProviderType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CmafKeyProviderType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CmafKeyProviderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CmafEncryptionSettings& WithType(const CmafKeyProviderType& value) { SetType(value); return *this;}
    inline CmafEncryptionSettings& WithType(CmafKeyProviderType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet = false;

    CmafEncryptionType m_encryptionMethod;
    bool m_encryptionMethodHasBeenSet = false;

    CmafInitializationVectorInManifest m_initializationVectorInManifest;
    bool m_initializationVectorInManifestHasBeenSet = false;

    SpekeKeyProviderCmaf m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;

    StaticKeyProvider m_staticKeyProvider;
    bool m_staticKeyProviderHasBeenSet = false;

    CmafKeyProviderType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
