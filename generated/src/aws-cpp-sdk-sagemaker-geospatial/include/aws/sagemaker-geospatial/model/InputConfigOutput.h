﻿/**
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
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigOutput();
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline const Aws::String& GetPreviousEarthObservationJobArn() const{ return m_previousEarthObservationJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline bool PreviousEarthObservationJobArnHasBeenSet() const { return m_previousEarthObservationJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline void SetPreviousEarthObservationJobArn(const Aws::String& value) { m_previousEarthObservationJobArnHasBeenSet = true; m_previousEarthObservationJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline void SetPreviousEarthObservationJobArn(Aws::String&& value) { m_previousEarthObservationJobArnHasBeenSet = true; m_previousEarthObservationJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline void SetPreviousEarthObservationJobArn(const char* value) { m_previousEarthObservationJobArnHasBeenSet = true; m_previousEarthObservationJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline InputConfigOutput& WithPreviousEarthObservationJobArn(const Aws::String& value) { SetPreviousEarthObservationJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline InputConfigOutput& WithPreviousEarthObservationJobArn(Aws::String&& value) { SetPreviousEarthObservationJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline InputConfigOutput& WithPreviousEarthObservationJobArn(const char* value) { SetPreviousEarthObservationJobArn(value); return *this;}


    /**
     * <p>The structure representing the RasterDataCollection Query consisting of the
     * Area of Interest, RasterDataCollectionArn, RasterDataCollectionName, TimeRange,
     * and Property Filters.</p>
     */
    inline const RasterDataCollectionQueryOutput& GetRasterDataCollectionQuery() const{ return m_rasterDataCollectionQuery; }

    /**
     * <p>The structure representing the RasterDataCollection Query consisting of the
     * Area of Interest, RasterDataCollectionArn, RasterDataCollectionName, TimeRange,
     * and Property Filters.</p>
     */
    inline bool RasterDataCollectionQueryHasBeenSet() const { return m_rasterDataCollectionQueryHasBeenSet; }

    /**
     * <p>The structure representing the RasterDataCollection Query consisting of the
     * Area of Interest, RasterDataCollectionArn, RasterDataCollectionName, TimeRange,
     * and Property Filters.</p>
     */
    inline void SetRasterDataCollectionQuery(const RasterDataCollectionQueryOutput& value) { m_rasterDataCollectionQueryHasBeenSet = true; m_rasterDataCollectionQuery = value; }

    /**
     * <p>The structure representing the RasterDataCollection Query consisting of the
     * Area of Interest, RasterDataCollectionArn, RasterDataCollectionName, TimeRange,
     * and Property Filters.</p>
     */
    inline void SetRasterDataCollectionQuery(RasterDataCollectionQueryOutput&& value) { m_rasterDataCollectionQueryHasBeenSet = true; m_rasterDataCollectionQuery = std::move(value); }

    /**
     * <p>The structure representing the RasterDataCollection Query consisting of the
     * Area of Interest, RasterDataCollectionArn, RasterDataCollectionName, TimeRange,
     * and Property Filters.</p>
     */
    inline InputConfigOutput& WithRasterDataCollectionQuery(const RasterDataCollectionQueryOutput& value) { SetRasterDataCollectionQuery(value); return *this;}

    /**
     * <p>The structure representing the RasterDataCollection Query consisting of the
     * Area of Interest, RasterDataCollectionArn, RasterDataCollectionName, TimeRange,
     * and Property Filters.</p>
     */
    inline InputConfigOutput& WithRasterDataCollectionQuery(RasterDataCollectionQueryOutput&& value) { SetRasterDataCollectionQuery(std::move(value)); return *this;}

  private:

    Aws::String m_previousEarthObservationJobArn;
    bool m_previousEarthObservationJobArnHasBeenSet = false;

    RasterDataCollectionQueryOutput m_rasterDataCollectionQuery;
    bool m_rasterDataCollectionQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
