/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ImageComputeType.h>
#include <aws/workspaces/model/CustomImageProtocol.h>
#include <aws/workspaces/model/ImageSourceIdentifier.h>
#include <aws/workspaces/model/Platform.h>
#include <aws/workspaces/model/OSVersion.h>
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
  class ImportCustomWorkspaceImageRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ImportCustomWorkspaceImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportCustomWorkspaceImage"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageName() const { return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    template<typename ImageNameT = Aws::String>
    void SetImageName(ImageNameT&& value) { m_imageNameHasBeenSet = true; m_imageName = std::forward<ImageNameT>(value); }
    template<typename ImageNameT = Aws::String>
    ImportCustomWorkspaceImageRequest& WithImageName(ImageNameT&& value) { SetImageName(std::forward<ImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageDescription() const { return m_imageDescription; }
    inline bool ImageDescriptionHasBeenSet() const { return m_imageDescriptionHasBeenSet; }
    template<typename ImageDescriptionT = Aws::String>
    void SetImageDescription(ImageDescriptionT&& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = std::forward<ImageDescriptionT>(value); }
    template<typename ImageDescriptionT = Aws::String>
    ImportCustomWorkspaceImageRequest& WithImageDescription(ImageDescriptionT&& value) { SetImageDescription(std::forward<ImageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported compute type for the WorkSpace image.</p>
     */
    inline ImageComputeType GetComputeType() const { return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(ImageComputeType value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline ImportCustomWorkspaceImageRequest& WithComputeType(ImageComputeType value) { SetComputeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported protocol for the WorkSpace image. Windows 11 does not support
     * PCOIP protocol.</p>
     */
    inline CustomImageProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(CustomImageProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline ImportCustomWorkspaceImageRequest& WithProtocol(CustomImageProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for image import source.</p>
     */
    inline const ImageSourceIdentifier& GetImageSource() const { return m_imageSource; }
    inline bool ImageSourceHasBeenSet() const { return m_imageSourceHasBeenSet; }
    template<typename ImageSourceT = ImageSourceIdentifier>
    void SetImageSource(ImageSourceT&& value) { m_imageSourceHasBeenSet = true; m_imageSource = std::forward<ImageSourceT>(value); }
    template<typename ImageSourceT = ImageSourceIdentifier>
    ImportCustomWorkspaceImageRequest& WithImageSource(ImageSourceT&& value) { SetImageSource(std::forward<ImageSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The infrastructure configuration ARN that specifies how the WorkSpace image
     * is built.</p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const { return m_infrastructureConfigurationArn; }
    inline bool InfrastructureConfigurationArnHasBeenSet() const { return m_infrastructureConfigurationArnHasBeenSet; }
    template<typename InfrastructureConfigurationArnT = Aws::String>
    void SetInfrastructureConfigurationArn(InfrastructureConfigurationArnT&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::forward<InfrastructureConfigurationArnT>(value); }
    template<typename InfrastructureConfigurationArnT = Aws::String>
    ImportCustomWorkspaceImageRequest& WithInfrastructureConfigurationArn(InfrastructureConfigurationArnT&& value) { SetInfrastructureConfigurationArn(std::forward<InfrastructureConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform for the WorkSpace image source.</p>
     */
    inline Platform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(Platform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline ImportCustomWorkspaceImageRequest& WithPlatform(Platform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OS version for the WorkSpace image source.</p>
     */
    inline OSVersion GetOsVersion() const { return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    inline void SetOsVersion(OSVersion value) { m_osVersionHasBeenSet = true; m_osVersion = value; }
    inline ImportCustomWorkspaceImageRequest& WithOsVersion(OSVersion value) { SetOsVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource tags. Each WorkSpaces resource can have a maximum of 50
     * tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ImportCustomWorkspaceImageRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ImportCustomWorkspaceImageRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_imageDescription;
    bool m_imageDescriptionHasBeenSet = false;

    ImageComputeType m_computeType{ImageComputeType::NOT_SET};
    bool m_computeTypeHasBeenSet = false;

    CustomImageProtocol m_protocol{CustomImageProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    ImageSourceIdentifier m_imageSource;
    bool m_imageSourceHasBeenSet = false;

    Aws::String m_infrastructureConfigurationArn;
    bool m_infrastructureConfigurationArnHasBeenSet = false;

    Platform m_platform{Platform::NOT_SET};
    bool m_platformHasBeenSet = false;

    OSVersion m_osVersion{OSVersion::NOT_SET};
    bool m_osVersionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
