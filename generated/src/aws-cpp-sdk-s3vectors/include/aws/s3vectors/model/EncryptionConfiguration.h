/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/SseType.h>
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
namespace S3Vectors
{
namespace Model
{

  /**
   * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
   * subject to change.</p>  <p>The encryption configuration for a vector
   * bucket. By default, if you don't specify, all new vectors in Amazon S3 vector
   * buckets use server-side encryption with Amazon S3 managed keys (SSE-S3),
   * specifically <code>AES256</code>.</p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_S3VECTORS_API EncryptionConfiguration() = default;
    AWS_S3VECTORS_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3VECTORS_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The server-side encryption type to use for the encryption configuration of
     * the vector bucket. By default, if you don't specify, all new vectors in Amazon
     * S3 vector buckets use server-side encryption with Amazon S3 managed keys
     * (SSE-S3), specifically <code>AES256</code>.</p>
     */
    inline SseType GetSseType() const { return m_sseType; }
    inline bool SseTypeHasBeenSet() const { return m_sseTypeHasBeenSet; }
    inline void SetSseType(SseType value) { m_sseTypeHasBeenSet = true; m_sseType = value; }
    inline EncryptionConfiguration& WithSseType(SseType value) { SetSseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services Key Management Service (KMS) customer managed key ID to
     * use for the encryption configuration. This parameter is allowed if and only if
     * <code>sseType</code> is set to <code>aws:kms</code>.</p> <p>To specify the KMS
     * key, you must use the format of the KMS key Amazon Resource Name (ARN).</p>
     * <p>For example, specify Key ARN in the following format:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    EncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    SseType m_sseType{SseType::NOT_SET};
    bool m_sseTypeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
