﻿/**
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetRasterDataCollectionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetRasterDataCollectionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetRasterDataCollectionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the raster data collection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetRasterDataCollectionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetRasterDataCollectionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetRasterDataCollectionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the description page.</p>
     */
    inline const Aws::String& GetDescriptionPageUrl() const{ return m_descriptionPageUrl; }
    inline void SetDescriptionPageUrl(const Aws::String& value) { m_descriptionPageUrl = value; }
    inline void SetDescriptionPageUrl(Aws::String&& value) { m_descriptionPageUrl = std::move(value); }
    inline void SetDescriptionPageUrl(const char* value) { m_descriptionPageUrl.assign(value); }
    inline GetRasterDataCollectionResult& WithDescriptionPageUrl(const Aws::String& value) { SetDescriptionPageUrl(value); return *this;}
    inline GetRasterDataCollectionResult& WithDescriptionPageUrl(Aws::String&& value) { SetDescriptionPageUrl(std::move(value)); return *this;}
    inline GetRasterDataCollectionResult& WithDescriptionPageUrl(const char* value) { SetDescriptionPageUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of image source bands in the raster data collection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageSourceBands() const{ return m_imageSourceBands; }
    inline void SetImageSourceBands(const Aws::Vector<Aws::String>& value) { m_imageSourceBands = value; }
    inline void SetImageSourceBands(Aws::Vector<Aws::String>&& value) { m_imageSourceBands = std::move(value); }
    inline GetRasterDataCollectionResult& WithImageSourceBands(const Aws::Vector<Aws::String>& value) { SetImageSourceBands(value); return *this;}
    inline GetRasterDataCollectionResult& WithImageSourceBands(Aws::Vector<Aws::String>&& value) { SetImageSourceBands(std::move(value)); return *this;}
    inline GetRasterDataCollectionResult& AddImageSourceBands(const Aws::String& value) { m_imageSourceBands.push_back(value); return *this; }
    inline GetRasterDataCollectionResult& AddImageSourceBands(Aws::String&& value) { m_imageSourceBands.push_back(std::move(value)); return *this; }
    inline GetRasterDataCollectionResult& AddImageSourceBands(const char* value) { m_imageSourceBands.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the raster data collection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetRasterDataCollectionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetRasterDataCollectionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetRasterDataCollectionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters supported by the raster data collection.</p>
     */
    inline const Aws::Vector<Filter>& GetSupportedFilters() const{ return m_supportedFilters; }
    inline void SetSupportedFilters(const Aws::Vector<Filter>& value) { m_supportedFilters = value; }
    inline void SetSupportedFilters(Aws::Vector<Filter>&& value) { m_supportedFilters = std::move(value); }
    inline GetRasterDataCollectionResult& WithSupportedFilters(const Aws::Vector<Filter>& value) { SetSupportedFilters(value); return *this;}
    inline GetRasterDataCollectionResult& WithSupportedFilters(Aws::Vector<Filter>&& value) { SetSupportedFilters(std::move(value)); return *this;}
    inline GetRasterDataCollectionResult& AddSupportedFilters(const Filter& value) { m_supportedFilters.push_back(value); return *this; }
    inline GetRasterDataCollectionResult& AddSupportedFilters(Filter&& value) { m_supportedFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetRasterDataCollectionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetRasterDataCollectionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetRasterDataCollectionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetRasterDataCollectionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetRasterDataCollectionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetRasterDataCollectionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetRasterDataCollectionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetRasterDataCollectionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetRasterDataCollectionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The raster data collection type.</p>
     */
    inline const DataCollectionType& GetType() const{ return m_type; }
    inline void SetType(const DataCollectionType& value) { m_type = value; }
    inline void SetType(DataCollectionType&& value) { m_type = std::move(value); }
    inline GetRasterDataCollectionResult& WithType(const DataCollectionType& value) { SetType(value); return *this;}
    inline GetRasterDataCollectionResult& WithType(DataCollectionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRasterDataCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRasterDataCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRasterDataCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_descriptionPageUrl;

    Aws::Vector<Aws::String> m_imageSourceBands;

    Aws::String m_name;

    Aws::Vector<Filter> m_supportedFilters;

    Aws::Map<Aws::String, Aws::String> m_tags;

    DataCollectionType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
