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
    AWS_MEDIACONVERT_API InputDecryptionSettings();
    AWS_MEDIACONVERT_API InputDecryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API InputDecryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the encryption mode that you used to encrypt your input files.
     */
    inline const DecryptionMode& GetDecryptionMode() const{ return m_decryptionMode; }
    inline bool DecryptionModeHasBeenSet() const { return m_decryptionModeHasBeenSet; }
    inline void SetDecryptionMode(const DecryptionMode& value) { m_decryptionModeHasBeenSet = true; m_decryptionMode = value; }
    inline void SetDecryptionMode(DecryptionMode&& value) { m_decryptionModeHasBeenSet = true; m_decryptionMode = std::move(value); }
    inline InputDecryptionSettings& WithDecryptionMode(const DecryptionMode& value) { SetDecryptionMode(value); return *this;}
    inline InputDecryptionSettings& WithDecryptionMode(DecryptionMode&& value) { SetDecryptionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Warning! Don't provide your encryption key in plaintext. Your job settings could
     * be intercepted, making your encrypted content vulnerable. Specify the encrypted
     * version of the data key that you used to encrypt your content. The data key must
     * be encrypted by AWS Key Management Service (KMS). The key can be 128, 192, or
     * 256 bits.
     */
    inline const Aws::String& GetEncryptedDecryptionKey() const{ return m_encryptedDecryptionKey; }
    inline bool EncryptedDecryptionKeyHasBeenSet() const { return m_encryptedDecryptionKeyHasBeenSet; }
    inline void SetEncryptedDecryptionKey(const Aws::String& value) { m_encryptedDecryptionKeyHasBeenSet = true; m_encryptedDecryptionKey = value; }
    inline void SetEncryptedDecryptionKey(Aws::String&& value) { m_encryptedDecryptionKeyHasBeenSet = true; m_encryptedDecryptionKey = std::move(value); }
    inline void SetEncryptedDecryptionKey(const char* value) { m_encryptedDecryptionKeyHasBeenSet = true; m_encryptedDecryptionKey.assign(value); }
    inline InputDecryptionSettings& WithEncryptedDecryptionKey(const Aws::String& value) { SetEncryptedDecryptionKey(value); return *this;}
    inline InputDecryptionSettings& WithEncryptedDecryptionKey(Aws::String&& value) { SetEncryptedDecryptionKey(std::move(value)); return *this;}
    inline InputDecryptionSettings& WithEncryptedDecryptionKey(const char* value) { SetEncryptedDecryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the initialization vector that you used when you encrypted your content
     * before uploading it to Amazon S3. You can use a 16-byte initialization vector
     * with any encryption mode. Or, you can use a 12-byte initialization vector with
     * GCM or CTR. MediaConvert accepts only initialization vectors that are
     * base64-encoded.
     */
    inline const Aws::String& GetInitializationVector() const{ return m_initializationVector; }
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }
    inline void SetInitializationVector(const Aws::String& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = value; }
    inline void SetInitializationVector(Aws::String&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::move(value); }
    inline void SetInitializationVector(const char* value) { m_initializationVectorHasBeenSet = true; m_initializationVector.assign(value); }
    inline InputDecryptionSettings& WithInitializationVector(const Aws::String& value) { SetInitializationVector(value); return *this;}
    inline InputDecryptionSettings& WithInitializationVector(Aws::String&& value) { SetInitializationVector(std::move(value)); return *this;}
    inline InputDecryptionSettings& WithInitializationVector(const char* value) { SetInitializationVector(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the AWS Region for AWS Key Management Service (KMS) that you used to
     * encrypt your data key, if that Region is different from the one you are using
     * for AWS Elemental MediaConvert.
     */
    inline const Aws::String& GetKmsKeyRegion() const{ return m_kmsKeyRegion; }
    inline bool KmsKeyRegionHasBeenSet() const { return m_kmsKeyRegionHasBeenSet; }
    inline void SetKmsKeyRegion(const Aws::String& value) { m_kmsKeyRegionHasBeenSet = true; m_kmsKeyRegion = value; }
    inline void SetKmsKeyRegion(Aws::String&& value) { m_kmsKeyRegionHasBeenSet = true; m_kmsKeyRegion = std::move(value); }
    inline void SetKmsKeyRegion(const char* value) { m_kmsKeyRegionHasBeenSet = true; m_kmsKeyRegion.assign(value); }
    inline InputDecryptionSettings& WithKmsKeyRegion(const Aws::String& value) { SetKmsKeyRegion(value); return *this;}
    inline InputDecryptionSettings& WithKmsKeyRegion(Aws::String&& value) { SetKmsKeyRegion(std::move(value)); return *this;}
    inline InputDecryptionSettings& WithKmsKeyRegion(const char* value) { SetKmsKeyRegion(value); return *this;}
    ///@}
  private:

    DecryptionMode m_decryptionMode;
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
