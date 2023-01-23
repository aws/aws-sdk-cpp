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
    AWS_WORKSPACES_API RebuildWorkspacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebuildWorkspaces"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline const Aws::Vector<RebuildRequest>& GetRebuildWorkspaceRequests() const{ return m_rebuildWorkspaceRequests; }

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline bool RebuildWorkspaceRequestsHasBeenSet() const { return m_rebuildWorkspaceRequestsHasBeenSet; }

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline void SetRebuildWorkspaceRequests(const Aws::Vector<RebuildRequest>& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests = value; }

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline void SetRebuildWorkspaceRequests(Aws::Vector<RebuildRequest>&& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests = std::move(value); }

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline RebuildWorkspacesRequest& WithRebuildWorkspaceRequests(const Aws::Vector<RebuildRequest>& value) { SetRebuildWorkspaceRequests(value); return *this;}

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline RebuildWorkspacesRequest& WithRebuildWorkspaceRequests(Aws::Vector<RebuildRequest>&& value) { SetRebuildWorkspaceRequests(std::move(value)); return *this;}

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline RebuildWorkspacesRequest& AddRebuildWorkspaceRequests(const RebuildRequest& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests.push_back(value); return *this; }

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline RebuildWorkspacesRequest& AddRebuildWorkspaceRequests(RebuildRequest&& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RebuildRequest> m_rebuildWorkspaceRequests;
    bool m_rebuildWorkspaceRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
