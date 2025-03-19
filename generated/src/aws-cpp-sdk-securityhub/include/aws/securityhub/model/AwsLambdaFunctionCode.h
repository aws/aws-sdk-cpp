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
    AWS_SECURITYHUB_API AwsLambdaFunctionCode() = default;
    AWS_SECURITYHUB_API AwsLambdaFunctionCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsLambdaFunctionCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    AwsLambdaFunctionCode& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 key of the deployment package.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    AwsLambdaFunctionCode& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline const Aws::String& GetS3ObjectVersion() const { return m_s3ObjectVersion; }
    inline bool S3ObjectVersionHasBeenSet() const { return m_s3ObjectVersionHasBeenSet; }
    template<typename S3ObjectVersionT = Aws::String>
    void SetS3ObjectVersion(S3ObjectVersionT&& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = std::forward<S3ObjectVersionT>(value); }
    template<typename S3ObjectVersionT = Aws::String>
    AwsLambdaFunctionCode& WithS3ObjectVersion(S3ObjectVersionT&& value) { SetS3ObjectVersion(std::forward<S3ObjectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline const Aws::String& GetZipFile() const { return m_zipFile; }
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }
    template<typename ZipFileT = Aws::String>
    void SetZipFile(ZipFileT&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::forward<ZipFileT>(value); }
    template<typename ZipFileT = Aws::String>
    AwsLambdaFunctionCode& WithZipFile(ZipFileT&& value) { SetZipFile(std::forward<ZipFileT>(value)); return *this;}
    ///@}
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
