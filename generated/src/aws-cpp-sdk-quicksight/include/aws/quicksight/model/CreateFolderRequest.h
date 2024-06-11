/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FolderType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SharingModel.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateFolderRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateFolderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFolder"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID for the Amazon Web Services account where you want to create the
     * folder.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CreateFolderRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CreateFolderRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CreateFolderRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }
    inline void SetFolderId(const Aws::String& value) { m_folderIdHasBeenSet = true; m_folderId = value; }
    inline void SetFolderId(Aws::String&& value) { m_folderIdHasBeenSet = true; m_folderId = std::move(value); }
    inline void SetFolderId(const char* value) { m_folderIdHasBeenSet = true; m_folderId.assign(value); }
    inline CreateFolderRequest& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}
    inline CreateFolderRequest& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}
    inline CreateFolderRequest& WithFolderId(const char* value) { SetFolderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the folder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateFolderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateFolderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateFolderRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of folder. By default, <code>folderType</code> is
     * <code>SHARED</code>.</p>
     */
    inline const FolderType& GetFolderType() const{ return m_folderType; }
    inline bool FolderTypeHasBeenSet() const { return m_folderTypeHasBeenSet; }
    inline void SetFolderType(const FolderType& value) { m_folderTypeHasBeenSet = true; m_folderType = value; }
    inline void SetFolderType(FolderType&& value) { m_folderTypeHasBeenSet = true; m_folderType = std::move(value); }
    inline CreateFolderRequest& WithFolderType(const FolderType& value) { SetFolderType(value); return *this;}
    inline CreateFolderRequest& WithFolderType(FolderType&& value) { SetFolderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the parent folder.</p> <p>
     * <code>ParentFolderArn</code> can be null. An empty <code>parentFolderArn</code>
     * creates a root-level folder.</p>
     */
    inline const Aws::String& GetParentFolderArn() const{ return m_parentFolderArn; }
    inline bool ParentFolderArnHasBeenSet() const { return m_parentFolderArnHasBeenSet; }
    inline void SetParentFolderArn(const Aws::String& value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn = value; }
    inline void SetParentFolderArn(Aws::String&& value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn = std::move(value); }
    inline void SetParentFolderArn(const char* value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn.assign(value); }
    inline CreateFolderRequest& WithParentFolderArn(const Aws::String& value) { SetParentFolderArn(value); return *this;}
    inline CreateFolderRequest& WithParentFolderArn(Aws::String&& value) { SetParentFolderArn(std::move(value)); return *this;}
    inline CreateFolderRequest& WithParentFolderArn(const char* value) { SetParentFolderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * of a folder.</p> <p>To specify no permissions, omit
     * <code>Permissions</code>.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline CreateFolderRequest& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}
    inline CreateFolderRequest& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}
    inline CreateFolderRequest& AddPermissions(const ResourcePermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    inline CreateFolderRequest& AddPermissions(ResourcePermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags for the folder.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateFolderRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateFolderRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateFolderRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateFolderRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter that determines the sharing scope of the folder. The
     * default value for this parameter is <code>ACCOUNT</code>.</p>
     */
    inline const SharingModel& GetSharingModel() const{ return m_sharingModel; }
    inline bool SharingModelHasBeenSet() const { return m_sharingModelHasBeenSet; }
    inline void SetSharingModel(const SharingModel& value) { m_sharingModelHasBeenSet = true; m_sharingModel = value; }
    inline void SetSharingModel(SharingModel&& value) { m_sharingModelHasBeenSet = true; m_sharingModel = std::move(value); }
    inline CreateFolderRequest& WithSharingModel(const SharingModel& value) { SetSharingModel(value); return *this;}
    inline CreateFolderRequest& WithSharingModel(SharingModel&& value) { SetSharingModel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FolderType m_folderType;
    bool m_folderTypeHasBeenSet = false;

    Aws::String m_parentFolderArn;
    bool m_parentFolderArnHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SharingModel m_sharingModel;
    bool m_sharingModelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
