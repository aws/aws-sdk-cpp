/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
    AWS_SAGEMAKER_API OutputDataConfig();
    AWS_SAGEMAKER_API OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

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
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

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
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

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
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

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
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

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
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline OutputDataConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

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
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline OutputDataConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

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
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline OutputDataConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Identifies the S3 path where you want SageMaker to store the model artifacts.
     * For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>Identifies the S3 path where you want SageMaker to store the model artifacts.
     * For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>Identifies the S3 path where you want SageMaker to store the model artifacts.
     * For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>Identifies the S3 path where you want SageMaker to store the model artifacts.
     * For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>Identifies the S3 path where you want SageMaker to store the model artifacts.
     * For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>Identifies the S3 path where you want SageMaker to store the model artifacts.
     * For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline OutputDataConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>Identifies the S3 path where you want SageMaker to store the model artifacts.
     * For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline OutputDataConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>Identifies the S3 path where you want SageMaker to store the model artifacts.
     * For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline OutputDataConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
