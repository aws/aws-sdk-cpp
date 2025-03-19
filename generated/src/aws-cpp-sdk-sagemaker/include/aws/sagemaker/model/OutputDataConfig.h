/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/OutputCompressionType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provides information about how to store model training results (model
   * artifacts).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OutputDataConfig">AWS
   * API Reference</a></p>
   */
  class OutputDataConfig
  {
  public:
    AWS_SAGEMAKER_API OutputDataConfig() = default;
    AWS_SAGEMAKER_API OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the model artifacts at rest using Amazon S3
     * server-side encryption. The <code>KmsKeyId</code> can be any of the following
     * formats: </p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your KMS key, the SageMaker
     * execution role must include permissions to call <code>kms:Encrypt</code>. If you
     * don't provide a KMS key ID, SageMaker uses the default KMS key for Amazon S3 for
     * your role's account. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide</i>.
     * If the output data is stored in Amazon S3 Express One Zone, it is encrypted with
     * server-side encryption with Amazon S3 managed keys (SSE-S3). KMS key is not
     * supported for Amazon S3 Express One Zone</p> <p>The KMS key policy must grant
     * permission to the IAM role that you specify in your
     * <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>, or
     * <code>CreateHyperParameterTuningJob</code> requests. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    OutputDataConfig& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the S3 path where you want SageMaker to store the model artifacts.
     * For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
    template<typename S3OutputPathT = Aws::String>
    void SetS3OutputPath(S3OutputPathT&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::forward<S3OutputPathT>(value); }
    template<typename S3OutputPathT = Aws::String>
    OutputDataConfig& WithS3OutputPath(S3OutputPathT&& value) { SetS3OutputPath(std::forward<S3OutputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model output compression type. Select <code>None</code> to output an
     * uncompressed model, recommended for large model outputs. Defaults to gzip.</p>
     */
    inline OutputCompressionType GetCompressionType() const { return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(OutputCompressionType value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline OutputDataConfig& WithCompressionType(OutputCompressionType value) { SetCompressionType(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    OutputCompressionType m_compressionType{OutputCompressionType::NOT_SET};
    bool m_compressionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
