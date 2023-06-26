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
    AWS_QUICKSIGHT_API DataAggregation();
    AWS_QUICKSIGHT_API DataAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline const TopicTimeGranularity& GetDatasetRowDateGranularity() const{ return m_datasetRowDateGranularity; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline bool DatasetRowDateGranularityHasBeenSet() const { return m_datasetRowDateGranularityHasBeenSet; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline void SetDatasetRowDateGranularity(const TopicTimeGranularity& value) { m_datasetRowDateGranularityHasBeenSet = true; m_datasetRowDateGranularity = value; }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline void SetDatasetRowDateGranularity(TopicTimeGranularity&& value) { m_datasetRowDateGranularityHasBeenSet = true; m_datasetRowDateGranularity = std::move(value); }

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline DataAggregation& WithDatasetRowDateGranularity(const TopicTimeGranularity& value) { SetDatasetRowDateGranularity(value); return *this;}

    /**
     * <p>The level of time precision that is used to aggregate <code>DateTime</code>
     * values.</p>
     */
    inline DataAggregation& WithDatasetRowDateGranularity(TopicTimeGranularity&& value) { SetDatasetRowDateGranularity(std::move(value)); return *this;}


    /**
     * <p>The column name for the default date.</p>
     */
    inline const Aws::String& GetDefaultDateColumnName() const{ return m_defaultDateColumnName; }

    /**
     * <p>The column name for the default date.</p>
     */
    inline bool DefaultDateColumnNameHasBeenSet() const { return m_defaultDateColumnNameHasBeenSet; }

    /**
     * <p>The column name for the default date.</p>
     */
    inline void SetDefaultDateColumnName(const Aws::String& value) { m_defaultDateColumnNameHasBeenSet = true; m_defaultDateColumnName = value; }

    /**
     * <p>The column name for the default date.</p>
     */
    inline void SetDefaultDateColumnName(Aws::String&& value) { m_defaultDateColumnNameHasBeenSet = true; m_defaultDateColumnName = std::move(value); }

    /**
     * <p>The column name for the default date.</p>
     */
    inline void SetDefaultDateColumnName(const char* value) { m_defaultDateColumnNameHasBeenSet = true; m_defaultDateColumnName.assign(value); }

    /**
     * <p>The column name for the default date.</p>
     */
    inline DataAggregation& WithDefaultDateColumnName(const Aws::String& value) { SetDefaultDateColumnName(value); return *this;}

    /**
     * <p>The column name for the default date.</p>
     */
    inline DataAggregation& WithDefaultDateColumnName(Aws::String&& value) { SetDefaultDateColumnName(std::move(value)); return *this;}

    /**
     * <p>The column name for the default date.</p>
     */
    inline DataAggregation& WithDefaultDateColumnName(const char* value) { SetDefaultDateColumnName(value); return *this;}

  private:

    TopicTimeGranularity m_datasetRowDateGranularity;
    bool m_datasetRowDateGranularityHasBeenSet = false;

    Aws::String m_defaultDateColumnName;
    bool m_defaultDateColumnNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
