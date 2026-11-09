/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/InitialScan.h>

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
 * <p>S3 bucket configuration for SQS-driven ingestion. The scan mode controls only
 * the optional one-time delta scan of existing objects in this
 * bucket.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/StreamBucketConfig">AWS
 * API Reference</a></p>
 */
class StreamBucketConfig {
 public:
  AWS_OPENSEARCHSERVERLESS_API StreamBucketConfig() = default;
  AWS_OPENSEARCHSERVERLESS_API StreamBucketConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API StreamBucketConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  StreamBucketConfig& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID that owns the S3 bucket. Optional. If omitted, the control
   * plane derives it from the account segment of sqsArn.</p>
   */
  inline const Aws::String& GetBucketOwnerAccountId() const { return m_bucketOwnerAccountId; }
  inline bool BucketOwnerAccountIdHasBeenSet() const { return m_bucketOwnerAccountIdHasBeenSet; }
  template <typename BucketOwnerAccountIdT = Aws::String>
  void SetBucketOwnerAccountId(BucketOwnerAccountIdT&& value) {
    m_bucketOwnerAccountIdHasBeenSet = true;
    m_bucketOwnerAccountId = std::forward<BucketOwnerAccountIdT>(value);
  }
  template <typename BucketOwnerAccountIdT = Aws::String>
  StreamBucketConfig& WithBucketOwnerAccountId(BucketOwnerAccountIdT&& value) {
    SetBucketOwnerAccountId(std::forward<BucketOwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to perform a one-time scan of the objects that already
   * exist in the bucket before the stream begins processing Amazon S3 event
   * notifications. If <code>DISABLED</code>, only new objects are ingested.</p>
   */
  inline InitialScan GetInitialScan() const { return m_initialScan; }
  inline bool InitialScanHasBeenSet() const { return m_initialScanHasBeenSet; }
  inline void SetInitialScan(InitialScan value) {
    m_initialScanHasBeenSet = true;
    m_initialScan = value;
  }
  inline StreamBucketConfig& WithInitialScan(InitialScan value) {
    SetInitialScan(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_bucketOwnerAccountId;

  InitialScan m_initialScan{InitialScan::NOT_SET};
  bool m_bucketHasBeenSet = false;
  bool m_bucketOwnerAccountIdHasBeenSet = false;
  bool m_initialScanHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
