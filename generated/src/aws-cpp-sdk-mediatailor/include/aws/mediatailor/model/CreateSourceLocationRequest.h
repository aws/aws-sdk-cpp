/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/mediatailor/model/AccessConfiguration.h>
#include <aws/mediatailor/model/DefaultSegmentDeliveryConfiguration.h>
#include <aws/mediatailor/model/HttpConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/SegmentDeliveryConfiguration.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class CreateSourceLocationRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API CreateSourceLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSourceLocation"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const{ return m_accessConfiguration; }
    inline bool AccessConfigurationHasBeenSet() const { return m_accessConfigurationHasBeenSet; }
    inline void SetAccessConfiguration(const AccessConfiguration& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = value; }
    inline void SetAccessConfiguration(AccessConfiguration&& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = std::move(value); }
    inline CreateSourceLocationRequest& WithAccessConfiguration(const AccessConfiguration& value) { SetAccessConfiguration(value); return *this;}
    inline CreateSourceLocationRequest& WithAccessConfiguration(AccessConfiguration&& value) { SetAccessConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional configuration for the server that serves segments.</p>
     */
    inline const DefaultSegmentDeliveryConfiguration& GetDefaultSegmentDeliveryConfiguration() const{ return m_defaultSegmentDeliveryConfiguration; }
    inline bool DefaultSegmentDeliveryConfigurationHasBeenSet() const { return m_defaultSegmentDeliveryConfigurationHasBeenSet; }
    inline void SetDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = value; }
    inline void SetDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = std::move(value); }
    inline CreateSourceLocationRequest& WithDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { SetDefaultSegmentDeliveryConfiguration(value); return *this;}
    inline CreateSourceLocationRequest& WithDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { SetDefaultSegmentDeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's HTTP package configurations.</p>
     */
    inline const HttpConfiguration& GetHttpConfiguration() const{ return m_httpConfiguration; }
    inline bool HttpConfigurationHasBeenSet() const { return m_httpConfigurationHasBeenSet; }
    inline void SetHttpConfiguration(const HttpConfiguration& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = value; }
    inline void SetHttpConfiguration(HttpConfiguration&& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = std::move(value); }
    inline CreateSourceLocationRequest& WithHttpConfiguration(const HttpConfiguration& value) { SetHttpConfiguration(value); return *this;}
    inline CreateSourceLocationRequest& WithHttpConfiguration(HttpConfiguration&& value) { SetHttpConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline const Aws::Vector<SegmentDeliveryConfiguration>& GetSegmentDeliveryConfigurations() const{ return m_segmentDeliveryConfigurations; }
    inline bool SegmentDeliveryConfigurationsHasBeenSet() const { return m_segmentDeliveryConfigurationsHasBeenSet; }
    inline void SetSegmentDeliveryConfigurations(const Aws::Vector<SegmentDeliveryConfiguration>& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations = value; }
    inline void SetSegmentDeliveryConfigurations(Aws::Vector<SegmentDeliveryConfiguration>&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations = std::move(value); }
    inline CreateSourceLocationRequest& WithSegmentDeliveryConfigurations(const Aws::Vector<SegmentDeliveryConfiguration>& value) { SetSegmentDeliveryConfigurations(value); return *this;}
    inline CreateSourceLocationRequest& WithSegmentDeliveryConfigurations(Aws::Vector<SegmentDeliveryConfiguration>&& value) { SetSegmentDeliveryConfigurations(std::move(value)); return *this;}
    inline CreateSourceLocationRequest& AddSegmentDeliveryConfigurations(const SegmentDeliveryConfiguration& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations.push_back(value); return *this; }
    inline CreateSourceLocationRequest& AddSegmentDeliveryConfigurations(SegmentDeliveryConfiguration&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name associated with the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }
    inline CreateSourceLocationRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}
    inline CreateSourceLocationRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}
    inline CreateSourceLocationRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSourceLocationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateSourceLocationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSourceLocationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateSourceLocationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSourceLocationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSourceLocationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSourceLocationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSourceLocationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSourceLocationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    AccessConfiguration m_accessConfiguration;
    bool m_accessConfigurationHasBeenSet = false;

    DefaultSegmentDeliveryConfiguration m_defaultSegmentDeliveryConfiguration;
    bool m_defaultSegmentDeliveryConfigurationHasBeenSet = false;

    HttpConfiguration m_httpConfiguration;
    bool m_httpConfigurationHasBeenSet = false;

    Aws::Vector<SegmentDeliveryConfiguration> m_segmentDeliveryConfigurations;
    bool m_segmentDeliveryConfigurationsHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
