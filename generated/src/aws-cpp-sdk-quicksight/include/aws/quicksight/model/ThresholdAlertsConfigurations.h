/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The threshold alerts configuration for an embedded QuickSight
   * dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ThresholdAlertsConfigurations">AWS
   * API Reference</a></p>
   */
  class ThresholdAlertsConfigurations
  {
  public:
    AWS_QUICKSIGHT_API ThresholdAlertsConfigurations() = default;
    AWS_QUICKSIGHT_API ThresholdAlertsConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ThresholdAlertsConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The threshold alerts configuration for an embedded QuickSight dashboard.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ThresholdAlertsConfigurations& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
