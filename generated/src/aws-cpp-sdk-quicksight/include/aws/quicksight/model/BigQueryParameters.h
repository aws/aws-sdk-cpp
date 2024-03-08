/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters that are required to connect to a Google BigQuery data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BigQueryParameters">AWS
   * API Reference</a></p>
   */
  class BigQueryParameters
  {
  public:
    AWS_QUICKSIGHT_API BigQueryParameters();
    AWS_QUICKSIGHT_API BigQueryParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BigQueryParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Google Cloud Platform project ID where your datasource was created.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The Google Cloud Platform project ID where your datasource was created.</p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p>The Google Cloud Platform project ID where your datasource was created.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p>The Google Cloud Platform project ID where your datasource was created.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p>The Google Cloud Platform project ID where your datasource was created.</p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p>The Google Cloud Platform project ID where your datasource was created.</p>
     */
    inline BigQueryParameters& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The Google Cloud Platform project ID where your datasource was created.</p>
     */
    inline BigQueryParameters& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The Google Cloud Platform project ID where your datasource was created.</p>
     */
    inline BigQueryParameters& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The storage location where you create a Google BigQuery data source.</p>
     */
    inline const Aws::String& GetDataSetRegion() const{ return m_dataSetRegion; }

    /**
     * <p>The storage location where you create a Google BigQuery data source.</p>
     */
    inline bool DataSetRegionHasBeenSet() const { return m_dataSetRegionHasBeenSet; }

    /**
     * <p>The storage location where you create a Google BigQuery data source.</p>
     */
    inline void SetDataSetRegion(const Aws::String& value) { m_dataSetRegionHasBeenSet = true; m_dataSetRegion = value; }

    /**
     * <p>The storage location where you create a Google BigQuery data source.</p>
     */
    inline void SetDataSetRegion(Aws::String&& value) { m_dataSetRegionHasBeenSet = true; m_dataSetRegion = std::move(value); }

    /**
     * <p>The storage location where you create a Google BigQuery data source.</p>
     */
    inline void SetDataSetRegion(const char* value) { m_dataSetRegionHasBeenSet = true; m_dataSetRegion.assign(value); }

    /**
     * <p>The storage location where you create a Google BigQuery data source.</p>
     */
    inline BigQueryParameters& WithDataSetRegion(const Aws::String& value) { SetDataSetRegion(value); return *this;}

    /**
     * <p>The storage location where you create a Google BigQuery data source.</p>
     */
    inline BigQueryParameters& WithDataSetRegion(Aws::String&& value) { SetDataSetRegion(std::move(value)); return *this;}

    /**
     * <p>The storage location where you create a Google BigQuery data source.</p>
     */
    inline BigQueryParameters& WithDataSetRegion(const char* value) { SetDataSetRegion(value); return *this;}

  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_dataSetRegion;
    bool m_dataSetRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
