/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pi/model/FeatureMetadata.h>
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
namespace PI
{
namespace Model
{
  class GetResourceMetadataResult
  {
  public:
    AWS_PI_API GetResourceMetadataResult();
    AWS_PI_API GetResourceMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API GetResourceMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifier = value; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifier = std::move(value); }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline void SetIdentifier(const char* value) { m_identifier.assign(value); }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline GetResourceMetadataResult& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline GetResourceMetadataResult& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline GetResourceMetadataResult& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline const Aws::Map<Aws::String, FeatureMetadata>& GetFeatures() const{ return m_features; }

    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline void SetFeatures(const Aws::Map<Aws::String, FeatureMetadata>& value) { m_features = value; }

    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline void SetFeatures(Aws::Map<Aws::String, FeatureMetadata>&& value) { m_features = std::move(value); }

    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline GetResourceMetadataResult& WithFeatures(const Aws::Map<Aws::String, FeatureMetadata>& value) { SetFeatures(value); return *this;}

    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline GetResourceMetadataResult& WithFeatures(Aws::Map<Aws::String, FeatureMetadata>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline GetResourceMetadataResult& AddFeatures(const Aws::String& key, const FeatureMetadata& value) { m_features.emplace(key, value); return *this; }

    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline GetResourceMetadataResult& AddFeatures(Aws::String&& key, const FeatureMetadata& value) { m_features.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline GetResourceMetadataResult& AddFeatures(const Aws::String& key, FeatureMetadata&& value) { m_features.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline GetResourceMetadataResult& AddFeatures(Aws::String&& key, FeatureMetadata&& value) { m_features.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline GetResourceMetadataResult& AddFeatures(const char* key, FeatureMetadata&& value) { m_features.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata for different features. For example, the metadata might indicate
     * that a feature is turned on or off on a specific DB instance.</p>
     */
    inline GetResourceMetadataResult& AddFeatures(const char* key, const FeatureMetadata& value) { m_features.emplace(key, value); return *this; }

  private:

    Aws::String m_identifier;

    Aws::Map<Aws::String, FeatureMetadata> m_features;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
