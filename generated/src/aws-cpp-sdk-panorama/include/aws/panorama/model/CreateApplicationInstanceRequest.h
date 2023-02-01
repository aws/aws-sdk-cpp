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


    /**
     * <p>The ID of an application instance to replace with the new instance.</p>
     */
    inline const Aws::String& GetApplicationInstanceIdToReplace() const{ return m_applicationInstanceIdToReplace; }

    /**
     * <p>The ID of an application instance to replace with the new instance.</p>
     */
    inline bool ApplicationInstanceIdToReplaceHasBeenSet() const { return m_applicationInstanceIdToReplaceHasBeenSet; }

    /**
     * <p>The ID of an application instance to replace with the new instance.</p>
     */
    inline void SetApplicationInstanceIdToReplace(const Aws::String& value) { m_applicationInstanceIdToReplaceHasBeenSet = true; m_applicationInstanceIdToReplace = value; }

    /**
     * <p>The ID of an application instance to replace with the new instance.</p>
     */
    inline void SetApplicationInstanceIdToReplace(Aws::String&& value) { m_applicationInstanceIdToReplaceHasBeenSet = true; m_applicationInstanceIdToReplace = std::move(value); }

    /**
     * <p>The ID of an application instance to replace with the new instance.</p>
     */
    inline void SetApplicationInstanceIdToReplace(const char* value) { m_applicationInstanceIdToReplaceHasBeenSet = true; m_applicationInstanceIdToReplace.assign(value); }

    /**
     * <p>The ID of an application instance to replace with the new instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithApplicationInstanceIdToReplace(const Aws::String& value) { SetApplicationInstanceIdToReplace(value); return *this;}

    /**
     * <p>The ID of an application instance to replace with the new instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithApplicationInstanceIdToReplace(Aws::String&& value) { SetApplicationInstanceIdToReplace(std::move(value)); return *this;}

    /**
     * <p>The ID of an application instance to replace with the new instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithApplicationInstanceIdToReplace(const char* value) { SetApplicationInstanceIdToReplace(value); return *this;}


    /**
     * <p>A device's ID.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDevice() const{ return m_defaultRuntimeContextDevice; }

    /**
     * <p>A device's ID.</p>
     */
    inline bool DefaultRuntimeContextDeviceHasBeenSet() const { return m_defaultRuntimeContextDeviceHasBeenSet; }

    /**
     * <p>A device's ID.</p>
     */
    inline void SetDefaultRuntimeContextDevice(const Aws::String& value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice = value; }

    /**
     * <p>A device's ID.</p>
     */
    inline void SetDefaultRuntimeContextDevice(Aws::String&& value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice = std::move(value); }

    /**
     * <p>A device's ID.</p>
     */
    inline void SetDefaultRuntimeContextDevice(const char* value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice.assign(value); }

    /**
     * <p>A device's ID.</p>
     */
    inline CreateApplicationInstanceRequest& WithDefaultRuntimeContextDevice(const Aws::String& value) { SetDefaultRuntimeContextDevice(value); return *this;}

    /**
     * <p>A device's ID.</p>
     */
    inline CreateApplicationInstanceRequest& WithDefaultRuntimeContextDevice(Aws::String&& value) { SetDefaultRuntimeContextDevice(std::move(value)); return *this;}

    /**
     * <p>A device's ID.</p>
     */
    inline CreateApplicationInstanceRequest& WithDefaultRuntimeContextDevice(const char* value) { SetDefaultRuntimeContextDevice(value); return *this;}


    /**
     * <p>A description for the application instance.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the application instance.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the application instance.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the application instance.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the application instance.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Setting overrides for the application manifest.</p>
     */
    inline const ManifestOverridesPayload& GetManifestOverridesPayload() const{ return m_manifestOverridesPayload; }

    /**
     * <p>Setting overrides for the application manifest.</p>
     */
    inline bool ManifestOverridesPayloadHasBeenSet() const { return m_manifestOverridesPayloadHasBeenSet; }

    /**
     * <p>Setting overrides for the application manifest.</p>
     */
    inline void SetManifestOverridesPayload(const ManifestOverridesPayload& value) { m_manifestOverridesPayloadHasBeenSet = true; m_manifestOverridesPayload = value; }

    /**
     * <p>Setting overrides for the application manifest.</p>
     */
    inline void SetManifestOverridesPayload(ManifestOverridesPayload&& value) { m_manifestOverridesPayloadHasBeenSet = true; m_manifestOverridesPayload = std::move(value); }

    /**
     * <p>Setting overrides for the application manifest.</p>
     */
    inline CreateApplicationInstanceRequest& WithManifestOverridesPayload(const ManifestOverridesPayload& value) { SetManifestOverridesPayload(value); return *this;}

    /**
     * <p>Setting overrides for the application manifest.</p>
     */
    inline CreateApplicationInstanceRequest& WithManifestOverridesPayload(ManifestOverridesPayload&& value) { SetManifestOverridesPayload(std::move(value)); return *this;}


    /**
     * <p>The application's manifest document.</p>
     */
    inline const ManifestPayload& GetManifestPayload() const{ return m_manifestPayload; }

    /**
     * <p>The application's manifest document.</p>
     */
    inline bool ManifestPayloadHasBeenSet() const { return m_manifestPayloadHasBeenSet; }

    /**
     * <p>The application's manifest document.</p>
     */
    inline void SetManifestPayload(const ManifestPayload& value) { m_manifestPayloadHasBeenSet = true; m_manifestPayload = value; }

    /**
     * <p>The application's manifest document.</p>
     */
    inline void SetManifestPayload(ManifestPayload&& value) { m_manifestPayloadHasBeenSet = true; m_manifestPayload = std::move(value); }

    /**
     * <p>The application's manifest document.</p>
     */
    inline CreateApplicationInstanceRequest& WithManifestPayload(const ManifestPayload& value) { SetManifestPayload(value); return *this;}

    /**
     * <p>The application's manifest document.</p>
     */
    inline CreateApplicationInstanceRequest& WithManifestPayload(ManifestPayload&& value) { SetManifestPayload(std::move(value)); return *this;}


    /**
     * <p>A name for the application instance.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the application instance.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the application instance.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the application instance.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the application instance.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of a runtime role for the application instance.</p>
     */
    inline const Aws::String& GetRuntimeRoleArn() const{ return m_runtimeRoleArn; }

    /**
     * <p>The ARN of a runtime role for the application instance.</p>
     */
    inline bool RuntimeRoleArnHasBeenSet() const { return m_runtimeRoleArnHasBeenSet; }

    /**
     * <p>The ARN of a runtime role for the application instance.</p>
     */
    inline void SetRuntimeRoleArn(const Aws::String& value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn = value; }

    /**
     * <p>The ARN of a runtime role for the application instance.</p>
     */
    inline void SetRuntimeRoleArn(Aws::String&& value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn = std::move(value); }

    /**
     * <p>The ARN of a runtime role for the application instance.</p>
     */
    inline void SetRuntimeRoleArn(const char* value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn.assign(value); }

    /**
     * <p>The ARN of a runtime role for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithRuntimeRoleArn(const Aws::String& value) { SetRuntimeRoleArn(value); return *this;}

    /**
     * <p>The ARN of a runtime role for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithRuntimeRoleArn(Aws::String&& value) { SetRuntimeRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a runtime role for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithRuntimeRoleArn(const char* value) { SetRuntimeRoleArn(value); return *this;}


    /**
     * <p>Tags for the application instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags for the application instance.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags for the application instance.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags for the application instance.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags for the application instance.</p>
     */
    inline CreateApplicationInstanceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
