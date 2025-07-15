/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/s3/model/MetadataConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3
{
namespace Model
{

  /**
   */
  class CreateBucketMetadataConfigurationRequest : public S3Request
  {
  public:
    AWS_S3_API CreateBucketMetadataConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBucketMetadataConfiguration"; }

    AWS_S3_API Aws::String SerializePayload() const override;

    AWS_S3_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3_API Aws::String GetChecksumAlgorithmName() const override;
    inline bool RequestChecksumRequired() const override { return true; };

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p> The general purpose bucket that you want to create the metadata
     * configuration for. </p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    CreateBucketMetadataConfigurationRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>Content-MD5</code> header for the metadata configuration. </p>
     */
    inline const Aws::String& GetContentMD5() const { return m_contentMD5; }
    inline bool ContentMD5HasBeenSet() const { return m_contentMD5HasBeenSet; }
    template<typename ContentMD5T = Aws::String>
    void SetContentMD5(ContentMD5T&& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = std::forward<ContentMD5T>(value); }
    template<typename ContentMD5T = Aws::String>
    CreateBucketMetadataConfigurationRequest& WithContentMD5(ContentMD5T&& value) { SetContentMD5(std::forward<ContentMD5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The checksum algorithm to use with your metadata configuration. </p>
     */
    inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
    inline void SetChecksumAlgorithm(ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }
    inline CreateBucketMetadataConfigurationRequest& WithChecksumAlgorithm(ChecksumAlgorithm value) { SetChecksumAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The contents of your metadata configuration. </p>
     */
    inline const MetadataConfiguration& GetMetadataConfiguration() const { return m_metadataConfiguration; }
    inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }
    template<typename MetadataConfigurationT = MetadataConfiguration>
    void SetMetadataConfiguration(MetadataConfigurationT&& value) { m_metadataConfigurationHasBeenSet = true; m_metadataConfiguration = std::forward<MetadataConfigurationT>(value); }
    template<typename MetadataConfigurationT = MetadataConfiguration>
    CreateBucketMetadataConfigurationRequest& WithMetadataConfiguration(MetadataConfigurationT&& value) { SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The expected owner of the general purpose bucket that corresponds to your
     * metadata configuration. </p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    CreateBucketMetadataConfigurationRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    CreateBucketMetadataConfigurationRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    CreateBucketMetadataConfigurationRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_contentMD5;
    bool m_contentMD5HasBeenSet = false;

    ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
    bool m_checksumAlgorithmHasBeenSet = false;

    MetadataConfiguration m_metadataConfiguration;
    bool m_metadataConfigurationHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
