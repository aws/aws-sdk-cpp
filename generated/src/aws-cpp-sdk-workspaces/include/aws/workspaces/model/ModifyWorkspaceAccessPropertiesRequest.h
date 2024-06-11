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
    AWS_WORKSPACES_API ModifyWorkspaceAccessPropertiesRequest();

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
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ModifyWorkspaceAccessPropertiesRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ModifyWorkspaceAccessPropertiesRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ModifyWorkspaceAccessPropertiesRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device types and operating systems to enable or disable for access.</p>
     */
    inline const WorkspaceAccessProperties& GetWorkspaceAccessProperties() const{ return m_workspaceAccessProperties; }
    inline bool WorkspaceAccessPropertiesHasBeenSet() const { return m_workspaceAccessPropertiesHasBeenSet; }
    inline void SetWorkspaceAccessProperties(const WorkspaceAccessProperties& value) { m_workspaceAccessPropertiesHasBeenSet = true; m_workspaceAccessProperties = value; }
    inline void SetWorkspaceAccessProperties(WorkspaceAccessProperties&& value) { m_workspaceAccessPropertiesHasBeenSet = true; m_workspaceAccessProperties = std::move(value); }
    inline ModifyWorkspaceAccessPropertiesRequest& WithWorkspaceAccessProperties(const WorkspaceAccessProperties& value) { SetWorkspaceAccessProperties(value); return *this;}
    inline ModifyWorkspaceAccessPropertiesRequest& WithWorkspaceAccessProperties(WorkspaceAccessProperties&& value) { SetWorkspaceAccessProperties(std::move(value)); return *this;}
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
