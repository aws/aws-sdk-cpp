/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The label options of the label that is displayed in the center of a donut
   * chart. This option isn't available for pie charts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DonutCenterOptions">AWS
   * API Reference</a></p>
   */
  class DonutCenterOptions
  {
  public:
    AWS_QUICKSIGHT_API DonutCenterOptions() = default;
    AWS_QUICKSIGHT_API DonutCenterOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DonutCenterOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the visibility of the label in a donut chart. In the QuickSight
     * console, this option is called <code>'Show total'</code>.</p>
     */
    inline Visibility GetLabelVisibility() const { return m_labelVisibility; }
    inline bool LabelVisibilityHasBeenSet() const { return m_labelVisibilityHasBeenSet; }
    inline void SetLabelVisibility(Visibility value) { m_labelVisibilityHasBeenSet = true; m_labelVisibility = value; }
    inline DonutCenterOptions& WithLabelVisibility(Visibility value) { SetLabelVisibility(value); return *this;}
    ///@}
  private:

    Visibility m_labelVisibility{Visibility::NOT_SET};
    bool m_labelVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
