/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceAccessProperties.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifyWorkspaceAccessPropertiesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifyWorkspaceAccessPropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyWorkspaceAccessProperties"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ModifyWorkspaceAccessPropertiesRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device types and operating systems to enable or disable for access.</p>
     */
    inline const WorkspaceAccessProperties& GetWorkspaceAccessProperties() const { return m_workspaceAccessProperties; }
    inline bool WorkspaceAccessPropertiesHasBeenSet() const { return m_workspaceAccessPropertiesHasBeenSet; }
    template<typename WorkspaceAccessPropertiesT = WorkspaceAccessProperties>
    void SetWorkspaceAccessProperties(WorkspaceAccessPropertiesT&& value) { m_workspaceAccessPropertiesHasBeenSet = true; m_workspaceAccessProperties = std::forward<WorkspaceAccessPropertiesT>(value); }
    template<typename WorkspaceAccessPropertiesT = WorkspaceAccessProperties>
    ModifyWorkspaceAccessPropertiesRequest& WithWorkspaceAccessProperties(WorkspaceAccessPropertiesT&& value) { SetWorkspaceAccessProperties(std::forward<WorkspaceAccessPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    WorkspaceAccessProperties m_workspaceAccessProperties;
    bool m_workspaceAccessPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
