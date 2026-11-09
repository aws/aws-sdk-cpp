/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchServerless {
namespace Model {

/**
 * <p>The Amazon S3 source configuration for an ingestion job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/IngestionJobS3Source">AWS
 * API Reference</a></p>
 */
class IngestionJobS3Source {
 public:
  AWS_OPENSEARCHSERVERLESS_API IngestionJobS3Source() = default;
  AWS_OPENSEARCHSERVERLESS_API IngestionJobS3Source(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API IngestionJobS3Source& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the Amazon S3 bucket to ingest data
   * from.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  IngestionJobS3Source& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetBucketOwnerAccountId() const { return m_bucketOwnerAccountId; }
  inline bool BucketOwnerAccountIdHasBeenSet() const { return m_bucketOwnerAccountIdHasBeenSet; }
  template <typename BucketOwnerAccountIdT = Aws::String>
  void SetBucketOwnerAccountId(BucketOwnerAccountIdT&& value) {
    m_bucketOwnerAccountIdHasBeenSet = true;
    m_bucketOwnerAccountId = std::forward<BucketOwnerAccountIdT>(value);
  }
  template <typename BucketOwnerAccountIdT = Aws::String>
  IngestionJobS3Source& WithBucketOwnerAccountId(BucketOwnerAccountIdT&& value) {
    SetBucketOwnerAccountId(std::forward<BucketOwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A key prefix that limits ingestion to objects in the Amazon S3 bucket whose
   * keys begin with the prefix.</p>
   */
  inline const Aws::String& GetKeyPrefix() const { return m_keyPrefix; }
  inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
  template <typename KeyPrefixT = Aws::String>
  void SetKeyPrefix(KeyPrefixT&& value) {
    m_keyPrefixHasBeenSet = true;
    m_keyPrefix = std::forward<KeyPrefixT>(value);
  }
  template <typename KeyPrefixT = Aws::String>
  IngestionJobS3Source& WithKeyPrefix(KeyPrefixT&& value) {
    SetKeyPrefix(std::forward<KeyPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_bucketOwnerAccountId;

  Aws::String m_keyPrefix;
  bool m_bucketHasBeenSet = false;
  bool m_bucketOwnerAccountIdHasBeenSet = false;
  bool m_keyPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
