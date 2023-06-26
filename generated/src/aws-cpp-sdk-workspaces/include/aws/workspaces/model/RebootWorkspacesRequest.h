/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/RebootRequest.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class RebootWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API RebootWorkspacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebootWorkspaces"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The WorkSpaces to reboot. You can specify up to 25 WorkSpaces.</p>
     */
    inline const Aws::Vector<RebootRequest>& GetRebootWorkspaceRequests() const{ return m_rebootWorkspaceRequests; }

    /**
     * <p>The WorkSpaces to reboot. You can specify up to 25 WorkSpaces.</p>
     */
    inline bool RebootWorkspaceRequestsHasBeenSet() const { return m_rebootWorkspaceRequestsHasBeenSet; }

    /**
     * <p>The WorkSpaces to reboot. You can specify up to 25 WorkSpaces.</p>
     */
    inline void SetRebootWorkspaceRequests(const Aws::Vector<RebootRequest>& value) { m_rebootWorkspaceRequestsHasBeenSet = true; m_rebootWorkspaceRequests = value; }

    /**
     * <p>The WorkSpaces to reboot. You can specify up to 25 WorkSpaces.</p>
     */
    inline void SetRebootWorkspaceRequests(Aws::Vector<RebootRequest>&& value) { m_rebootWorkspaceRequestsHasBeenSet = true; m_rebootWorkspaceRequests = std::move(value); }

    /**
     * <p>The WorkSpaces to reboot. You can specify up to 25 WorkSpaces.</p>
     */
    inline RebootWorkspacesRequest& WithRebootWorkspaceRequests(const Aws::Vector<RebootRequest>& value) { SetRebootWorkspaceRequests(value); return *this;}

    /**
     * <p>The WorkSpaces to reboot. You can specify up to 25 WorkSpaces.</p>
     */
    inline RebootWorkspacesRequest& WithRebootWorkspaceRequests(Aws::Vector<RebootRequest>&& value) { SetRebootWorkspaceRequests(std::move(value)); return *this;}

    /**
     * <p>The WorkSpaces to reboot. You can specify up to 25 WorkSpaces.</p>
     */
    inline RebootWorkspacesRequest& AddRebootWorkspaceRequests(const RebootRequest& value) { m_rebootWorkspaceRequestsHasBeenSet = true; m_rebootWorkspaceRequests.push_back(value); return *this; }

    /**
     * <p>The WorkSpaces to reboot. You can specify up to 25 WorkSpaces.</p>
     */
    inline RebootWorkspacesRequest& AddRebootWorkspaceRequests(RebootRequest&& value) { m_rebootWorkspaceRequestsHasBeenSet = true; m_rebootWorkspaceRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RebootRequest> m_rebootWorkspaceRequests;
    bool m_rebootWorkspaceRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
