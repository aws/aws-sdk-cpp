/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MigrationState.h>
#include <aws/s3tables/model/MigrationType.h>

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
 * <p>A summary of a migration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MigrationSummary">AWS
 * API Reference</a></p>
 */
class MigrationSummary {
 public:
  AWS_S3TABLES_API MigrationSummary() = default;
  AWS_S3TABLES_API MigrationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MigrationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the migration.</p>
   */
  inline const Aws::String& GetMigrationId() const { return m_migrationId; }
  inline bool MigrationIdHasBeenSet() const { return m_migrationIdHasBeenSet; }
  template <typename MigrationIdT = Aws::String>
  void SetMigrationId(MigrationIdT&& value) {
    m_migrationIdHasBeenSet = true;
    m_migrationId = std::forward<MigrationIdT>(value);
  }
  template <typename MigrationIdT = Aws::String>
  MigrationSummary& WithMigrationId(MigrationIdT&& value) {
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
  inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
  template <typename TableBucketARNT = Aws::String>
  void SetTableBucketARN(TableBucketARNT&& value) {
    m_tableBucketARNHasBeenSet = true;
    m_tableBucketARN = std::forward<TableBucketARNT>(value);
  }
  template <typename TableBucketARNT = Aws::String>
  MigrationSummary& WithTableBucketARN(TableBucketARNT&& value) {
    SetTableBucketARN(std::forward<TableBucketARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace of the destination table.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  MigrationSummary& WithNamespace(NamespaceT&& value) {
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
  inline bool TableARNHasBeenSet() const { return m_tableARNHasBeenSet; }
  template <typename TableARNT = Aws::String>
  void SetTableARN(TableARNT&& value) {
    m_tableARNHasBeenSet = true;
    m_tableARN = std::forward<TableARNT>(value);
  }
  template <typename TableARNT = Aws::String>
  MigrationSummary& WithTableARN(TableARNT&& value) {
    SetTableARN(std::forward<TableARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the destination table.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MigrationSummary& WithName(NameT&& value) {
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
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MigrationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MigrationSummary& WithType(MigrationType value) {
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
   * <code>cancelled</code> - The migration is cancelled.</p> </li> </ul>
   */
  inline MigrationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(MigrationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline MigrationSummary& WithState(MigrationState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean value that specifies whether planning produced a plan that the
   * migration can run. If planning hasn't finished, this value isn't returned.</p>
   */
  inline bool GetHasValidPlan() const { return m_hasValidPlan; }
  inline bool HasValidPlanHasBeenSet() const { return m_hasValidPlanHasBeenSet; }
  inline void SetHasValidPlan(bool value) {
    m_hasValidPlanHasBeenSet = true;
    m_hasValidPlan = value;
  }
  inline MigrationSummary& WithHasValidPlan(bool value) {
    SetHasValidPlan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the migration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  MigrationSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the migration's state last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetStateUpdatedAt() const { return m_stateUpdatedAt; }
  inline bool StateUpdatedAtHasBeenSet() const { return m_stateUpdatedAtHasBeenSet; }
  template <typename StateUpdatedAtT = Aws::Utils::DateTime>
  void SetStateUpdatedAt(StateUpdatedAtT&& value) {
    m_stateUpdatedAtHasBeenSet = true;
    m_stateUpdatedAt = std::forward<StateUpdatedAtT>(value);
  }
  template <typename StateUpdatedAtT = Aws::Utils::DateTime>
  MigrationSummary& WithStateUpdatedAt(StateUpdatedAtT&& value) {
    SetStateUpdatedAt(std::forward<StateUpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_migrationId;

  Aws::String m_tableBucketARN;

  Aws::String m_namespace;

  Aws::String m_tableARN;

  Aws::String m_name;

  MigrationType m_type{MigrationType::NOT_SET};

  MigrationState m_state{MigrationState::NOT_SET};

  bool m_hasValidPlan{false};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_stateUpdatedAt{};
  bool m_migrationIdHasBeenSet = false;
  bool m_tableBucketARNHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_tableARNHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_hasValidPlanHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_stateUpdatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
