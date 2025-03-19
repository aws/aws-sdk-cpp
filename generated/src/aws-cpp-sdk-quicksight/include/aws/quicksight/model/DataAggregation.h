/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicTimeGranularity.h>
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
   * <p>A structure that represents a data aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataAggregation">AWS
   * API Reference</a></p>
   */
  class DataAggregation
  {
  public:
    AWS_QUICKSIGHT_API DataAggregation() = default;
    AWS_QUICKSIGHT_API DataAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline TopicTimeGranularity GetDatasetRowDateGranularity() const { return m_datasetRowDateGranularity; }
    inline bool DatasetRowDateGranularityHasBeenSet() const { return m_datasetRowDateGranularityHasBeenSet; }
    inline void SetDatasetRowDateGranularity(TopicTimeGranularity value) { m_datasetRowDateGranularityHasBeenSet = true; m_datasetRowDateGranularity = value; }
    inline DataAggregation& WithDatasetRowDateGranularity(TopicTimeGranularity value) { SetDatasetRowDateGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column name for the default date.</p>
     */
    inline const Aws::String& GetDefaultDateColumnName() const { return m_defaultDateColumnName; }
    inline bool DefaultDateColumnNameHasBeenSet() const { return m_defaultDateColumnNameHasBeenSet; }
    template<typename DefaultDateColumnNameT = Aws::String>
    void SetDefaultDateColumnName(DefaultDateColumnNameT&& value) { m_defaultDateColumnNameHasBeenSet = true; m_defaultDateColumnName = std::forward<DefaultDateColumnNameT>(value); }
    template<typename DefaultDateColumnNameT = Aws::String>
    DataAggregation& WithDefaultDateColumnName(DefaultDateColumnNameT&& value) { SetDefaultDateColumnName(std::forward<DefaultDateColumnNameT>(value)); return *this;}
    ///@}
  private:

    TopicTimeGranularity m_datasetRowDateGranularity{TopicTimeGranularity::NOT_SET};
    bool m_datasetRowDateGranularityHasBeenSet = false;

    Aws::String m_defaultDateColumnName;
    bool m_defaultDateColumnNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
