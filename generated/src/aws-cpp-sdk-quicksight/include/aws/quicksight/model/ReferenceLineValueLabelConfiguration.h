/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ReferenceLineValueLabelRelativePosition.h>
#include <aws/quicksight/model/NumericFormatConfiguration.h>
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
   * <p>The value label configuration of the label in a reference line.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLineValueLabelConfiguration">AWS
   * API Reference</a></p>
   */
  class ReferenceLineValueLabelConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLineValueLabelConfiguration() = default;
    AWS_QUICKSIGHT_API ReferenceLineValueLabelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLineValueLabelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The relative position of the value label. Choose one of the following
     * options:</p> <ul> <li> <p> <code>BEFORE_CUSTOM_LABEL</code> </p> </li> <li> <p>
     * <code>AFTER_CUSTOM_LABEL</code> </p> </li> </ul>
     */
    inline ReferenceLineValueLabelRelativePosition GetRelativePosition() const { return m_relativePosition; }
    inline bool RelativePositionHasBeenSet() const { return m_relativePositionHasBeenSet; }
    inline void SetRelativePosition(ReferenceLineValueLabelRelativePosition value) { m_relativePositionHasBeenSet = true; m_relativePosition = value; }
    inline ReferenceLineValueLabelConfiguration& WithRelativePosition(ReferenceLineValueLabelRelativePosition value) { SetRelativePosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format configuration of the value label.</p>
     */
    inline const NumericFormatConfiguration& GetFormatConfiguration() const { return m_formatConfiguration; }
    inline bool FormatConfigurationHasBeenSet() const { return m_formatConfigurationHasBeenSet; }
    template<typename FormatConfigurationT = NumericFormatConfiguration>
    void SetFormatConfiguration(FormatConfigurationT&& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = std::forward<FormatConfigurationT>(value); }
    template<typename FormatConfigurationT = NumericFormatConfiguration>
    ReferenceLineValueLabelConfiguration& WithFormatConfiguration(FormatConfigurationT&& value) { SetFormatConfiguration(std::forward<FormatConfigurationT>(value)); return *this;}
    ///@}
  private:

    ReferenceLineValueLabelRelativePosition m_relativePosition{ReferenceLineValueLabelRelativePosition::NOT_SET};
    bool m_relativePositionHasBeenSet = false;

    NumericFormatConfiguration m_formatConfiguration;
    bool m_formatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
