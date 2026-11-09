/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MigrationOutputConfiguration.h>

#include <utility>

namespace Aws {
namespace S3Tables {
namespace Model {

/**
 */
class SyncTableMigrationRequest : public S3TablesRequest {
 public:
  AWS_S3TABLES_API SyncTableMigrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SyncTableMigration"; }

  AWS_S3TABLES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the sync uses to read the
   * source table and its data and to write the destination table and the reports.
   * The role must be in your account, and its trust policy must allow
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
  SyncTableMigrationRequest& WithRoleARN(RoleARNT&& value) {
    SetRoleARN(std::forward<RoleARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination table to sync. The table
   * must have a migration, and you must not have called
   * <code>CompleteTableMigration</code> for it.</p>
   */
  inline const Aws::String& GetTableARN() const { return m_tableARN; }
  inline bool TableARNHasBeenSet() const { return m_tableARNHasBeenSet; }
  template <typename TableARNT = Aws::String>
  void SetTableARN(TableARNT&& value) {
    m_tableARNHasBeenSet = true;
    m_tableARN = std::forward<TableARNT>(value);
  }
  template <typename TableARNT = Aws::String>
  SyncTableMigrationRequest& WithTableARN(TableARNT&& value) {
    SetTableARN(std::forward<TableARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the sync waits in the <code>pendingReview</code> state, so
   * that you can review the compatibility reports before it migrates any data. If
   * <code>true</code>, the migration continues when you call
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
  inline SyncTableMigrationRequest& WithReviewMigrationPlan(bool value) {
    SetReviewMigrationPlan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bucket and prefixes that the sync writes its reports to. The bucket must
   * be a general purpose bucket in your account and in the same Region as the table
   * bucket, and the migration role must be able to write objects to it. Otherwise,
   * the migration fails when it writes its first report.</p>
   */
  inline const MigrationOutputConfiguration& GetMigrationOutput() const { return m_migrationOutput; }
  inline bool MigrationOutputHasBeenSet() const { return m_migrationOutputHasBeenSet; }
  template <typename MigrationOutputT = MigrationOutputConfiguration>
  void SetMigrationOutput(MigrationOutputT&& value) {
    m_migrationOutputHasBeenSet = true;
    m_migrationOutput = std::forward<MigrationOutputT>(value);
  }
  template <typename MigrationOutputT = MigrationOutputConfiguration>
  SyncTableMigrationRequest& WithMigrationOutput(MigrationOutputT&& value) {
    SetMigrationOutput(std::forward<MigrationOutputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleARN;

  Aws::String m_tableARN;

  bool m_reviewMigrationPlan{false};

  MigrationOutputConfiguration m_migrationOutput;
  bool m_roleARNHasBeenSet = false;
  bool m_tableARNHasBeenSet = false;
  bool m_reviewMigrationPlanHasBeenSet = false;
  bool m_migrationOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
