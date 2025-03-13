/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TimeGranularity.h>
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
   * <p>The definition of an <code>AggregationPartitionBy</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AggregationPartitionBy">AWS
   * API Reference</a></p>
   */
  class AggregationPartitionBy
  {
  public:
    AWS_QUICKSIGHT_API AggregationPartitionBy() = default;
    AWS_QUICKSIGHT_API AggregationPartitionBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AggregationPartitionBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field Name for an <code>AggregationPartitionBy</code>.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    AggregationPartitionBy& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TimeGranularity</code> for an
     * <code>AggregationPartitionBy</code>.</p>
     */
    inline TimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline AggregationPartitionBy& WithTimeGranularity(TimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    TimeGranularity m_timeGranularity{TimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
