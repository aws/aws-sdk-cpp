/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/MapMatchingConfig.h>
#include <aws/sagemaker-geospatial/model/ReverseGeocodingConfig.h>
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
   * <p>It contains configs such as ReverseGeocodingConfig and
   * MapMatchingConfig.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/VectorEnrichmentJobConfig">AWS
   * API Reference</a></p>
   */
  class VectorEnrichmentJobConfig
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobConfig() = default;
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input structure for Map Matching operation type.</p>
     */
    inline const MapMatchingConfig& GetMapMatchingConfig() const { return m_mapMatchingConfig; }
    inline bool MapMatchingConfigHasBeenSet() const { return m_mapMatchingConfigHasBeenSet; }
    template<typename MapMatchingConfigT = MapMatchingConfig>
    void SetMapMatchingConfig(MapMatchingConfigT&& value) { m_mapMatchingConfigHasBeenSet = true; m_mapMatchingConfig = std::forward<MapMatchingConfigT>(value); }
    template<typename MapMatchingConfigT = MapMatchingConfig>
    VectorEnrichmentJobConfig& WithMapMatchingConfig(MapMatchingConfigT&& value) { SetMapMatchingConfig(std::forward<MapMatchingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input structure for Reverse Geocoding operation type.</p>
     */
    inline const ReverseGeocodingConfig& GetReverseGeocodingConfig() const { return m_reverseGeocodingConfig; }
    inline bool ReverseGeocodingConfigHasBeenSet() const { return m_reverseGeocodingConfigHasBeenSet; }
    template<typename ReverseGeocodingConfigT = ReverseGeocodingConfig>
    void SetReverseGeocodingConfig(ReverseGeocodingConfigT&& value) { m_reverseGeocodingConfigHasBeenSet = true; m_reverseGeocodingConfig = std::forward<ReverseGeocodingConfigT>(value); }
    template<typename ReverseGeocodingConfigT = ReverseGeocodingConfig>
    VectorEnrichmentJobConfig& WithReverseGeocodingConfig(ReverseGeocodingConfigT&& value) { SetReverseGeocodingConfig(std::forward<ReverseGeocodingConfigT>(value)); return *this;}
    ///@}
  private:

    MapMatchingConfig m_mapMatchingConfig;
    bool m_mapMatchingConfigHasBeenSet = false;

    ReverseGeocodingConfig m_reverseGeocodingConfig;
    bool m_reverseGeocodingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
