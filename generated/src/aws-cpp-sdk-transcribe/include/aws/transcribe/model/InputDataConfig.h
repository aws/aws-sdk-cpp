/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Contains the Amazon S3 location of the training data you want to use to
   * create a new custom language model, and permissions to access this location.</p>
   * <p>When using <code>InputDataConfig</code>, you must include these
   * sub-parameters: <code>S3Uri</code> and <code>DataAccessRoleArn</code>. You can
   * optionally include <code>TuningDataS3Uri</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/InputDataConfig">AWS
   * API Reference</a></p>
   */
  class InputDataConfig
  {
  public:
    AWS_TRANSCRIBESERVICE_API InputDataConfig();
    AWS_TRANSCRIBESERVICE_API InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to train your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-training-data/</code> </p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to train your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-training-data/</code> </p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to train your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-training-data/</code> </p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to train your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-training-data/</code> </p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to train your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-training-data/</code> </p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to train your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-training-data/</code> </p>
     */
    inline InputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to train your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-training-data/</code> </p>
     */
    inline InputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to train your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-training-data/</code> </p>
     */
    inline InputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to tune your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-tuning-data/</code> </p>
     */
    inline const Aws::String& GetTuningDataS3Uri() const{ return m_tuningDataS3Uri; }

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to tune your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-tuning-data/</code> </p>
     */
    inline bool TuningDataS3UriHasBeenSet() const { return m_tuningDataS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to tune your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-tuning-data/</code> </p>
     */
    inline void SetTuningDataS3Uri(const Aws::String& value) { m_tuningDataS3UriHasBeenSet = true; m_tuningDataS3Uri = value; }

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to tune your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-tuning-data/</code> </p>
     */
    inline void SetTuningDataS3Uri(Aws::String&& value) { m_tuningDataS3UriHasBeenSet = true; m_tuningDataS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to tune your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-tuning-data/</code> </p>
     */
    inline void SetTuningDataS3Uri(const char* value) { m_tuningDataS3UriHasBeenSet = true; m_tuningDataS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to tune your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-tuning-data/</code> </p>
     */
    inline InputDataConfig& WithTuningDataS3Uri(const Aws::String& value) { SetTuningDataS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to tune your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-tuning-data/</code> </p>
     */
    inline InputDataConfig& WithTuningDataS3Uri(Aws::String&& value) { SetTuningDataS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to tune your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-tuning-data/</code> </p>
     */
    inline InputDataConfig& WithTuningDataS3Uri(const char* value) { SetTuningDataS3Uri(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline InputDataConfig& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline InputDataConfig& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline InputDataConfig& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_tuningDataS3Uri;
    bool m_tuningDataS3UriHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
