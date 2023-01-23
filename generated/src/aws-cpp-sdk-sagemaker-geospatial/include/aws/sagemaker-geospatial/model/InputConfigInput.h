/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/EojDataSourceConfigInput.h>
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
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigInput();
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API InputConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location of the input data.&gt;</p>
     */
    inline const EojDataSourceConfigInput& GetDataSourceConfig() const{ return m_dataSourceConfig; }

    /**
     * <p>The location of the input data.&gt;</p>
     */
    inline bool DataSourceConfigHasBeenSet() const { return m_dataSourceConfigHasBeenSet; }

    /**
     * <p>The location of the input data.&gt;</p>
     */
    inline void SetDataSourceConfig(const EojDataSourceConfigInput& value) { m_dataSourceConfigHasBeenSet = true; m_dataSourceConfig = value; }

    /**
     * <p>The location of the input data.&gt;</p>
     */
    inline void SetDataSourceConfig(EojDataSourceConfigInput&& value) { m_dataSourceConfigHasBeenSet = true; m_dataSourceConfig = std::move(value); }

    /**
     * <p>The location of the input data.&gt;</p>
     */
    inline InputConfigInput& WithDataSourceConfig(const EojDataSourceConfigInput& value) { SetDataSourceConfig(value); return *this;}

    /**
     * <p>The location of the input data.&gt;</p>
     */
    inline InputConfigInput& WithDataSourceConfig(EojDataSourceConfigInput&& value) { SetDataSourceConfig(std::move(value)); return *this;}


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
    inline InputConfigInput& WithPreviousEarthObservationJobArn(const Aws::String& value) { SetPreviousEarthObservationJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline InputConfigInput& WithPreviousEarthObservationJobArn(Aws::String&& value) { SetPreviousEarthObservationJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the previous Earth Observation job.</p>
     */
    inline InputConfigInput& WithPreviousEarthObservationJobArn(const char* value) { SetPreviousEarthObservationJobArn(value); return *this;}


    /**
     * <p/>
     */
    inline const RasterDataCollectionQueryInput& GetRasterDataCollectionQuery() const{ return m_rasterDataCollectionQuery; }

    /**
     * <p/>
     */
    inline bool RasterDataCollectionQueryHasBeenSet() const { return m_rasterDataCollectionQueryHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRasterDataCollectionQuery(const RasterDataCollectionQueryInput& value) { m_rasterDataCollectionQueryHasBeenSet = true; m_rasterDataCollectionQuery = value; }

    /**
     * <p/>
     */
    inline void SetRasterDataCollectionQuery(RasterDataCollectionQueryInput&& value) { m_rasterDataCollectionQueryHasBeenSet = true; m_rasterDataCollectionQuery = std::move(value); }

    /**
     * <p/>
     */
    inline InputConfigInput& WithRasterDataCollectionQuery(const RasterDataCollectionQueryInput& value) { SetRasterDataCollectionQuery(value); return *this;}

    /**
     * <p/>
     */
    inline InputConfigInput& WithRasterDataCollectionQuery(RasterDataCollectionQueryInput&& value) { SetRasterDataCollectionQuery(std::move(value)); return *this;}

  private:

    EojDataSourceConfigInput m_dataSourceConfig;
    bool m_dataSourceConfigHasBeenSet = false;

    Aws::String m_previousEarthObservationJobArn;
    bool m_previousEarthObservationJobArnHasBeenSet = false;

    RasterDataCollectionQueryInput m_rasterDataCollectionQuery;
    bool m_rasterDataCollectionQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
