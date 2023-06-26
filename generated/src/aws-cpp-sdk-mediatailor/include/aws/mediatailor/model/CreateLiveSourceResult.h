﻿/**
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
    AWS_MEDIATAILOR_API CreateLiveSourceResult();
    AWS_MEDIATAILOR_API CreateLiveSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API CreateLiveSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN to assign to the live source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN to assign to the live source.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN to assign to the live source.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN to assign to the live source.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN to assign to the live source.</p>
     */
    inline CreateLiveSourceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN to assign to the live source.</p>
     */
    inline CreateLiveSourceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN to assign to the live source.</p>
     */
    inline CreateLiveSourceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time the live source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the live source was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time the live source was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time the live source was created.</p>
     */
    inline CreateLiveSourceResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the live source was created.</p>
     */
    inline CreateLiveSourceResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A list of HTTP package configuration parameters for this live source.</p>
     */
    inline const Aws::Vector<HttpPackageConfiguration>& GetHttpPackageConfigurations() const{ return m_httpPackageConfigurations; }

    /**
     * <p>A list of HTTP package configuration parameters for this live source.</p>
     */
    inline void SetHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { m_httpPackageConfigurations = value; }

    /**
     * <p>A list of HTTP package configuration parameters for this live source.</p>
     */
    inline void SetHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { m_httpPackageConfigurations = std::move(value); }

    /**
     * <p>A list of HTTP package configuration parameters for this live source.</p>
     */
    inline CreateLiveSourceResult& WithHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { SetHttpPackageConfigurations(value); return *this;}

    /**
     * <p>A list of HTTP package configuration parameters for this live source.</p>
     */
    inline CreateLiveSourceResult& WithHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { SetHttpPackageConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of HTTP package configuration parameters for this live source.</p>
     */
    inline CreateLiveSourceResult& AddHttpPackageConfigurations(const HttpPackageConfiguration& value) { m_httpPackageConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of HTTP package configuration parameters for this live source.</p>
     */
    inline CreateLiveSourceResult& AddHttpPackageConfigurations(HttpPackageConfiguration&& value) { m_httpPackageConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The time the live source was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time the live source was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time the live source was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time the live source was last modified.</p>
     */
    inline CreateLiveSourceResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time the live source was last modified.</p>
     */
    inline CreateLiveSourceResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The name to assign to the live source.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }

    /**
     * <p>The name to assign to the live source.</p>
     */
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceName = value; }

    /**
     * <p>The name to assign to the live source.</p>
     */
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceName = std::move(value); }

    /**
     * <p>The name to assign to the live source.</p>
     */
    inline void SetLiveSourceName(const char* value) { m_liveSourceName.assign(value); }

    /**
     * <p>The name to assign to the live source.</p>
     */
    inline CreateLiveSourceResult& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}

    /**
     * <p>The name to assign to the live source.</p>
     */
    inline CreateLiveSourceResult& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}

    /**
     * <p>The name to assign to the live source.</p>
     */
    inline CreateLiveSourceResult& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}


    /**
     * <p>The name to assign to the source location of the live source.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name to assign to the source location of the live source.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationName = value; }

    /**
     * <p>The name to assign to the source location of the live source.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationName = std::move(value); }

    /**
     * <p>The name to assign to the source location of the live source.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationName.assign(value); }

    /**
     * <p>The name to assign to the source location of the live source.</p>
     */
    inline CreateLiveSourceResult& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name to assign to the source location of the live source.</p>
     */
    inline CreateLiveSourceResult& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name to assign to the source location of the live source.</p>
     */
    inline CreateLiveSourceResult& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateLiveSourceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateLiveSourceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateLiveSourceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateLiveSourceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateLiveSourceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateLiveSourceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateLiveSourceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateLiveSourceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the live source. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateLiveSourceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLiveSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLiveSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLiveSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
