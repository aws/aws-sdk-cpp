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
   * <p>The Amazon Simple Storage (Amazon S3) location and security configuration for
   * <code>OfflineStore</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/S3StorageConfig">AWS
   * API Reference</a></p>
   */
  class S3StorageConfig
  {
  public:
    AWS_SAGEMAKER_API S3StorageConfig() = default;
    AWS_SAGEMAKER_API S3StorageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API S3StorageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 URI, or location in Amazon S3, of <code>OfflineStore</code>.</p> <p>S3
     * URIs have a format similar to the following:
     * <code>s3://example-bucket/prefix/</code>.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    S3StorageConfig& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (KMS) key ARN of the key used
     * to encrypt any objects written into the <code>OfflineStore</code> S3
     * location.</p> <p>The IAM <code>roleARN</code> that is passed as a parameter to
     * <code>CreateFeatureGroup</code> must have below permissions to the
     * <code>KmsKeyId</code>:</p> <ul> <li> <p> <code>"kms:GenerateDataKey"</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    S3StorageConfig& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path where offline records are written.</p>
     */
    inline const Aws::String& GetResolvedOutputS3Uri() const { return m_resolvedOutputS3Uri; }
    inline bool ResolvedOutputS3UriHasBeenSet() const { return m_resolvedOutputS3UriHasBeenSet; }
    template<typename ResolvedOutputS3UriT = Aws::String>
    void SetResolvedOutputS3Uri(ResolvedOutputS3UriT&& value) { m_resolvedOutputS3UriHasBeenSet = true; m_resolvedOutputS3Uri = std::forward<ResolvedOutputS3UriT>(value); }
    template<typename ResolvedOutputS3UriT = Aws::String>
    S3StorageConfig& WithResolvedOutputS3Uri(ResolvedOutputS3UriT&& value) { SetResolvedOutputS3Uri(std::forward<ResolvedOutputS3UriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_resolvedOutputS3Uri;
    bool m_resolvedOutputS3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
