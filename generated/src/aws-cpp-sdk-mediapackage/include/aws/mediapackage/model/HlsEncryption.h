/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/EncryptionMethod.h>
#include <aws/mediapackage/model/SpekeKeyProvider.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * An HTTP Live Streaming (HLS) encryption configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/HlsEncryption">AWS
   * API Reference</a></p>
   */
  class HlsEncryption
  {
  public:
    AWS_MEDIAPACKAGE_API HlsEncryption() = default;
    AWS_MEDIAPACKAGE_API HlsEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API HlsEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline const Aws::String& GetConstantInitializationVector() const { return m_constantInitializationVector; }
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }
    template<typename ConstantInitializationVectorT = Aws::String>
    void SetConstantInitializationVector(ConstantInitializationVectorT&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::forward<ConstantInitializationVectorT>(value); }
    template<typename ConstantInitializationVectorT = Aws::String>
    HlsEncryption& WithConstantInitializationVector(ConstantInitializationVectorT&& value) { SetConstantInitializationVector(std::forward<ConstantInitializationVectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The encryption method to use.
     */
    inline EncryptionMethod GetEncryptionMethod() const { return m_encryptionMethod; }
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }
    inline void SetEncryptionMethod(EncryptionMethod value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }
    inline HlsEncryption& WithEncryptionMethod(EncryptionMethod value) { SetEncryptionMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * Interval (in seconds) between each encryption key rotation.
     */
    inline int GetKeyRotationIntervalSeconds() const { return m_keyRotationIntervalSeconds; }
    inline bool KeyRotationIntervalSecondsHasBeenSet() const { return m_keyRotationIntervalSecondsHasBeenSet; }
    inline void SetKeyRotationIntervalSeconds(int value) { m_keyRotationIntervalSecondsHasBeenSet = true; m_keyRotationIntervalSeconds = value; }
    inline HlsEncryption& WithKeyRotationIntervalSeconds(int value) { SetKeyRotationIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, the EXT-X-KEY tag will be repeated in output manifests.
     */
    inline bool GetRepeatExtXKey() const { return m_repeatExtXKey; }
    inline bool RepeatExtXKeyHasBeenSet() const { return m_repeatExtXKeyHasBeenSet; }
    inline void SetRepeatExtXKey(bool value) { m_repeatExtXKeyHasBeenSet = true; m_repeatExtXKey = value; }
    inline HlsEncryption& WithRepeatExtXKey(bool value) { SetRepeatExtXKey(value); return *this;}
    ///@}

    ///@{
    
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const { return m_spekeKeyProvider; }
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    void SetSpekeKeyProvider(SpekeKeyProviderT&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::forward<SpekeKeyProviderT>(value); }
    template<typename SpekeKeyProviderT = SpekeKeyProvider>
    HlsEncryption& WithSpekeKeyProvider(SpekeKeyProviderT&& value) { SetSpekeKeyProvider(std::forward<SpekeKeyProviderT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet = false;

    EncryptionMethod m_encryptionMethod{EncryptionMethod::NOT_SET};
    bool m_encryptionMethodHasBeenSet = false;

    int m_keyRotationIntervalSeconds{0};
    bool m_keyRotationIntervalSecondsHasBeenSet = false;

    bool m_repeatExtXKey{false};
    bool m_repeatExtXKeyHasBeenSet = false;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
