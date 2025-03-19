/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the information used to create a WorkSpace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceRequest">AWS
   * API Reference</a></p>
   */
  class WorkspaceRequest
  {
  public:
    AWS_WORKSPACES_API WorkspaceRequest() = default;
    AWS_WORKSPACES_API WorkspaceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Directory Service directory for the WorkSpace. You can
     * use <a>DescribeWorkspaceDirectories</a> to list the available directories.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    WorkspaceRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name of the user for the WorkSpace. This user name must exist in the
     * Directory Service directory for the WorkSpace.</p> <p>The username is not
     * case-sensitive, but we recommend matching the case in the Directory Service
     * directory to avoid potential incompatibilities.</p> <p>The reserved keyword,
     * <code>[UNDEFINED]</code>, is used when creating user-decoupled WorkSpaces.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    WorkspaceRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle for the WorkSpace. You can use
     * <a>DescribeWorkspaceBundles</a> to list the available bundles.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    WorkspaceRequest& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the symmetric KMS key used to encrypt data stored on your
     * WorkSpace. Amazon WorkSpaces does not support asymmetric KMS keys.</p>
     */
    inline const Aws::String& GetVolumeEncryptionKey() const { return m_volumeEncryptionKey; }
    inline bool VolumeEncryptionKeyHasBeenSet() const { return m_volumeEncryptionKeyHasBeenSet; }
    template<typename VolumeEncryptionKeyT = Aws::String>
    void SetVolumeEncryptionKey(VolumeEncryptionKeyT&& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = std::forward<VolumeEncryptionKeyT>(value); }
    template<typename VolumeEncryptionKeyT = Aws::String>
    WorkspaceRequest& WithVolumeEncryptionKey(VolumeEncryptionKeyT&& value) { SetVolumeEncryptionKey(std::forward<VolumeEncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the data stored on the user volume is encrypted.</p>
     */
    inline bool GetUserVolumeEncryptionEnabled() const { return m_userVolumeEncryptionEnabled; }
    inline bool UserVolumeEncryptionEnabledHasBeenSet() const { return m_userVolumeEncryptionEnabledHasBeenSet; }
    inline void SetUserVolumeEncryptionEnabled(bool value) { m_userVolumeEncryptionEnabledHasBeenSet = true; m_userVolumeEncryptionEnabled = value; }
    inline WorkspaceRequest& WithUserVolumeEncryptionEnabled(bool value) { SetUserVolumeEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the data stored on the root volume is encrypted.</p>
     */
    inline bool GetRootVolumeEncryptionEnabled() const { return m_rootVolumeEncryptionEnabled; }
    inline bool RootVolumeEncryptionEnabledHasBeenSet() const { return m_rootVolumeEncryptionEnabledHasBeenSet; }
    inline void SetRootVolumeEncryptionEnabled(bool value) { m_rootVolumeEncryptionEnabledHasBeenSet = true; m_rootVolumeEncryptionEnabled = value; }
    inline WorkspaceRequest& WithRootVolumeEncryptionEnabled(bool value) { SetRootVolumeEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WorkSpace properties.</p>
     */
    inline const WorkspaceProperties& GetWorkspaceProperties() const { return m_workspaceProperties; }
    inline bool WorkspacePropertiesHasBeenSet() const { return m_workspacePropertiesHasBeenSet; }
    template<typename WorkspacePropertiesT = WorkspaceProperties>
    void SetWorkspaceProperties(WorkspacePropertiesT&& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = std::forward<WorkspacePropertiesT>(value); }
    template<typename WorkspacePropertiesT = WorkspaceProperties>
    WorkspaceRequest& WithWorkspaceProperties(WorkspacePropertiesT&& value) { SetWorkspaceProperties(std::forward<WorkspacePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the WorkSpace.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    WorkspaceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    WorkspaceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the user-decoupled WorkSpace.</p>  <p>
     * <code>WorkspaceName</code> is required if <code>UserName</code> is
     * <code>[UNDEFINED]</code> for user-decoupled WorkSpaces.
     * <code>WorkspaceName</code> is not applicable if <code>UserName</code> is
     * specified for user-assigned WorkSpaces.</p> 
     */
    inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
    inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
    template<typename WorkspaceNameT = Aws::String>
    void SetWorkspaceName(WorkspaceNameT&& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = std::forward<WorkspaceNameT>(value); }
    template<typename WorkspaceNameT = Aws::String>
    WorkspaceRequest& WithWorkspaceName(WorkspaceNameT&& value) { SetWorkspaceName(std::forward<WorkspaceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_volumeEncryptionKey;
    bool m_volumeEncryptionKeyHasBeenSet = false;

    bool m_userVolumeEncryptionEnabled{false};
    bool m_userVolumeEncryptionEnabledHasBeenSet = false;

    bool m_rootVolumeEncryptionEnabled{false};
    bool m_rootVolumeEncryptionEnabledHasBeenSet = false;

    WorkspaceProperties m_workspaceProperties;
    bool m_workspacePropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workspaceName;
    bool m_workspaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
