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
    AWS_WORKSPACES_API CreateWorkspaceBundleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspaceBundle"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the bundle.</p>
     */
    inline const Aws::String& GetBundleName() const{ return m_bundleName; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline bool BundleNameHasBeenSet() const { return m_bundleNameHasBeenSet; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetBundleName(const Aws::String& value) { m_bundleNameHasBeenSet = true; m_bundleName = value; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetBundleName(Aws::String&& value) { m_bundleNameHasBeenSet = true; m_bundleName = std::move(value); }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetBundleName(const char* value) { m_bundleNameHasBeenSet = true; m_bundleName.assign(value); }

    /**
     * <p>The name of the bundle.</p>
     */
    inline CreateWorkspaceBundleRequest& WithBundleName(const Aws::String& value) { SetBundleName(value); return *this;}

    /**
     * <p>The name of the bundle.</p>
     */
    inline CreateWorkspaceBundleRequest& WithBundleName(Aws::String&& value) { SetBundleName(std::move(value)); return *this;}

    /**
     * <p>The name of the bundle.</p>
     */
    inline CreateWorkspaceBundleRequest& WithBundleName(const char* value) { SetBundleName(value); return *this;}


    /**
     * <p>The description of the bundle.</p>
     */
    inline const Aws::String& GetBundleDescription() const{ return m_bundleDescription; }

    /**
     * <p>The description of the bundle.</p>
     */
    inline bool BundleDescriptionHasBeenSet() const { return m_bundleDescriptionHasBeenSet; }

    /**
     * <p>The description of the bundle.</p>
     */
    inline void SetBundleDescription(const Aws::String& value) { m_bundleDescriptionHasBeenSet = true; m_bundleDescription = value; }

    /**
     * <p>The description of the bundle.</p>
     */
    inline void SetBundleDescription(Aws::String&& value) { m_bundleDescriptionHasBeenSet = true; m_bundleDescription = std::move(value); }

    /**
     * <p>The description of the bundle.</p>
     */
    inline void SetBundleDescription(const char* value) { m_bundleDescriptionHasBeenSet = true; m_bundleDescription.assign(value); }

    /**
     * <p>The description of the bundle.</p>
     */
    inline CreateWorkspaceBundleRequest& WithBundleDescription(const Aws::String& value) { SetBundleDescription(value); return *this;}

    /**
     * <p>The description of the bundle.</p>
     */
    inline CreateWorkspaceBundleRequest& WithBundleDescription(Aws::String&& value) { SetBundleDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the bundle.</p>
     */
    inline CreateWorkspaceBundleRequest& WithBundleDescription(const char* value) { SetBundleDescription(value); return *this;}


    /**
     * <p>The identifier of the image that is used to create the bundle.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The identifier of the image that is used to create the bundle.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The identifier of the image that is used to create the bundle.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The identifier of the image that is used to create the bundle.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The identifier of the image that is used to create the bundle.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The identifier of the image that is used to create the bundle.</p>
     */
    inline CreateWorkspaceBundleRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The identifier of the image that is used to create the bundle.</p>
     */
    inline CreateWorkspaceBundleRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the image that is used to create the bundle.</p>
     */
    inline CreateWorkspaceBundleRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }

    
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }

    
    inline CreateWorkspaceBundleRequest& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    
    inline CreateWorkspaceBundleRequest& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}


    
    inline const UserStorage& GetUserStorage() const{ return m_userStorage; }

    
    inline bool UserStorageHasBeenSet() const { return m_userStorageHasBeenSet; }

    
    inline void SetUserStorage(const UserStorage& value) { m_userStorageHasBeenSet = true; m_userStorage = value; }

    
    inline void SetUserStorage(UserStorage&& value) { m_userStorageHasBeenSet = true; m_userStorage = std::move(value); }

    
    inline CreateWorkspaceBundleRequest& WithUserStorage(const UserStorage& value) { SetUserStorage(value); return *this;}

    
    inline CreateWorkspaceBundleRequest& WithUserStorage(UserStorage&& value) { SetUserStorage(std::move(value)); return *this;}


    
    inline const RootStorage& GetRootStorage() const{ return m_rootStorage; }

    
    inline bool RootStorageHasBeenSet() const { return m_rootStorageHasBeenSet; }

    
    inline void SetRootStorage(const RootStorage& value) { m_rootStorageHasBeenSet = true; m_rootStorage = value; }

    
    inline void SetRootStorage(RootStorage&& value) { m_rootStorageHasBeenSet = true; m_rootStorage = std::move(value); }

    
    inline CreateWorkspaceBundleRequest& WithRootStorage(const RootStorage& value) { SetRootStorage(value); return *this;}

    
    inline CreateWorkspaceBundleRequest& WithRootStorage(RootStorage&& value) { SetRootStorage(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the bundle.</p>  <p>To add tags at the same
     * time when you're creating the bundle, you must create an IAM policy that grants
     * your IAM user permissions to use <code>workspaces:CreateTags</code>. </p>
     * 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the bundle.</p>  <p>To add tags at the same
     * time when you're creating the bundle, you must create an IAM policy that grants
     * your IAM user permissions to use <code>workspaces:CreateTags</code>. </p>
     * 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the bundle.</p>  <p>To add tags at the same
     * time when you're creating the bundle, you must create an IAM policy that grants
     * your IAM user permissions to use <code>workspaces:CreateTags</code>. </p>
     * 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the bundle.</p>  <p>To add tags at the same
     * time when you're creating the bundle, you must create an IAM policy that grants
     * your IAM user permissions to use <code>workspaces:CreateTags</code>. </p>
     * 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the bundle.</p>  <p>To add tags at the same
     * time when you're creating the bundle, you must create an IAM policy that grants
     * your IAM user permissions to use <code>workspaces:CreateTags</code>. </p>
     * 
     */
    inline CreateWorkspaceBundleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the bundle.</p>  <p>To add tags at the same
     * time when you're creating the bundle, you must create an IAM policy that grants
     * your IAM user permissions to use <code>workspaces:CreateTags</code>. </p>
     * 
     */
    inline CreateWorkspaceBundleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the bundle.</p>  <p>To add tags at the same
     * time when you're creating the bundle, you must create an IAM policy that grants
     * your IAM user permissions to use <code>workspaces:CreateTags</code>. </p>
     * 
     */
    inline CreateWorkspaceBundleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the bundle.</p>  <p>To add tags at the same
     * time when you're creating the bundle, you must create an IAM policy that grants
     * your IAM user permissions to use <code>workspaces:CreateTags</code>. </p>
     * 
     */
    inline CreateWorkspaceBundleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
