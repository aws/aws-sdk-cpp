/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace S3Tables
{
namespace Model
{

  /**
   * <p>Contains details about the snapshot management settings for an Iceberg table.
   * The oldest snapshot expires when its age exceeds the
   * <code>maxSnapshotAgeHours</code> and the total number of snapshots exceeds the
   * value for the minimum number of snapshots to keep
   * <code>minSnapshotsToKeep</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergSnapshotManagementSettings">AWS
   * API Reference</a></p>
   */
  class IcebergSnapshotManagementSettings
  {
  public:
    AWS_S3TABLES_API IcebergSnapshotManagementSettings() = default;
    AWS_S3TABLES_API IcebergSnapshotManagementSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API IcebergSnapshotManagementSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum number of snapshots to keep.</p>
     */
    inline int GetMinSnapshotsToKeep() const { return m_minSnapshotsToKeep; }
    inline bool MinSnapshotsToKeepHasBeenSet() const { return m_minSnapshotsToKeepHasBeenSet; }
    inline void SetMinSnapshotsToKeep(int value) { m_minSnapshotsToKeepHasBeenSet = true; m_minSnapshotsToKeep = value; }
    inline IcebergSnapshotManagementSettings& WithMinSnapshotsToKeep(int value) { SetMinSnapshotsToKeep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum age of a snapshot before it can be expired.</p>
     */
    inline int GetMaxSnapshotAgeHours() const { return m_maxSnapshotAgeHours; }
    inline bool MaxSnapshotAgeHoursHasBeenSet() const { return m_maxSnapshotAgeHoursHasBeenSet; }
    inline void SetMaxSnapshotAgeHours(int value) { m_maxSnapshotAgeHoursHasBeenSet = true; m_maxSnapshotAgeHours = value; }
    inline IcebergSnapshotManagementSettings& WithMaxSnapshotAgeHours(int value) { SetMaxSnapshotAgeHours(value); return *this;}
    ///@}
  private:

    int m_minSnapshotsToKeep{0};
    bool m_minSnapshotsToKeepHasBeenSet = false;

    int m_maxSnapshotAgeHours{0};
    bool m_maxSnapshotAgeHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
