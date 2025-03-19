/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceCreationProperties.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifyWorkspaceCreationPropertiesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifyWorkspaceCreationPropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyWorkspaceCreationProperties"; }

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
    ModifyWorkspaceCreationPropertiesRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default properties for creating WorkSpaces.</p>
     */
    inline const WorkspaceCreationProperties& GetWorkspaceCreationProperties() const { return m_workspaceCreationProperties; }
    inline bool WorkspaceCreationPropertiesHasBeenSet() const { return m_workspaceCreationPropertiesHasBeenSet; }
    template<typename WorkspaceCreationPropertiesT = WorkspaceCreationProperties>
    void SetWorkspaceCreationProperties(WorkspaceCreationPropertiesT&& value) { m_workspaceCreationPropertiesHasBeenSet = true; m_workspaceCreationProperties = std::forward<WorkspaceCreationPropertiesT>(value); }
    template<typename WorkspaceCreationPropertiesT = WorkspaceCreationProperties>
    ModifyWorkspaceCreationPropertiesRequest& WithWorkspaceCreationProperties(WorkspaceCreationPropertiesT&& value) { SetWorkspaceCreationProperties(std::forward<WorkspaceCreationPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    WorkspaceCreationProperties m_workspaceCreationProperties;
    bool m_workspaceCreationPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
