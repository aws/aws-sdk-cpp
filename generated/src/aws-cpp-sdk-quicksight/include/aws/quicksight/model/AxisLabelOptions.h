/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FontConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AxisLabelReferenceOptions.h>
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
   * <p>The label options for a chart axis. You must specify the field that the label
   * is targeted to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisLabelOptions">AWS
   * API Reference</a></p>
   */
  class AxisLabelOptions
  {
  public:
    AWS_QUICKSIGHT_API AxisLabelOptions() = default;
    AWS_QUICKSIGHT_API AxisLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The font configuration of the axis label.</p>
     */
    inline const FontConfiguration& GetFontConfiguration() const { return m_fontConfiguration; }
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }
    template<typename FontConfigurationT = FontConfiguration>
    void SetFontConfiguration(FontConfigurationT&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::forward<FontConfigurationT>(value); }
    template<typename FontConfigurationT = FontConfiguration>
    AxisLabelOptions& WithFontConfiguration(FontConfigurationT&& value) { SetFontConfiguration(std::forward<FontConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text for the axis label.</p>
     */
    inline const Aws::String& GetCustomLabel() const { return m_customLabel; }
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }
    template<typename CustomLabelT = Aws::String>
    void SetCustomLabel(CustomLabelT&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::forward<CustomLabelT>(value); }
    template<typename CustomLabelT = Aws::String>
    AxisLabelOptions& WithCustomLabel(CustomLabelT&& value) { SetCustomLabel(std::forward<CustomLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that indicate which field the label belongs to.</p>
     */
    inline const AxisLabelReferenceOptions& GetApplyTo() const { return m_applyTo; }
    inline bool ApplyToHasBeenSet() const { return m_applyToHasBeenSet; }
    template<typename ApplyToT = AxisLabelReferenceOptions>
    void SetApplyTo(ApplyToT&& value) { m_applyToHasBeenSet = true; m_applyTo = std::forward<ApplyToT>(value); }
    template<typename ApplyToT = AxisLabelReferenceOptions>
    AxisLabelOptions& WithApplyTo(ApplyToT&& value) { SetApplyTo(std::forward<ApplyToT>(value)); return *this;}
    ///@}
  private:

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;

    AxisLabelReferenceOptions m_applyTo;
    bool m_applyToHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
