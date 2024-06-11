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
  class DescribeLiveSourceResult
  {
  public:
    AWS_MEDIATAILOR_API DescribeLiveSourceResult();
    AWS_MEDIATAILOR_API DescribeLiveSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API DescribeLiveSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the live source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeLiveSourceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeLiveSourceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeLiveSourceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the live source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeLiveSourceResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeLiveSourceResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP package configurations.</p>
     */
    inline const Aws::Vector<HttpPackageConfiguration>& GetHttpPackageConfigurations() const{ return m_httpPackageConfigurations; }
    inline void SetHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { m_httpPackageConfigurations = value; }
    inline void SetHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { m_httpPackageConfigurations = std::move(value); }
    inline DescribeLiveSourceResult& WithHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { SetHttpPackageConfigurations(value); return *this;}
    inline DescribeLiveSourceResult& WithHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { SetHttpPackageConfigurations(std::move(value)); return *this;}
    inline DescribeLiveSourceResult& AddHttpPackageConfigurations(const HttpPackageConfiguration& value) { m_httpPackageConfigurations.push_back(value); return *this; }
    inline DescribeLiveSourceResult& AddHttpPackageConfigurations(HttpPackageConfiguration&& value) { m_httpPackageConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the live source was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeLiveSourceResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeLiveSourceResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the live source.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceName = value; }
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceName = std::move(value); }
    inline void SetLiveSourceName(const char* value) { m_liveSourceName.assign(value); }
    inline DescribeLiveSourceResult& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}
    inline DescribeLiveSourceResult& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}
    inline DescribeLiveSourceResult& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source location associated with the live source.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationName = value; }
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationName = std::move(value); }
    inline void SetSourceLocationName(const char* value) { m_sourceLocationName.assign(value); }
    inline DescribeLiveSourceResult& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}
    inline DescribeLiveSourceResult& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}
    inline DescribeLiveSourceResult& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeLiveSourceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeLiveSourceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeLiveSourceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeLiveSourceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeLiveSourceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeLiveSourceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeLiveSourceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeLiveSourceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeLiveSourceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLiveSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLiveSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLiveSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::Vector<HttpPackageConfiguration> m_httpPackageConfigurations;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_liveSourceName;

    Aws::String m_sourceLocationName;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
