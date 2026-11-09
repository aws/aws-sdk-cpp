/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/DataMigrationSettings.h>
#include <aws/s3tables/model/DestinationTable.h>
#include <aws/s3tables/model/MigrationOutputConfiguration.h>
#include <aws/s3tables/model/MigrationSourceType.h>
#include <aws/s3tables/model/SourceConfiguration.h>

#include <utility>

namespace Aws {
namespace S3Tables {
namespace Model {

/**
 */
class StartTableMigrationRequest : public S3TablesRequest {
 public:
  AWS_S3TABLES_API StartTableMigrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartTableMigration"; }

  AWS_S3TABLES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the migration uses to
   * read the source table and its data and to write the destination table and the
   * reports. The role must be in your account, and its trust policy must allow
   * <code>migration.s3tables.amazonaws.com</code> to assume it. You can limit the
   * trust policy to the destination table bucket with the <code>aws:SourceArn</code>
   * and <code>aws:SourceAccount</code> condition keys.</p>
   */
  inline const Aws::String& GetRoleARN() const { return m_roleARN; }
  inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
  template <typename RoleARNT = Aws::String>
  void SetRoleARN(RoleARNT&& value) {
    m_roleARNHasBeenSet = true;
    m_roleARN = std::forward<RoleARNT>(value);
  }
  template <typename RoleARNT = Aws::String>
  StartTableMigrationRequest& WithRoleARN(RoleARNT&& value) {
    SetRoleARN(std::forward<RoleARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The table to create and migrate the source into.</p>
   */
  inline const DestinationTable& GetDestinationTable() const { return m_destinationTable; }
  inline bool DestinationTableHasBeenSet() const { return m_destinationTableHasBeenSet; }
  template <typename DestinationTableT = DestinationTable>
  void SetDestinationTable(DestinationTableT&& value) {
    m_destinationTableHasBeenSet = true;
    m_destinationTable = std::forward<DestinationTableT>(value);
  }
  template <typename DestinationTableT = DestinationTable>
  StartTableMigrationRequest& WithDestinationTable(DestinationTableT&& value) {
    SetDestinationTable(std::forward<DestinationTableT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the source. It must match the member that you set in
   * <code>source</code>.</p>
   */
  inline MigrationSourceType GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  inline void SetSourceType(MigrationSourceType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline StartTableMigrationRequest& WithSourceType(MigrationSourceType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source table to migrate.</p>
   */
  inline const SourceConfiguration& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = SourceConfiguration>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = SourceConfiguration>
  StartTableMigrationRequest& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maintenance settings and migration policies for the destination
   * table.</p>
   */
  inline const DataMigrationSettings& GetDataMigration() const { return m_dataMigration; }
  inline bool DataMigrationHasBeenSet() const { return m_dataMigrationHasBeenSet; }
  template <typename DataMigrationT = DataMigrationSettings>
  void SetDataMigration(DataMigrationT&& value) {
    m_dataMigrationHasBeenSet = true;
    m_dataMigration = std::forward<DataMigrationT>(value);
  }
  template <typename DataMigrationT = DataMigrationSettings>
  StartTableMigrationRequest& WithDataMigration(DataMigrationT&& value) {
    SetDataMigration(std::forward<DataMigrationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the migration waits in the <code>pendingReview</code>
   * state, so that you can review the compatibility reports before it migrates any
   * data. If <code>true</code>, the migration continues when you call
   * <code>UpdateTableMigration</code> with <code>requestedState</code> set to
   * <code>queued</code>. If you don't continue or cancel the migration within 30
   * days, the migration fails. The default is <code>false</code>.</p>
   */
  inline bool GetReviewMigrationPlan() const { return m_reviewMigrationPlan; }
  inline bool ReviewMigrationPlanHasBeenSet() const { return m_reviewMigrationPlanHasBeenSet; }
  inline void SetReviewMigrationPlan(bool value) {
    m_reviewMigrationPlanHasBeenSet = true;
    m_reviewMigrationPlan = value;
  }
  inline StartTableMigrationRequest& WithReviewMigrationPlan(bool value) {
    SetReviewMigrationPlan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bucket and prefixes that the migration writes its reports to. The bucket
   * must be a general purpose bucket in your account and in the same Region as the
   * table bucket, and the migration role must be able to write objects to it.
   * Otherwise, the migration fails when it writes its first report.</p>
   */
  inline const MigrationOutputConfiguration& GetMigrationOutput() const { return m_migrationOutput; }
  inline bool MigrationOutputHasBeenSet() const { return m_migrationOutputHasBeenSet; }
  template <typename MigrationOutputT = MigrationOutputConfiguration>
  void SetMigrationOutput(MigrationOutputT&& value) {
    m_migrationOutputHasBeenSet = true;
    m_migrationOutput = std::forward<MigrationOutputT>(value);
  }
  template <typename MigrationOutputT = MigrationOutputConfiguration>
  StartTableMigrationRequest& WithMigrationOutput(MigrationOutputT&& value) {
    SetMigrationOutput(std::forward<MigrationOutputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleARN;

  DestinationTable m_destinationTable;

  MigrationSourceType m_sourceType{MigrationSourceType::NOT_SET};

  SourceConfiguration m_source;

  DataMigrationSettings m_dataMigration;

  bool m_reviewMigrationPlan{false};

  MigrationOutputConfiguration m_migrationOutput;
  bool m_roleARNHasBeenSet = false;
  bool m_destinationTableHasBeenSet = false;
  bool m_sourceTypeHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_dataMigrationHasBeenSet = false;
  bool m_reviewMigrationPlanHasBeenSet = false;
  bool m_migrationOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
