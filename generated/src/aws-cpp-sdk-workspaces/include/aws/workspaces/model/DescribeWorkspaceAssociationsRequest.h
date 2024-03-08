/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/WorkSpaceAssociatedResourceType.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeWorkspaceAssociationsRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspaceAssociations"; }

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
    inline DescribeWorkspaceAssociationsRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline DescribeWorkspaceAssociationsRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline DescribeWorkspaceAssociationsRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The resource types of the associated resources.</p>
     */
    inline const Aws::Vector<WorkSpaceAssociatedResourceType>& GetAssociatedResourceTypes() const{ return m_associatedResourceTypes; }

    /**
     * <p>The resource types of the associated resources.</p>
     */
    inline bool AssociatedResourceTypesHasBeenSet() const { return m_associatedResourceTypesHasBeenSet; }

    /**
     * <p>The resource types of the associated resources.</p>
     */
    inline void SetAssociatedResourceTypes(const Aws::Vector<WorkSpaceAssociatedResourceType>& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes = value; }

    /**
     * <p>The resource types of the associated resources.</p>
     */
    inline void SetAssociatedResourceTypes(Aws::Vector<WorkSpaceAssociatedResourceType>&& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes = std::move(value); }

    /**
     * <p>The resource types of the associated resources.</p>
     */
    inline DescribeWorkspaceAssociationsRequest& WithAssociatedResourceTypes(const Aws::Vector<WorkSpaceAssociatedResourceType>& value) { SetAssociatedResourceTypes(value); return *this;}

    /**
     * <p>The resource types of the associated resources.</p>
     */
    inline DescribeWorkspaceAssociationsRequest& WithAssociatedResourceTypes(Aws::Vector<WorkSpaceAssociatedResourceType>&& value) { SetAssociatedResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The resource types of the associated resources.</p>
     */
    inline DescribeWorkspaceAssociationsRequest& AddAssociatedResourceTypes(const WorkSpaceAssociatedResourceType& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes.push_back(value); return *this; }

    /**
     * <p>The resource types of the associated resources.</p>
     */
    inline DescribeWorkspaceAssociationsRequest& AddAssociatedResourceTypes(WorkSpaceAssociatedResourceType&& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::Vector<WorkSpaceAssociatedResourceType> m_associatedResourceTypes;
    bool m_associatedResourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
