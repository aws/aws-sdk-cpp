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
  class DescribeSourceLocationResult
  {
  public:
    AWS_MEDIATAILOR_API DescribeSourceLocationResult();
    AWS_MEDIATAILOR_API DescribeSourceLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API DescribeSourceLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The access configuration for the source location.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const{ return m_accessConfiguration; }
    inline void SetAccessConfiguration(const AccessConfiguration& value) { m_accessConfiguration = value; }
    inline void SetAccessConfiguration(AccessConfiguration&& value) { m_accessConfiguration = std::move(value); }
    inline DescribeSourceLocationResult& WithAccessConfiguration(const AccessConfiguration& value) { SetAccessConfiguration(value); return *this;}
    inline DescribeSourceLocationResult& WithAccessConfiguration(AccessConfiguration&& value) { SetAccessConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source location.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeSourceLocationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeSourceLocationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeSourceLocationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the source location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeSourceLocationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeSourceLocationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default segment delivery configuration settings.</p>
     */
    inline const DefaultSegmentDeliveryConfiguration& GetDefaultSegmentDeliveryConfiguration() const{ return m_defaultSegmentDeliveryConfiguration; }
    inline void SetDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { m_defaultSegmentDeliveryConfiguration = value; }
    inline void SetDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { m_defaultSegmentDeliveryConfiguration = std::move(value); }
    inline DescribeSourceLocationResult& WithDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { SetDefaultSegmentDeliveryConfiguration(value); return *this;}
    inline DescribeSourceLocationResult& WithDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { SetDefaultSegmentDeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP package configuration settings for the source location.</p>
     */
    inline const HttpConfiguration& GetHttpConfiguration() const{ return m_httpConfiguration; }
    inline void SetHttpConfiguration(const HttpConfiguration& value) { m_httpConfiguration = value; }
    inline void SetHttpConfiguration(HttpConfiguration&& value) { m_httpConfiguration = std::move(value); }
    inline DescribeSourceLocationResult& WithHttpConfiguration(const HttpConfiguration& value) { SetHttpConfiguration(value); return *this;}
    inline DescribeSourceLocationResult& WithHttpConfiguration(HttpConfiguration&& value) { SetHttpConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the source location was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeSourceLocationResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeSourceLocationResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline const Aws::Vector<SegmentDeliveryConfiguration>& GetSegmentDeliveryConfigurations() const{ return m_segmentDeliveryConfigurations; }
    inline void SetSegmentDeliveryConfigurations(const Aws::Vector<SegmentDeliveryConfiguration>& value) { m_segmentDeliveryConfigurations = value; }
    inline void SetSegmentDeliveryConfigurations(Aws::Vector<SegmentDeliveryConfiguration>&& value) { m_segmentDeliveryConfigurations = std::move(value); }
    inline DescribeSourceLocationResult& WithSegmentDeliveryConfigurations(const Aws::Vector<SegmentDeliveryConfiguration>& value) { SetSegmentDeliveryConfigurations(value); return *this;}
    inline DescribeSourceLocationResult& WithSegmentDeliveryConfigurations(Aws::Vector<SegmentDeliveryConfiguration>&& value) { SetSegmentDeliveryConfigurations(std::move(value)); return *this;}
    inline DescribeSourceLocationResult& AddSegmentDeliveryConfigurations(const SegmentDeliveryConfiguration& value) { m_segmentDeliveryConfigurations.push_back(value); return *this; }
    inline DescribeSourceLocationResult& AddSegmentDeliveryConfigurations(SegmentDeliveryConfiguration&& value) { m_segmentDeliveryConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationName = value; }
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationName = std::move(value); }
    inline void SetSourceLocationName(const char* value) { m_sourceLocationName.assign(value); }
    inline DescribeSourceLocationResult& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}
    inline DescribeSourceLocationResult& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}
    inline DescribeSourceLocationResult& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeSourceLocationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeSourceLocationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeSourceLocationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeSourceLocationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeSourceLocationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeSourceLocationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeSourceLocationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeSourceLocationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeSourceLocationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSourceLocationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSourceLocationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSourceLocationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AccessConfiguration m_accessConfiguration;

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    DefaultSegmentDeliveryConfiguration m_defaultSegmentDeliveryConfiguration;

    HttpConfiguration m_httpConfiguration;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Vector<SegmentDeliveryConfiguration> m_segmentDeliveryConfigurations;

    Aws::String m_sourceLocationName;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
