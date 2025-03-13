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
   * <p>The menu options for the interactions of an image.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ImageMenuOption">AWS
   * API Reference</a></p>
   */
  class ImageMenuOption
  {
  public:
    AWS_QUICKSIGHT_API ImageMenuOption() = default;
    AWS_QUICKSIGHT_API ImageMenuOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImageMenuOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The availability status of the image menu. If the value of this property is
     * set to <code>ENABLED</code>, dashboard readers can interact with the image
     * menu.</p>
     */
    inline DashboardBehavior GetAvailabilityStatus() const { return m_availabilityStatus; }
    inline bool AvailabilityStatusHasBeenSet() const { return m_availabilityStatusHasBeenSet; }
    inline void SetAvailabilityStatus(DashboardBehavior value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = value; }
    inline ImageMenuOption& WithAvailabilityStatus(DashboardBehavior value) { SetAvailabilityStatus(value); return *this;}
    ///@}
  private:

    DashboardBehavior m_availabilityStatus{DashboardBehavior::NOT_SET};
    bool m_availabilityStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
