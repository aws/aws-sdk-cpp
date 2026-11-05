/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>

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
 * <p>The number of source objects that migrated, failed or are pending. For a
 * sync, the counts cover every object of the table after the sync, including
 * objects that earlier migrations migrated. The counts are set when planning
 * finishes and updated when the migration ends.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MigrationStats">AWS
 * API Reference</a></p>
 */
class MigrationStats {
 public:
  AWS_S3TABLES_API MigrationStats() = default;
  AWS_S3TABLES_API MigrationStats(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MigrationStats& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of source objects whose data the migration wrote to the
   * destination table. Migrated data can be queried after the migration commits it.
   * If the migration fails or is cancelled, some migrated objects might not be
   * committed.</p>
   */
  inline long long GetObjectsMigrated() const { return m_objectsMigrated; }
  inline bool ObjectsMigratedHasBeenSet() const { return m_objectsMigratedHasBeenSet; }
  inline void SetObjectsMigrated(long long value) {
    m_objectsMigratedHasBeenSet = true;
    m_objectsMigrated = value;
  }
  inline MigrationStats& WithObjectsMigrated(long long value) {
    SetObjectsMigrated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of source objects that didn't migrate, because they failed or
   * because another object, such as an object in the same partition, failed. The
   * object migration report lists the cause for each object.</p>
   */
  inline long long GetObjectsFailedMigration() const { return m_objectsFailedMigration; }
  inline bool ObjectsFailedMigrationHasBeenSet() const { return m_objectsFailedMigrationHasBeenSet; }
  inline void SetObjectsFailedMigration(long long value) {
    m_objectsFailedMigrationHasBeenSet = true;
    m_objectsFailedMigration = value;
  }
  inline MigrationStats& WithObjectsFailedMigration(long long value) {
    SetObjectsFailedMigration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of source objects that haven't migrated or failed yet. When a
   * migration fails or is cancelled, these are the objects that it didn't
   * migrate.</p>
   */
  inline long long GetObjectsPendingMigration() const { return m_objectsPendingMigration; }
  inline bool ObjectsPendingMigrationHasBeenSet() const { return m_objectsPendingMigrationHasBeenSet; }
  inline void SetObjectsPendingMigration(long long value) {
    m_objectsPendingMigrationHasBeenSet = true;
    m_objectsPendingMigration = value;
  }
  inline MigrationStats& WithObjectsPendingMigration(long long value) {
    SetObjectsPendingMigration(value);
    return *this;
  }
  ///@}
 private:
  long long m_objectsMigrated{0};

  long long m_objectsFailedMigration{0};

  long long m_objectsPendingMigration{0};
  bool m_objectsMigratedHasBeenSet = false;
  bool m_objectsFailedMigrationHasBeenSet = false;
  bool m_objectsPendingMigrationHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
