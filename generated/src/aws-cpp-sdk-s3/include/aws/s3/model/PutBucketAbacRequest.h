/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3Request.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/AbacStatus.h>
#include <aws/s3/model/ChecksumAlgorithm.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace S3 {
namespace Model {

/**
 */
class PutBucketAbacRequest : public S3Request {
 public:
  AWS_S3_API PutBucketAbacRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutBucketAbac"; }

  AWS_S3_API Aws::String SerializePayload() const override;

  AWS_S3_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  AWS_S3_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  AWS_S3_API Aws::String GetChecksumAlgorithmName() const override;
  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_S3_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The name of the general purpose bucket.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  PutBucketAbacRequest& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MD5 hash of the <code>PutBucketAbac</code> request body. </p> <p>For
   * requests made using the Amazon Web Services Command Line Interface (CLI) or
   * Amazon Web Services SDKs, this field is calculated automatically.</p>
   */
  inline const Aws::String& GetContentMD5() const { return m_contentMD5; }
  inline bool ContentMD5HasBeenSet() const { return m_contentMD5HasBeenSet; }
  template <typename ContentMD5T = Aws::String>
  void SetContentMD5(ContentMD5T&& value) {
    m_contentMD5HasBeenSet = true;
    m_contentMD5 = std::forward<ContentMD5T>(value);
  }
  template <typename ContentMD5T = Aws::String>
  PutBucketAbacRequest& WithContentMD5(ContentMD5T&& value) {
    SetContentMD5(std::forward<ContentMD5T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the algorithm that you want Amazon S3 to use to create the
   * checksum. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">
   * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
   */
  inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
  inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
  inline void SetChecksumAlgorithm(ChecksumAlgorithm value) {
    m_checksumAlgorithmHasBeenSet = true;
    m_checksumAlgorithm = value;
  }
  inline PutBucketAbacRequest& WithChecksumAlgorithm(ChecksumAlgorithm value) {
    SetChecksumAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the general purpose bucket's owner.
   * </p>
   */
  inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
  inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
  template <typename ExpectedBucketOwnerT = Aws::String>
  void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    m_expectedBucketOwnerHasBeenSet = true;
    m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value);
  }
  template <typename ExpectedBucketOwnerT = Aws::String>
  PutBucketAbacRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ABAC status of the general purpose bucket. When ABAC is enabled for the
   * general purpose bucket, you can use tags to manage access to the general purpose
   * buckets as well as for cost tracking purposes. When ABAC is disabled for the
   * general purpose buckets, you can only use tags for cost tracking purposes. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/buckets-tagging.html">Using
   * tags with S3 general purpose buckets</a>. </p>
   */
  inline const AbacStatus& GetAbacStatus() const { return m_abacStatus; }
  inline bool AbacStatusHasBeenSet() const { return m_abacStatusHasBeenSet; }
  template <typename AbacStatusT = AbacStatus>
  void SetAbacStatus(AbacStatusT&& value) {
    m_abacStatusHasBeenSet = true;
    m_abacStatus = std::forward<AbacStatusT>(value);
  }
  template <typename AbacStatusT = AbacStatus>
  PutBucketAbacRequest& WithAbacStatus(AbacStatusT&& value) {
    SetAbacStatus(std::forward<AbacStatusT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
  inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
  template <typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
  void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) {
    m_customizedAccessLogTagHasBeenSet = true;
    m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value);
  }
  template <typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
  PutBucketAbacRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) {
    SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value));
    return *this;
  }
  template <typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
  PutBucketAbacRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
    m_customizedAccessLogTagHasBeenSet = true;
    m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;
  bool m_bucketHasBeenSet = false;

  Aws::String m_contentMD5;
  bool m_contentMD5HasBeenSet = false;

  ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
  bool m_checksumAlgorithmHasBeenSet = false;

  Aws::String m_expectedBucketOwner;
  bool m_expectedBucketOwnerHasBeenSet = false;

  AbacStatus m_abacStatus;
  bool m_abacStatusHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
  bool m_customizedAccessLogTagHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3
}  // namespace Aws
