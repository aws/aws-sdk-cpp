/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/ReplicationInformation.h>

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
 * <p>Contains information about tables that are managed by S3 Tables, including
 * replication information for replica tables.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/ManagedTableInformation">AWS
 * API Reference</a></p>
 */
class ManagedTableInformation {
 public:
  AWS_S3TABLES_API ManagedTableInformation() = default;
  AWS_S3TABLES_API ManagedTableInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API ManagedTableInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>If this table is a replica, contains information about the source table from
   * which it is replicated.</p>
   */
  inline const ReplicationInformation& GetReplicationInformation() const { return m_replicationInformation; }
  inline bool ReplicationInformationHasBeenSet() const { return m_replicationInformationHasBeenSet; }
  template <typename ReplicationInformationT = ReplicationInformation>
  void SetReplicationInformation(ReplicationInformationT&& value) {
    m_replicationInformationHasBeenSet = true;
    m_replicationInformation = std::forward<ReplicationInformationT>(value);
  }
  template <typename ReplicationInformationT = ReplicationInformation>
  ManagedTableInformation& WithReplicationInformation(ReplicationInformationT&& value) {
    SetReplicationInformation(std::forward<ReplicationInformationT>(value));
    return *this;
  }
  ///@}
 private:
  ReplicationInformation m_replicationInformation;
  bool m_replicationInformationHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
