/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/IngestionAlert.h>
#include <aws/opensearchserverless/model/IngestionFailureReason.h>
#include <aws/opensearchserverless/model/IngestionState.h>
#include <aws/opensearchserverless/model/IngestionStatistics.h>
#include <aws/opensearchserverless/model/IngestionStreamSource.h>
#include <aws/opensearchserverless/model/IngestionStreamStatus.h>

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
 * <p>Details about an ingestion stream.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/IngestionStreamDetail">AWS
 * API Reference</a></p>
 */
class IngestionStreamDetail {
 public:
  AWS_OPENSEARCHSERVERLESS_API IngestionStreamDetail() = default;
  AWS_OPENSEARCHSERVERLESS_API IngestionStreamDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API IngestionStreamDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the ingestion stream.</p>
   */
  inline const Aws::String& GetIngestionStreamId() const { return m_ingestionStreamId; }
  inline bool IngestionStreamIdHasBeenSet() const { return m_ingestionStreamIdHasBeenSet; }
  template <typename IngestionStreamIdT = Aws::String>
  void SetIngestionStreamId(IngestionStreamIdT&& value) {
    m_ingestionStreamIdHasBeenSet = true;
    m_ingestionStreamId = std::forward<IngestionStreamIdT>(value);
  }
  template <typename IngestionStreamIdT = Aws::String>
  IngestionStreamDetail& WithIngestionStreamId(IngestionStreamIdT&& value) {
    SetIngestionStreamId(std::forward<IngestionStreamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ingestion stream.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  IngestionStreamDetail& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the collection that the ingestion stream belongs
   * to.</p>
   */
  inline const Aws::String& GetCollectionId() const { return m_collectionId; }
  inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
  template <typename CollectionIdT = Aws::String>
  void SetCollectionId(CollectionIdT&& value) {
    m_collectionIdHasBeenSet = true;
    m_collectionId = std::forward<CollectionIdT>(value);
  }
  template <typename CollectionIdT = Aws::String>
  IngestionStreamDetail& WithCollectionId(CollectionIdT&& value) {
    SetCollectionId(std::forward<CollectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the ingestion stream.</p>
   */
  inline const Aws::String& GetIngestionStreamName() const { return m_ingestionStreamName; }
  inline bool IngestionStreamNameHasBeenSet() const { return m_ingestionStreamNameHasBeenSet; }
  template <typename IngestionStreamNameT = Aws::String>
  void SetIngestionStreamName(IngestionStreamNameT&& value) {
    m_ingestionStreamNameHasBeenSet = true;
    m_ingestionStreamName = std::forward<IngestionStreamNameT>(value);
  }
  template <typename IngestionStreamNameT = Aws::String>
  IngestionStreamDetail& WithIngestionStreamName(IngestionStreamNameT&& value) {
    SetIngestionStreamName(std::forward<IngestionStreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the index that documents are ingested into.</p>
   */
  inline const Aws::String& GetIndexName() const { return m_indexName; }
  inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
  template <typename IndexNameT = Aws::String>
  void SetIndexName(IndexNameT&& value) {
    m_indexNameHasBeenSet = true;
    m_indexName = std::forward<IndexNameT>(value);
  }
  template <typename IndexNameT = Aws::String>
  IngestionStreamDetail& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the index where documents that fail to be ingested are
   * recorded.</p>
   */
  inline const Aws::String& GetFailureIndexName() const { return m_failureIndexName; }
  inline bool FailureIndexNameHasBeenSet() const { return m_failureIndexNameHasBeenSet; }
  template <typename FailureIndexNameT = Aws::String>
  void SetFailureIndexName(FailureIndexNameT&& value) {
    m_failureIndexNameHasBeenSet = true;
    m_failureIndexName = std::forward<FailureIndexNameT>(value);
  }
  template <typename FailureIndexNameT = Aws::String>
  IngestionStreamDetail& WithFailureIndexName(FailureIndexNameT&& value) {
    SetFailureIndexName(std::forward<FailureIndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 source that the ingestion stream ingests data from.</p>
   */
  inline const IngestionStreamSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = IngestionStreamSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = IngestionStreamSource>
  IngestionStreamDetail& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that OpenSearch Serverless
   * assumes to read data from the source.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  IngestionStreamDetail& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the ingestion stream. For example,
   * <code>CREATING</code>, <code>ACTIVE</code>, or <code>DELETING</code>.</p>
   */
  inline IngestionStreamStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IngestionStreamStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IngestionStreamDetail& WithStatus(IngestionStreamStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current processing state of the ingestion stream. For example,
   * <code>STARTING</code> or <code>INGESTION_IN_PROGRESS</code>.</p>
   */
  inline IngestionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(IngestionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline IngestionStreamDetail& WithState(IngestionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Processing statistics for the ingestion stream, such as the number of Amazon
   * S3 objects discovered, ingested, and failed.</p>
   */
  inline const IngestionStatistics& GetStatistics() const { return m_statistics; }
  inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
  template <typename StatisticsT = IngestionStatistics>
  void SetStatistics(StatisticsT&& value) {
    m_statisticsHasBeenSet = true;
    m_statistics = std::forward<StatisticsT>(value);
  }
  template <typename StatisticsT = IngestionStatistics>
  IngestionStreamDetail& WithStatistics(StatisticsT&& value) {
    SetStatistics(std::forward<StatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision number of the ingestion stream.</p>
   */
  inline long long GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  inline void SetRevision(long long value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline IngestionStreamDetail& WithRevision(long long value) {
    SetRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the ingestion stream was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  IngestionStreamDetail& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the ingestion stream was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  IngestionStreamDetail& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reasons that the ingestion stream reached a terminal failure state, if
   * applicable.</p>
   */
  inline const Aws::Vector<IngestionFailureReason>& GetFailureReasons() const { return m_failureReasons; }
  inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
  template <typename FailureReasonsT = Aws::Vector<IngestionFailureReason>>
  void SetFailureReasons(FailureReasonsT&& value) {
    m_failureReasonsHasBeenSet = true;
    m_failureReasons = std::forward<FailureReasonsT>(value);
  }
  template <typename FailureReasonsT = Aws::Vector<IngestionFailureReason>>
  IngestionStreamDetail& WithFailureReasons(FailureReasonsT&& value) {
    SetFailureReasons(std::forward<FailureReasonsT>(value));
    return *this;
  }
  template <typename FailureReasonsT = IngestionFailureReason>
  IngestionStreamDetail& AddFailureReasons(FailureReasonsT&& value) {
    m_failureReasonsHasBeenSet = true;
    m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Active alerts about operational issues that currently affect the ingestion
   * stream. Alerts are cleared when the issue is resolved.</p>
   */
  inline const Aws::Vector<IngestionAlert>& GetActiveAlerts() const { return m_activeAlerts; }
  inline bool ActiveAlertsHasBeenSet() const { return m_activeAlertsHasBeenSet; }
  template <typename ActiveAlertsT = Aws::Vector<IngestionAlert>>
  void SetActiveAlerts(ActiveAlertsT&& value) {
    m_activeAlertsHasBeenSet = true;
    m_activeAlerts = std::forward<ActiveAlertsT>(value);
  }
  template <typename ActiveAlertsT = Aws::Vector<IngestionAlert>>
  IngestionStreamDetail& WithActiveAlerts(ActiveAlertsT&& value) {
    SetActiveAlerts(std::forward<ActiveAlertsT>(value));
    return *this;
  }
  template <typename ActiveAlertsT = IngestionAlert>
  IngestionStreamDetail& AddActiveAlerts(ActiveAlertsT&& value) {
    m_activeAlertsHasBeenSet = true;
    m_activeAlerts.emplace_back(std::forward<ActiveAlertsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ingestionStreamId;

  Aws::String m_arn;

  Aws::String m_collectionId;

  Aws::String m_ingestionStreamName;

  Aws::String m_indexName;

  Aws::String m_failureIndexName;

  IngestionStreamSource m_source;

  Aws::String m_roleArn;

  IngestionStreamStatus m_status{IngestionStreamStatus::NOT_SET};

  IngestionState m_state{IngestionState::NOT_SET};

  IngestionStatistics m_statistics;

  long long m_revision{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<IngestionFailureReason> m_failureReasons;

  Aws::Vector<IngestionAlert> m_activeAlerts;
  bool m_ingestionStreamIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_collectionIdHasBeenSet = false;
  bool m_ingestionStreamNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_failureIndexNameHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_statisticsHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_failureReasonsHasBeenSet = false;
  bool m_activeAlertsHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
