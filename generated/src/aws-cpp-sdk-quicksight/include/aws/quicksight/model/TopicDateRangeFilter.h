/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicRangeFilterConstant.h>
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
   * <p>A filter used to restrict data based on a range of dates or
   * times.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicDateRangeFilter">AWS
   * API Reference</a></p>
   */
  class TopicDateRangeFilter
  {
  public:
    AWS_QUICKSIGHT_API TopicDateRangeFilter();
    AWS_QUICKSIGHT_API TopicDateRangeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicDateRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean value that indicates whether the date range filter should include
     * the boundary values. If set to true, the filter includes the start and end
     * dates. If set to false, the filter excludes them.</p>
     */
    inline bool GetInclusive() const{ return m_inclusive; }

    /**
     * <p>A Boolean value that indicates whether the date range filter should include
     * the boundary values. If set to true, the filter includes the start and end
     * dates. If set to false, the filter excludes them.</p>
     */
    inline bool InclusiveHasBeenSet() const { return m_inclusiveHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether the date range filter should include
     * the boundary values. If set to true, the filter includes the start and end
     * dates. If set to false, the filter excludes them.</p>
     */
    inline void SetInclusive(bool value) { m_inclusiveHasBeenSet = true; m_inclusive = value; }

    /**
     * <p>A Boolean value that indicates whether the date range filter should include
     * the boundary values. If set to true, the filter includes the start and end
     * dates. If set to false, the filter excludes them.</p>
     */
    inline TopicDateRangeFilter& WithInclusive(bool value) { SetInclusive(value); return *this;}


    /**
     * <p>The constant used in a date range filter.</p>
     */
    inline const TopicRangeFilterConstant& GetConstant() const{ return m_constant; }

    /**
     * <p>The constant used in a date range filter.</p>
     */
    inline bool ConstantHasBeenSet() const { return m_constantHasBeenSet; }

    /**
     * <p>The constant used in a date range filter.</p>
     */
    inline void SetConstant(const TopicRangeFilterConstant& value) { m_constantHasBeenSet = true; m_constant = value; }

    /**
     * <p>The constant used in a date range filter.</p>
     */
    inline void SetConstant(TopicRangeFilterConstant&& value) { m_constantHasBeenSet = true; m_constant = std::move(value); }

    /**
     * <p>The constant used in a date range filter.</p>
     */
    inline TopicDateRangeFilter& WithConstant(const TopicRangeFilterConstant& value) { SetConstant(value); return *this;}

    /**
     * <p>The constant used in a date range filter.</p>
     */
    inline TopicDateRangeFilter& WithConstant(TopicRangeFilterConstant&& value) { SetConstant(std::move(value)); return *this;}

  private:

    bool m_inclusive;
    bool m_inclusiveHasBeenSet = false;

    TopicRangeFilterConstant m_constant;
    bool m_constantHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
