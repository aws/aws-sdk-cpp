/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/TerminateRequest.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class TerminateWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API TerminateWorkspacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateWorkspaces"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The WorkSpaces to terminate. You can specify up to 25 WorkSpaces.</p>
     */
    inline const Aws::Vector<TerminateRequest>& GetTerminateWorkspaceRequests() const{ return m_terminateWorkspaceRequests; }

    /**
     * <p>The WorkSpaces to terminate. You can specify up to 25 WorkSpaces.</p>
     */
    inline bool TerminateWorkspaceRequestsHasBeenSet() const { return m_terminateWorkspaceRequestsHasBeenSet; }

    /**
     * <p>The WorkSpaces to terminate. You can specify up to 25 WorkSpaces.</p>
     */
    inline void SetTerminateWorkspaceRequests(const Aws::Vector<TerminateRequest>& value) { m_terminateWorkspaceRequestsHasBeenSet = true; m_terminateWorkspaceRequests = value; }

    /**
     * <p>The WorkSpaces to terminate. You can specify up to 25 WorkSpaces.</p>
     */
    inline void SetTerminateWorkspaceRequests(Aws::Vector<TerminateRequest>&& value) { m_terminateWorkspaceRequestsHasBeenSet = true; m_terminateWorkspaceRequests = std::move(value); }

    /**
     * <p>The WorkSpaces to terminate. You can specify up to 25 WorkSpaces.</p>
     */
    inline TerminateWorkspacesRequest& WithTerminateWorkspaceRequests(const Aws::Vector<TerminateRequest>& value) { SetTerminateWorkspaceRequests(value); return *this;}

    /**
     * <p>The WorkSpaces to terminate. You can specify up to 25 WorkSpaces.</p>
     */
    inline TerminateWorkspacesRequest& WithTerminateWorkspaceRequests(Aws::Vector<TerminateRequest>&& value) { SetTerminateWorkspaceRequests(std::move(value)); return *this;}

    /**
     * <p>The WorkSpaces to terminate. You can specify up to 25 WorkSpaces.</p>
     */
    inline TerminateWorkspacesRequest& AddTerminateWorkspaceRequests(const TerminateRequest& value) { m_terminateWorkspaceRequestsHasBeenSet = true; m_terminateWorkspaceRequests.push_back(value); return *this; }

    /**
     * <p>The WorkSpaces to terminate. You can specify up to 25 WorkSpaces.</p>
     */
    inline TerminateWorkspacesRequest& AddTerminateWorkspaceRequests(TerminateRequest&& value) { m_terminateWorkspaceRequestsHasBeenSet = true; m_terminateWorkspaceRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TerminateRequest> m_terminateWorkspaceRequests;
    bool m_terminateWorkspaceRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
