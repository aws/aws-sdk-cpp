/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the properties of the related standby WorkSpaces. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StandbyWorkspacesProperties">AWS
   * API Reference</a></p>
   */
  class StandbyWorkspacesProperties
  {
  public:
    AWS_WORKSPACES_API StandbyWorkspacesProperties();
    AWS_WORKSPACES_API StandbyWorkspacesProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API StandbyWorkspacesProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the standby WorkSpace</p>
     */
    inline const Aws::String& GetStandbyWorkspaceId() const{ return m_standbyWorkspaceId; }

    /**
     * <p>The identifier of the standby WorkSpace</p>
     */
    inline bool StandbyWorkspaceIdHasBeenSet() const { return m_standbyWorkspaceIdHasBeenSet; }

    /**
     * <p>The identifier of the standby WorkSpace</p>
     */
    inline void SetStandbyWorkspaceId(const Aws::String& value) { m_standbyWorkspaceIdHasBeenSet = true; m_standbyWorkspaceId = value; }

    /**
     * <p>The identifier of the standby WorkSpace</p>
     */
    inline void SetStandbyWorkspaceId(Aws::String&& value) { m_standbyWorkspaceIdHasBeenSet = true; m_standbyWorkspaceId = std::move(value); }

    /**
     * <p>The identifier of the standby WorkSpace</p>
     */
    inline void SetStandbyWorkspaceId(const char* value) { m_standbyWorkspaceIdHasBeenSet = true; m_standbyWorkspaceId.assign(value); }

    /**
     * <p>The identifier of the standby WorkSpace</p>
     */
    inline StandbyWorkspacesProperties& WithStandbyWorkspaceId(const Aws::String& value) { SetStandbyWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the standby WorkSpace</p>
     */
    inline StandbyWorkspacesProperties& WithStandbyWorkspaceId(Aws::String&& value) { SetStandbyWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the standby WorkSpace</p>
     */
    inline StandbyWorkspacesProperties& WithStandbyWorkspaceId(const char* value) { SetStandbyWorkspaceId(value); return *this;}


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
    inline StandbyWorkspacesProperties& WithDataReplication(const DataReplication& value) { SetDataReplication(value); return *this;}

    /**
     * <p>Indicates whether data replication is enabled, and if enabled, the type of
     * data replication.</p>
     */
    inline StandbyWorkspacesProperties& WithDataReplication(DataReplication&& value) { SetDataReplication(std::move(value)); return *this;}


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
    inline StandbyWorkspacesProperties& WithRecoverySnapshotTime(const Aws::Utils::DateTime& value) { SetRecoverySnapshotTime(value); return *this;}

    /**
     * <p>The date and time at which the last successful snapshot was taken of the
     * primary WorkSpace used for replicating data.</p>
     */
    inline StandbyWorkspacesProperties& WithRecoverySnapshotTime(Aws::Utils::DateTime&& value) { SetRecoverySnapshotTime(std::move(value)); return *this;}

  private:

    Aws::String m_standbyWorkspaceId;
    bool m_standbyWorkspaceIdHasBeenSet = false;

    DataReplication m_dataReplication;
    bool m_dataReplicationHasBeenSet = false;

    Aws::Utils::DateTime m_recoverySnapshotTime;
    bool m_recoverySnapshotTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
