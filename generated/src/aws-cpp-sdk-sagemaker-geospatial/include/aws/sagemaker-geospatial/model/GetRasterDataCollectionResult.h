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
    AWS_SAGEMAKERGEOSPATIAL_API GetRasterDataCollectionResult() = default;
    AWS_SAGEMAKERGEOSPATIAL_API GetRasterDataCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API GetRasterDataCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetRasterDataCollectionResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the raster data collection.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetRasterDataCollectionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the description page.</p>
     */
    inline const Aws::String& GetDescriptionPageUrl() const { return m_descriptionPageUrl; }
    template<typename DescriptionPageUrlT = Aws::String>
    void SetDescriptionPageUrl(DescriptionPageUrlT&& value) { m_descriptionPageUrlHasBeenSet = true; m_descriptionPageUrl = std::forward<DescriptionPageUrlT>(value); }
    template<typename DescriptionPageUrlT = Aws::String>
    GetRasterDataCollectionResult& WithDescriptionPageUrl(DescriptionPageUrlT&& value) { SetDescriptionPageUrl(std::forward<DescriptionPageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of image source bands in the raster data collection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageSourceBands() const { return m_imageSourceBands; }
    template<typename ImageSourceBandsT = Aws::Vector<Aws::String>>
    void SetImageSourceBands(ImageSourceBandsT&& value) { m_imageSourceBandsHasBeenSet = true; m_imageSourceBands = std::forward<ImageSourceBandsT>(value); }
    template<typename ImageSourceBandsT = Aws::Vector<Aws::String>>
    GetRasterDataCollectionResult& WithImageSourceBands(ImageSourceBandsT&& value) { SetImageSourceBands(std::forward<ImageSourceBandsT>(value)); return *this;}
    template<typename ImageSourceBandsT = Aws::String>
    GetRasterDataCollectionResult& AddImageSourceBands(ImageSourceBandsT&& value) { m_imageSourceBandsHasBeenSet = true; m_imageSourceBands.emplace_back(std::forward<ImageSourceBandsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the raster data collection.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetRasterDataCollectionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters supported by the raster data collection.</p>
     */
    inline const Aws::Vector<Filter>& GetSupportedFilters() const { return m_supportedFilters; }
    template<typename SupportedFiltersT = Aws::Vector<Filter>>
    void SetSupportedFilters(SupportedFiltersT&& value) { m_supportedFiltersHasBeenSet = true; m_supportedFilters = std::forward<SupportedFiltersT>(value); }
    template<typename SupportedFiltersT = Aws::Vector<Filter>>
    GetRasterDataCollectionResult& WithSupportedFilters(SupportedFiltersT&& value) { SetSupportedFilters(std::forward<SupportedFiltersT>(value)); return *this;}
    template<typename SupportedFiltersT = Filter>
    GetRasterDataCollectionResult& AddSupportedFilters(SupportedFiltersT&& value) { m_supportedFiltersHasBeenSet = true; m_supportedFilters.emplace_back(std::forward<SupportedFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetRasterDataCollectionResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetRasterDataCollectionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The raster data collection type.</p>
     */
    inline DataCollectionType GetType() const { return m_type; }
    inline void SetType(DataCollectionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetRasterDataCollectionResult& WithType(DataCollectionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRasterDataCollectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_descriptionPageUrl;
    bool m_descriptionPageUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageSourceBands;
    bool m_imageSourceBandsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Filter> m_supportedFilters;
    bool m_supportedFiltersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DataCollectionType m_type{DataCollectionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
