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
   * <p>Output configuration information for a labeling job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobOutputConfig">AWS
   * API Reference</a></p>
   */
  class LabelingJobOutputConfig
  {
  public:
    AWS_SAGEMAKER_API LabelingJobOutputConfig();
    AWS_SAGEMAKER_API LabelingJobOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline LabelingJobOutputConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline LabelingJobOutputConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline LabelingJobOutputConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}


    /**
     * <p>The Amazon Web Services Key Management Service ID of the key used to encrypt
     * the output data, if any.</p> <p>If you provide your own KMS key ID, you must add
     * the required permissions to your KMS key described in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security-permission.html#sms-security-kms-permissions">Encrypt
     * Output Data and Storage Volume with Amazon Web Services KMS</a>.</p> <p>If you
     * don't provide a KMS key ID, Amazon SageMaker uses the default Amazon Web
     * Services KMS key for Amazon S3 for your role's account to encrypt your output
     * data.</p> <p>If you use a bucket policy with an <code>s3:PutObject</code>
     * permission that only allows objects with server-side encryption, set the
     * condition key of <code>s3:x-amz-server-side-encryption</code> to
     * <code>"aws:kms"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services Key Management Service ID of the key used to encrypt
     * the output data, if any.</p> <p>If you provide your own KMS key ID, you must add
     * the required permissions to your KMS key described in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security-permission.html#sms-security-kms-permissions">Encrypt
     * Output Data and Storage Volume with Amazon Web Services KMS</a>.</p> <p>If you
     * don't provide a KMS key ID, Amazon SageMaker uses the default Amazon Web
     * Services KMS key for Amazon S3 for your role's account to encrypt your output
     * data.</p> <p>If you use a bucket policy with an <code>s3:PutObject</code>
     * permission that only allows objects with server-side encryption, set the
     * condition key of <code>s3:x-amz-server-side-encryption</code> to
     * <code>"aws:kms"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management Service ID of the key used to encrypt
     * the output data, if any.</p> <p>If you provide your own KMS key ID, you must add
     * the required permissions to your KMS key described in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security-permission.html#sms-security-kms-permissions">Encrypt
     * Output Data and Storage Volume with Amazon Web Services KMS</a>.</p> <p>If you
     * don't provide a KMS key ID, Amazon SageMaker uses the default Amazon Web
     * Services KMS key for Amazon S3 for your role's account to encrypt your output
     * data.</p> <p>If you use a bucket policy with an <code>s3:PutObject</code>
     * permission that only allows objects with server-side encryption, set the
     * condition key of <code>s3:x-amz-server-side-encryption</code> to
     * <code>"aws:kms"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management Service ID of the key used to encrypt
     * the output data, if any.</p> <p>If you provide your own KMS key ID, you must add
     * the required permissions to your KMS key described in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security-permission.html#sms-security-kms-permissions">Encrypt
     * Output Data and Storage Volume with Amazon Web Services KMS</a>.</p> <p>If you
     * don't provide a KMS key ID, Amazon SageMaker uses the default Amazon Web
     * Services KMS key for Amazon S3 for your role's account to encrypt your output
     * data.</p> <p>If you use a bucket policy with an <code>s3:PutObject</code>
     * permission that only allows objects with server-side encryption, set the
     * condition key of <code>s3:x-amz-server-side-encryption</code> to
     * <code>"aws:kms"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management Service ID of the key used to encrypt
     * the output data, if any.</p> <p>If you provide your own KMS key ID, you must add
     * the required permissions to your KMS key described in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security-permission.html#sms-security-kms-permissions">Encrypt
     * Output Data and Storage Volume with Amazon Web Services KMS</a>.</p> <p>If you
     * don't provide a KMS key ID, Amazon SageMaker uses the default Amazon Web
     * Services KMS key for Amazon S3 for your role's account to encrypt your output
     * data.</p> <p>If you use a bucket policy with an <code>s3:PutObject</code>
     * permission that only allows objects with server-side encryption, set the
     * condition key of <code>s3:x-amz-server-side-encryption</code> to
     * <code>"aws:kms"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management Service ID of the key used to encrypt
     * the output data, if any.</p> <p>If you provide your own KMS key ID, you must add
     * the required permissions to your KMS key described in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security-permission.html#sms-security-kms-permissions">Encrypt
     * Output Data and Storage Volume with Amazon Web Services KMS</a>.</p> <p>If you
     * don't provide a KMS key ID, Amazon SageMaker uses the default Amazon Web
     * Services KMS key for Amazon S3 for your role's account to encrypt your output
     * data.</p> <p>If you use a bucket policy with an <code>s3:PutObject</code>
     * permission that only allows objects with server-side encryption, set the
     * condition key of <code>s3:x-amz-server-side-encryption</code> to
     * <code>"aws:kms"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p>
     */
    inline LabelingJobOutputConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service ID of the key used to encrypt
     * the output data, if any.</p> <p>If you provide your own KMS key ID, you must add
     * the required permissions to your KMS key described in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security-permission.html#sms-security-kms-permissions">Encrypt
     * Output Data and Storage Volume with Amazon Web Services KMS</a>.</p> <p>If you
     * don't provide a KMS key ID, Amazon SageMaker uses the default Amazon Web
     * Services KMS key for Amazon S3 for your role's account to encrypt your output
     * data.</p> <p>If you use a bucket policy with an <code>s3:PutObject</code>
     * permission that only allows objects with server-side encryption, set the
     * condition key of <code>s3:x-amz-server-side-encryption</code> to
     * <code>"aws:kms"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p>
     */
    inline LabelingJobOutputConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service ID of the key used to encrypt
     * the output data, if any.</p> <p>If you provide your own KMS key ID, you must add
     * the required permissions to your KMS key described in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-security-permission.html#sms-security-kms-permissions">Encrypt
     * Output Data and Storage Volume with Amazon Web Services KMS</a>.</p> <p>If you
     * don't provide a KMS key ID, Amazon SageMaker uses the default Amazon Web
     * Services KMS key for Amazon S3 for your role's account to encrypt your output
     * data.</p> <p>If you use a bucket policy with an <code>s3:PutObject</code>
     * permission that only allows objects with server-side encryption, set the
     * condition key of <code>s3:x-amz-server-side-encryption</code> to
     * <code>"aws:kms"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p>
     */
    inline LabelingJobOutputConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) output topic ARN. Provide
     * a <code>SnsTopicArn</code> if you want to do real time chaining to another
     * streaming job and receive an Amazon SNS notifications each time a data object is
     * submitted by a worker.</p> <p>If you provide an <code>SnsTopicArn</code> in
     * <code>OutputConfig</code>, when workers complete labeling tasks, Ground Truth
     * will send labeling task output data to the SNS output topic you specify here.
     * </p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-labeling-job.html#sms-streaming-how-it-works-output-data">Receive
     * Output Data from a Streaming Labeling Job</a>. </p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) output topic ARN. Provide
     * a <code>SnsTopicArn</code> if you want to do real time chaining to another
     * streaming job and receive an Amazon SNS notifications each time a data object is
     * submitted by a worker.</p> <p>If you provide an <code>SnsTopicArn</code> in
     * <code>OutputConfig</code>, when workers complete labeling tasks, Ground Truth
     * will send labeling task output data to the SNS output topic you specify here.
     * </p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-labeling-job.html#sms-streaming-how-it-works-output-data">Receive
     * Output Data from a Streaming Labeling Job</a>. </p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) output topic ARN. Provide
     * a <code>SnsTopicArn</code> if you want to do real time chaining to another
     * streaming job and receive an Amazon SNS notifications each time a data object is
     * submitted by a worker.</p> <p>If you provide an <code>SnsTopicArn</code> in
     * <code>OutputConfig</code>, when workers complete labeling tasks, Ground Truth
     * will send labeling task output data to the SNS output topic you specify here.
     * </p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-labeling-job.html#sms-streaming-how-it-works-output-data">Receive
     * Output Data from a Streaming Labeling Job</a>. </p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) output topic ARN. Provide
     * a <code>SnsTopicArn</code> if you want to do real time chaining to another
     * streaming job and receive an Amazon SNS notifications each time a data object is
     * submitted by a worker.</p> <p>If you provide an <code>SnsTopicArn</code> in
     * <code>OutputConfig</code>, when workers complete labeling tasks, Ground Truth
     * will send labeling task output data to the SNS output topic you specify here.
     * </p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-labeling-job.html#sms-streaming-how-it-works-output-data">Receive
     * Output Data from a Streaming Labeling Job</a>. </p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) output topic ARN. Provide
     * a <code>SnsTopicArn</code> if you want to do real time chaining to another
     * streaming job and receive an Amazon SNS notifications each time a data object is
     * submitted by a worker.</p> <p>If you provide an <code>SnsTopicArn</code> in
     * <code>OutputConfig</code>, when workers complete labeling tasks, Ground Truth
     * will send labeling task output data to the SNS output topic you specify here.
     * </p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-labeling-job.html#sms-streaming-how-it-works-output-data">Receive
     * Output Data from a Streaming Labeling Job</a>. </p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) output topic ARN. Provide
     * a <code>SnsTopicArn</code> if you want to do real time chaining to another
     * streaming job and receive an Amazon SNS notifications each time a data object is
     * submitted by a worker.</p> <p>If you provide an <code>SnsTopicArn</code> in
     * <code>OutputConfig</code>, when workers complete labeling tasks, Ground Truth
     * will send labeling task output data to the SNS output topic you specify here.
     * </p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-labeling-job.html#sms-streaming-how-it-works-output-data">Receive
     * Output Data from a Streaming Labeling Job</a>. </p>
     */
    inline LabelingJobOutputConfig& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) output topic ARN. Provide
     * a <code>SnsTopicArn</code> if you want to do real time chaining to another
     * streaming job and receive an Amazon SNS notifications each time a data object is
     * submitted by a worker.</p> <p>If you provide an <code>SnsTopicArn</code> in
     * <code>OutputConfig</code>, when workers complete labeling tasks, Ground Truth
     * will send labeling task output data to the SNS output topic you specify here.
     * </p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-labeling-job.html#sms-streaming-how-it-works-output-data">Receive
     * Output Data from a Streaming Labeling Job</a>. </p>
     */
    inline LabelingJobOutputConfig& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Simple Notification Service (Amazon SNS) output topic ARN. Provide
     * a <code>SnsTopicArn</code> if you want to do real time chaining to another
     * streaming job and receive an Amazon SNS notifications each time a data object is
     * submitted by a worker.</p> <p>If you provide an <code>SnsTopicArn</code> in
     * <code>OutputConfig</code>, when workers complete labeling tasks, Ground Truth
     * will send labeling task output data to the SNS output topic you specify here.
     * </p> <p>To learn more, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-labeling-job.html#sms-streaming-how-it-works-output-data">Receive
     * Output Data from a Streaming Labeling Job</a>. </p>
     */
    inline LabelingJobOutputConfig& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}

  private:

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
