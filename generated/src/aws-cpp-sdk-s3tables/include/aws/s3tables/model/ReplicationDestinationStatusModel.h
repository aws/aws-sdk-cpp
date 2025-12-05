/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/LastSuccessfulReplicatedUpdate.h>
#include <aws/s3tables/model/ReplicationStatus.h>

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
 * <p>Contains status information for a replication destination, including the
 * current replication state, last successful update, and any error
 * messages.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/ReplicationDestinationStatusModel">AWS
 * API Reference</a></p>
 */
class ReplicationDestinationStatusModel {
 public:
  AWS_S3TABLES_API ReplicationDestinationStatusModel() = default;
  AWS_S3TABLES_API ReplicationDestinationStatusModel(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API ReplicationDestinationStatusModel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of replication to this destination.</p>
   */
  inline ReplicationStatus GetReplicationStatus() const { return m_replicationStatus; }
  inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
  inline void SetReplicationStatus(ReplicationStatus value) {
    m_replicationStatusHasBeenSet = true;
    m_replicationStatus = value;
  }
  inline ReplicationDestinationStatusModel& WithReplicationStatus(ReplicationStatus value) {
    SetReplicationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination table bucket.</p>
   */
  inline const Aws::String& GetDestinationTableBucketArn() const { return m_destinationTableBucketArn; }
  inline bool DestinationTableBucketArnHasBeenSet() const { return m_destinationTableBucketArnHasBeenSet; }
  template <typename DestinationTableBucketArnT = Aws::String>
  void SetDestinationTableBucketArn(DestinationTableBucketArnT&& value) {
    m_destinationTableBucketArnHasBeenSet = true;
    m_destinationTableBucketArn = std::forward<DestinationTableBucketArnT>(value);
  }
  template <typename DestinationTableBucketArnT = Aws::String>
  ReplicationDestinationStatusModel& WithDestinationTableBucketArn(DestinationTableBucketArnT&& value) {
    SetDestinationTableBucketArn(std::forward<DestinationTableBucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination table.</p>
   */
  inline const Aws::String& GetDestinationTableArn() const { return m_destinationTableArn; }
  inline bool DestinationTableArnHasBeenSet() const { return m_destinationTableArnHasBeenSet; }
  template <typename DestinationTableArnT = Aws::String>
  void SetDestinationTableArn(DestinationTableArnT&& value) {
    m_destinationTableArnHasBeenSet = true;
    m_destinationTableArn = std::forward<DestinationTableArnT>(value);
  }
  template <typename DestinationTableArnT = Aws::String>
  ReplicationDestinationStatusModel& WithDestinationTableArn(DestinationTableArnT&& value) {
    SetDestinationTableArn(std::forward<DestinationTableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the most recent successful replication update to this
   * destination.</p>
   */
  inline const LastSuccessfulReplicatedUpdate& GetLastSuccessfulReplicatedUpdate() const { return m_lastSuccessfulReplicatedUpdate; }
  inline bool LastSuccessfulReplicatedUpdateHasBeenSet() const { return m_lastSuccessfulReplicatedUpdateHasBeenSet; }
  template <typename LastSuccessfulReplicatedUpdateT = LastSuccessfulReplicatedUpdate>
  void SetLastSuccessfulReplicatedUpdate(LastSuccessfulReplicatedUpdateT&& value) {
    m_lastSuccessfulReplicatedUpdateHasBeenSet = true;
    m_lastSuccessfulReplicatedUpdate = std::forward<LastSuccessfulReplicatedUpdateT>(value);
  }
  template <typename LastSuccessfulReplicatedUpdateT = LastSuccessfulReplicatedUpdate>
  ReplicationDestinationStatusModel& WithLastSuccessfulReplicatedUpdate(LastSuccessfulReplicatedUpdateT&& value) {
    SetLastSuccessfulReplicatedUpdate(std::forward<LastSuccessfulReplicatedUpdateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If replication has failed, this field contains an error message describing
   * the failure reason.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  ReplicationDestinationStatusModel& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}
 private:
  ReplicationStatus m_replicationStatus{ReplicationStatus::NOT_SET};

  Aws::String m_destinationTableBucketArn;

  Aws::String m_destinationTableArn;

  LastSuccessfulReplicatedUpdate m_lastSuccessfulReplicatedUpdate;

  Aws::String m_failureMessage;
  bool m_replicationStatusHasBeenSet = false;
  bool m_destinationTableBucketArnHasBeenSet = false;
  bool m_destinationTableArnHasBeenSet = false;
  bool m_lastSuccessfulReplicatedUpdateHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
