/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/AlgorithmNameGeoMosaic.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Input configuration information for the geomosaic.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/GeoMosaicConfigInput">AWS
   * API Reference</a></p>
   */
  class GeoMosaicConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API GeoMosaicConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API GeoMosaicConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API GeoMosaicConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the algorithm being used for geomosaic.</p>
     */
    inline AlgorithmNameGeoMosaic GetAlgorithmName() const { return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    inline void SetAlgorithmName(AlgorithmNameGeoMosaic value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }
    inline GeoMosaicConfigInput& WithAlgorithmName(AlgorithmNameGeoMosaic value) { SetAlgorithmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target bands for geomosaic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const { return m_targetBands; }
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    void SetTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::forward<TargetBandsT>(value); }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    GeoMosaicConfigInput& WithTargetBands(TargetBandsT&& value) { SetTargetBands(std::forward<TargetBandsT>(value)); return *this;}
    template<typename TargetBandsT = Aws::String>
    GeoMosaicConfigInput& AddTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands.emplace_back(std::forward<TargetBandsT>(value)); return *this; }
    ///@}
  private:

    AlgorithmNameGeoMosaic m_algorithmName{AlgorithmNameGeoMosaic::NOT_SET};
    bool m_algorithmNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
