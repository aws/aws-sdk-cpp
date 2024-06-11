﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TimeGranularity.h>
#include <aws/quicksight/model/WidgetStatus.h>
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
   * <p>The exclude period of <code>TimeRangeFilter</code> or
   * <code>RelativeDatesFilter</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ExcludePeriodConfiguration">AWS
   * API Reference</a></p>
   */
  class ExcludePeriodConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ExcludePeriodConfiguration();
    AWS_QUICKSIGHT_API ExcludePeriodConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ExcludePeriodConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount or number of the exclude period.</p>
     */
    inline int GetAmount() const{ return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(int value) { m_amountHasBeenSet = true; m_amount = value; }
    inline ExcludePeriodConfiguration& WithAmount(int value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity or unit (day, month, year) of the exclude period.</p>
     */
    inline const TimeGranularity& GetGranularity() const{ return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    inline void SetGranularity(const TimeGranularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }
    inline void SetGranularity(TimeGranularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }
    inline ExcludePeriodConfiguration& WithGranularity(const TimeGranularity& value) { SetGranularity(value); return *this;}
    inline ExcludePeriodConfiguration& WithGranularity(TimeGranularity&& value) { SetGranularity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the exclude period. Choose from the following options:</p> <ul>
     * <li> <p> <code>ENABLED</code> </p> </li> <li> <p> <code>DISABLED</code> </p>
     * </li> </ul>
     */
    inline const WidgetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WidgetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WidgetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExcludePeriodConfiguration& WithStatus(const WidgetStatus& value) { SetStatus(value); return *this;}
    inline ExcludePeriodConfiguration& WithStatus(WidgetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    int m_amount;
    bool m_amountHasBeenSet = false;

    TimeGranularity m_granularity;
    bool m_granularityHasBeenSet = false;

    WidgetStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
