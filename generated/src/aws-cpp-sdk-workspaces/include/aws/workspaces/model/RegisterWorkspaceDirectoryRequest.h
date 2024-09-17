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
    AWS_WORKSPACES_API RegisterWorkspaceDirectoryRequest();

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
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline RegisterWorkspaceDirectoryRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the subnets for your virtual private cloud (VPC). Make
     * sure that the subnets are in supported Availability Zones. The subnets must also
     * be in separate Availability Zones. If these conditions are not met, you will
     * receive an OperationNotSupportedException error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline RegisterWorkspaceDirectoryRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline RegisterWorkspaceDirectoryRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline RegisterWorkspaceDirectoryRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline RegisterWorkspaceDirectoryRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon WorkDocs is enabled or disabled. If you have enabled
     * this parameter and WorkDocs is not available in the Region, you will receive an
     * OperationNotSupportedException error. Set <code>EnableWorkDocs</code> to
     * disabled, and try again.</p>
     */
    inline bool GetEnableWorkDocs() const{ return m_enableWorkDocs; }
    inline bool EnableWorkDocsHasBeenSet() const { return m_enableWorkDocsHasBeenSet; }
    inline void SetEnableWorkDocs(bool value) { m_enableWorkDocsHasBeenSet = true; m_enableWorkDocs = value; }
    inline RegisterWorkspaceDirectoryRequest& WithEnableWorkDocs(bool value) { SetEnableWorkDocs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether self-service capabilities are enabled or disabled.</p>
     */
    inline bool GetEnableSelfService() const{ return m_enableSelfService; }
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
    inline const Tenancy& GetTenancy() const{ return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(const Tenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline void SetTenancy(Tenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }
    inline RegisterWorkspaceDirectoryRequest& WithTenancy(const Tenancy& value) { SetTenancy(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithTenancy(Tenancy&& value) { SetTenancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the directory.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RegisterWorkspaceDirectoryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RegisterWorkspaceDirectoryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RegisterWorkspaceDirectoryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the directory to register.</p>
     */
    inline const Aws::String& GetWorkspaceDirectoryName() const{ return m_workspaceDirectoryName; }
    inline bool WorkspaceDirectoryNameHasBeenSet() const { return m_workspaceDirectoryNameHasBeenSet; }
    inline void SetWorkspaceDirectoryName(const Aws::String& value) { m_workspaceDirectoryNameHasBeenSet = true; m_workspaceDirectoryName = value; }
    inline void SetWorkspaceDirectoryName(Aws::String&& value) { m_workspaceDirectoryNameHasBeenSet = true; m_workspaceDirectoryName = std::move(value); }
    inline void SetWorkspaceDirectoryName(const char* value) { m_workspaceDirectoryNameHasBeenSet = true; m_workspaceDirectoryName.assign(value); }
    inline RegisterWorkspaceDirectoryRequest& WithWorkspaceDirectoryName(const Aws::String& value) { SetWorkspaceDirectoryName(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithWorkspaceDirectoryName(Aws::String&& value) { SetWorkspaceDirectoryName(std::move(value)); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithWorkspaceDirectoryName(const char* value) { SetWorkspaceDirectoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the directory to register.</p>
     */
    inline const Aws::String& GetWorkspaceDirectoryDescription() const{ return m_workspaceDirectoryDescription; }
    inline bool WorkspaceDirectoryDescriptionHasBeenSet() const { return m_workspaceDirectoryDescriptionHasBeenSet; }
    inline void SetWorkspaceDirectoryDescription(const Aws::String& value) { m_workspaceDirectoryDescriptionHasBeenSet = true; m_workspaceDirectoryDescription = value; }
    inline void SetWorkspaceDirectoryDescription(Aws::String&& value) { m_workspaceDirectoryDescriptionHasBeenSet = true; m_workspaceDirectoryDescription = std::move(value); }
    inline void SetWorkspaceDirectoryDescription(const char* value) { m_workspaceDirectoryDescriptionHasBeenSet = true; m_workspaceDirectoryDescription.assign(value); }
    inline RegisterWorkspaceDirectoryRequest& WithWorkspaceDirectoryDescription(const Aws::String& value) { SetWorkspaceDirectoryDescription(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithWorkspaceDirectoryDescription(Aws::String&& value) { SetWorkspaceDirectoryDescription(std::move(value)); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithWorkspaceDirectoryDescription(const char* value) { SetWorkspaceDirectoryDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of identity management the user is using.</p>
     */
    inline const UserIdentityType& GetUserIdentityType() const{ return m_userIdentityType; }
    inline bool UserIdentityTypeHasBeenSet() const { return m_userIdentityTypeHasBeenSet; }
    inline void SetUserIdentityType(const UserIdentityType& value) { m_userIdentityTypeHasBeenSet = true; m_userIdentityType = value; }
    inline void SetUserIdentityType(UserIdentityType&& value) { m_userIdentityTypeHasBeenSet = true; m_userIdentityType = std::move(value); }
    inline RegisterWorkspaceDirectoryRequest& WithUserIdentityType(const UserIdentityType& value) { SetUserIdentityType(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithUserIdentityType(UserIdentityType&& value) { SetUserIdentityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the identity center instance.</p>
     */
    inline const Aws::String& GetIdcInstanceArn() const{ return m_idcInstanceArn; }
    inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
    inline void SetIdcInstanceArn(const Aws::String& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = value; }
    inline void SetIdcInstanceArn(Aws::String&& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = std::move(value); }
    inline void SetIdcInstanceArn(const char* value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn.assign(value); }
    inline RegisterWorkspaceDirectoryRequest& WithIdcInstanceArn(const Aws::String& value) { SetIdcInstanceArn(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithIdcInstanceArn(Aws::String&& value) { SetIdcInstanceArn(std::move(value)); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithIdcInstanceArn(const char* value) { SetIdcInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about Microsoft Entra config.</p>
     */
    inline const MicrosoftEntraConfig& GetMicrosoftEntraConfig() const{ return m_microsoftEntraConfig; }
    inline bool MicrosoftEntraConfigHasBeenSet() const { return m_microsoftEntraConfigHasBeenSet; }
    inline void SetMicrosoftEntraConfig(const MicrosoftEntraConfig& value) { m_microsoftEntraConfigHasBeenSet = true; m_microsoftEntraConfig = value; }
    inline void SetMicrosoftEntraConfig(MicrosoftEntraConfig&& value) { m_microsoftEntraConfigHasBeenSet = true; m_microsoftEntraConfig = std::move(value); }
    inline RegisterWorkspaceDirectoryRequest& WithMicrosoftEntraConfig(const MicrosoftEntraConfig& value) { SetMicrosoftEntraConfig(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithMicrosoftEntraConfig(MicrosoftEntraConfig&& value) { SetMicrosoftEntraConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the directory's WorkSpace type is personal or pools.</p>
     */
    inline const WorkspaceType& GetWorkspaceType() const{ return m_workspaceType; }
    inline bool WorkspaceTypeHasBeenSet() const { return m_workspaceTypeHasBeenSet; }
    inline void SetWorkspaceType(const WorkspaceType& value) { m_workspaceTypeHasBeenSet = true; m_workspaceType = value; }
    inline void SetWorkspaceType(WorkspaceType&& value) { m_workspaceTypeHasBeenSet = true; m_workspaceType = std::move(value); }
    inline RegisterWorkspaceDirectoryRequest& WithWorkspaceType(const WorkspaceType& value) { SetWorkspaceType(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithWorkspaceType(WorkspaceType&& value) { SetWorkspaceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The active directory config of the directory.</p>
     */
    inline const ActiveDirectoryConfig& GetActiveDirectoryConfig() const{ return m_activeDirectoryConfig; }
    inline bool ActiveDirectoryConfigHasBeenSet() const { return m_activeDirectoryConfigHasBeenSet; }
    inline void SetActiveDirectoryConfig(const ActiveDirectoryConfig& value) { m_activeDirectoryConfigHasBeenSet = true; m_activeDirectoryConfig = value; }
    inline void SetActiveDirectoryConfig(ActiveDirectoryConfig&& value) { m_activeDirectoryConfigHasBeenSet = true; m_activeDirectoryConfig = std::move(value); }
    inline RegisterWorkspaceDirectoryRequest& WithActiveDirectoryConfig(const ActiveDirectoryConfig& value) { SetActiveDirectoryConfig(value); return *this;}
    inline RegisterWorkspaceDirectoryRequest& WithActiveDirectoryConfig(ActiveDirectoryConfig&& value) { SetActiveDirectoryConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    bool m_enableWorkDocs;
    bool m_enableWorkDocsHasBeenSet = false;

    bool m_enableSelfService;
    bool m_enableSelfServiceHasBeenSet = false;

    Tenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workspaceDirectoryName;
    bool m_workspaceDirectoryNameHasBeenSet = false;

    Aws::String m_workspaceDirectoryDescription;
    bool m_workspaceDirectoryDescriptionHasBeenSet = false;

    UserIdentityType m_userIdentityType;
    bool m_userIdentityTypeHasBeenSet = false;

    Aws::String m_idcInstanceArn;
    bool m_idcInstanceArnHasBeenSet = false;

    MicrosoftEntraConfig m_microsoftEntraConfig;
    bool m_microsoftEntraConfigHasBeenSet = false;

    WorkspaceType m_workspaceType;
    bool m_workspaceTypeHasBeenSet = false;

    ActiveDirectoryConfig m_activeDirectoryConfig;
    bool m_activeDirectoryConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
