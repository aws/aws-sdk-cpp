/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/PartitionDateSource.h>

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
 * <p>Amazon S3 keys for log objects are partitioned in the following format:
 * <code>[targetPrefix][SourceAccountId]/[SourceRegion]/[SourceTableBucket]/[YYYY]/[MM]/[DD]/[YYYY]-[MM]-[DD]-[hh]-[mm]-[ss]-[UniqueString]</code>
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/PartitionedPrefix">AWS
 * API Reference</a></p>
 */
class PartitionedPrefix {
 public:
  AWS_S3TABLES_API PartitionedPrefix() = default;
  AWS_S3TABLES_API PartitionedPrefix(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API PartitionedPrefix& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The date to use for the log object key partitions. Valid values are
   * <code>EventTime</code>, the time that the requests in the log were made, and
   * <code>DeliveryTime</code>, the time that the log was delivered.</p>
   */
  inline PartitionDateSource GetPartitionDateSource() const { return m_partitionDateSource; }
  inline bool PartitionDateSourceHasBeenSet() const { return m_partitionDateSourceHasBeenSet; }
  inline void SetPartitionDateSource(PartitionDateSource value) {
    m_partitionDateSourceHasBeenSet = true;
    m_partitionDateSource = value;
  }
  inline PartitionedPrefix& WithPartitionDateSource(PartitionDateSource value) {
    SetPartitionDateSource(value);
    return *this;
  }
  ///@}
 private:
  PartitionDateSource m_partitionDateSource{PartitionDateSource::NOT_SET};
  bool m_partitionDateSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
