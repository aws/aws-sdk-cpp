/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class UpdateWorkspaceImagePermissionRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API UpdateWorkspaceImagePermissionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspaceImagePermission"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    UpdateWorkspaceImagePermissionRequest& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission to copy the image. This permission can be revoked only after
     * an image has been shared.</p>
     */
    inline bool GetAllowCopyImage() const { return m_allowCopyImage; }
    inline bool AllowCopyImageHasBeenSet() const { return m_allowCopyImageHasBeenSet; }
    inline void SetAllowCopyImage(bool value) { m_allowCopyImageHasBeenSet = true; m_allowCopyImage = value; }
    inline UpdateWorkspaceImagePermissionRequest& WithAllowCopyImage(bool value) { SetAllowCopyImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account to share or unshare the
     * image with.</p>  <p>Before sharing the image, confirm that you are
     * sharing to the correct Amazon Web Services account ID.</p> 
     */
    inline const Aws::String& GetSharedAccountId() const { return m_sharedAccountId; }
    inline bool SharedAccountIdHasBeenSet() const { return m_sharedAccountIdHasBeenSet; }
    template<typename SharedAccountIdT = Aws::String>
    void SetSharedAccountId(SharedAccountIdT&& value) { m_sharedAccountIdHasBeenSet = true; m_sharedAccountId = std::forward<SharedAccountIdT>(value); }
    template<typename SharedAccountIdT = Aws::String>
    UpdateWorkspaceImagePermissionRequest& WithSharedAccountId(SharedAccountIdT&& value) { SetSharedAccountId(std::forward<SharedAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    bool m_allowCopyImage{false};
    bool m_allowCopyImageHasBeenSet = false;

    Aws::String m_sharedAccountId;
    bool m_sharedAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
