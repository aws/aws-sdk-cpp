/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DataReplication.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the data replication settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DataReplicationSettings">AWS
   * API Reference</a></p>
   */
  class DataReplicationSettings
  {
  public:
    AWS_WORKSPACES_API DataReplicationSettings();
    AWS_WORKSPACES_API DataReplicationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API DataReplicationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether data replication is enabled, and if enabled, the type of
     * data replication.</p>
     */
    inline const DataReplication& GetDataReplication() const{ return m_dataReplication; }

    /**
     * <p>Indicates whether data replication is enabled, and if enabled, the type of
     * data replication.</p>
     */
    inline bool DataReplicationHasBeenSet() const { return m_dataReplicationHasBeenSet; }

    /**
     * <p>Indicates whether data replication is enabled, and if enabled, the type of
     * data replication.</p>
     */
    inline void SetDataReplication(const DataReplication& value) { m_dataReplicationHasBeenSet = true; m_dataReplication = value; }

    /**
     * <p>Indicates whether data replication is enabled, and if enabled, the type of
     * data replication.</p>
     */
    inline void SetDataReplication(DataReplication&& value) { m_dataReplicationHasBeenSet = true; m_dataReplication = std::move(value); }

    /**
     * <p>Indicates whether data replication is enabled, and if enabled, the type of
     * data replication.</p>
     */
    inline DataReplicationSettings& WithDataReplication(const DataReplication& value) { SetDataReplication(value); return *this;}

    /**
     * <p>Indicates whether data replication is enabled, and if enabled, the type of
     * data replication.</p>
     */
    inline DataReplicationSettings& WithDataReplication(DataReplication&& value) { SetDataReplication(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the last successful snapshot was taken of the
     * primary WorkSpace used for replicating data.</p>
     */
    inline const Aws::Utils::DateTime& GetRecoverySnapshotTime() const{ return m_recoverySnapshotTime; }

    /**
     * <p>The date and time at which the last successful snapshot was taken of the
     * primary WorkSpace used for replicating data.</p>
     */
    inline bool RecoverySnapshotTimeHasBeenSet() const { return m_recoverySnapshotTimeHasBeenSet; }

    /**
     * <p>The date and time at which the last successful snapshot was taken of the
     * primary WorkSpace used for replicating data.</p>
     */
    inline void SetRecoverySnapshotTime(const Aws::Utils::DateTime& value) { m_recoverySnapshotTimeHasBeenSet = true; m_recoverySnapshotTime = value; }

    /**
     * <p>The date and time at which the last successful snapshot was taken of the
     * primary WorkSpace used for replicating data.</p>
     */
    inline void SetRecoverySnapshotTime(Aws::Utils::DateTime&& value) { m_recoverySnapshotTimeHasBeenSet = true; m_recoverySnapshotTime = std::move(value); }

    /**
     * <p>The date and time at which the last successful snapshot was taken of the
     * primary WorkSpace used for replicating data.</p>
     */
    inline DataReplicationSettings& WithRecoverySnapshotTime(const Aws::Utils::DateTime& value) { SetRecoverySnapshotTime(value); return *this;}

    /**
     * <p>The date and time at which the last successful snapshot was taken of the
     * primary WorkSpace used for replicating data.</p>
     */
    inline DataReplicationSettings& WithRecoverySnapshotTime(Aws::Utils::DateTime&& value) { SetRecoverySnapshotTime(std::move(value)); return *this;}

  private:

    DataReplication m_dataReplication;
    bool m_dataReplicationHasBeenSet = false;

    Aws::Utils::DateTime m_recoverySnapshotTime;
    bool m_recoverySnapshotTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
