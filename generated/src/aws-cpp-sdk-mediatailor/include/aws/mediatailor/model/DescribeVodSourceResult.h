/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/AdBreakOpportunity.h>
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
  class DescribeVodSourceResult
  {
  public:
    AWS_MEDIATAILOR_API DescribeVodSourceResult();
    AWS_MEDIATAILOR_API DescribeVodSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API DescribeVodSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ad break opportunities within the VOD source.</p>
     */
    inline const Aws::Vector<AdBreakOpportunity>& GetAdBreakOpportunities() const{ return m_adBreakOpportunities; }
    inline void SetAdBreakOpportunities(const Aws::Vector<AdBreakOpportunity>& value) { m_adBreakOpportunities = value; }
    inline void SetAdBreakOpportunities(Aws::Vector<AdBreakOpportunity>&& value) { m_adBreakOpportunities = std::move(value); }
    inline DescribeVodSourceResult& WithAdBreakOpportunities(const Aws::Vector<AdBreakOpportunity>& value) { SetAdBreakOpportunities(value); return *this;}
    inline DescribeVodSourceResult& WithAdBreakOpportunities(Aws::Vector<AdBreakOpportunity>&& value) { SetAdBreakOpportunities(std::move(value)); return *this;}
    inline DescribeVodSourceResult& AddAdBreakOpportunities(const AdBreakOpportunity& value) { m_adBreakOpportunities.push_back(value); return *this; }
    inline DescribeVodSourceResult& AddAdBreakOpportunities(AdBreakOpportunity&& value) { m_adBreakOpportunities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the VOD source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeVodSourceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeVodSourceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeVodSourceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the VOD source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeVodSourceResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeVodSourceResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP package configurations.</p>
     */
    inline const Aws::Vector<HttpPackageConfiguration>& GetHttpPackageConfigurations() const{ return m_httpPackageConfigurations; }
    inline void SetHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { m_httpPackageConfigurations = value; }
    inline void SetHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { m_httpPackageConfigurations = std::move(value); }
    inline DescribeVodSourceResult& WithHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { SetHttpPackageConfigurations(value); return *this;}
    inline DescribeVodSourceResult& WithHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { SetHttpPackageConfigurations(std::move(value)); return *this;}
    inline DescribeVodSourceResult& AddHttpPackageConfigurations(const HttpPackageConfiguration& value) { m_httpPackageConfigurations.push_back(value); return *this; }
    inline DescribeVodSourceResult& AddHttpPackageConfigurations(HttpPackageConfiguration&& value) { m_httpPackageConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last modified time of the VOD source.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeVodSourceResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeVodSourceResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source location associated with the VOD source.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationName = value; }
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationName = std::move(value); }
    inline void SetSourceLocationName(const char* value) { m_sourceLocationName.assign(value); }
    inline DescribeVodSourceResult& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}
    inline DescribeVodSourceResult& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}
    inline DescribeVodSourceResult& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the VOD source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeVodSourceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeVodSourceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeVodSourceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeVodSourceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeVodSourceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeVodSourceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeVodSourceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeVodSourceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeVodSourceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceName = value; }
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceName = std::move(value); }
    inline void SetVodSourceName(const char* value) { m_vodSourceName.assign(value); }
    inline DescribeVodSourceResult& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}
    inline DescribeVodSourceResult& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}
    inline DescribeVodSourceResult& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeVodSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeVodSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeVodSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AdBreakOpportunity> m_adBreakOpportunities;

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::Vector<HttpPackageConfiguration> m_httpPackageConfigurations;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_sourceLocationName;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_vodSourceName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
