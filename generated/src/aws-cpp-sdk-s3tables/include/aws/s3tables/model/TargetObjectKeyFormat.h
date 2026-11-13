/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/PartitionedPrefix.h>

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
 * <p>The key format of the log objects. Only <code>partitionedPrefix</code> is
 * supported.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TargetObjectKeyFormat">AWS
 * API Reference</a></p>
 */
class TargetObjectKeyFormat {
 public:
  AWS_S3TABLES_API TargetObjectKeyFormat() = default;
  AWS_S3TABLES_API TargetObjectKeyFormat(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API TargetObjectKeyFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Partitions log object keys by date.</p>
   */
  inline const PartitionedPrefix& GetPartitionedPrefix() const { return m_partitionedPrefix; }
  inline bool PartitionedPrefixHasBeenSet() const { return m_partitionedPrefixHasBeenSet; }
  template <typename PartitionedPrefixT = PartitionedPrefix>
  void SetPartitionedPrefix(PartitionedPrefixT&& value) {
    m_partitionedPrefixHasBeenSet = true;
    m_partitionedPrefix = std::forward<PartitionedPrefixT>(value);
  }
  template <typename PartitionedPrefixT = PartitionedPrefix>
  TargetObjectKeyFormat& WithPartitionedPrefix(PartitionedPrefixT&& value) {
    SetPartitionedPrefix(std::forward<PartitionedPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  PartitionedPrefix m_partitionedPrefix;
  bool m_partitionedPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
