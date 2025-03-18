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
    AWS_MEDIATAILOR_API CreateSourceLocationRequest() = default;

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
    inline const AccessConfiguration& GetAccessConfiguration() const { return m_accessConfiguration; }
    inline bool AccessConfigurationHasBeenSet() const { return m_accessConfigurationHasBeenSet; }
    template<typename AccessConfigurationT = AccessConfiguration>
    void SetAccessConfiguration(AccessConfigurationT&& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = std::forward<AccessConfigurationT>(value); }
    template<typename AccessConfigurationT = AccessConfiguration>
    CreateSourceLocationRequest& WithAccessConfiguration(AccessConfigurationT&& value) { SetAccessConfiguration(std::forward<AccessConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional configuration for the server that serves segments.</p>
     */
    inline const DefaultSegmentDeliveryConfiguration& GetDefaultSegmentDeliveryConfiguration() const { return m_defaultSegmentDeliveryConfiguration; }
    inline bool DefaultSegmentDeliveryConfigurationHasBeenSet() const { return m_defaultSegmentDeliveryConfigurationHasBeenSet; }
    template<typename DefaultSegmentDeliveryConfigurationT = DefaultSegmentDeliveryConfiguration>
    void SetDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfigurationT&& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = std::forward<DefaultSegmentDeliveryConfigurationT>(value); }
    template<typename DefaultSegmentDeliveryConfigurationT = DefaultSegmentDeliveryConfiguration>
    CreateSourceLocationRequest& WithDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfigurationT&& value) { SetDefaultSegmentDeliveryConfiguration(std::forward<DefaultSegmentDeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's HTTP package configurations.</p>
     */
    inline const HttpConfiguration& GetHttpConfiguration() const { return m_httpConfiguration; }
    inline bool HttpConfigurationHasBeenSet() const { return m_httpConfigurationHasBeenSet; }
    template<typename HttpConfigurationT = HttpConfiguration>
    void SetHttpConfiguration(HttpConfigurationT&& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = std::forward<HttpConfigurationT>(value); }
    template<typename HttpConfigurationT = HttpConfiguration>
    CreateSourceLocationRequest& WithHttpConfiguration(HttpConfigurationT&& value) { SetHttpConfiguration(std::forward<HttpConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline const Aws::Vector<SegmentDeliveryConfiguration>& GetSegmentDeliveryConfigurations() const { return m_segmentDeliveryConfigurations; }
    inline bool SegmentDeliveryConfigurationsHasBeenSet() const { return m_segmentDeliveryConfigurationsHasBeenSet; }
    template<typename SegmentDeliveryConfigurationsT = Aws::Vector<SegmentDeliveryConfiguration>>
    void SetSegmentDeliveryConfigurations(SegmentDeliveryConfigurationsT&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations = std::forward<SegmentDeliveryConfigurationsT>(value); }
    template<typename SegmentDeliveryConfigurationsT = Aws::Vector<SegmentDeliveryConfiguration>>
    CreateSourceLocationRequest& WithSegmentDeliveryConfigurations(SegmentDeliveryConfigurationsT&& value) { SetSegmentDeliveryConfigurations(std::forward<SegmentDeliveryConfigurationsT>(value)); return *this;}
    template<typename SegmentDeliveryConfigurationsT = SegmentDeliveryConfiguration>
    CreateSourceLocationRequest& AddSegmentDeliveryConfigurations(SegmentDeliveryConfigurationsT&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations.emplace_back(std::forward<SegmentDeliveryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name associated with the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const { return m_sourceLocationName; }
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }
    template<typename SourceLocationNameT = Aws::String>
    void SetSourceLocationName(SourceLocationNameT&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::forward<SourceLocationNameT>(value); }
    template<typename SourceLocationNameT = Aws::String>
    CreateSourceLocationRequest& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSourceLocationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSourceLocationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
