/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/RasterDataCollectionQueryInput.h>
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
   * <p>Input configuration information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/InputConfigInput">AWS
   * API Reference</a></p>
   */
  class InputConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    InputConfigInput& WithPreviousEarthObservationJobArn(PreviousEarthObservationJobArnT&& value) { SetPreviousEarthObservationJobArn(std::forward<PreviousEarthObservationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing the RasterDataCollection Query consisting of the
     * Area of Interest, RasterDataCollectionArn,TimeRange and Property Filters.</p>
     */
    inline const RasterDataCollectionQueryInput& GetRasterDataCollectionQuery() const { return m_rasterDataCollectionQuery; }
    inline bool RasterDataCollectionQueryHasBeenSet() const { return m_rasterDataCollectionQueryHasBeenSet; }
    template<typename RasterDataCollectionQueryT = RasterDataCollectionQueryInput>
    void SetRasterDataCollectionQuery(RasterDataCollectionQueryT&& value) { m_rasterDataCollectionQueryHasBeenSet = true; m_rasterDataCollectionQuery = std::forward<RasterDataCollectionQueryT>(value); }
    template<typename RasterDataCollectionQueryT = RasterDataCollectionQueryInput>
    InputConfigInput& WithRasterDataCollectionQuery(RasterDataCollectionQueryT&& value) { SetRasterDataCollectionQuery(std::forward<RasterDataCollectionQueryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_previousEarthObservationJobArn;
    bool m_previousEarthObservationJobArnHasBeenSet = false;

    RasterDataCollectionQueryInput m_rasterDataCollectionQuery;
    bool m_rasterDataCollectionQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
