/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/TargetWorkspaceState.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifyWorkspaceStateRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifyWorkspaceStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyWorkspaceState"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline ModifyWorkspaceStateRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline ModifyWorkspaceStateRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline ModifyWorkspaceStateRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The WorkSpace state.</p>
     */
    inline const TargetWorkspaceState& GetWorkspaceState() const{ return m_workspaceState; }

    /**
     * <p>The WorkSpace state.</p>
     */
    inline bool WorkspaceStateHasBeenSet() const { return m_workspaceStateHasBeenSet; }

    /**
     * <p>The WorkSpace state.</p>
     */
    inline void SetWorkspaceState(const TargetWorkspaceState& value) { m_workspaceStateHasBeenSet = true; m_workspaceState = value; }

    /**
     * <p>The WorkSpace state.</p>
     */
    inline void SetWorkspaceState(TargetWorkspaceState&& value) { m_workspaceStateHasBeenSet = true; m_workspaceState = std::move(value); }

    /**
     * <p>The WorkSpace state.</p>
     */
    inline ModifyWorkspaceStateRequest& WithWorkspaceState(const TargetWorkspaceState& value) { SetWorkspaceState(value); return *this;}

    /**
     * <p>The WorkSpace state.</p>
     */
    inline ModifyWorkspaceStateRequest& WithWorkspaceState(TargetWorkspaceState&& value) { SetWorkspaceState(std::move(value)); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    TargetWorkspaceState m_workspaceState;
    bool m_workspaceStateHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
