/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tenancy.h>
#include <aws/workspaces/model/UserIdentityType.h>
#include <aws/workspaces/model/MicrosoftEntraConfig.h>
#include <aws/workspaces/model/WorkspaceType.h>
#include <aws/workspaces/model/ActiveDirectoryConfig.h>
#include <aws/workspaces/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class RegisterWorkspaceDirectoryRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API RegisterWorkspaceDirectoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterWorkspaceDirectory"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the directory. You cannot register a directory if it does
     * not have a status of Active. If the directory does not have a status of Active,
     * you will receive an InvalidResourceStateException error. If you have already
     * registered the maximum number of directories that you can register with Amazon
     * WorkSpaces, you will receive a ResourceLimitExceededException error. Deregister
     * directories that you are not using for WorkSpaces, and try again.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    RegisterWorkspaceDirectoryRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    RegisterWorkspaceDirectoryRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    RegisterWorkspaceDirectoryRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether self-service capabilities are enabled or disabled.</p>
     */
    inline bool GetEnableSelfService() const { return m_enableSelfService; }
    inline bool EnableSelfServiceHasBeenSet() const { return m_enableSelfServiceHasBeenSet; }
    inline void SetEnableSelfService(bool value) { m_enableSelfServiceHasBeenSet = true; m_enableSelfService = value; }
    inline RegisterWorkspaceDirectoryRequest& WithEnableSelfService(bool value) { SetEnableSelfService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether your WorkSpace directory is dedicated or shared. To use
     * Bring Your Own License (BYOL) images, this value must be set to
     * <code>DEDICATED</code> and your Amazon Web Services account must be enabled for
     * BYOL. If your account has not been enabled for BYOL, you will receive an
     * InvalidParameterValuesException error. For more information about BYOL images,
     * see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline Tenancy GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(Tenancy value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline RegisterWorkspaceDirectoryRequest& WithTenancy(Tenancy value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the directory.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RegisterWorkspaceDirectoryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RegisterWorkspaceDirectoryRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the directory to register.</p>
     */
    inline const Aws::String& GetWorkspaceDirectoryName() const { return m_workspaceDirectoryName; }
    inline bool WorkspaceDirectoryNameHasBeenSet() const { return m_workspaceDirectoryNameHasBeenSet; }
    template<typename WorkspaceDirectoryNameT = Aws::String>
    void SetWorkspaceDirectoryName(WorkspaceDirectoryNameT&& value) { m_workspaceDirectoryNameHasBeenSet = true; m_workspaceDirectoryName = std::forward<WorkspaceDirectoryNameT>(value); }
    template<typename WorkspaceDirectoryNameT = Aws::String>
    RegisterWorkspaceDirectoryRequest& WithWorkspaceDirectoryName(WorkspaceDirectoryNameT&& value) { SetWorkspaceDirectoryName(std::forward<WorkspaceDirectoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the directory to register.</p>
     */
    inline const Aws::String& GetWorkspaceDirectoryDescription() const { return m_workspaceDirectoryDescription; }
    inline bool WorkspaceDirectoryDescriptionHasBeenSet() const { return m_workspaceDirectoryDescriptionHasBeenSet; }
    template<typename WorkspaceDirectoryDescriptionT = Aws::String>
    void SetWorkspaceDirectoryDescription(WorkspaceDirectoryDescriptionT&& value) { m_workspaceDirectoryDescriptionHasBeenSet = true; m_workspaceDirectoryDescription = std::forward<WorkspaceDirectoryDescriptionT>(value); }
    template<typename WorkspaceDirectoryDescriptionT = Aws::String>
    RegisterWorkspaceDirectoryRequest& WithWorkspaceDirectoryDescription(WorkspaceDirectoryDescriptionT&& value) { SetWorkspaceDirectoryDescription(std::forward<WorkspaceDirectoryDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of identity management the user is using.</p>
     */
    inline UserIdentityType GetUserIdentityType() const { return m_userIdentityType; }
    inline bool UserIdentityTypeHasBeenSet() const { return m_userIdentityTypeHasBeenSet; }
    inline void SetUserIdentityType(UserIdentityType value) { m_userIdentityTypeHasBeenSet = true; m_userIdentityType = value; }
    inline RegisterWorkspaceDirectoryRequest& WithUserIdentityType(UserIdentityType value) { SetUserIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the identity center instance.</p>
     */
    inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
    inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
    template<typename IdcInstanceArnT = Aws::String>
    void SetIdcInstanceArn(IdcInstanceArnT&& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = std::forward<IdcInstanceArnT>(value); }
    template<typename IdcInstanceArnT = Aws::String>
    RegisterWorkspaceDirectoryRequest& WithIdcInstanceArn(IdcInstanceArnT&& value) { SetIdcInstanceArn(std::forward<IdcInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about Microsoft Entra config.</p>
     */
    inline const MicrosoftEntraConfig& GetMicrosoftEntraConfig() const { return m_microsoftEntraConfig; }
    inline bool MicrosoftEntraConfigHasBeenSet() const { return m_microsoftEntraConfigHasBeenSet; }
    template<typename MicrosoftEntraConfigT = MicrosoftEntraConfig>
    void SetMicrosoftEntraConfig(MicrosoftEntraConfigT&& value) { m_microsoftEntraConfigHasBeenSet = true; m_microsoftEntraConfig = std::forward<MicrosoftEntraConfigT>(value); }
    template<typename MicrosoftEntraConfigT = MicrosoftEntraConfig>
    RegisterWorkspaceDirectoryRequest& WithMicrosoftEntraConfig(MicrosoftEntraConfigT&& value) { SetMicrosoftEntraConfig(std::forward<MicrosoftEntraConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the directory's WorkSpace type is personal or pools.</p>
     */
    inline WorkspaceType GetWorkspaceType() const { return m_workspaceType; }
    inline bool WorkspaceTypeHasBeenSet() const { return m_workspaceTypeHasBeenSet; }
    inline void SetWorkspaceType(WorkspaceType value) { m_workspaceTypeHasBeenSet = true; m_workspaceType = value; }
    inline RegisterWorkspaceDirectoryRequest& WithWorkspaceType(WorkspaceType value) { SetWorkspaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The active directory config of the directory.</p>
     */
    inline const ActiveDirectoryConfig& GetActiveDirectoryConfig() const { return m_activeDirectoryConfig; }
    inline bool ActiveDirectoryConfigHasBeenSet() const { return m_activeDirectoryConfigHasBeenSet; }
    template<typename ActiveDirectoryConfigT = ActiveDirectoryConfig>
    void SetActiveDirectoryConfig(ActiveDirectoryConfigT&& value) { m_activeDirectoryConfigHasBeenSet = true; m_activeDirectoryConfig = std::forward<ActiveDirectoryConfigT>(value); }
    template<typename ActiveDirectoryConfigT = ActiveDirectoryConfig>
    RegisterWorkspaceDirectoryRequest& WithActiveDirectoryConfig(ActiveDirectoryConfigT&& value) { SetActiveDirectoryConfig(std::forward<ActiveDirectoryConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    bool m_enableSelfService{false};
    bool m_enableSelfServiceHasBeenSet = false;

    Tenancy m_tenancy{Tenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workspaceDirectoryName;
    bool m_workspaceDirectoryNameHasBeenSet = false;

    Aws::String m_workspaceDirectoryDescription;
    bool m_workspaceDirectoryDescriptionHasBeenSet = false;

    UserIdentityType m_userIdentityType{UserIdentityType::NOT_SET};
    bool m_userIdentityTypeHasBeenSet = false;

    Aws::String m_idcInstanceArn;
    bool m_idcInstanceArnHasBeenSet = false;

    MicrosoftEntraConfig m_microsoftEntraConfig;
    bool m_microsoftEntraConfigHasBeenSet = false;

    WorkspaceType m_workspaceType{WorkspaceType::NOT_SET};
    bool m_workspaceTypeHasBeenSet = false;

    ActiveDirectoryConfig m_activeDirectoryConfig;
    bool m_activeDirectoryConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
