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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>Response object containing details for a specific
   * RasterDataCollection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/RasterDataCollectionMetadata">AWS
   * API Reference</a></p>
   */
  class RasterDataCollectionMetadata
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionMetadata() = default;
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RasterDataCollectionMetadata& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the raster data collection.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RasterDataCollectionMetadata& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description URL of the raster data collection.</p>
     */
    inline const Aws::String& GetDescriptionPageUrl() const { return m_descriptionPageUrl; }
    inline bool DescriptionPageUrlHasBeenSet() const { return m_descriptionPageUrlHasBeenSet; }
    template<typename DescriptionPageUrlT = Aws::String>
    void SetDescriptionPageUrl(DescriptionPageUrlT&& value) { m_descriptionPageUrlHasBeenSet = true; m_descriptionPageUrl = std::forward<DescriptionPageUrlT>(value); }
    template<typename DescriptionPageUrlT = Aws::String>
    RasterDataCollectionMetadata& WithDescriptionPageUrl(DescriptionPageUrlT&& value) { SetDescriptionPageUrl(std::forward<DescriptionPageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the raster data collection.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RasterDataCollectionMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of filters supported by the raster data collection.</p>
     */
    inline const Aws::Vector<Filter>& GetSupportedFilters() const { return m_supportedFilters; }
    inline bool SupportedFiltersHasBeenSet() const { return m_supportedFiltersHasBeenSet; }
    template<typename SupportedFiltersT = Aws::Vector<Filter>>
    void SetSupportedFilters(SupportedFiltersT&& value) { m_supportedFiltersHasBeenSet = true; m_supportedFilters = std::forward<SupportedFiltersT>(value); }
    template<typename SupportedFiltersT = Aws::Vector<Filter>>
    RasterDataCollectionMetadata& WithSupportedFilters(SupportedFiltersT&& value) { SetSupportedFilters(std::forward<SupportedFiltersT>(value)); return *this;}
    template<typename SupportedFiltersT = Filter>
    RasterDataCollectionMetadata& AddSupportedFilters(SupportedFiltersT&& value) { m_supportedFiltersHasBeenSet = true; m_supportedFilters.emplace_back(std::forward<SupportedFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RasterDataCollectionMetadata& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RasterDataCollectionMetadata& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of raster data collection.</p>
     */
    inline DataCollectionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataCollectionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RasterDataCollectionMetadata& WithType(DataCollectionType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_descriptionPageUrl;
    bool m_descriptionPageUrlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Filter> m_supportedFilters;
    bool m_supportedFiltersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DataCollectionType m_type{DataCollectionType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
