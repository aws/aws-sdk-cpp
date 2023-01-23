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
    AWS_QUICKSIGHT_API PanelTitleOptions();
    AWS_QUICKSIGHT_API PanelTitleOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PanelTitleOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether or not panel titles are displayed.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>Determines whether or not panel titles are displayed.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>Determines whether or not panel titles are displayed.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>Determines whether or not panel titles are displayed.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>Determines whether or not panel titles are displayed.</p>
     */
    inline PanelTitleOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>Determines whether or not panel titles are displayed.</p>
     */
    inline PanelTitleOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    
    inline const FontConfiguration& GetFontConfiguration() const{ return m_fontConfiguration; }

    
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }

    
    inline void SetFontConfiguration(const FontConfiguration& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = value; }

    
    inline void SetFontConfiguration(FontConfiguration&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::move(value); }

    
    inline PanelTitleOptions& WithFontConfiguration(const FontConfiguration& value) { SetFontConfiguration(value); return *this;}

    
    inline PanelTitleOptions& WithFontConfiguration(FontConfiguration&& value) { SetFontConfiguration(std::move(value)); return *this;}


    /**
     * <p>Sets the horizontal text alignment of the title within each panel.</p>
     */
    inline const HorizontalTextAlignment& GetHorizontalTextAlignment() const{ return m_horizontalTextAlignment; }

    /**
     * <p>Sets the horizontal text alignment of the title within each panel.</p>
     */
    inline bool HorizontalTextAlignmentHasBeenSet() const { return m_horizontalTextAlignmentHasBeenSet; }

    /**
     * <p>Sets the horizontal text alignment of the title within each panel.</p>
     */
    inline void SetHorizontalTextAlignment(const HorizontalTextAlignment& value) { m_horizontalTextAlignmentHasBeenSet = true; m_horizontalTextAlignment = value; }

    /**
     * <p>Sets the horizontal text alignment of the title within each panel.</p>
     */
    inline void SetHorizontalTextAlignment(HorizontalTextAlignment&& value) { m_horizontalTextAlignmentHasBeenSet = true; m_horizontalTextAlignment = std::move(value); }

    /**
     * <p>Sets the horizontal text alignment of the title within each panel.</p>
     */
    inline PanelTitleOptions& WithHorizontalTextAlignment(const HorizontalTextAlignment& value) { SetHorizontalTextAlignment(value); return *this;}

    /**
     * <p>Sets the horizontal text alignment of the title within each panel.</p>
     */
    inline PanelTitleOptions& WithHorizontalTextAlignment(HorizontalTextAlignment&& value) { SetHorizontalTextAlignment(std::move(value)); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;

    HorizontalTextAlignment m_horizontalTextAlignment;
    bool m_horizontalTextAlignmentHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
