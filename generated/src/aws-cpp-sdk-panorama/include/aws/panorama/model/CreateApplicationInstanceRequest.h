/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/ManifestOverridesPayload.h>
#include <aws/panorama/model/ManifestPayload.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Panorama
{
namespace Model
{

  /**
   */
  class CreateApplicationInstanceRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API CreateApplicationInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplicationInstance"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of an application instance to replace with the new instance.</p>
     */
    inline const Aws::String& GetApplicationInstanceIdToReplace() const { return m_applicationInstanceIdToReplace; }
    inline bool ApplicationInstanceIdToReplaceHasBeenSet() const { return m_applicationInstanceIdToReplaceHasBeenSet; }
    template<typename ApplicationInstanceIdToReplaceT = Aws::String>
    void SetApplicationInstanceIdToReplace(ApplicationInstanceIdToReplaceT&& value) { m_applicationInstanceIdToReplaceHasBeenSet = true; m_applicationInstanceIdToReplace = std::forward<ApplicationInstanceIdToReplaceT>(value); }
    template<typename ApplicationInstanceIdToReplaceT = Aws::String>
    CreateApplicationInstanceRequest& WithApplicationInstanceIdToReplace(ApplicationInstanceIdToReplaceT&& value) { SetApplicationInstanceIdToReplace(std::forward<ApplicationInstanceIdToReplaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A device's ID.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDevice() const { return m_defaultRuntimeContextDevice; }
    inline bool DefaultRuntimeContextDeviceHasBeenSet() const { return m_defaultRuntimeContextDeviceHasBeenSet; }
    template<typename DefaultRuntimeContextDeviceT = Aws::String>
    void SetDefaultRuntimeContextDevice(DefaultRuntimeContextDeviceT&& value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice = std::forward<DefaultRuntimeContextDeviceT>(value); }
    template<typename DefaultRuntimeContextDeviceT = Aws::String>
    CreateApplicationInstanceRequest& WithDefaultRuntimeContextDevice(DefaultRuntimeContextDeviceT&& value) { SetDefaultRuntimeContextDevice(std::forward<DefaultRuntimeContextDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the application instance.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateApplicationInstanceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Setting overrides for the application manifest.</p>
     */
    inline const ManifestOverridesPayload& GetManifestOverridesPayload() const { return m_manifestOverridesPayload; }
    inline bool ManifestOverridesPayloadHasBeenSet() const { return m_manifestOverridesPayloadHasBeenSet; }
    template<typename ManifestOverridesPayloadT = ManifestOverridesPayload>
    void SetManifestOverridesPayload(ManifestOverridesPayloadT&& value) { m_manifestOverridesPayloadHasBeenSet = true; m_manifestOverridesPayload = std::forward<ManifestOverridesPayloadT>(value); }
    template<typename ManifestOverridesPayloadT = ManifestOverridesPayload>
    CreateApplicationInstanceRequest& WithManifestOverridesPayload(ManifestOverridesPayloadT&& value) { SetManifestOverridesPayload(std::forward<ManifestOverridesPayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application's manifest document.</p>
     */
    inline const ManifestPayload& GetManifestPayload() const { return m_manifestPayload; }
    inline bool ManifestPayloadHasBeenSet() const { return m_manifestPayloadHasBeenSet; }
    template<typename ManifestPayloadT = ManifestPayload>
    void SetManifestPayload(ManifestPayloadT&& value) { m_manifestPayloadHasBeenSet = true; m_manifestPayload = std::forward<ManifestPayloadT>(value); }
    template<typename ManifestPayloadT = ManifestPayload>
    CreateApplicationInstanceRequest& WithManifestPayload(ManifestPayloadT&& value) { SetManifestPayload(std::forward<ManifestPayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the application instance.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateApplicationInstanceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a runtime role for the application instance.</p>
     */
    inline const Aws::String& GetRuntimeRoleArn() const { return m_runtimeRoleArn; }
    inline bool RuntimeRoleArnHasBeenSet() const { return m_runtimeRoleArnHasBeenSet; }
    template<typename RuntimeRoleArnT = Aws::String>
    void SetRuntimeRoleArn(RuntimeRoleArnT&& value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn = std::forward<RuntimeRoleArnT>(value); }
    template<typename RuntimeRoleArnT = Aws::String>
    CreateApplicationInstanceRequest& WithRuntimeRoleArn(RuntimeRoleArnT&& value) { SetRuntimeRoleArn(std::forward<RuntimeRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the application instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateApplicationInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateApplicationInstanceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_applicationInstanceIdToReplace;
    bool m_applicationInstanceIdToReplaceHasBeenSet = false;

    Aws::String m_defaultRuntimeContextDevice;
    bool m_defaultRuntimeContextDeviceHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ManifestOverridesPayload m_manifestOverridesPayload;
    bool m_manifestOverridesPayloadHasBeenSet = false;

    ManifestPayload m_manifestPayload;
    bool m_manifestPayloadHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_runtimeRoleArn;
    bool m_runtimeRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
