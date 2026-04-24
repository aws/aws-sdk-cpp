/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

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
 * <p>Specifies a destination table bucket for replication.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/ReplicationDestination">AWS
 * API Reference</a></p>
 */
class ReplicationDestination {
 public:
  AWS_S3TABLES_API ReplicationDestination() = default;
  AWS_S3TABLES_API ReplicationDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API ReplicationDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination table bucket where tables
   * will be replicated.</p>
   */
  inline const Aws::String& GetDestinationTableBucketARN() const { return m_destinationTableBucketARN; }
  inline bool DestinationTableBucketARNHasBeenSet() const { return m_destinationTableBucketARNHasBeenSet; }
  template <typename DestinationTableBucketARNT = Aws::String>
  void SetDestinationTableBucketARN(DestinationTableBucketARNT&& value) {
    m_destinationTableBucketARNHasBeenSet = true;
    m_destinationTableBucketARN = std::forward<DestinationTableBucketARNT>(value);
  }
  template <typename DestinationTableBucketARNT = Aws::String>
  ReplicationDestination& WithDestinationTableBucketARN(DestinationTableBucketARNT&& value) {
    SetDestinationTableBucketARN(std::forward<DestinationTableBucketARNT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationTableBucketARN;
  bool m_destinationTableBucketARNHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
