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
    AWS_QUICKSIGHT_API BigQueryParameters() = default;
    AWS_QUICKSIGHT_API BigQueryParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BigQueryParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Google Cloud Platform project ID where your datasource was created.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    BigQueryParameters& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage location where you create a Google BigQuery data source.</p>
     */
    inline const Aws::String& GetDataSetRegion() const { return m_dataSetRegion; }
    inline bool DataSetRegionHasBeenSet() const { return m_dataSetRegionHasBeenSet; }
    template<typename DataSetRegionT = Aws::String>
    void SetDataSetRegion(DataSetRegionT&& value) { m_dataSetRegionHasBeenSet = true; m_dataSetRegion = std::forward<DataSetRegionT>(value); }
    template<typename DataSetRegionT = Aws::String>
    BigQueryParameters& WithDataSetRegion(DataSetRegionT&& value) { SetDataSetRegion(std::forward<DataSetRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_dataSetRegion;
    bool m_dataSetRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
