/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WidgetStatus.h>
#include <aws/quicksight/model/ReferenceLineDataConfiguration.h>
#include <aws/quicksight/model/ReferenceLineStyleConfiguration.h>
#include <aws/quicksight/model/ReferenceLineLabelConfiguration.h>
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
   * <p>The reference line visual display options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLine">AWS
   * API Reference</a></p>
   */
  class ReferenceLine
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLine() = default;
    AWS_QUICKSIGHT_API ReferenceLine(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLine& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the reference line. Choose one of the following options:</p>
     * <ul> <li> <p> <code>ENABLE</code> </p> </li> <li> <p> <code>DISABLE</code> </p>
     * </li> </ul>
     */
    inline WidgetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WidgetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReferenceLine& WithStatus(WidgetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data configuration of the reference line.</p>
     */
    inline const ReferenceLineDataConfiguration& GetDataConfiguration() const { return m_dataConfiguration; }
    inline bool DataConfigurationHasBeenSet() const { return m_dataConfigurationHasBeenSet; }
    template<typename DataConfigurationT = ReferenceLineDataConfiguration>
    void SetDataConfiguration(DataConfigurationT&& value) { m_dataConfigurationHasBeenSet = true; m_dataConfiguration = std::forward<DataConfigurationT>(value); }
    template<typename DataConfigurationT = ReferenceLineDataConfiguration>
    ReferenceLine& WithDataConfiguration(DataConfigurationT&& value) { SetDataConfiguration(std::forward<DataConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The style configuration of the reference line.</p>
     */
    inline const ReferenceLineStyleConfiguration& GetStyleConfiguration() const { return m_styleConfiguration; }
    inline bool StyleConfigurationHasBeenSet() const { return m_styleConfigurationHasBeenSet; }
    template<typename StyleConfigurationT = ReferenceLineStyleConfiguration>
    void SetStyleConfiguration(StyleConfigurationT&& value) { m_styleConfigurationHasBeenSet = true; m_styleConfiguration = std::forward<StyleConfigurationT>(value); }
    template<typename StyleConfigurationT = ReferenceLineStyleConfiguration>
    ReferenceLine& WithStyleConfiguration(StyleConfigurationT&& value) { SetStyleConfiguration(std::forward<StyleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label configuration of the reference line.</p>
     */
    inline const ReferenceLineLabelConfiguration& GetLabelConfiguration() const { return m_labelConfiguration; }
    inline bool LabelConfigurationHasBeenSet() const { return m_labelConfigurationHasBeenSet; }
    template<typename LabelConfigurationT = ReferenceLineLabelConfiguration>
    void SetLabelConfiguration(LabelConfigurationT&& value) { m_labelConfigurationHasBeenSet = true; m_labelConfiguration = std::forward<LabelConfigurationT>(value); }
    template<typename LabelConfigurationT = ReferenceLineLabelConfiguration>
    ReferenceLine& WithLabelConfiguration(LabelConfigurationT&& value) { SetLabelConfiguration(std::forward<LabelConfigurationT>(value)); return *this;}
    ///@}
  private:

    WidgetStatus m_status{WidgetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ReferenceLineDataConfiguration m_dataConfiguration;
    bool m_dataConfigurationHasBeenSet = false;

    ReferenceLineStyleConfiguration m_styleConfiguration;
    bool m_styleConfigurationHasBeenSet = false;

    ReferenceLineLabelConfiguration m_labelConfiguration;
    bool m_labelConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
