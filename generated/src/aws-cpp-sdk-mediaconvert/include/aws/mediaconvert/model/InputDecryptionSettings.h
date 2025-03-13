/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DecryptionMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Settings for decrypting any input files that you encrypt before you upload them
   * to Amazon S3. MediaConvert can decrypt files only when you use AWS Key
   * Management Service (KMS) to encrypt the data key that you use to encrypt your
   * content.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/InputDecryptionSettings">AWS
   * API Reference</a></p>
   */
  class InputDecryptionSettings
  {
  public:
    AWS_MEDIACONVERT_API InputDecryptionSettings() = default;
    AWS_MEDIACONVERT_API InputDecryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API InputDecryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the encryption mode that you used to encrypt your input files.
     */
    inline DecryptionMode GetDecryptionMode() const { return m_decryptionMode; }
    inline bool DecryptionModeHasBeenSet() const { return m_decryptionModeHasBeenSet; }
    inline void SetDecryptionMode(DecryptionMode value) { m_decryptionModeHasBeenSet = true; m_decryptionMode = value; }
    inline InputDecryptionSettings& WithDecryptionMode(DecryptionMode value) { SetDecryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Warning! Don't provide your encryption key in plaintext. Your job settings could
     * be intercepted, making your encrypted content vulnerable. Specify the encrypted
     * version of the data key that you used to encrypt your content. The data key must
     * be encrypted by AWS Key Management Service (KMS). The key can be 128, 192, or
     * 256 bits.
     */
    inline const Aws::String& GetEncryptedDecryptionKey() const { return m_encryptedDecryptionKey; }
    inline bool EncryptedDecryptionKeyHasBeenSet() const { return m_encryptedDecryptionKeyHasBeenSet; }
    template<typename EncryptedDecryptionKeyT = Aws::String>
    void SetEncryptedDecryptionKey(EncryptedDecryptionKeyT&& value) { m_encryptedDecryptionKeyHasBeenSet = true; m_encryptedDecryptionKey = std::forward<EncryptedDecryptionKeyT>(value); }
    template<typename EncryptedDecryptionKeyT = Aws::String>
    InputDecryptionSettings& WithEncryptedDecryptionKey(EncryptedDecryptionKeyT&& value) { SetEncryptedDecryptionKey(std::forward<EncryptedDecryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the initialization vector that you used when you encrypted your content
     * before uploading it to Amazon S3. You can use a 16-byte initialization vector
     * with any encryption mode. Or, you can use a 12-byte initialization vector with
     * GCM or CTR. MediaConvert accepts only initialization vectors that are
     * base64-encoded.
     */
    inline const Aws::String& GetInitializationVector() const { return m_initializationVector; }
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }
    template<typename InitializationVectorT = Aws::String>
    void SetInitializationVector(InitializationVectorT&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::forward<InitializationVectorT>(value); }
    template<typename InitializationVectorT = Aws::String>
    InputDecryptionSettings& WithInitializationVector(InitializationVectorT&& value) { SetInitializationVector(std::forward<InitializationVectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the AWS Region for AWS Key Management Service (KMS) that you used to
     * encrypt your data key, if that Region is different from the one you are using
     * for AWS Elemental MediaConvert.
     */
    inline const Aws::String& GetKmsKeyRegion() const { return m_kmsKeyRegion; }
    inline bool KmsKeyRegionHasBeenSet() const { return m_kmsKeyRegionHasBeenSet; }
    template<typename KmsKeyRegionT = Aws::String>
    void SetKmsKeyRegion(KmsKeyRegionT&& value) { m_kmsKeyRegionHasBeenSet = true; m_kmsKeyRegion = std::forward<KmsKeyRegionT>(value); }
    template<typename KmsKeyRegionT = Aws::String>
    InputDecryptionSettings& WithKmsKeyRegion(KmsKeyRegionT&& value) { SetKmsKeyRegion(std::forward<KmsKeyRegionT>(value)); return *this;}
    ///@}
  private:

    DecryptionMode m_decryptionMode{DecryptionMode::NOT_SET};
    bool m_decryptionModeHasBeenSet = false;

    Aws::String m_encryptedDecryptionKey;
    bool m_encryptedDecryptionKeyHasBeenSet = false;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet = false;

    Aws::String m_kmsKeyRegion;
    bool m_kmsKeyRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
