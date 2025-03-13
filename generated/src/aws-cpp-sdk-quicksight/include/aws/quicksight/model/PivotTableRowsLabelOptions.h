/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The options for the label thta is located above the row headers. This option
   * is only applicable when <code>RowsLayout</code> is set to
   * <code>HIERARCHY</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableRowsLabelOptions">AWS
   * API Reference</a></p>
   */
  class PivotTableRowsLabelOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotTableRowsLabelOptions() = default;
    AWS_QUICKSIGHT_API PivotTableRowsLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableRowsLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility of the rows label.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline PivotTableRowsLabelOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom label string for the rows label.</p>
     */
    inline const Aws::String& GetCustomLabel() const { return m_customLabel; }
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }
    template<typename CustomLabelT = Aws::String>
    void SetCustomLabel(CustomLabelT&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::forward<CustomLabelT>(value); }
    template<typename CustomLabelT = Aws::String>
    PivotTableRowsLabelOptions& WithCustomLabel(CustomLabelT&& value) { SetCustomLabel(std::forward<CustomLabelT>(value)); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
