/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/WorkspacesInstancesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Identifies the WorkSpaces Instance to retrieve detailed information
   * for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/GetWorkspaceInstanceRequest">AWS
   * API Reference</a></p>
   */
  class GetWorkspaceInstanceRequest : public WorkspacesInstancesRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API GetWorkspaceInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkspaceInstance"; }

    AWS_WORKSPACESINSTANCES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESINSTANCES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Unique identifier of the WorkSpace Instance to retrieve.</p>
     */
    inline const Aws::String& GetWorkspaceInstanceId() const { return m_workspaceInstanceId; }
    inline bool WorkspaceInstanceIdHasBeenSet() const { return m_workspaceInstanceIdHasBeenSet; }
    template<typename WorkspaceInstanceIdT = Aws::String>
    void SetWorkspaceInstanceId(WorkspaceInstanceIdT&& value) { m_workspaceInstanceIdHasBeenSet = true; m_workspaceInstanceId = std::forward<WorkspaceInstanceIdT>(value); }
    template<typename WorkspaceInstanceIdT = Aws::String>
    GetWorkspaceInstanceRequest& WithWorkspaceInstanceId(WorkspaceInstanceIdT&& value) { SetWorkspaceInstanceId(std::forward<WorkspaceInstanceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceInstanceId;
    bool m_workspaceInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
