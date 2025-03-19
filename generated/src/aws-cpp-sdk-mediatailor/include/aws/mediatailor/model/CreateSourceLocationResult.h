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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{
  class CreateSourceLocationResult
  {
  public:
    AWS_MEDIATAILOR_API CreateSourceLocationResult() = default;
    AWS_MEDIATAILOR_API CreateSourceLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API CreateSourceLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const { return m_accessConfiguration; }
    template<typename AccessConfigurationT = AccessConfiguration>
    void SetAccessConfiguration(AccessConfigurationT&& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = std::forward<AccessConfigurationT>(value); }
    template<typename AccessConfigurationT = AccessConfiguration>
    CreateSourceLocationResult& WithAccessConfiguration(AccessConfigurationT&& value) { SetAccessConfiguration(std::forward<AccessConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN to assign to the source location.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateSourceLocationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the source location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateSourceLocationResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional configuration for the server that serves segments.</p>
     */
    inline const DefaultSegmentDeliveryConfiguration& GetDefaultSegmentDeliveryConfiguration() const { return m_defaultSegmentDeliveryConfiguration; }
    template<typename DefaultSegmentDeliveryConfigurationT = DefaultSegmentDeliveryConfiguration>
    void SetDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfigurationT&& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = std::forward<DefaultSegmentDeliveryConfigurationT>(value); }
    template<typename DefaultSegmentDeliveryConfigurationT = DefaultSegmentDeliveryConfiguration>
    CreateSourceLocationResult& WithDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfigurationT&& value) { SetDefaultSegmentDeliveryConfiguration(std::forward<DefaultSegmentDeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's HTTP package configurations.</p>
     */
    inline const HttpConfiguration& GetHttpConfiguration() const { return m_httpConfiguration; }
    template<typename HttpConfigurationT = HttpConfiguration>
    void SetHttpConfiguration(HttpConfigurationT&& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = std::forward<HttpConfigurationT>(value); }
    template<typename HttpConfigurationT = HttpConfiguration>
    CreateSourceLocationResult& WithHttpConfiguration(HttpConfigurationT&& value) { SetHttpConfiguration(std::forward<HttpConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the source location was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    CreateSourceLocationResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment delivery configurations for the source location. For information
     * about MediaTailor configurations, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
     * with configurations in AWS Elemental MediaTailor</a>.</p>
     */
    inline const Aws::Vector<SegmentDeliveryConfiguration>& GetSegmentDeliveryConfigurations() const { return m_segmentDeliveryConfigurations; }
    template<typename SegmentDeliveryConfigurationsT = Aws::Vector<SegmentDeliveryConfiguration>>
    void SetSegmentDeliveryConfigurations(SegmentDeliveryConfigurationsT&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations = std::forward<SegmentDeliveryConfigurationsT>(value); }
    template<typename SegmentDeliveryConfigurationsT = Aws::Vector<SegmentDeliveryConfiguration>>
    CreateSourceLocationResult& WithSegmentDeliveryConfigurations(SegmentDeliveryConfigurationsT&& value) { SetSegmentDeliveryConfigurations(std::forward<SegmentDeliveryConfigurationsT>(value)); return *this;}
    template<typename SegmentDeliveryConfigurationsT = SegmentDeliveryConfiguration>
    CreateSourceLocationResult& AddSegmentDeliveryConfigurations(SegmentDeliveryConfigurationsT&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations.emplace_back(std::forward<SegmentDeliveryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name to assign to the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const { return m_sourceLocationName; }
    template<typename SourceLocationNameT = Aws::String>
    void SetSourceLocationName(SourceLocationNameT&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::forward<SourceLocationNameT>(value); }
    template<typename SourceLocationNameT = Aws::String>
    CreateSourceLocationResult& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
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
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSourceLocationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSourceLocationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSourceLocationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
