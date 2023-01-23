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


    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline const Aws::String& GetEc2ImageId() const{ return m_ec2ImageId; }

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline bool Ec2ImageIdHasBeenSet() const { return m_ec2ImageIdHasBeenSet; }

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline void SetEc2ImageId(const Aws::String& value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId = value; }

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline void SetEc2ImageId(Aws::String&& value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId = std::move(value); }

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline void SetEc2ImageId(const char* value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId.assign(value); }

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline ImportWorkspaceImageRequest& WithEc2ImageId(const Aws::String& value) { SetEc2ImageId(value); return *this;}

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline ImportWorkspaceImageRequest& WithEc2ImageId(Aws::String&& value) { SetEc2ImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline ImportWorkspaceImageRequest& WithEc2ImageId(const char* value) { SetEc2ImageId(value); return *this;}


    /**
     * <p>The ingestion process to be used when importing the image, depending on which
     * protocol you want to use for your BYOL Workspace image, either PCoIP, WorkSpaces
     * Streaming Protocol (WSP), or bring your own protocol (BYOP). To use WSP, specify
     * a value that ends in <code>_WSP</code>. To use PCoIP, specify a value that does
     * not end in <code>_WSP</code>. To use BYOP, specify a value that ends in
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

    /**
     * <p>The ingestion process to be used when importing the image, depending on which
     * protocol you want to use for your BYOL Workspace image, either PCoIP, WorkSpaces
     * Streaming Protocol (WSP), or bring your own protocol (BYOP). To use WSP, specify
     * a value that ends in <code>_WSP</code>. To use PCoIP, specify a value that does
     * not end in <code>_WSP</code>. To use BYOP, specify a value that ends in
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
    inline bool IngestionProcessHasBeenSet() const { return m_ingestionProcessHasBeenSet; }

    /**
     * <p>The ingestion process to be used when importing the image, depending on which
     * protocol you want to use for your BYOL Workspace image, either PCoIP, WorkSpaces
     * Streaming Protocol (WSP), or bring your own protocol (BYOP). To use WSP, specify
     * a value that ends in <code>_WSP</code>. To use PCoIP, specify a value that does
     * not end in <code>_WSP</code>. To use BYOP, specify a value that ends in
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
    inline void SetIngestionProcess(const WorkspaceImageIngestionProcess& value) { m_ingestionProcessHasBeenSet = true; m_ingestionProcess = value; }

    /**
     * <p>The ingestion process to be used when importing the image, depending on which
     * protocol you want to use for your BYOL Workspace image, either PCoIP, WorkSpaces
     * Streaming Protocol (WSP), or bring your own protocol (BYOP). To use WSP, specify
     * a value that ends in <code>_WSP</code>. To use PCoIP, specify a value that does
     * not end in <code>_WSP</code>. To use BYOP, specify a value that ends in
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
    inline void SetIngestionProcess(WorkspaceImageIngestionProcess&& value) { m_ingestionProcessHasBeenSet = true; m_ingestionProcess = std::move(value); }

    /**
     * <p>The ingestion process to be used when importing the image, depending on which
     * protocol you want to use for your BYOL Workspace image, either PCoIP, WorkSpaces
     * Streaming Protocol (WSP), or bring your own protocol (BYOP). To use WSP, specify
     * a value that ends in <code>_WSP</code>. To use PCoIP, specify a value that does
     * not end in <code>_WSP</code>. To use BYOP, specify a value that ends in
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
    inline ImportWorkspaceImageRequest& WithIngestionProcess(const WorkspaceImageIngestionProcess& value) { SetIngestionProcess(value); return *this;}

    /**
     * <p>The ingestion process to be used when importing the image, depending on which
     * protocol you want to use for your BYOL Workspace image, either PCoIP, WorkSpaces
     * Streaming Protocol (WSP), or bring your own protocol (BYOP). To use WSP, specify
     * a value that ends in <code>_WSP</code>. To use PCoIP, specify a value that does
     * not end in <code>_WSP</code>. To use BYOP, specify a value that ends in
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
    inline ImportWorkspaceImageRequest& WithIngestionProcess(WorkspaceImageIngestionProcess&& value) { SetIngestionProcess(std::move(value)); return *this;}


    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageDescription() const{ return m_imageDescription; }

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline bool ImageDescriptionHasBeenSet() const { return m_imageDescriptionHasBeenSet; }

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline void SetImageDescription(const Aws::String& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = value; }

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline void SetImageDescription(Aws::String&& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = std::move(value); }

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline void SetImageDescription(const char* value) { m_imageDescriptionHasBeenSet = true; m_imageDescription.assign(value); }

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageDescription(const Aws::String& value) { SetImageDescription(value); return *this;}

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageDescription(Aws::String&& value) { SetImageDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageDescription(const char* value) { SetImageDescription(value); return *this;}


    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline ImportWorkspaceImageRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline ImportWorkspaceImageRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline ImportWorkspaceImageRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline ImportWorkspaceImageRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>If specified, the version of Microsoft Office to subscribe to. Valid only for
     * Windows 10 BYOL images. For more information about subscribing to Office for
     * BYOL images, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
     * Bring Your Own Windows Desktop Licenses</a>.</p>  <p>Although this
     * parameter is an array, only one item is allowed at this time.</p> 
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }

    /**
     * <p>If specified, the version of Microsoft Office to subscribe to. Valid only for
     * Windows 10 BYOL images. For more information about subscribing to Office for
     * BYOL images, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
     * Bring Your Own Windows Desktop Licenses</a>.</p>  <p>Although this
     * parameter is an array, only one item is allowed at this time.</p> 
     */
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }

    /**
     * <p>If specified, the version of Microsoft Office to subscribe to. Valid only for
     * Windows 10 BYOL images. For more information about subscribing to Office for
     * BYOL images, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
     * Bring Your Own Windows Desktop Licenses</a>.</p>  <p>Although this
     * parameter is an array, only one item is allowed at this time.</p> 
     */
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>If specified, the version of Microsoft Office to subscribe to. Valid only for
     * Windows 10 BYOL images. For more information about subscribing to Office for
     * BYOL images, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
     * Bring Your Own Windows Desktop Licenses</a>.</p>  <p>Although this
     * parameter is an array, only one item is allowed at this time.</p> 
     */
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }

    /**
     * <p>If specified, the version of Microsoft Office to subscribe to. Valid only for
     * Windows 10 BYOL images. For more information about subscribing to Office for
     * BYOL images, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
     * Bring Your Own Windows Desktop Licenses</a>.</p>  <p>Although this
     * parameter is an array, only one item is allowed at this time.</p> 
     */
    inline ImportWorkspaceImageRequest& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}

    /**
     * <p>If specified, the version of Microsoft Office to subscribe to. Valid only for
     * Windows 10 BYOL images. For more information about subscribing to Office for
     * BYOL images, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
     * Bring Your Own Windows Desktop Licenses</a>.</p>  <p>Although this
     * parameter is an array, only one item is allowed at this time.</p> 
     */
    inline ImportWorkspaceImageRequest& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>If specified, the version of Microsoft Office to subscribe to. Valid only for
     * Windows 10 BYOL images. For more information about subscribing to Office for
     * BYOL images, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
     * Bring Your Own Windows Desktop Licenses</a>.</p>  <p>Although this
     * parameter is an array, only one item is allowed at this time.</p> 
     */
    inline ImportWorkspaceImageRequest& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <p>If specified, the version of Microsoft Office to subscribe to. Valid only for
     * Windows 10 BYOL images. For more information about subscribing to Office for
     * BYOL images, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
     * Bring Your Own Windows Desktop Licenses</a>.</p>  <p>Although this
     * parameter is an array, only one item is allowed at this time.</p> 
     */
    inline ImportWorkspaceImageRequest& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }

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
