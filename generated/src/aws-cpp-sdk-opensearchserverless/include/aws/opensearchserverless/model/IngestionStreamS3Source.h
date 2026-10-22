/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/StreamBucketConfig.h>

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
 * <p>The Amazon S3 source configuration for an ingestion stream.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/IngestionStreamS3Source">AWS
 * API Reference</a></p>
 */
class IngestionStreamS3Source {
 public:
  AWS_OPENSEARCHSERVERLESS_API IngestionStreamS3Source() = default;
  AWS_OPENSEARCHSERVERLESS_API IngestionStreamS3Source(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API IngestionStreamS3Source& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon SQS queue that receives Amazon
   * S3 event notifications for the source buckets.</p>
   */
  inline const Aws::String& GetSqsArn() const { return m_sqsArn; }
  inline bool SqsArnHasBeenSet() const { return m_sqsArnHasBeenSet; }
  template <typename SqsArnT = Aws::String>
  void SetSqsArn(SqsArnT&& value) {
    m_sqsArnHasBeenSet = true;
    m_sqsArn = std::forward<SqsArnT>(value);
  }
  template <typename SqsArnT = Aws::String>
  IngestionStreamS3Source& WithSqsArn(SqsArnT&& value) {
    SetSqsArn(std::forward<SqsArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for each Amazon S3 bucket that the ingestion stream ingests
   * data from.</p>
   */
  inline const Aws::Vector<StreamBucketConfig>& GetBuckets() const { return m_buckets; }
  inline bool BucketsHasBeenSet() const { return m_bucketsHasBeenSet; }
  template <typename BucketsT = Aws::Vector<StreamBucketConfig>>
  void SetBuckets(BucketsT&& value) {
    m_bucketsHasBeenSet = true;
    m_buckets = std::forward<BucketsT>(value);
  }
  template <typename BucketsT = Aws::Vector<StreamBucketConfig>>
  IngestionStreamS3Source& WithBuckets(BucketsT&& value) {
    SetBuckets(std::forward<BucketsT>(value));
    return *this;
  }
  template <typename BucketsT = StreamBucketConfig>
  IngestionStreamS3Source& AddBuckets(BucketsT&& value) {
    m_bucketsHasBeenSet = true;
    m_buckets.emplace_back(std::forward<BucketsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sqsArn;

  Aws::Vector<StreamBucketConfig> m_buckets;
  bool m_sqsArnHasBeenSet = false;
  bool m_bucketsHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
