/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/DataMigrationOverview.h>
#include <aws/s3tables/model/MigrationFailureReason.h>
#include <aws/s3tables/model/MigrationOutputOverview.h>
#include <aws/s3tables/model/MigrationSourceType.h>
#include <aws/s3tables/model/MigrationState.h>
#include <aws/s3tables/model/MigrationStats.h>
#include <aws/s3tables/model/MigrationType.h>
#include <aws/s3tables/model/PlanningStats.h>
#include <aws/s3tables/model/SourceConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {
class GetTableMigrationResult {
 public:
  AWS_S3TABLES_API GetTableMigrationResult() = default;
  AWS_S3TABLES_API GetTableMigrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3TABLES_API GetTableMigrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the migration.</p>
   */
  inline const Aws::String& GetMigrationId() const { return m_migrationId; }
  template <typename MigrationIdT = Aws::String>
  void SetMigrationId(MigrationIdT&& value) {
    m_migrationIdHasBeenSet = true;
    m_migrationId = std::forward<MigrationIdT>(value);
  }
  template <typename MigrationIdT = Aws::String>
  GetTableMigrationResult& WithMigrationId(MigrationIdT&& value) {
    SetMigrationId(std::forward<MigrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the table bucket that contains the
   * destination table.</p>
   */
  inline const Aws::String& GetTableBucketARN() const { return m_tableBucketARN; }
  template <typename TableBucketARNT = Aws::String>
  void SetTableBucketARN(TableBucketARNT&& value) {
    m_tableBucketARNHasBeenSet = true;
    m_tableBucketARN = std::forward<TableBucketARNT>(value);
  }
  template <typename TableBucketARNT = Aws::String>
  GetTableMigrationResult& WithTableBucketARN(TableBucketARNT&& value) {
    SetTableBucketARN(std::forward<TableBucketARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace of the destination table.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  GetTableMigrationResult& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination table, once the migration
   * creates it.</p>
   */
  inline const Aws::String& GetTableARN() const { return m_tableARN; }
  template <typename TableARNT = Aws::String>
  void SetTableARN(TableARNT&& value) {
    m_tableARNHasBeenSet = true;
    m_tableARN = std::forward<TableARNT>(value);
  }
  template <typename TableARNT = Aws::String>
  GetTableMigrationResult& WithTableARN(TableARNT&& value) {
    SetTableARN(std::forward<TableARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the destination table.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetTableMigrationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the migration. Valid values:</p> <ul> <li> <p> <code>start</code>
   * - A migration that <code>StartTableMigration</code> started.</p> </li> <li> <p>
   * <code>sync</code> - A migration that <code>SyncTableMigration</code>
   * started.</p> </li> </ul>
   */
  inline MigrationType GetType() const { return m_type; }
  inline void SetType(MigrationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline GetTableMigrationResult& WithType(MigrationType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the migration. Valid values:</p> <ul> <li> <p> <code>new</code>
   * - S3 Tables accepted the request.</p> </li> <li> <p> <code>planning</code> - The
   * migration is checking the source table, its objects and the destination for
   * compatibility, and writing the compatibility reports.</p> </li> <li> <p>
   * <code>pendingReview</code> - Planning finished, and the migration waits for you
   * to continue or cancel it with <code>UpdateTableMigration</code>.</p> </li> <li>
   * <p> <code>queued</code> - The migration is waiting to start migrating data.</p>
   * </li> <li> <p> <code>migrating</code> - The migration is running the plan from
   * the <code>planning</code> state: it copies data and commits it to the
   * destination table. A migration reaches this state only if
   * <code>hasValidPlan</code> is <code>true</code>.</p> </li> <li> <p>
   * <code>succeeded</code> - Every planned object migrated.</p> </li> <li> <p>
   * <code>failed</code> - The migration failed. Check <code>failureReason</code> for
   * the cause.</p> </li> <li> <p> <code>cancelling</code> - You cancelled the
   * migration, and it is finishing the work in progress.</p> </li> <li> <p>
   * <code>cancelled</code> - The migration is cancelled.</p> </li> </ul> <p>A
   * migration ends in the <code>succeeded</code>, <code>failed</code> or
   * <code>cancelled</code> state. You can cancel it until it ends.</p>
   */
  inline MigrationState GetState() const { return m_state; }
  inline void SetState(MigrationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetTableMigrationResult& WithState(MigrationState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the migration uses.</p>
   */
  inline const Aws::String& GetRoleARN() const { return m_roleARN; }
  template <typename RoleARNT = Aws::String>
  void SetRoleARN(RoleARNT&& value) {
    m_roleARNHasBeenSet = true;
    m_roleARN = std::forward<RoleARNT>(value);
  }
  template <typename RoleARNT = Aws::String>
  GetTableMigrationResult& WithRoleARN(RoleARNT&& value) {
    SetRoleARN(std::forward<RoleARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean value that specifies whether the migration waits in the
   * <code>pendingReview</code> state, so that you can review the compatibility
   * reports before it migrates any data.</p>
   */
  inline bool GetReviewMigrationPlan() const { return m_reviewMigrationPlan; }
  inline void SetReviewMigrationPlan(bool value) {
    m_reviewMigrationPlanHasBeenSet = true;
    m_reviewMigrationPlan = value;
  }
  inline GetTableMigrationResult& WithReviewMigrationPlan(bool value) {
    SetReviewMigrationPlan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean value that specifies whether planning produced a plan that the
   * migration can run. If planning hasn't finished, this value isn't returned.</p>
   */
  inline bool GetHasValidPlan() const { return m_hasValidPlan; }
  inline void SetHasValidPlan(bool value) {
    m_hasValidPlanHasBeenSet = true;
    m_hasValidPlan = value;
  }
  inline GetTableMigrationResult& WithHasValidPlan(bool value) {
    SetHasValidPlan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the migration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetTableMigrationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the migration's state last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetStateUpdatedAt() const { return m_stateUpdatedAt; }
  template <typename StateUpdatedAtT = Aws::Utils::DateTime>
  void SetStateUpdatedAt(StateUpdatedAtT&& value) {
    m_stateUpdatedAtHasBeenSet = true;
    m_stateUpdatedAt = std::forward<StateUpdatedAtT>(value);
  }
  template <typename StateUpdatedAtT = Aws::Utils::DateTime>
  GetTableMigrationResult& WithStateUpdatedAt(StateUpdatedAtT&& value) {
    SetStateUpdatedAt(std::forward<StateUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the migration failed. The code names the cause, such as a
   * migration role that S3 Tables can't assume or an Amazon Web Services Glue table
   * that doesn't exist, or the report that lists the findings. This value is
   * returned only when the migration is in the <code>failed</code> state.</p>
   */
  inline const MigrationFailureReason& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = MigrationFailureReason>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = MigrationFailureReason>
  GetTableMigrationResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Statistics about the source and the partitions in the migration. This value
   * is returned after planning finishes.</p>
   */
  inline const PlanningStats& GetPlanningStats() const { return m_planningStats; }
  template <typename PlanningStatsT = PlanningStats>
  void SetPlanningStats(PlanningStatsT&& value) {
    m_planningStatsHasBeenSet = true;
    m_planningStats = std::forward<PlanningStatsT>(value);
  }
  template <typename PlanningStatsT = PlanningStats>
  GetTableMigrationResult& WithPlanningStats(PlanningStatsT&& value) {
    SetPlanningStats(std::forward<PlanningStatsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of objects that migrated, failed or are pending. These counts are
   * set when planning finishes and updated when the migration ends.</p>
   */
  inline const MigrationStats& GetMigrationStats() const { return m_migrationStats; }
  template <typename MigrationStatsT = MigrationStats>
  void SetMigrationStats(MigrationStatsT&& value) {
    m_migrationStatsHasBeenSet = true;
    m_migrationStats = std::forward<MigrationStatsT>(value);
  }
  template <typename MigrationStatsT = MigrationStats>
  GetTableMigrationResult& WithMigrationStats(MigrationStatsT&& value) {
    SetMigrationStats(std::forward<MigrationStatsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the migration's source.</p>
   */
  inline MigrationSourceType GetSourceType() const { return m_sourceType; }
  inline void SetSourceType(MigrationSourceType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline GetTableMigrationResult& WithSourceType(MigrationSourceType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source table of the migration.</p>
   */
  inline const SourceConfiguration& GetSource() const { return m_source; }
  template <typename SourceT = SourceConfiguration>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = SourceConfiguration>
  GetTableMigrationResult& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maintenance settings and migration policies for the destination
   * table.</p>
   */
  inline const DataMigrationOverview& GetDataMigration() const { return m_dataMigration; }
  template <typename DataMigrationT = DataMigrationOverview>
  void SetDataMigration(DataMigrationT&& value) {
    m_dataMigrationHasBeenSet = true;
    m_dataMigration = std::forward<DataMigrationT>(value);
  }
  template <typename DataMigrationT = DataMigrationOverview>
  GetTableMigrationResult& WithDataMigration(DataMigrationT&& value) {
    SetDataMigration(std::forward<DataMigrationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bucket and prefixes for the migration's reports, and the location of each
   * report once it is written.</p>
   */
  inline const MigrationOutputOverview& GetMigrationOutput() const { return m_migrationOutput; }
  template <typename MigrationOutputT = MigrationOutputOverview>
  void SetMigrationOutput(MigrationOutputT&& value) {
    m_migrationOutputHasBeenSet = true;
    m_migrationOutput = std::forward<MigrationOutputT>(value);
  }
  template <typename MigrationOutputT = MigrationOutputOverview>
  GetTableMigrationResult& WithMigrationOutput(MigrationOutputT&& value) {
    SetMigrationOutput(std::forward<MigrationOutputT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetTableMigrationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_migrationId;

  Aws::String m_tableBucketARN;

  Aws::String m_namespace;

  Aws::String m_tableARN;

  Aws::String m_name;

  MigrationType m_type{MigrationType::NOT_SET};

  MigrationState m_state{MigrationState::NOT_SET};

  Aws::String m_roleARN;

  bool m_reviewMigrationPlan{false};

  bool m_hasValidPlan{false};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_stateUpdatedAt{};

  MigrationFailureReason m_failureReason;

  PlanningStats m_planningStats;

  MigrationStats m_migrationStats;

  MigrationSourceType m_sourceType{MigrationSourceType::NOT_SET};

  SourceConfiguration m_source;

  DataMigrationOverview m_dataMigration;

  MigrationOutputOverview m_migrationOutput;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_migrationIdHasBeenSet = false;
  bool m_tableBucketARNHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_tableARNHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_roleARNHasBeenSet = false;
  bool m_reviewMigrationPlanHasBeenSet = false;
  bool m_hasValidPlanHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_stateUpdatedAtHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_planningStatsHasBeenSet = false;
  bool m_migrationStatsHasBeenSet = false;
  bool m_sourceTypeHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_dataMigrationHasBeenSet = false;
  bool m_migrationOutputHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
