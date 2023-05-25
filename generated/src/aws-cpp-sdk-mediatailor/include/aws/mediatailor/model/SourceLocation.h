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
    AWS_MEDIATAILOR_API SourceLocation();
    AWS_MEDIATAILOR_API SourceLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API SourceLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access configuration for the source location.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const{ return m_accessConfiguration; }

    /**
     * <p>The access configuration for the source location.</p>
     */
    inline bool AccessConfigurationHasBeenSet() const { return m_accessConfigurationHasBeenSet; }

    /**
     * <p>The access configuration for the source location.</p>
     */
    inline void SetAccessConfiguration(const AccessConfiguration& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = value; }

    /**
     * <p>The access configuration for the source location.</p>
     */
    inline void SetAccessConfiguration(AccessConfiguration&& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = std::move(value); }

    /**
     * <p>The access configuration for the source location.</p>
     */
    inline SourceLocation& WithAccessConfiguration(const AccessConfiguration& value) { SetAccessConfiguration(value); return *this;}

    /**
     * <p>The access configuration for the source location.</p>
     */
    inline SourceLocation& WithAccessConfiguration(AccessConfiguration&& value) { SetAccessConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ARN of the SourceLocation.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the SourceLocation.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the SourceLocation.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the SourceLocation.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the SourceLocation.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the SourceLocation.</p>
     */
    inline SourceLocation& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the SourceLocation.</p>
     */
    inline SourceLocation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SourceLocation.</p>
     */
    inline SourceLocation& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The timestamp that indicates when the source location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp that indicates when the source location was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp that indicates when the source location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp that indicates when the source location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp that indicates when the source location was created.</p>
     */
    inline SourceLocation& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp that indicates when the source location was created.</p>
     */
    inline SourceLocation& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The default segment delivery configuration.</p>
     */
    inline const DefaultSegmentDeliveryConfiguration& GetDefaultSegmentDeliveryConfiguration() const{ return m_defaultSegmentDeliveryConfiguration; }

    /**
     * <p>The default segment delivery configuration.</p>
     */
    inline bool DefaultSegmentDeliveryConfigurationHasBeenSet() const { return m_defaultSegmentDeliveryConfigurationHasBeenSet; }

    /**
     * <p>The default segment delivery configuration.</p>
     */
    inline void SetDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = value; }

    /**
     * <p>The default segment delivery configuration.</p>
     */
    inline void SetDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = std::move(value); }

    /**
     * <p>The default segment delivery configuration.</p>
     */
    inline SourceLocation& WithDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { SetDefaultSegmentDeliveryConfiguration(value); return *this;}

    /**
     * <p>The default segment delivery configuration.</p>
     */
    inline SourceLocation& WithDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { SetDefaultSegmentDeliveryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline const HttpConfiguration& GetHttpConfiguration() const{ return m_httpConfiguration; }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline bool HttpConfigurationHasBeenSet() const { return m_httpConfigurationHasBeenSet; }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline void SetHttpConfiguration(const HttpConfiguration& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = value; }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline void SetHttpConfiguration(HttpConfiguration&& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = std::move(value); }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline SourceLocation& WithHttpConfiguration(const HttpConfiguration& value) { SetHttpConfiguration(value); return *this;}

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline SourceLocation& WithHttpConfiguration(HttpConfiguration&& value) { SetHttpConfiguration(std::move(value)); return *this;}


    /**
     * <p>The timestamp that indicates when the source location was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp that indicates when the source location was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp that indicates when the source location was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp that indicates when the source location was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp that indicates when the source location was last modified.</p>
     */
    inline SourceLocation& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp that indicates when the source location was last modified.</p>
     */
    inline SourceLocation& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The segment delivery configurations for the source location.</p>
     */
    inline const Aws::Vector<SegmentDeliveryConfiguration>& GetSegmentDeliveryConfigurations() const{ return m_segmentDeliveryConfigurations; }

    /**
     * <p>The segment delivery configurations for the source location.</p>
     */
    inline bool SegmentDeliveryConfigurationsHasBeenSet() const { return m_segmentDeliveryConfigurationsHasBeenSet; }

    /**
     * <p>The segment delivery configurations for the source location.</p>
     */
    inline void SetSegmentDeliveryConfigurations(const Aws::Vector<SegmentDeliveryConfiguration>& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations = value; }

    /**
     * <p>The segment delivery configurations for the source location.</p>
     */
    inline void SetSegmentDeliveryConfigurations(Aws::Vector<SegmentDeliveryConfiguration>&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations = std::move(value); }

    /**
     * <p>The segment delivery configurations for the source location.</p>
     */
    inline SourceLocation& WithSegmentDeliveryConfigurations(const Aws::Vector<SegmentDeliveryConfiguration>& value) { SetSegmentDeliveryConfigurations(value); return *this;}

    /**
     * <p>The segment delivery configurations for the source location.</p>
     */
    inline SourceLocation& WithSegmentDeliveryConfigurations(Aws::Vector<SegmentDeliveryConfiguration>&& value) { SetSegmentDeliveryConfigurations(std::move(value)); return *this;}

    /**
     * <p>The segment delivery configurations for the source location.</p>
     */
    inline SourceLocation& AddSegmentDeliveryConfigurations(const SegmentDeliveryConfiguration& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations.push_back(value); return *this; }

    /**
     * <p>The segment delivery configurations for the source location.</p>
     */
    inline SourceLocation& AddSegmentDeliveryConfigurations(SegmentDeliveryConfiguration&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name of the source location.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The name of the source location.</p>
     */
    inline SourceLocation& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location.</p>
     */
    inline SourceLocation& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location.</p>
     */
    inline SourceLocation& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline SourceLocation& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline SourceLocation& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline SourceLocation& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline SourceLocation& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline SourceLocation& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline SourceLocation& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline SourceLocation& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline SourceLocation& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline SourceLocation& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    AccessConfiguration m_accessConfiguration;
    bool m_accessConfigurationHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    DefaultSegmentDeliveryConfiguration m_defaultSegmentDeliveryConfiguration;
    bool m_defaultSegmentDeliveryConfigurationHasBeenSet = false;

    HttpConfiguration m_httpConfiguration;
    bool m_httpConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
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
