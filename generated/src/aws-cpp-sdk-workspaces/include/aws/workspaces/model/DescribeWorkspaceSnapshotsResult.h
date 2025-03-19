/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/Snapshot.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class DescribeWorkspaceSnapshotsResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceSnapshotsResult() = default;
    AWS_WORKSPACES_API DescribeWorkspaceSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspaceSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the snapshots that can be used to rebuild a WorkSpace.
     * These snapshots include the user volume.</p>
     */
    inline const Aws::Vector<Snapshot>& GetRebuildSnapshots() const { return m_rebuildSnapshots; }
    template<typename RebuildSnapshotsT = Aws::Vector<Snapshot>>
    void SetRebuildSnapshots(RebuildSnapshotsT&& value) { m_rebuildSnapshotsHasBeenSet = true; m_rebuildSnapshots = std::forward<RebuildSnapshotsT>(value); }
    template<typename RebuildSnapshotsT = Aws::Vector<Snapshot>>
    DescribeWorkspaceSnapshotsResult& WithRebuildSnapshots(RebuildSnapshotsT&& value) { SetRebuildSnapshots(std::forward<RebuildSnapshotsT>(value)); return *this;}
    template<typename RebuildSnapshotsT = Snapshot>
    DescribeWorkspaceSnapshotsResult& AddRebuildSnapshots(RebuildSnapshotsT&& value) { m_rebuildSnapshotsHasBeenSet = true; m_rebuildSnapshots.emplace_back(std::forward<RebuildSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the snapshots that can be used to restore a WorkSpace.
     * These snapshots include both the root volume and the user volume.</p>
     */
    inline const Aws::Vector<Snapshot>& GetRestoreSnapshots() const { return m_restoreSnapshots; }
    template<typename RestoreSnapshotsT = Aws::Vector<Snapshot>>
    void SetRestoreSnapshots(RestoreSnapshotsT&& value) { m_restoreSnapshotsHasBeenSet = true; m_restoreSnapshots = std::forward<RestoreSnapshotsT>(value); }
    template<typename RestoreSnapshotsT = Aws::Vector<Snapshot>>
    DescribeWorkspaceSnapshotsResult& WithRestoreSnapshots(RestoreSnapshotsT&& value) { SetRestoreSnapshots(std::forward<RestoreSnapshotsT>(value)); return *this;}
    template<typename RestoreSnapshotsT = Snapshot>
    DescribeWorkspaceSnapshotsResult& AddRestoreSnapshots(RestoreSnapshotsT&& value) { m_restoreSnapshotsHasBeenSet = true; m_restoreSnapshots.emplace_back(std::forward<RestoreSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkspaceSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Snapshot> m_rebuildSnapshots;
    bool m_rebuildSnapshotsHasBeenSet = false;

    Aws::Vector<Snapshot> m_restoreSnapshots;
    bool m_restoreSnapshotsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
