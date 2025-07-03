/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/EncryptionMethod.h>
#include <aws/mediapackagev2/model/SpekeKeyProvider.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The parameters for encrypting content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/Encryption">AWS
   * API Reference</a></p>
   */
  class Encryption
  {
  public:
    AWS_MEDIAPACKAGEV2_API Encryption() = default;
    AWS_MEDIAPACKAGEV2_API Encryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Encryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A 128-bit, 16-byte hex value represented by a 32-character string, used in
     * conjunction with the key for encrypting content. If you don't specify a value,
     * then MediaPackage creates the constant initialization vector (IV).</p>
     */
    inline const Aws::String& GetConstantInitializationVector() const { return m_constantInitializationVector; }
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }
    template<typename ConstantInitializationVectorT = Aws::String>
    void SetConstantInitializationVector(ConstantInitializationVectorT&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::forward<ConstantInitializationVectorT>(value); }
    template<typename ConstantInitializationVectorT = Aws::String>
    Encryption& WithConstantInitializationVector(ConstantInitializationVectorT&& value) { SetConstantInitializationVector(std::forward<ConstantInitializationVectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption method to use.</p>
     */
    inline const EncryptionMethod& GetEncryptionMethod() const { return m_encryptionMethod; }
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }
    template<typename EncryptionMethodT = EncryptionMethod>
    void SetEncryptionMethod(EncryptionMethodT&& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = std::forward<EncryptionMethodT>(value); }
    template<typename EncryptionMethodT = EncryptionMethod>
    Encryption& WithEncryptionMethod(EncryptionMethodT&& value) { SetEncryptionMethod(std::forward<EncryptionMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency (in seconds) of key changes for live workflows, in which
     * content is streamed real time. The service retrieves content keys before the
     * live content begins streaming, and then retrieves them as needed over the
     * lifetime of the workflow. By default, key rotation is set to 300 seconds (5
     * minutes), the minimum rotation interval, which is equivalent to setting it to
     * 300. If you don't enter an interval, content keys aren't rotated.</p> <p>The
     * following example setting causes the service to rotate keys every thirty
     * minutes: <code>1800</code> </p>
     */
    inline int GetKeyRotationIntervalSeconds() const { return m_keyRotationIntervalSeconds; }
    inline bool KeyRotationIntervalSecondsHasBeenSet() const { return m_keyRotationIntervalSecondsHasBeenSet; }
    inline void SetKeyRotationIntervalSeconds(int value) { m_keyRotationIntervalSecondsHasBeenSet = true; m_keyRotationIntervalSeconds = value; }
    inline Encryption& WithKeyRotationIntervalSeconds(int value) { SetKeyRotationIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Excludes SEIG and SGPD boxes from segment metadata in CMAF containers.</p>
     * <p>When set to <code>true</code>, MediaPackage omits these DRM metadata boxes
     * from CMAF segments, which can improve compatibility with certain devices and
     * players that don't support these boxes.</p> <p>Important considerations:</p>
     * <ul> <li> <p>This setting only affects CMAF container formats</p> </li> <li>
     * <p>Key rotation can still be handled through media playlist signaling</p> </li>
     * <li> <p>PSSH and TENC boxes remain unaffected</p> </li> <li> <p>Default behavior
     * is preserved when this setting is disabled</p> </li> </ul> <p>Valid values:
     * <code>true</code> | <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline bool GetCmafExcludeSegmentDrmMetadata() const { return m_cmafExcludeSegmentDrmMetadata; }
    inline bool CmafExcludeSegmentDrmMetadataHasBeenSet() const { return m_cmafExcludeSegmentDrmMetadataHasBeenSet; }
    inline void SetCmafExcludeSegmentDrmMetadata(bool value) { m_cmafExcludeSegmentDrmMetadataHasBeenSet = true; m_cmafExcludeSegmentDrmMetadata = value; }
    inline Encryption& WithCmafExcludeSegmentDrmMetadata(bool value) { SetCmafExcludeSegmentDrmMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the SPEKE key provider.</p>
     */
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const { return m_spekeKeyProvider; }
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    void SetSpekeKeyProvider(SpekeKeyProviderT&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::forward<SpekeKeyProviderT>(value); }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    Encryption& WithSpekeKeyProvider(SpekeKeyProviderT&& value) { SetSpekeKeyProvider(std::forward<SpekeKeyProviderT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet = false;

    EncryptionMethod m_encryptionMethod;
    bool m_encryptionMethodHasBeenSet = false;

    int m_keyRotationIntervalSeconds{0};
    bool m_keyRotationIntervalSecondsHasBeenSet = false;

    bool m_cmafExcludeSegmentDrmMetadata{false};
    bool m_cmafExcludeSegmentDrmMetadataHasBeenSet = false;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
