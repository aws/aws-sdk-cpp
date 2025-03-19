/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/ShortFormatText.h>
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
   * <p>The title label options for a visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualTitleLabelOptions">AWS
   * API Reference</a></p>
   */
  class VisualTitleLabelOptions
  {
  public:
    AWS_QUICKSIGHT_API VisualTitleLabelOptions() = default;
    AWS_QUICKSIGHT_API VisualTitleLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualTitleLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility of the title label.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline VisualTitleLabelOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short text format of the title label, such as plain text or rich
     * text.</p>
     */
    inline const ShortFormatText& GetFormatText() const { return m_formatText; }
    inline bool FormatTextHasBeenSet() const { return m_formatTextHasBeenSet; }
    template<typename FormatTextT = ShortFormatText>
    void SetFormatText(FormatTextT&& value) { m_formatTextHasBeenSet = true; m_formatText = std::forward<FormatTextT>(value); }
    template<typename FormatTextT = ShortFormatText>
    VisualTitleLabelOptions& WithFormatText(FormatTextT&& value) { SetFormatText(std::forward<FormatTextT>(value)); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    ShortFormatText m_formatText;
    bool m_formatTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
