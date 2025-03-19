/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/RasterDataCollectionQueryOutput.h>
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
   * <p>The InputConfig for an EarthObservationJob response.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/InputConfigOutput">AWS
   * API Reference</a></p>
   */
  class InputConfigOutput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigOutput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline const Aws::String& GetPreviousEarthObservationJobArn() const { return m_previousEarthObservationJobArn; }
    inline bool PreviousEarthObservationJobArnHasBeenSet() const { return m_previousEarthObservationJobArnHasBeenSet; }
    template<typename PreviousEarthObservationJobArnT = Aws::String>
    void SetPreviousEarthObservationJobArn(PreviousEarthObservationJobArnT&& value) { m_previousEarthObservationJobArnHasBeenSet = true; m_previousEarthObservationJobArn = std::forward<PreviousEarthObservationJobArnT>(value); }
    template<typename PreviousEarthObservationJobArnT = Aws::String>
    InputConfigOutput& WithPreviousEarthObservationJobArn(PreviousEarthObservationJobArnT&& value) { SetPreviousEarthObservationJobArn(std::forward<PreviousEarthObservationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing the RasterDataCollection Query consisting of the
     * Area of Interest, RasterDataCollectionArn, RasterDataCollectionName, TimeRange,
     * and Property Filters.</p>
     */
    inline const RasterDataCollectionQueryOutput& GetRasterDataCollectionQuery() const { return m_rasterDataCollectionQuery; }
    inline bool RasterDataCollectionQueryHasBeenSet() const { return m_rasterDataCollectionQueryHasBeenSet; }
    template<typename RasterDataCollectionQueryT = RasterDataCollectionQueryOutput>
    void SetRasterDataCollectionQuery(RasterDataCollectionQueryT&& value) { m_rasterDataCollectionQueryHasBeenSet = true; m_rasterDataCollectionQuery = std::forward<RasterDataCollectionQueryT>(value); }
    template<typename RasterDataCollectionQueryT = RasterDataCollectionQueryOutput>
    InputConfigOutput& WithRasterDataCollectionQuery(RasterDataCollectionQueryT&& value) { SetRasterDataCollectionQuery(std::forward<RasterDataCollectionQueryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_previousEarthObservationJobArn;
    bool m_previousEarthObservationJobArnHasBeenSet = false;

    RasterDataCollectionQueryOutput m_rasterDataCollectionQuery;
    bool m_rasterDataCollectionQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
