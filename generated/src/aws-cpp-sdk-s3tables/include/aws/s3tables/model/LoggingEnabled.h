/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/TargetObjectKeyFormat.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {

/**
 * <p>Describes where logs are stored and the prefix that Amazon S3 assigns to all
 * log object keys for a table bucket.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/LoggingEnabled">AWS
 * API Reference</a></p>
 */
class LoggingEnabled {
 public:
  AWS_S3TABLES_API LoggingEnabled() = default;
  AWS_S3TABLES_API LoggingEnabled(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API LoggingEnabled& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the general purpose bucket that logs are delivered to. The bucket
   * must be in the same Amazon Web Services Region and owned by the same Amazon Web
   * Services account as the table bucket. The bucket can't use SSE-KMS or DSSE-KMS
   * default encryption, can't have S3 Object Lock enabled, and can't have Requester
   * Pays enabled. You can deliver logs from multiple table buckets to the same
   * target bucket. In this case, choose a different <code>targetPrefix</code> for
   * each table bucket so that you can tell their log objects apart.</p>
   */
  inline const Aws::String& GetTargetBucket() const { return m_targetBucket; }
  inline bool TargetBucketHasBeenSet() const { return m_targetBucketHasBeenSet; }
  template <typename TargetBucketT = Aws::String>
  void SetTargetBucket(TargetBucketT&& value) {
    m_targetBucketHasBeenSet = true;
    m_targetBucket = std::forward<TargetBucketT>(value);
  }
  template <typename TargetBucketT = Aws::String>
  LoggingEnabled& WithTargetBucket(TargetBucketT&& value) {
    SetTargetBucket(std::forward<TargetBucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prefix for the keys of the log objects that are delivered to the target
   * bucket.</p>
   */
  inline const Aws::String& GetTargetPrefix() const { return m_targetPrefix; }
  inline bool TargetPrefixHasBeenSet() const { return m_targetPrefixHasBeenSet; }
  template <typename TargetPrefixT = Aws::String>
  void SetTargetPrefix(TargetPrefixT&& value) {
    m_targetPrefixHasBeenSet = true;
    m_targetPrefix = std::forward<TargetPrefixT>(value);
  }
  template <typename TargetPrefixT = Aws::String>
  LoggingEnabled& WithTargetPrefix(TargetPrefixT&& value) {
    SetTargetPrefix(std::forward<TargetPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key format of the log objects. Log object keys are always partitioned by
   * date.</p>
   */
  inline const TargetObjectKeyFormat& GetTargetObjectKeyFormat() const { return m_targetObjectKeyFormat; }
  inline bool TargetObjectKeyFormatHasBeenSet() const { return m_targetObjectKeyFormatHasBeenSet; }
  template <typename TargetObjectKeyFormatT = TargetObjectKeyFormat>
  void SetTargetObjectKeyFormat(TargetObjectKeyFormatT&& value) {
    m_targetObjectKeyFormatHasBeenSet = true;
    m_targetObjectKeyFormat = std::forward<TargetObjectKeyFormatT>(value);
  }
  template <typename TargetObjectKeyFormatT = TargetObjectKeyFormat>
  LoggingEnabled& WithTargetObjectKeyFormat(TargetObjectKeyFormatT&& value) {
    SetTargetObjectKeyFormat(std::forward<TargetObjectKeyFormatT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetBucket;

  Aws::String m_targetPrefix;

  TargetObjectKeyFormat m_targetObjectKeyFormat;
  bool m_targetBucketHasBeenSet = false;
  bool m_targetPrefixHasBeenSet = false;
  bool m_targetObjectKeyFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
