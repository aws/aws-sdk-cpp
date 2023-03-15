﻿/**
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
    AWS_MEDIATAILOR_API CreateSourceLocationResult();
    AWS_MEDIATAILOR_API CreateSourceLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API CreateSourceLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const{ return m_accessConfiguration; }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline void SetAccessConfiguration(const AccessConfiguration& value) { m_accessConfiguration = value; }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline void SetAccessConfiguration(AccessConfiguration&& value) { m_accessConfiguration = std::move(value); }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline CreateSourceLocationResult& WithAccessConfiguration(const AccessConfiguration& value) { SetAccessConfiguration(value); return *this;}

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline CreateSourceLocationResult& WithAccessConfiguration(AccessConfiguration&& value) { SetAccessConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ARN to assign to the source location.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN to assign to the source location.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN to assign to the source location.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN to assign to the source location.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN to assign to the source location.</p>
     */
    inline CreateSourceLocationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN to assign to the source location.</p>
     */
    inline CreateSourceLocationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN to assign to the source location.</p>
     */
    inline CreateSourceLocationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time the source location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the source location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time the source location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time the source location was created.</p>
     */
    inline CreateSourceLocationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the source location was created.</p>
     */
    inline CreateSourceLocationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The optional configuration for the server that serves segments.</p>
     */
    inline const DefaultSegmentDeliveryConfiguration& GetDefaultSegmentDeliveryConfiguration() const{ return m_defaultSegmentDeliveryConfiguration; }

    /**
     * <p>The optional configuration for the server that serves segments.</p>
     */
    inline void SetDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { m_defaultSegmentDeliveryConfiguration = value; }

    /**
     * <p>The optional configuration for the server that serves segments.</p>
     */
    inline void SetDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { m_defaultSegmentDeliveryConfiguration = std::move(value); }

    /**
     * <p>The optional configuration for the server that serves segments.</p>
     */
    inline CreateSourceLocationResult& WithDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { SetDefaultSegmentDeliveryConfiguration(value); return *this;}

    /**
     * <p>The optional configuration for the server that serves segments.</p>
     */
    inline CreateSourceLocationResult& WithDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { SetDefaultSegmentDeliveryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The source's HTTP package configurations.</p>
     */
    inline const HttpConfiguration& GetHttpConfiguration() const{ return m_httpConfiguration; }

    /**
     * <p>The source's HTTP package configurations.</p>
     */
    inline void SetHttpConfiguration(const HttpConfiguration& value) { m_httpConfiguration = value; }

    /**
     * <p>The source's HTTP package configurations.</p>
     */
    inline void SetHttpConfiguration(HttpConfiguration&& value) { m_httpConfiguration = std::move(value); }

    /**
     * <p>The source's HTTP package configurations.</p>
     */
    inline CreateSourceLocationResult& WithHttpConfiguration(const HttpConfiguration& value) { SetHttpConfiguration(value); return *this;}

    /**
     * <p>The source's HTTP package configurations.</p>
     */
    inline CreateSourceLocationResult& WithHttpConfiguration(HttpConfiguration&& value) { SetHttpConfiguration(std::move(value)); return *this;}


    /**
     * <p>The time the source location was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time the source location was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time the source location was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time the source location was last modified.</p>
     */
    inline CreateSourceLocationResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time the source location was last modified.</p>
     */
    inline CreateSourceLocationResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The segment delivery configurations for the source location. For information
     * about MediaTailor configurations, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
     * with configurations in AWS Elemental MediaTailor</a>.</p>
     */
    inline const Aws::Vector<SegmentDeliveryConfiguration>& GetSegmentDeliveryConfigurations() const{ return m_segmentDeliveryConfigurations; }

    /**
     * <p>The segment delivery configurations for the source location. For information
     * about MediaTailor configurations, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
     * with configurations in AWS Elemental MediaTailor</a>.</p>
     */
    inline void SetSegmentDeliveryConfigurations(const Aws::Vector<SegmentDeliveryConfiguration>& value) { m_segmentDeliveryConfigurations = value; }

    /**
     * <p>The segment delivery configurations for the source location. For information
     * about MediaTailor configurations, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
     * with configurations in AWS Elemental MediaTailor</a>.</p>
     */
    inline void SetSegmentDeliveryConfigurations(Aws::Vector<SegmentDeliveryConfiguration>&& value) { m_segmentDeliveryConfigurations = std::move(value); }

    /**
     * <p>The segment delivery configurations for the source location. For information
     * about MediaTailor configurations, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
     * with configurations in AWS Elemental MediaTailor</a>.</p>
     */
    inline CreateSourceLocationResult& WithSegmentDeliveryConfigurations(const Aws::Vector<SegmentDeliveryConfiguration>& value) { SetSegmentDeliveryConfigurations(value); return *this;}

    /**
     * <p>The segment delivery configurations for the source location. For information
     * about MediaTailor configurations, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
     * with configurations in AWS Elemental MediaTailor</a>.</p>
     */
    inline CreateSourceLocationResult& WithSegmentDeliveryConfigurations(Aws::Vector<SegmentDeliveryConfiguration>&& value) { SetSegmentDeliveryConfigurations(std::move(value)); return *this;}

    /**
     * <p>The segment delivery configurations for the source location. For information
     * about MediaTailor configurations, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
     * with configurations in AWS Elemental MediaTailor</a>.</p>
     */
    inline CreateSourceLocationResult& AddSegmentDeliveryConfigurations(const SegmentDeliveryConfiguration& value) { m_segmentDeliveryConfigurations.push_back(value); return *this; }

    /**
     * <p>The segment delivery configurations for the source location. For information
     * about MediaTailor configurations, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
     * with configurations in AWS Elemental MediaTailor</a>.</p>
     */
    inline CreateSourceLocationResult& AddSegmentDeliveryConfigurations(SegmentDeliveryConfiguration&& value) { m_segmentDeliveryConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The name to assign to the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name to assign to the source location.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationName = value; }

    /**
     * <p>The name to assign to the source location.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationName = std::move(value); }

    /**
     * <p>The name to assign to the source location.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationName.assign(value); }

    /**
     * <p>The name to assign to the source location.</p>
     */
    inline CreateSourceLocationResult& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name to assign to the source location.</p>
     */
    inline CreateSourceLocationResult& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name to assign to the source location.</p>
     */
    inline CreateSourceLocationResult& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateSourceLocationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateSourceLocationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateSourceLocationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateSourceLocationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateSourceLocationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateSourceLocationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateSourceLocationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateSourceLocationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the source location. Tags are key-value pairs that you
     * can associate with Amazon resources to help with organization, access control,
     * and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateSourceLocationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSourceLocationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSourceLocationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSourceLocationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
