/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/FontConfiguration.h>
#include <aws/quicksight/model/HorizontalTextAlignment.h>
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
   * <p>The options that determine the title styles for each small multiples
   * panel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PanelTitleOptions">AWS
   * API Reference</a></p>
   */
  class PanelTitleOptions
  {
  public:
    AWS_QUICKSIGHT_API PanelTitleOptions() = default;
    AWS_QUICKSIGHT_API PanelTitleOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PanelTitleOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether or not panel titles are displayed.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline PanelTitleOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    
    inline const FontConfiguration& GetFontConfiguration() const { return m_fontConfiguration; }
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }
    template<typename FontConfigurationT = FontConfiguration>
    void SetFontConfiguration(FontConfigurationT&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::forward<FontConfigurationT>(value); }
    template<typename FontConfigurationT = FontConfiguration>
    PanelTitleOptions& WithFontConfiguration(FontConfigurationT&& value) { SetFontConfiguration(std::forward<FontConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the horizontal text alignment of the title within each panel.</p>
     */
    inline HorizontalTextAlignment GetHorizontalTextAlignment() const { return m_horizontalTextAlignment; }
    inline bool HorizontalTextAlignmentHasBeenSet() const { return m_horizontalTextAlignmentHasBeenSet; }
    inline void SetHorizontalTextAlignment(HorizontalTextAlignment value) { m_horizontalTextAlignmentHasBeenSet = true; m_horizontalTextAlignment = value; }
    inline PanelTitleOptions& WithHorizontalTextAlignment(HorizontalTextAlignment value) { SetHorizontalTextAlignment(value); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;

    HorizontalTextAlignment m_horizontalTextAlignment{HorizontalTextAlignment::NOT_SET};
    bool m_horizontalTextAlignmentHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
