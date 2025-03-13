/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/AccessConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/DefaultSegmentDeliveryConfiguration.h>
#include <aws/mediatailor/model/HttpConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/SegmentDeliveryConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>A source location is a container for sources. For more information about
   * source locations, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-source-locations.html">Working
   * with source locations</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/SourceLocation">AWS
   * API Reference</a></p>
   */
  class SourceLocation
  {
  public:
    AWS_MEDIATAILOR_API SourceLocation() = default;
    AWS_MEDIATAILOR_API SourceLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API SourceLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access configuration for the source location.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const { return m_accessConfiguration; }
    inline bool AccessConfigurationHasBeenSet() const { return m_accessConfigurationHasBeenSet; }
    template<typename AccessConfigurationT = AccessConfiguration>
    void SetAccessConfiguration(AccessConfigurationT&& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = std::forward<AccessConfigurationT>(value); }
    template<typename AccessConfigurationT = AccessConfiguration>
    SourceLocation& WithAccessConfiguration(AccessConfigurationT&& value) { SetAccessConfiguration(std::forward<AccessConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SourceLocation.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SourceLocation& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the source location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    SourceLocation& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default segment delivery configuration.</p>
     */
    inline const DefaultSegmentDeliveryConfiguration& GetDefaultSegmentDeliveryConfiguration() const { return m_defaultSegmentDeliveryConfiguration; }
    inline bool DefaultSegmentDeliveryConfigurationHasBeenSet() const { return m_defaultSegmentDeliveryConfigurationHasBeenSet; }
    template<typename DefaultSegmentDeliveryConfigurationT = DefaultSegmentDeliveryConfiguration>
    void SetDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfigurationT&& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = std::forward<DefaultSegmentDeliveryConfigurationT>(value); }
    template<typename DefaultSegmentDeliveryConfigurationT = DefaultSegmentDeliveryConfiguration>
    SourceLocation& WithDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfigurationT&& value) { SetDefaultSegmentDeliveryConfiguration(std::forward<DefaultSegmentDeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline const HttpConfiguration& GetHttpConfiguration() const { return m_httpConfiguration; }
    inline bool HttpConfigurationHasBeenSet() const { return m_httpConfigurationHasBeenSet; }
    template<typename HttpConfigurationT = HttpConfiguration>
    void SetHttpConfiguration(HttpConfigurationT&& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = std::forward<HttpConfigurationT>(value); }
    template<typename HttpConfigurationT = HttpConfiguration>
    SourceLocation& WithHttpConfiguration(HttpConfigurationT&& value) { SetHttpConfiguration(std::forward<HttpConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the source location was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    SourceLocation& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment delivery configurations for the source location.</p>
     */
    inline const Aws::Vector<SegmentDeliveryConfiguration>& GetSegmentDeliveryConfigurations() const { return m_segmentDeliveryConfigurations; }
    inline bool SegmentDeliveryConfigurationsHasBeenSet() const { return m_segmentDeliveryConfigurationsHasBeenSet; }
    template<typename SegmentDeliveryConfigurationsT = Aws::Vector<SegmentDeliveryConfiguration>>
    void SetSegmentDeliveryConfigurations(SegmentDeliveryConfigurationsT&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations = std::forward<SegmentDeliveryConfigurationsT>(value); }
    template<typename SegmentDeliveryConfigurationsT = Aws::Vector<SegmentDeliveryConfiguration>>
    SourceLocation& WithSegmentDeliveryConfigurations(SegmentDeliveryConfigurationsT&& value) { SetSegmentDeliveryConfigurations(std::forward<SegmentDeliveryConfigurationsT>(value)); return *this;}
    template<typename SegmentDeliveryConfigurationsT = SegmentDeliveryConfiguration>
    SourceLocation& AddSegmentDeliveryConfigurations(SegmentDeliveryConfigurationsT&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations.emplace_back(std::forward<SegmentDeliveryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const { return m_sourceLocationName; }
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }
    template<typename SourceLocationNameT = Aws::String>
    void SetSourceLocationName(SourceLocationNameT&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::forward<SourceLocationNameT>(value); }
    template<typename SourceLocationNameT = Aws::String>
    SourceLocation& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
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
    SourceLocation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SourceLocation& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    AccessConfiguration m_accessConfiguration;
    bool m_accessConfigurationHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    DefaultSegmentDeliveryConfiguration m_defaultSegmentDeliveryConfiguration;
    bool m_defaultSegmentDeliveryConfigurationHasBeenSet = false;

    HttpConfiguration m_httpConfiguration;
    bool m_httpConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

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
