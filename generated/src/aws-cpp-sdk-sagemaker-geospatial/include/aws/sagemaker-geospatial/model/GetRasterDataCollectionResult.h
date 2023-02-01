/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker-geospatial/model/DataCollectionType.h>
#include <aws/sagemaker-geospatial/model/Filter.h>
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
namespace SageMakerGeospatial
{
namespace Model
{
  class GetRasterDataCollectionResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API GetRasterDataCollectionResult();
    AWS_SAGEMAKERGEOSPATIAL_API GetRasterDataCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API GetRasterDataCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A description of the raster data collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The URL of the description page.</p>
     */
    inline const Aws::String& GetDescriptionPageUrl() const{ return m_descriptionPageUrl; }

    /**
     * <p>The URL of the description page.</p>
     */
    inline void SetDescriptionPageUrl(const Aws::String& value) { m_descriptionPageUrl = value; }

    /**
     * <p>The URL of the description page.</p>
     */
    inline void SetDescriptionPageUrl(Aws::String&& value) { m_descriptionPageUrl = std::move(value); }

    /**
     * <p>The URL of the description page.</p>
     */
    inline void SetDescriptionPageUrl(const char* value) { m_descriptionPageUrl.assign(value); }

    /**
     * <p>The URL of the description page.</p>
     */
    inline GetRasterDataCollectionResult& WithDescriptionPageUrl(const Aws::String& value) { SetDescriptionPageUrl(value); return *this;}

    /**
     * <p>The URL of the description page.</p>
     */
    inline GetRasterDataCollectionResult& WithDescriptionPageUrl(Aws::String&& value) { SetDescriptionPageUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the description page.</p>
     */
    inline GetRasterDataCollectionResult& WithDescriptionPageUrl(const char* value) { SetDescriptionPageUrl(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetImageSourceBands() const{ return m_imageSourceBands; }

    /**
     * <p/>
     */
    inline void SetImageSourceBands(const Aws::Vector<Aws::String>& value) { m_imageSourceBands = value; }

    /**
     * <p/>
     */
    inline void SetImageSourceBands(Aws::Vector<Aws::String>&& value) { m_imageSourceBands = std::move(value); }

    /**
     * <p/>
     */
    inline GetRasterDataCollectionResult& WithImageSourceBands(const Aws::Vector<Aws::String>& value) { SetImageSourceBands(value); return *this;}

    /**
     * <p/>
     */
    inline GetRasterDataCollectionResult& WithImageSourceBands(Aws::Vector<Aws::String>&& value) { SetImageSourceBands(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetRasterDataCollectionResult& AddImageSourceBands(const Aws::String& value) { m_imageSourceBands.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline GetRasterDataCollectionResult& AddImageSourceBands(Aws::String&& value) { m_imageSourceBands.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline GetRasterDataCollectionResult& AddImageSourceBands(const char* value) { m_imageSourceBands.push_back(value); return *this; }


    /**
     * <p>The name of the raster data collection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The filters supported by the raster data collection.</p>
     */
    inline const Aws::Vector<Filter>& GetSupportedFilters() const{ return m_supportedFilters; }

    /**
     * <p>The filters supported by the raster data collection.</p>
     */
    inline void SetSupportedFilters(const Aws::Vector<Filter>& value) { m_supportedFilters = value; }

    /**
     * <p>The filters supported by the raster data collection.</p>
     */
    inline void SetSupportedFilters(Aws::Vector<Filter>&& value) { m_supportedFilters = std::move(value); }

    /**
     * <p>The filters supported by the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithSupportedFilters(const Aws::Vector<Filter>& value) { SetSupportedFilters(value); return *this;}

    /**
     * <p>The filters supported by the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& WithSupportedFilters(Aws::Vector<Filter>&& value) { SetSupportedFilters(std::move(value)); return *this;}

    /**
     * <p>The filters supported by the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& AddSupportedFilters(const Filter& value) { m_supportedFilters.push_back(value); return *this; }

    /**
     * <p>The filters supported by the raster data collection.</p>
     */
    inline GetRasterDataCollectionResult& AddSupportedFilters(Filter&& value) { m_supportedFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetRasterDataCollectionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetRasterDataCollectionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetRasterDataCollectionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetRasterDataCollectionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetRasterDataCollectionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetRasterDataCollectionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetRasterDataCollectionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetRasterDataCollectionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline GetRasterDataCollectionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The raster data collection type.</p>
     */
    inline const DataCollectionType& GetType() const{ return m_type; }

    /**
     * <p>The raster data collection type.</p>
     */
    inline void SetType(const DataCollectionType& value) { m_type = value; }

    /**
     * <p>The raster data collection type.</p>
     */
    inline void SetType(DataCollectionType&& value) { m_type = std::move(value); }

    /**
     * <p>The raster data collection type.</p>
     */
    inline GetRasterDataCollectionResult& WithType(const DataCollectionType& value) { SetType(value); return *this;}

    /**
     * <p>The raster data collection type.</p>
     */
    inline GetRasterDataCollectionResult& WithType(DataCollectionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_descriptionPageUrl;

    Aws::Vector<Aws::String> m_imageSourceBands;

    Aws::String m_name;

    Aws::Vector<Filter> m_supportedFilters;

    Aws::Map<Aws::String, Aws::String> m_tags;

    DataCollectionType m_type;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
