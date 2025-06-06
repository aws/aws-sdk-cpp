﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/S3ServerSideEncryptionType.h>
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
   * Settings for how your job outputs are encrypted as they are uploaded to Amazon
   * S3.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/S3EncryptionSettings">AWS
   * API Reference</a></p>
   */
  class S3EncryptionSettings
  {
  public:
    AWS_MEDIACONVERT_API S3EncryptionSettings() = default;
    AWS_MEDIACONVERT_API S3EncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API S3EncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify how you want your data keys managed. AWS uses data keys to encrypt your
     * content. AWS also encrypts the data keys themselves, using a customer master key
     * (CMK), and then stores the encrypted data keys alongside your encrypted content.
     * Use this setting to specify which AWS service manages the CMK. For simplest set
     * up, choose Amazon S3. If you want your master key to be managed by AWS Key
     * Management Service (KMS), choose AWS KMS. By default, when you choose AWS KMS,
     * KMS uses the AWS managed customer master key (CMK) associated with Amazon S3 to
     * encrypt your data keys. You can optionally choose to specify a different,
     * customer managed CMK. Do so by specifying the Amazon Resource Name (ARN) of the
     * key for the setting KMS ARN.
     */
    inline S3ServerSideEncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(S3ServerSideEncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline S3EncryptionSettings& WithEncryptionType(S3ServerSideEncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * Optionally, specify the encryption context that you want to use alongside your
     * KMS key. AWS KMS uses this encryption context as additional authenticated data
     * (AAD) to support authenticated encryption. This value must be a base64-encoded
     * UTF-8 string holding JSON which represents a string-string map. To use this
     * setting, you must also set Server-side encryption to AWS KMS. For more
     * information about encryption context, see:
     * https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context.
     */
    inline const Aws::String& GetKmsEncryptionContext() const { return m_kmsEncryptionContext; }
    inline bool KmsEncryptionContextHasBeenSet() const { return m_kmsEncryptionContextHasBeenSet; }
    template<typename KmsEncryptionContextT = Aws::String>
    void SetKmsEncryptionContext(KmsEncryptionContextT&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = std::forward<KmsEncryptionContextT>(value); }
    template<typename KmsEncryptionContextT = Aws::String>
    S3EncryptionSettings& WithKmsEncryptionContext(KmsEncryptionContextT&& value) { SetKmsEncryptionContext(std::forward<KmsEncryptionContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optionally, specify the customer master key (CMK) that you want to use to
     * encrypt the data key that AWS uses to encrypt your output content. Enter the
     * Amazon Resource Name (ARN) of the CMK. To use this setting, you must also set
     * Server-side encryption to AWS KMS. If you set Server-side encryption to AWS KMS
     * but don't specify a CMK here, AWS uses the AWS managed CMK associated with
     * Amazon S3.
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    S3EncryptionSettings& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    S3ServerSideEncryptionType m_encryptionType{S3ServerSideEncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsEncryptionContext;
    bool m_kmsEncryptionContextHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
