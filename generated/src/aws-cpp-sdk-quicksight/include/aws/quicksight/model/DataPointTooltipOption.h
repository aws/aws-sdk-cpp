/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardBehavior.h>
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
   * <p>The data point tooltip options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPointTooltipOption">AWS
   * API Reference</a></p>
   */
  class DataPointTooltipOption
  {
  public:
    AWS_QUICKSIGHT_API DataPointTooltipOption();
    AWS_QUICKSIGHT_API DataPointTooltipOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataPointTooltipOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the data point tool tip options.</p>
     */
    inline const DashboardBehavior& GetAvailabilityStatus() const{ return m_availabilityStatus; }

    /**
     * <p>The status of the data point tool tip options.</p>
     */
    inline bool AvailabilityStatusHasBeenSet() const { return m_availabilityStatusHasBeenSet; }

    /**
     * <p>The status of the data point tool tip options.</p>
     */
    inline void SetAvailabilityStatus(const DashboardBehavior& value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = value; }

    /**
     * <p>The status of the data point tool tip options.</p>
     */
    inline void SetAvailabilityStatus(DashboardBehavior&& value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = std::move(value); }

    /**
     * <p>The status of the data point tool tip options.</p>
     */
    inline DataPointTooltipOption& WithAvailabilityStatus(const DashboardBehavior& value) { SetAvailabilityStatus(value); return *this;}

    /**
     * <p>The status of the data point tool tip options.</p>
     */
    inline DataPointTooltipOption& WithAvailabilityStatus(DashboardBehavior&& value) { SetAvailabilityStatus(std::move(value)); return *this;}

  private:

    DashboardBehavior m_availabilityStatus;
    bool m_availabilityStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
