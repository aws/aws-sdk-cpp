/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/NetworkPayload.h>
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
  class ProvisionDeviceRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API ProvisionDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionDevice"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A description for the device.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ProvisionDeviceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ProvisionDeviceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ProvisionDeviceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the device.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProvisionDeviceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProvisionDeviceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProvisionDeviceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A networking configuration for the device.</p>
     */
    inline const NetworkPayload& GetNetworkingConfiguration() const{ return m_networkingConfiguration; }
    inline bool NetworkingConfigurationHasBeenSet() const { return m_networkingConfigurationHasBeenSet; }
    inline void SetNetworkingConfiguration(const NetworkPayload& value) { m_networkingConfigurationHasBeenSet = true; m_networkingConfiguration = value; }
    inline void SetNetworkingConfiguration(NetworkPayload&& value) { m_networkingConfigurationHasBeenSet = true; m_networkingConfiguration = std::move(value); }
    inline ProvisionDeviceRequest& WithNetworkingConfiguration(const NetworkPayload& value) { SetNetworkingConfiguration(value); return *this;}
    inline ProvisionDeviceRequest& WithNetworkingConfiguration(NetworkPayload&& value) { SetNetworkingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the device.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ProvisionDeviceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ProvisionDeviceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ProvisionDeviceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ProvisionDeviceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ProvisionDeviceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ProvisionDeviceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ProvisionDeviceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ProvisionDeviceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ProvisionDeviceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NetworkPayload m_networkingConfiguration;
    bool m_networkingConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
