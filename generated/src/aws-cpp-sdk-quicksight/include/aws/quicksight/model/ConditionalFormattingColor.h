/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConditionalFormattingSolidColor.h>
#include <aws/quicksight/model/ConditionalFormattingGradientColor.h>
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
   * <p>The formatting configuration for the color.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ConditionalFormattingColor">AWS
   * API Reference</a></p>
   */
  class ConditionalFormattingColor
  {
  public:
    AWS_QUICKSIGHT_API ConditionalFormattingColor() = default;
    AWS_QUICKSIGHT_API ConditionalFormattingColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConditionalFormattingColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Formatting configuration for solid color.</p>
     */
    inline const ConditionalFormattingSolidColor& GetSolid() const { return m_solid; }
    inline bool SolidHasBeenSet() const { return m_solidHasBeenSet; }
    template<typename SolidT = ConditionalFormattingSolidColor>
    void SetSolid(SolidT&& value) { m_solidHasBeenSet = true; m_solid = std::forward<SolidT>(value); }
    template<typename SolidT = ConditionalFormattingSolidColor>
    ConditionalFormattingColor& WithSolid(SolidT&& value) { SetSolid(std::forward<SolidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Formatting configuration for gradient color.</p>
     */
    inline const ConditionalFormattingGradientColor& GetGradient() const { return m_gradient; }
    inline bool GradientHasBeenSet() const { return m_gradientHasBeenSet; }
    template<typename GradientT = ConditionalFormattingGradientColor>
    void SetGradient(GradientT&& value) { m_gradientHasBeenSet = true; m_gradient = std::forward<GradientT>(value); }
    template<typename GradientT = ConditionalFormattingGradientColor>
    ConditionalFormattingColor& WithGradient(GradientT&& value) { SetGradient(std::forward<GradientT>(value)); return *this;}
    ///@}
  private:

    ConditionalFormattingSolidColor m_solid;
    bool m_solidHasBeenSet = false;

    ConditionalFormattingGradientColor m_gradient;
    bool m_gradientHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
