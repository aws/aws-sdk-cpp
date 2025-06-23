/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/WorkspacesInstancesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-instances/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Specifies tags to add to a WorkSpace Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/TagResourceRequest">AWS
   * API Reference</a></p>
   */
  class TagResourceRequest : public WorkspacesInstancesRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API TagResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_WORKSPACESINSTANCES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESINSTANCES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Unique identifier of the WorkSpace Instance to tag.</p>
     */
    inline const Aws::String& GetWorkspaceInstanceId() const { return m_workspaceInstanceId; }
    inline bool WorkspaceInstanceIdHasBeenSet() const { return m_workspaceInstanceIdHasBeenSet; }
    template<typename WorkspaceInstanceIdT = Aws::String>
    void SetWorkspaceInstanceId(WorkspaceInstanceIdT&& value) { m_workspaceInstanceIdHasBeenSet = true; m_workspaceInstanceId = std::forward<WorkspaceInstanceIdT>(value); }
    template<typename WorkspaceInstanceIdT = Aws::String>
    TagResourceRequest& WithWorkspaceInstanceId(WorkspaceInstanceIdT&& value) { SetWorkspaceInstanceId(std::forward<WorkspaceInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to be added to the WorkSpace Instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TagResourceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TagResourceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_workspaceInstanceId;
    bool m_workspaceInstanceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
