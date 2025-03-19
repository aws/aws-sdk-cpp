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
    AWS_QUICKSIGHT_API CreateFolderRequest() = default;

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
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateFolderRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const { return m_folderId; }
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }
    template<typename FolderIdT = Aws::String>
    void SetFolderId(FolderIdT&& value) { m_folderIdHasBeenSet = true; m_folderId = std::forward<FolderIdT>(value); }
    template<typename FolderIdT = Aws::String>
    CreateFolderRequest& WithFolderId(FolderIdT&& value) { SetFolderId(std::forward<FolderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the folder.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateFolderRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of folder. By default, <code>folderType</code> is
     * <code>SHARED</code>.</p>
     */
    inline FolderType GetFolderType() const { return m_folderType; }
    inline bool FolderTypeHasBeenSet() const { return m_folderTypeHasBeenSet; }
    inline void SetFolderType(FolderType value) { m_folderTypeHasBeenSet = true; m_folderType = value; }
    inline CreateFolderRequest& WithFolderType(FolderType value) { SetFolderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the parent folder.</p> <p>
     * <code>ParentFolderArn</code> can be null. An empty <code>parentFolderArn</code>
     * creates a root-level folder.</p>
     */
    inline const Aws::String& GetParentFolderArn() const { return m_parentFolderArn; }
    inline bool ParentFolderArnHasBeenSet() const { return m_parentFolderArnHasBeenSet; }
    template<typename ParentFolderArnT = Aws::String>
    void SetParentFolderArn(ParentFolderArnT&& value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn = std::forward<ParentFolderArnT>(value); }
    template<typename ParentFolderArnT = Aws::String>
    CreateFolderRequest& WithParentFolderArn(ParentFolderArnT&& value) { SetParentFolderArn(std::forward<ParentFolderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * of a folder.</p> <p>To specify no permissions, omit
     * <code>Permissions</code>.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    CreateFolderRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = ResourcePermission>
    CreateFolderRequest& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags for the folder.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateFolderRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFolderRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter that determines the sharing scope of the folder. The
     * default value for this parameter is <code>ACCOUNT</code>.</p>
     */
    inline SharingModel GetSharingModel() const { return m_sharingModel; }
    inline bool SharingModelHasBeenSet() const { return m_sharingModelHasBeenSet; }
    inline void SetSharingModel(SharingModel value) { m_sharingModelHasBeenSet = true; m_sharingModel = value; }
    inline CreateFolderRequest& WithSharingModel(SharingModel value) { SetSharingModel(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FolderType m_folderType{FolderType::NOT_SET};
    bool m_folderTypeHasBeenSet = false;

    Aws::String m_parentFolderArn;
    bool m_parentFolderArnHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SharingModel m_sharingModel{SharingModel::NOT_SET};
    bool m_sharingModelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
