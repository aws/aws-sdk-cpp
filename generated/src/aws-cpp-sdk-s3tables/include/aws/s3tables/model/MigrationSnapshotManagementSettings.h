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
 * <p>The snapshot management settings that a migration applies to the destination
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MigrationSnapshotManagementSettings">AWS
 * API Reference</a></p>
 */
class MigrationSnapshotManagementSettings {
 public:
  AWS_S3TABLES_API MigrationSnapshotManagementSettings() = default;
  AWS_S3TABLES_API MigrationSnapshotManagementSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MigrationSnapshotManagementSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum number of snapshots to keep. The value must be 3 or more. The
   * default is 3.</p>
   */
  inline int GetMinSnapshotsToKeep() const { return m_minSnapshotsToKeep; }
  inline bool MinSnapshotsToKeepHasBeenSet() const { return m_minSnapshotsToKeepHasBeenSet; }
  inline void SetMinSnapshotsToKeep(int value) {
    m_minSnapshotsToKeepHasBeenSet = true;
    m_minSnapshotsToKeep = value;
  }
  inline MigrationSnapshotManagementSettings& WithMinSnapshotsToKeep(int value) {
    SetMinSnapshotsToKeep(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum age, in hours, of a snapshot before it can be expired. The
   * default is 120.</p>
   */
  inline int GetMaxSnapshotAgeHours() const { return m_maxSnapshotAgeHours; }
  inline bool MaxSnapshotAgeHoursHasBeenSet() const { return m_maxSnapshotAgeHoursHasBeenSet; }
  inline void SetMaxSnapshotAgeHours(int value) {
    m_maxSnapshotAgeHoursHasBeenSet = true;
    m_maxSnapshotAgeHours = value;
  }
  inline MigrationSnapshotManagementSettings& WithMaxSnapshotAgeHours(int value) {
    SetMaxSnapshotAgeHours(value);
    return *this;
  }
  ///@}
 private:
  int m_minSnapshotsToKeep{0};

  int m_maxSnapshotAgeHours{0};
  bool m_minSnapshotsToKeepHasBeenSet = false;
  bool m_maxSnapshotAgeHoursHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
