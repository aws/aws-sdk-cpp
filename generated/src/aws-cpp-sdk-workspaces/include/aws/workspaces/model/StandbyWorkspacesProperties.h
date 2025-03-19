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
    AWS_WORKSPACES_API StandbyWorkspacesProperties() = default;
    AWS_WORKSPACES_API StandbyWorkspacesProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API StandbyWorkspacesProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the standby WorkSpace</p>
     */
    inline const Aws::String& GetStandbyWorkspaceId() const { return m_standbyWorkspaceId; }
    inline bool StandbyWorkspaceIdHasBeenSet() const { return m_standbyWorkspaceIdHasBeenSet; }
    template<typename StandbyWorkspaceIdT = Aws::String>
    void SetStandbyWorkspaceId(StandbyWorkspaceIdT&& value) { m_standbyWorkspaceIdHasBeenSet = true; m_standbyWorkspaceId = std::forward<StandbyWorkspaceIdT>(value); }
    template<typename StandbyWorkspaceIdT = Aws::String>
    StandbyWorkspacesProperties& WithStandbyWorkspaceId(StandbyWorkspaceIdT&& value) { SetStandbyWorkspaceId(std::forward<StandbyWorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether data replication is enabled, and if enabled, the type of
     * data replication.</p>
     */
    inline DataReplication GetDataReplication() const { return m_dataReplication; }
    inline bool DataReplicationHasBeenSet() const { return m_dataReplicationHasBeenSet; }
    inline void SetDataReplication(DataReplication value) { m_dataReplicationHasBeenSet = true; m_dataReplication = value; }
    inline StandbyWorkspacesProperties& WithDataReplication(DataReplication value) { SetDataReplication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the last successful snapshot was taken of the
     * primary WorkSpace used for replicating data.</p>
     */
    inline const Aws::Utils::DateTime& GetRecoverySnapshotTime() const { return m_recoverySnapshotTime; }
    inline bool RecoverySnapshotTimeHasBeenSet() const { return m_recoverySnapshotTimeHasBeenSet; }
    template<typename RecoverySnapshotTimeT = Aws::Utils::DateTime>
    void SetRecoverySnapshotTime(RecoverySnapshotTimeT&& value) { m_recoverySnapshotTimeHasBeenSet = true; m_recoverySnapshotTime = std::forward<RecoverySnapshotTimeT>(value); }
    template<typename RecoverySnapshotTimeT = Aws::Utils::DateTime>
    StandbyWorkspacesProperties& WithRecoverySnapshotTime(RecoverySnapshotTimeT&& value) { SetRecoverySnapshotTime(std::forward<RecoverySnapshotTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_standbyWorkspaceId;
    bool m_standbyWorkspaceIdHasBeenSet = false;

    DataReplication m_dataReplication{DataReplication::NOT_SET};
    bool m_dataReplicationHasBeenSet = false;

    Aws::Utils::DateTime m_recoverySnapshotTime{};
    bool m_recoverySnapshotTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
