/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MigrationReportPrefixes.h>

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
 * <p>The bucket and prefixes that a migration writes its reports to. Every report
 * goes to one bucket, each under its own prefix.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MigrationOutputConfiguration">AWS
 * API Reference</a></p>
 */
class MigrationOutputConfiguration {
 public:
  AWS_S3TABLES_API MigrationOutputConfiguration() = default;
  AWS_S3TABLES_API MigrationOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MigrationOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The general purpose bucket that the migration writes every report to.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  MigrationOutputConfiguration& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key prefix for each report.</p>
   */
  inline const MigrationReportPrefixes& GetPrefixes() const { return m_prefixes; }
  inline bool PrefixesHasBeenSet() const { return m_prefixesHasBeenSet; }
  template <typename PrefixesT = MigrationReportPrefixes>
  void SetPrefixes(PrefixesT&& value) {
    m_prefixesHasBeenSet = true;
    m_prefixes = std::forward<PrefixesT>(value);
  }
  template <typename PrefixesT = MigrationReportPrefixes>
  MigrationOutputConfiguration& WithPrefixes(PrefixesT&& value) {
    SetPrefixes(std::forward<PrefixesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  MigrationReportPrefixes m_prefixes;
  bool m_bucketHasBeenSet = false;
  bool m_prefixesHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
