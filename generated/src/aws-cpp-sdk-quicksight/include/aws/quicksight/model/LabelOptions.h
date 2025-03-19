/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/FontConfiguration.h>
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
   * <p>The share label options for the labels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LabelOptions">AWS
   * API Reference</a></p>
   */
  class LabelOptions
  {
  public:
    AWS_QUICKSIGHT_API LabelOptions() = default;
    AWS_QUICKSIGHT_API LabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether or not the label is visible.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline LabelOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The font configuration of the label.</p>
     */
    inline const FontConfiguration& GetFontConfiguration() const { return m_fontConfiguration; }
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }
    template<typename FontConfigurationT = FontConfiguration>
    void SetFontConfiguration(FontConfigurationT&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::forward<FontConfigurationT>(value); }
    template<typename FontConfigurationT = FontConfiguration>
    LabelOptions& WithFontConfiguration(FontConfigurationT&& value) { SetFontConfiguration(std::forward<FontConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text for the label.</p>
     */
    inline const Aws::String& GetCustomLabel() const { return m_customLabel; }
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }
    template<typename CustomLabelT = Aws::String>
    void SetCustomLabel(CustomLabelT&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::forward<CustomLabelT>(value); }
    template<typename CustomLabelT = Aws::String>
    LabelOptions& WithCustomLabel(CustomLabelT&& value) { SetCustomLabel(std::forward<CustomLabelT>(value)); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
