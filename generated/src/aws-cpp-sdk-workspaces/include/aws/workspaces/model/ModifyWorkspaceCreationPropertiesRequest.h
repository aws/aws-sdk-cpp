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
    AWS_WORKSPACES_API ModifyWorkspaceCreationPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyWorkspaceCreationProperties"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline ModifyWorkspaceCreationPropertiesRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline ModifyWorkspaceCreationPropertiesRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline ModifyWorkspaceCreationPropertiesRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The default properties for creating WorkSpaces.</p>
     */
    inline const WorkspaceCreationProperties& GetWorkspaceCreationProperties() const{ return m_workspaceCreationProperties; }

    /**
     * <p>The default properties for creating WorkSpaces.</p>
     */
    inline bool WorkspaceCreationPropertiesHasBeenSet() const { return m_workspaceCreationPropertiesHasBeenSet; }

    /**
     * <p>The default properties for creating WorkSpaces.</p>
     */
    inline void SetWorkspaceCreationProperties(const WorkspaceCreationProperties& value) { m_workspaceCreationPropertiesHasBeenSet = true; m_workspaceCreationProperties = value; }

    /**
     * <p>The default properties for creating WorkSpaces.</p>
     */
    inline void SetWorkspaceCreationProperties(WorkspaceCreationProperties&& value) { m_workspaceCreationPropertiesHasBeenSet = true; m_workspaceCreationProperties = std::move(value); }

    /**
     * <p>The default properties for creating WorkSpaces.</p>
     */
    inline ModifyWorkspaceCreationPropertiesRequest& WithWorkspaceCreationProperties(const WorkspaceCreationProperties& value) { SetWorkspaceCreationProperties(value); return *this;}

    /**
     * <p>The default properties for creating WorkSpaces.</p>
     */
    inline ModifyWorkspaceCreationPropertiesRequest& WithWorkspaceCreationProperties(WorkspaceCreationProperties&& value) { SetWorkspaceCreationProperties(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    WorkspaceCreationProperties m_workspaceCreationProperties;
    bool m_workspaceCreationPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
