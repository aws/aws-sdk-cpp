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
   * <p>The axis sort options for a visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualAxisSortOption">AWS
   * API Reference</a></p>
   */
  class VisualAxisSortOption
  {
  public:
    AWS_QUICKSIGHT_API VisualAxisSortOption() = default;
    AWS_QUICKSIGHT_API VisualAxisSortOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualAxisSortOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The availaiblity status of a visual's axis sort options.</p>
     */
    inline DashboardBehavior GetAvailabilityStatus() const { return m_availabilityStatus; }
    inline bool AvailabilityStatusHasBeenSet() const { return m_availabilityStatusHasBeenSet; }
    inline void SetAvailabilityStatus(DashboardBehavior value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = value; }
    inline VisualAxisSortOption& WithAvailabilityStatus(DashboardBehavior value) { SetAvailabilityStatus(value); return *this;}
    ///@}
  private:

    DashboardBehavior m_availabilityStatus{DashboardBehavior::NOT_SET};
    bool m_availabilityStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
