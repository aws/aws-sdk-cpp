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
#include <aws/opensearchserverless/model/IngestionJobSource.h>
#include <aws/opensearchserverless/model/IngestionJobStatus.h>
#include <aws/opensearchserverless/model/IngestionState.h>
#include <aws/opensearchserverless/model/IngestionStatistics.h>

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
 * <p>Details about an ingestion job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/IngestionJobDetail">AWS
 * API Reference</a></p>
 */
class IngestionJobDetail {
 public:
  AWS_OPENSEARCHSERVERLESS_API IngestionJobDetail() = default;
  AWS_OPENSEARCHSERVERLESS_API IngestionJobDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API IngestionJobDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the ingestion job.</p>
   */
  inline const Aws::String& GetIngestionJobId() const { return m_ingestionJobId; }
  inline bool IngestionJobIdHasBeenSet() const { return m_ingestionJobIdHasBeenSet; }
  template <typename IngestionJobIdT = Aws::String>
  void SetIngestionJobId(IngestionJobIdT&& value) {
    m_ingestionJobIdHasBeenSet = true;
    m_ingestionJobId = std::forward<IngestionJobIdT>(value);
  }
  template <typename IngestionJobIdT = Aws::String>
  IngestionJobDetail& WithIngestionJobId(IngestionJobIdT&& value) {
    SetIngestionJobId(std::forward<IngestionJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ingestion job.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  IngestionJobDetail& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the collection that the ingestion job belongs
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
  IngestionJobDetail& WithCollectionId(CollectionIdT&& value) {
    SetCollectionId(std::forward<CollectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the ingestion job.</p>
   */
  inline const Aws::String& GetIngestionJobName() const { return m_ingestionJobName; }
  inline bool IngestionJobNameHasBeenSet() const { return m_ingestionJobNameHasBeenSet; }
  template <typename IngestionJobNameT = Aws::String>
  void SetIngestionJobName(IngestionJobNameT&& value) {
    m_ingestionJobNameHasBeenSet = true;
    m_ingestionJobName = std::forward<IngestionJobNameT>(value);
  }
  template <typename IngestionJobNameT = Aws::String>
  IngestionJobDetail& WithIngestionJobName(IngestionJobNameT&& value) {
    SetIngestionJobName(std::forward<IngestionJobNameT>(value));
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
  IngestionJobDetail& WithIndexName(IndexNameT&& value) {
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
  IngestionJobDetail& WithFailureIndexName(FailureIndexNameT&& value) {
    SetFailureIndexName(std::forward<FailureIndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 source that the ingestion job ingests data from.</p>
   */
  inline const IngestionJobSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = IngestionJobSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = IngestionJobSource>
  IngestionJobDetail& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the ingestion job. For example,
   * <code>CREATING</code>, <code>ACTIVE</code>, <code>COMPLETED</code>, or
   * <code>CANCELLED</code>.</p>
   */
  inline IngestionJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IngestionJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IngestionJobDetail& WithStatus(IngestionJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current processing state of the ingestion job. For example,
   * <code>SCANNING</code>, <code>INGESTION_IN_PROGRESS</code>, or
   * <code>INGESTION_COMPLETE</code>.</p>
   */
  inline IngestionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(IngestionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline IngestionJobDetail& WithState(IngestionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Processing statistics for the ingestion job, such as the number of Amazon S3
   * objects discovered, ingested, and failed.</p>
   */
  inline const IngestionStatistics& GetStatistics() const { return m_statistics; }
  inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
  template <typename StatisticsT = IngestionStatistics>
  void SetStatistics(StatisticsT&& value) {
    m_statisticsHasBeenSet = true;
    m_statistics = std::forward<StatisticsT>(value);
  }
  template <typename StatisticsT = IngestionStatistics>
  IngestionJobDetail& WithStatistics(StatisticsT&& value) {
    SetStatistics(std::forward<StatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision number of the ingestion job.</p>
   */
  inline long long GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  inline void SetRevision(long long value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline IngestionJobDetail& WithRevision(long long value) {
    SetRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the ingestion job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  IngestionJobDetail& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the ingestion job was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  IngestionJobDetail& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reasons that the ingestion job reached a terminal failure state, if
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
  IngestionJobDetail& WithFailureReasons(FailureReasonsT&& value) {
    SetFailureReasons(std::forward<FailureReasonsT>(value));
    return *this;
  }
  template <typename FailureReasonsT = IngestionFailureReason>
  IngestionJobDetail& AddFailureReasons(FailureReasonsT&& value) {
    m_failureReasonsHasBeenSet = true;
    m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Active alerts about operational issues that currently affect the ingestion
   * job. Alerts are cleared when the issue is resolved.</p>
   */
  inline const Aws::Vector<IngestionAlert>& GetActiveAlerts() const { return m_activeAlerts; }
  inline bool ActiveAlertsHasBeenSet() const { return m_activeAlertsHasBeenSet; }
  template <typename ActiveAlertsT = Aws::Vector<IngestionAlert>>
  void SetActiveAlerts(ActiveAlertsT&& value) {
    m_activeAlertsHasBeenSet = true;
    m_activeAlerts = std::forward<ActiveAlertsT>(value);
  }
  template <typename ActiveAlertsT = Aws::Vector<IngestionAlert>>
  IngestionJobDetail& WithActiveAlerts(ActiveAlertsT&& value) {
    SetActiveAlerts(std::forward<ActiveAlertsT>(value));
    return *this;
  }
  template <typename ActiveAlertsT = IngestionAlert>
  IngestionJobDetail& AddActiveAlerts(ActiveAlertsT&& value) {
    m_activeAlertsHasBeenSet = true;
    m_activeAlerts.emplace_back(std::forward<ActiveAlertsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ingestionJobId;

  Aws::String m_arn;

  Aws::String m_collectionId;

  Aws::String m_ingestionJobName;

  Aws::String m_indexName;

  Aws::String m_failureIndexName;

  IngestionJobSource m_source;

  IngestionJobStatus m_status{IngestionJobStatus::NOT_SET};

  IngestionState m_state{IngestionState::NOT_SET};

  IngestionStatistics m_statistics;

  long long m_revision{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<IngestionFailureReason> m_failureReasons;

  Aws::Vector<IngestionAlert> m_activeAlerts;
  bool m_ingestionJobIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_collectionIdHasBeenSet = false;
  bool m_ingestionJobNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_failureIndexNameHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
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
