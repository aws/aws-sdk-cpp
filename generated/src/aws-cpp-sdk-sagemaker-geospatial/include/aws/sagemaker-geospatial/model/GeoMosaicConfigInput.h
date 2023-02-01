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
    AWS_SAGEMAKERGEOSPATIAL_API GeoMosaicConfigInput();
    AWS_SAGEMAKERGEOSPATIAL_API GeoMosaicConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API GeoMosaicConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the algorithm being used for geomosaic.</p>
     */
    inline const AlgorithmNameGeoMosaic& GetAlgorithmName() const{ return m_algorithmName; }

    /**
     * <p>The name of the algorithm being used for geomosaic.</p>
     */
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }

    /**
     * <p>The name of the algorithm being used for geomosaic.</p>
     */
    inline void SetAlgorithmName(const AlgorithmNameGeoMosaic& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }

    /**
     * <p>The name of the algorithm being used for geomosaic.</p>
     */
    inline void SetAlgorithmName(AlgorithmNameGeoMosaic&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }

    /**
     * <p>The name of the algorithm being used for geomosaic.</p>
     */
    inline GeoMosaicConfigInput& WithAlgorithmName(const AlgorithmNameGeoMosaic& value) { SetAlgorithmName(value); return *this;}

    /**
     * <p>The name of the algorithm being used for geomosaic.</p>
     */
    inline GeoMosaicConfigInput& WithAlgorithmName(AlgorithmNameGeoMosaic&& value) { SetAlgorithmName(std::move(value)); return *this;}


    /**
     * <p>The target bands for geomosaic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const{ return m_targetBands; }

    /**
     * <p>The target bands for geomosaic.</p>
     */
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }

    /**
     * <p>The target bands for geomosaic.</p>
     */
    inline void SetTargetBands(const Aws::Vector<Aws::String>& value) { m_targetBandsHasBeenSet = true; m_targetBands = value; }

    /**
     * <p>The target bands for geomosaic.</p>
     */
    inline void SetTargetBands(Aws::Vector<Aws::String>&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::move(value); }

    /**
     * <p>The target bands for geomosaic.</p>
     */
    inline GeoMosaicConfigInput& WithTargetBands(const Aws::Vector<Aws::String>& value) { SetTargetBands(value); return *this;}

    /**
     * <p>The target bands for geomosaic.</p>
     */
    inline GeoMosaicConfigInput& WithTargetBands(Aws::Vector<Aws::String>&& value) { SetTargetBands(std::move(value)); return *this;}

    /**
     * <p>The target bands for geomosaic.</p>
     */
    inline GeoMosaicConfigInput& AddTargetBands(const Aws::String& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

    /**
     * <p>The target bands for geomosaic.</p>
     */
    inline GeoMosaicConfigInput& AddTargetBands(Aws::String&& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(std::move(value)); return *this; }

    /**
     * <p>The target bands for geomosaic.</p>
     */
    inline GeoMosaicConfigInput& AddTargetBands(const char* value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

  private:

    AlgorithmNameGeoMosaic m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
