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
   * <p>An ad hoc (one-time) filtering option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AdHocFilteringOption">AWS
   * API Reference</a></p>
   */
  class AdHocFilteringOption
  {
  public:
    AWS_QUICKSIGHT_API AdHocFilteringOption() = default;
    AWS_QUICKSIGHT_API AdHocFilteringOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AdHocFilteringOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Availability status.</p>
     */
    inline DashboardBehavior GetAvailabilityStatus() const { return m_availabilityStatus; }
    inline bool AvailabilityStatusHasBeenSet() const { return m_availabilityStatusHasBeenSet; }
    inline void SetAvailabilityStatus(DashboardBehavior value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = value; }
    inline AdHocFilteringOption& WithAvailabilityStatus(DashboardBehavior value) { SetAvailabilityStatus(value); return *this;}
    ///@}
  private:

    DashboardBehavior m_availabilityStatus{DashboardBehavior::NOT_SET};
    bool m_availabilityStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
