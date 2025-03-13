/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/HttpPackageConfiguration.h>
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
  class CreateLiveSourceResult
  {
  public:
    AWS_MEDIATAILOR_API CreateLiveSourceResult() = default;
    AWS_MEDIATAILOR_API CreateLiveSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API CreateLiveSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN to assign to the live source.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateLiveSourceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the live source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateLiveSourceResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of HTTP package configuration parameters for this live source.</p>
     */
    inline const Aws::Vector<HttpPackageConfiguration>& GetHttpPackageConfigurations() const { return m_httpPackageConfigurations; }
    template<typename HttpPackageConfigurationsT = Aws::Vector<HttpPackageConfiguration>>
    void SetHttpPackageConfigurations(HttpPackageConfigurationsT&& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations = std::forward<HttpPackageConfigurationsT>(value); }
    template<typename HttpPackageConfigurationsT = Aws::Vector<HttpPackageConfiguration>>
    CreateLiveSourceResult& WithHttpPackageConfigurations(HttpPackageConfigurationsT&& value) { SetHttpPackageConfigurations(std::forward<HttpPackageConfigurationsT>(value)); return *this;}
    template<typename HttpPackageConfigurationsT = HttpPackageConfiguration>
    CreateLiveSourceResult& AddHttpPackageConfigurations(HttpPackageConfigurationsT&& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations.emplace_back(std::forward<HttpPackageConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the live source was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    CreateLiveSourceResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the live source.</p>
     */
    inline const Aws::String& GetLiveSourceName() const { return m_liveSourceName; }
    template<typename LiveSourceNameT = Aws::String>
    void SetLiveSourceName(LiveSourceNameT&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::forward<LiveSourceNameT>(value); }
    template<typename LiveSourceNameT = Aws::String>
    CreateLiveSourceResult& WithLiveSourceName(LiveSourceNameT&& value) { SetLiveSourceName(std::forward<LiveSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to assign to the source location of the live source.</p>
     */
    inline const Aws::String& GetSourceLocationName() const { return m_sourceLocationName; }
    template<typename SourceLocationNameT = Aws::String>
    void SetSourceLocationName(SourceLocationNameT&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::forward<SourceLocationNameT>(value); }
    template<typename SourceLocationNameT = Aws::String>
    CreateLiveSourceResult& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateLiveSourceResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateLiveSourceResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLiveSourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<HttpPackageConfiguration> m_httpPackageConfigurations;
    bool m_httpPackageConfigurationsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_liveSourceName;
    bool m_liveSourceNameHasBeenSet = false;

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
