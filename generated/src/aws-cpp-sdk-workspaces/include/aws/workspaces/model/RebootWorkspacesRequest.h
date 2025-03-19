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
    AWS_WORKSPACES_API RebootWorkspacesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebootWorkspaces"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The WorkSpaces to reboot. You can specify up to 25 WorkSpaces.</p>
     */
    inline const Aws::Vector<RebootRequest>& GetRebootWorkspaceRequests() const { return m_rebootWorkspaceRequests; }
    inline bool RebootWorkspaceRequestsHasBeenSet() const { return m_rebootWorkspaceRequestsHasBeenSet; }
    template<typename RebootWorkspaceRequestsT = Aws::Vector<RebootRequest>>
    void SetRebootWorkspaceRequests(RebootWorkspaceRequestsT&& value) { m_rebootWorkspaceRequestsHasBeenSet = true; m_rebootWorkspaceRequests = std::forward<RebootWorkspaceRequestsT>(value); }
    template<typename RebootWorkspaceRequestsT = Aws::Vector<RebootRequest>>
    RebootWorkspacesRequest& WithRebootWorkspaceRequests(RebootWorkspaceRequestsT&& value) { SetRebootWorkspaceRequests(std::forward<RebootWorkspaceRequestsT>(value)); return *this;}
    template<typename RebootWorkspaceRequestsT = RebootRequest>
    RebootWorkspacesRequest& AddRebootWorkspaceRequests(RebootWorkspaceRequestsT&& value) { m_rebootWorkspaceRequestsHasBeenSet = true; m_rebootWorkspaceRequests.emplace_back(std::forward<RebootWorkspaceRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RebootRequest> m_rebootWorkspaceRequests;
    bool m_rebootWorkspaceRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
