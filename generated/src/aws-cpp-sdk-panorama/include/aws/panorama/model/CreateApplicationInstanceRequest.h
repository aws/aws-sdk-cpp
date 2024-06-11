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
    AWS_PANORAMA_API CreateApplicationInstanceRequest();

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
    inline const Aws::String& GetApplicationInstanceIdToReplace() const{ return m_applicationInstanceIdToReplace; }
    inline bool ApplicationInstanceIdToReplaceHasBeenSet() const { return m_applicationInstanceIdToReplaceHasBeenSet; }
    inline void SetApplicationInstanceIdToReplace(const Aws::String& value) { m_applicationInstanceIdToReplaceHasBeenSet = true; m_applicationInstanceIdToReplace = value; }
    inline void SetApplicationInstanceIdToReplace(Aws::String&& value) { m_applicationInstanceIdToReplaceHasBeenSet = true; m_applicationInstanceIdToReplace = std::move(value); }
    inline void SetApplicationInstanceIdToReplace(const char* value) { m_applicationInstanceIdToReplaceHasBeenSet = true; m_applicationInstanceIdToReplace.assign(value); }
    inline CreateApplicationInstanceRequest& WithApplicationInstanceIdToReplace(const Aws::String& value) { SetApplicationInstanceIdToReplace(value); return *this;}
    inline CreateApplicationInstanceRequest& WithApplicationInstanceIdToReplace(Aws::String&& value) { SetApplicationInstanceIdToReplace(std::move(value)); return *this;}
    inline CreateApplicationInstanceRequest& WithApplicationInstanceIdToReplace(const char* value) { SetApplicationInstanceIdToReplace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A device's ID.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDevice() const{ return m_defaultRuntimeContextDevice; }
    inline bool DefaultRuntimeContextDeviceHasBeenSet() const { return m_defaultRuntimeContextDeviceHasBeenSet; }
    inline void SetDefaultRuntimeContextDevice(const Aws::String& value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice = value; }
    inline void SetDefaultRuntimeContextDevice(Aws::String&& value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice = std::move(value); }
    inline void SetDefaultRuntimeContextDevice(const char* value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice.assign(value); }
    inline CreateApplicationInstanceRequest& WithDefaultRuntimeContextDevice(const Aws::String& value) { SetDefaultRuntimeContextDevice(value); return *this;}
    inline CreateApplicationInstanceRequest& WithDefaultRuntimeContextDevice(Aws::String&& value) { SetDefaultRuntimeContextDevice(std::move(value)); return *this;}
    inline CreateApplicationInstanceRequest& WithDefaultRuntimeContextDevice(const char* value) { SetDefaultRuntimeContextDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the application instance.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateApplicationInstanceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateApplicationInstanceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateApplicationInstanceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Setting overrides for the application manifest.</p>
     */
    inline const ManifestOverridesPayload& GetManifestOverridesPayload() const{ return m_manifestOverridesPayload; }
    inline bool ManifestOverridesPayloadHasBeenSet() const { return m_manifestOverridesPayloadHasBeenSet; }
    inline void SetManifestOverridesPayload(const ManifestOverridesPayload& value) { m_manifestOverridesPayloadHasBeenSet = true; m_manifestOverridesPayload = value; }
    inline void SetManifestOverridesPayload(ManifestOverridesPayload&& value) { m_manifestOverridesPayloadHasBeenSet = true; m_manifestOverridesPayload = std::move(value); }
    inline CreateApplicationInstanceRequest& WithManifestOverridesPayload(const ManifestOverridesPayload& value) { SetManifestOverridesPayload(value); return *this;}
    inline CreateApplicationInstanceRequest& WithManifestOverridesPayload(ManifestOverridesPayload&& value) { SetManifestOverridesPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application's manifest document.</p>
     */
    inline const ManifestPayload& GetManifestPayload() const{ return m_manifestPayload; }
    inline bool ManifestPayloadHasBeenSet() const { return m_manifestPayloadHasBeenSet; }
    inline void SetManifestPayload(const ManifestPayload& value) { m_manifestPayloadHasBeenSet = true; m_manifestPayload = value; }
    inline void SetManifestPayload(ManifestPayload&& value) { m_manifestPayloadHasBeenSet = true; m_manifestPayload = std::move(value); }
    inline CreateApplicationInstanceRequest& WithManifestPayload(const ManifestPayload& value) { SetManifestPayload(value); return *this;}
    inline CreateApplicationInstanceRequest& WithManifestPayload(ManifestPayload&& value) { SetManifestPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the application instance.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateApplicationInstanceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateApplicationInstanceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateApplicationInstanceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a runtime role for the application instance.</p>
     */
    inline const Aws::String& GetRuntimeRoleArn() const{ return m_runtimeRoleArn; }
    inline bool RuntimeRoleArnHasBeenSet() const { return m_runtimeRoleArnHasBeenSet; }
    inline void SetRuntimeRoleArn(const Aws::String& value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn = value; }
    inline void SetRuntimeRoleArn(Aws::String&& value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn = std::move(value); }
    inline void SetRuntimeRoleArn(const char* value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn.assign(value); }
    inline CreateApplicationInstanceRequest& WithRuntimeRoleArn(const Aws::String& value) { SetRuntimeRoleArn(value); return *this;}
    inline CreateApplicationInstanceRequest& WithRuntimeRoleArn(Aws::String&& value) { SetRuntimeRoleArn(std::move(value)); return *this;}
    inline CreateApplicationInstanceRequest& WithRuntimeRoleArn(const char* value) { SetRuntimeRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the application instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateApplicationInstanceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateApplicationInstanceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateApplicationInstanceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateApplicationInstanceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApplicationInstanceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationInstanceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateApplicationInstanceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationInstanceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApplicationInstanceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
