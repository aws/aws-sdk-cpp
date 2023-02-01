/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The code for the Lambda function. You can specify either an object in Amazon
   * S3, or upload a deployment package directly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsLambdaFunctionCode">AWS
   * API Reference</a></p>
   */
  class AwsLambdaFunctionCode
  {
  public:
    AWS_SECURITYHUB_API AwsLambdaFunctionCode();
    AWS_SECURITYHUB_API AwsLambdaFunctionCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsLambdaFunctionCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account.</p>
     */
    inline AwsLambdaFunctionCode& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account.</p>
     */
    inline AwsLambdaFunctionCode& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account.</p>
     */
    inline AwsLambdaFunctionCode& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The Amazon S3 key of the deployment package.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The Amazon S3 key of the deployment package.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>The Amazon S3 key of the deployment package.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The Amazon S3 key of the deployment package.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The Amazon S3 key of the deployment package.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The Amazon S3 key of the deployment package.</p>
     */
    inline AwsLambdaFunctionCode& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 key of the deployment package.</p>
     */
    inline AwsLambdaFunctionCode& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 key of the deployment package.</p>
     */
    inline AwsLambdaFunctionCode& WithS3Key(const char* value) { SetS3Key(value); return *this;}


    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline const Aws::String& GetS3ObjectVersion() const{ return m_s3ObjectVersion; }

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline bool S3ObjectVersionHasBeenSet() const { return m_s3ObjectVersionHasBeenSet; }

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline void SetS3ObjectVersion(const Aws::String& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = value; }

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline void SetS3ObjectVersion(Aws::String&& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = std::move(value); }

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline void SetS3ObjectVersion(const char* value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion.assign(value); }

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline AwsLambdaFunctionCode& WithS3ObjectVersion(const Aws::String& value) { SetS3ObjectVersion(value); return *this;}

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline AwsLambdaFunctionCode& WithS3ObjectVersion(Aws::String&& value) { SetS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline AwsLambdaFunctionCode& WithS3ObjectVersion(const char* value) { SetS3ObjectVersion(value); return *this;}


    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline const Aws::String& GetZipFile() const{ return m_zipFile; }

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline void SetZipFile(const Aws::String& value) { m_zipFileHasBeenSet = true; m_zipFile = value; }

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline void SetZipFile(Aws::String&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::move(value); }

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline void SetZipFile(const char* value) { m_zipFileHasBeenSet = true; m_zipFile.assign(value); }

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline AwsLambdaFunctionCode& WithZipFile(const Aws::String& value) { SetZipFile(value); return *this;}

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline AwsLambdaFunctionCode& WithZipFile(Aws::String&& value) { SetZipFile(std::move(value)); return *this;}

    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline AwsLambdaFunctionCode& WithZipFile(const char* value) { SetZipFile(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet = false;

    Aws::String m_zipFile;
    bool m_zipFileHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
