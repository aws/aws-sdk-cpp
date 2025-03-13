/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/RebuildRequest.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class RebuildWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API RebuildWorkspacesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebuildWorkspaces"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline const Aws::Vector<RebuildRequest>& GetRebuildWorkspaceRequests() const { return m_rebuildWorkspaceRequests; }
    inline bool RebuildWorkspaceRequestsHasBeenSet() const { return m_rebuildWorkspaceRequestsHasBeenSet; }
    template<typename RebuildWorkspaceRequestsT = Aws::Vector<RebuildRequest>>
    void SetRebuildWorkspaceRequests(RebuildWorkspaceRequestsT&& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests = std::forward<RebuildWorkspaceRequestsT>(value); }
    template<typename RebuildWorkspaceRequestsT = Aws::Vector<RebuildRequest>>
    RebuildWorkspacesRequest& WithRebuildWorkspaceRequests(RebuildWorkspaceRequestsT&& value) { SetRebuildWorkspaceRequests(std::forward<RebuildWorkspaceRequestsT>(value)); return *this;}
    template<typename RebuildWorkspaceRequestsT = RebuildRequest>
    RebuildWorkspacesRequest& AddRebuildWorkspaceRequests(RebuildWorkspaceRequestsT&& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests.emplace_back(std::forward<RebuildWorkspaceRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RebuildRequest> m_rebuildWorkspaceRequests;
    bool m_rebuildWorkspaceRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
