/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ComputeType.h>
#include <aws/workspaces/model/UserStorage.h>
#include <aws/workspaces/model/RootStorage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateWorkspaceBundleRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API CreateWorkspaceBundleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspaceBundle"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the bundle.</p>
     */
    inline const Aws::String& GetBundleName() const { return m_bundleName; }
    inline bool BundleNameHasBeenSet() const { return m_bundleNameHasBeenSet; }
    template<typename BundleNameT = Aws::String>
    void SetBundleName(BundleNameT&& value) { m_bundleNameHasBeenSet = true; m_bundleName = std::forward<BundleNameT>(value); }
    template<typename BundleNameT = Aws::String>
    CreateWorkspaceBundleRequest& WithBundleName(BundleNameT&& value) { SetBundleName(std::forward<BundleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the bundle.</p>
     */
    inline const Aws::String& GetBundleDescription() const { return m_bundleDescription; }
    inline bool BundleDescriptionHasBeenSet() const { return m_bundleDescriptionHasBeenSet; }
    template<typename BundleDescriptionT = Aws::String>
    void SetBundleDescription(BundleDescriptionT&& value) { m_bundleDescriptionHasBeenSet = true; m_bundleDescription = std::forward<BundleDescriptionT>(value); }
    template<typename BundleDescriptionT = Aws::String>
    CreateWorkspaceBundleRequest& WithBundleDescription(BundleDescriptionT&& value) { SetBundleDescription(std::forward<BundleDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the image that is used to create the bundle.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    CreateWorkspaceBundleRequest& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ComputeType& GetComputeType() const { return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    template<typename ComputeTypeT = ComputeType>
    void SetComputeType(ComputeTypeT&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::forward<ComputeTypeT>(value); }
    template<typename ComputeTypeT = ComputeType>
    CreateWorkspaceBundleRequest& WithComputeType(ComputeTypeT&& value) { SetComputeType(std::forward<ComputeTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserStorage& GetUserStorage() const { return m_userStorage; }
    inline bool UserStorageHasBeenSet() const { return m_userStorageHasBeenSet; }
    template<typename UserStorageT = UserStorage>
    void SetUserStorage(UserStorageT&& value) { m_userStorageHasBeenSet = true; m_userStorage = std::forward<UserStorageT>(value); }
    template<typename UserStorageT = UserStorage>
    CreateWorkspaceBundleRequest& WithUserStorage(UserStorageT&& value) { SetUserStorage(std::forward<UserStorageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RootStorage& GetRootStorage() const { return m_rootStorage; }
    inline bool RootStorageHasBeenSet() const { return m_rootStorageHasBeenSet; }
    template<typename RootStorageT = RootStorage>
    void SetRootStorage(RootStorageT&& value) { m_rootStorageHasBeenSet = true; m_rootStorage = std::forward<RootStorageT>(value); }
    template<typename RootStorageT = RootStorage>
    CreateWorkspaceBundleRequest& WithRootStorage(RootStorageT&& value) { SetRootStorage(std::forward<RootStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the bundle.</p>  <p>To add tags at the same
     * time when you're creating the bundle, you must create an IAM policy that grants
     * your IAM user permissions to use <code>workspaces:CreateTags</code>. </p>
     * 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateWorkspaceBundleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateWorkspaceBundleRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_bundleName;
    bool m_bundleNameHasBeenSet = false;

    Aws::String m_bundleDescription;
    bool m_bundleDescriptionHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;

    UserStorage m_userStorage;
    bool m_userStorageHasBeenSet = false;

    RootStorage m_rootStorage;
    bool m_rootStorageHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
