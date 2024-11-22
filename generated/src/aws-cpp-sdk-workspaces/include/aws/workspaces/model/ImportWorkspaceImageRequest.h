/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceImageIngestionProcess.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tag.h>
#include <aws/workspaces/model/Application.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ImportWorkspaceImageRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ImportWorkspaceImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportWorkspaceImage"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline const Aws::String& GetEc2ImageId() const{ return m_ec2ImageId; }
    inline bool Ec2ImageIdHasBeenSet() const { return m_ec2ImageIdHasBeenSet; }
    inline void SetEc2ImageId(const Aws::String& value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId = value; }
    inline void SetEc2ImageId(Aws::String&& value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId = std::move(value); }
    inline void SetEc2ImageId(const char* value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId.assign(value); }
    inline ImportWorkspaceImageRequest& WithEc2ImageId(const Aws::String& value) { SetEc2ImageId(value); return *this;}
    inline ImportWorkspaceImageRequest& WithEc2ImageId(Aws::String&& value) { SetEc2ImageId(std::move(value)); return *this;}
    inline ImportWorkspaceImageRequest& WithEc2ImageId(const char* value) { SetEc2ImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ingestion process to be used when importing the image, depending on which
     * protocol you want to use for your BYOL Workspace image, either PCoIP, WSP, or
     * bring your own protocol (BYOP). To use DCV, specify a value that ends in
     * <code>_WSP</code>. To use PCoIP, specify a value that does not end in
     * <code>_WSP</code>. To use BYOP, specify a value that ends in
     * <code>_BYOP</code>.</p> <p>For non-GPU-enabled bundles (bundles other than
     * Graphics or GraphicsPro), specify <code>BYOL_REGULAR</code>,
     * <code>BYOL_REGULAR_WSP</code>, or <code>BYOL_REGULAR_BYOP</code>, depending on
     * the protocol.</p>  <p>The <code>BYOL_REGULAR_BYOP</code> and
     * <code>BYOL_GRAPHICS_G4DN_BYOP</code> values are only supported by Amazon
     * WorkSpaces Core. Contact your account team to be allow-listed to use these
     * values. For more information, see <a
     * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
     * 
     */
    inline const WorkspaceImageIngestionProcess& GetIngestionProcess() const{ return m_ingestionProcess; }
    inline bool IngestionProcessHasBeenSet() const { return m_ingestionProcessHasBeenSet; }
    inline void SetIngestionProcess(const WorkspaceImageIngestionProcess& value) { m_ingestionProcessHasBeenSet = true; m_ingestionProcess = value; }
    inline void SetIngestionProcess(WorkspaceImageIngestionProcess&& value) { m_ingestionProcessHasBeenSet = true; m_ingestionProcess = std::move(value); }
    inline ImportWorkspaceImageRequest& WithIngestionProcess(const WorkspaceImageIngestionProcess& value) { SetIngestionProcess(value); return *this;}
    inline ImportWorkspaceImageRequest& WithIngestionProcess(WorkspaceImageIngestionProcess&& value) { SetIngestionProcess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }
    inline ImportWorkspaceImageRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}
    inline ImportWorkspaceImageRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}
    inline ImportWorkspaceImageRequest& WithImageName(const char* value) { SetImageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageDescription() const{ return m_imageDescription; }
    inline bool ImageDescriptionHasBeenSet() const { return m_imageDescriptionHasBeenSet; }
    inline void SetImageDescription(const Aws::String& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = value; }
    inline void SetImageDescription(Aws::String&& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = std::move(value); }
    inline void SetImageDescription(const char* value) { m_imageDescriptionHasBeenSet = true; m_imageDescription.assign(value); }
    inline ImportWorkspaceImageRequest& WithImageDescription(const Aws::String& value) { SetImageDescription(value); return *this;}
    inline ImportWorkspaceImageRequest& WithImageDescription(Aws::String&& value) { SetImageDescription(std::move(value)); return *this;}
    inline ImportWorkspaceImageRequest& WithImageDescription(const char* value) { SetImageDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ImportWorkspaceImageRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ImportWorkspaceImageRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ImportWorkspaceImageRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ImportWorkspaceImageRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If specified, the version of Microsoft Office to subscribe to. Valid only for
     * Windows 10 and 11 BYOL images. For more information about subscribing to Office
     * for BYOL images, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
     * Bring Your Own Windows Desktop Licenses</a>.</p>  <ul> <li> <p>Although
     * this parameter is an array, only one item is allowed at this time.</p> </li>
     * <li> <p>During the image import process, non-GPU DCV (formerly WSP) WorkSpaces
     * with Windows 11 support only <code>Microsoft_Office_2019</code>. GPU DCV
     * (formerly WSP) WorkSpaces with Windows 11 do not support Office
     * installation.</p> </li> </ul> 
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }
    inline ImportWorkspaceImageRequest& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}
    inline ImportWorkspaceImageRequest& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}
    inline ImportWorkspaceImageRequest& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }
    inline ImportWorkspaceImageRequest& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_ec2ImageId;
    bool m_ec2ImageIdHasBeenSet = false;

    WorkspaceImageIngestionProcess m_ingestionProcess;
    bool m_ingestionProcessHasBeenSet = false;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_imageDescription;
    bool m_imageDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Application> m_applications;
    bool m_applicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
