/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RefreshFailureAlertStatus.h>
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
   * <p>The configuration settings for the email alerts that are sent when a dataset
   * refresh fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RefreshFailureEmailAlert">AWS
   * API Reference</a></p>
   */
  class RefreshFailureEmailAlert
  {
  public:
    AWS_QUICKSIGHT_API RefreshFailureEmailAlert() = default;
    AWS_QUICKSIGHT_API RefreshFailureEmailAlert(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RefreshFailureEmailAlert& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status value that determines if email alerts are sent.</p>
     */
    inline RefreshFailureAlertStatus GetAlertStatus() const { return m_alertStatus; }
    inline bool AlertStatusHasBeenSet() const { return m_alertStatusHasBeenSet; }
    inline void SetAlertStatus(RefreshFailureAlertStatus value) { m_alertStatusHasBeenSet = true; m_alertStatus = value; }
    inline RefreshFailureEmailAlert& WithAlertStatus(RefreshFailureAlertStatus value) { SetAlertStatus(value); return *this;}
    ///@}
  private:

    RefreshFailureAlertStatus m_alertStatus{RefreshFailureAlertStatus::NOT_SET};
    bool m_alertStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
