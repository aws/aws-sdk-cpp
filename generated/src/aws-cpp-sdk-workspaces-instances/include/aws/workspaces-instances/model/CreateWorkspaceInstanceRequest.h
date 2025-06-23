/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/WorkspacesInstancesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-instances/model/ManagedInstanceRequest.h>
#include <aws/workspaces-instances/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines the configuration parameters for creating a new WorkSpaces
   * Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/CreateWorkspaceInstanceRequest">AWS
   * API Reference</a></p>
   */
  class CreateWorkspaceInstanceRequest : public WorkspacesInstancesRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API CreateWorkspaceInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspaceInstance"; }

    AWS_WORKSPACESINSTANCES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESINSTANCES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Unique token to ensure idempotent instance creation, preventing duplicate
     * workspace launches.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateWorkspaceInstanceRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata tags for categorizing and managing WorkSpaces
     * Instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateWorkspaceInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateWorkspaceInstanceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Comprehensive configuration settings for the WorkSpaces Instance, including
     * network, compute, and storage parameters.</p>
     */
    inline const ManagedInstanceRequest& GetManagedInstance() const { return m_managedInstance; }
    inline bool ManagedInstanceHasBeenSet() const { return m_managedInstanceHasBeenSet; }
    template<typename ManagedInstanceT = ManagedInstanceRequest>
    void SetManagedInstance(ManagedInstanceT&& value) { m_managedInstanceHasBeenSet = true; m_managedInstance = std::forward<ManagedInstanceT>(value); }
    template<typename ManagedInstanceT = ManagedInstanceRequest>
    CreateWorkspaceInstanceRequest& WithManagedInstance(ManagedInstanceT&& value) { SetManagedInstance(std::forward<ManagedInstanceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ManagedInstanceRequest m_managedInstance;
    bool m_managedInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
