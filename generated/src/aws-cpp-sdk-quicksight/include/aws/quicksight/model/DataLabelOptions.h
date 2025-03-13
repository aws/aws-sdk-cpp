/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DataLabelPosition.h>
#include <aws/quicksight/model/DataLabelContent.h>
#include <aws/quicksight/model/FontConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataLabelOverlap.h>
#include <aws/quicksight/model/DataLabelType.h>
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
   * <p>The options that determine the presentation of the data labels.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataLabelOptions">AWS
   * API Reference</a></p>
   */
  class DataLabelOptions
  {
  public:
    AWS_QUICKSIGHT_API DataLabelOptions() = default;
    AWS_QUICKSIGHT_API DataLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the visibility of the data labels.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline DataLabelOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the visibility of the category field labels.</p>
     */
    inline Visibility GetCategoryLabelVisibility() const { return m_categoryLabelVisibility; }
    inline bool CategoryLabelVisibilityHasBeenSet() const { return m_categoryLabelVisibilityHasBeenSet; }
    inline void SetCategoryLabelVisibility(Visibility value) { m_categoryLabelVisibilityHasBeenSet = true; m_categoryLabelVisibility = value; }
    inline DataLabelOptions& WithCategoryLabelVisibility(Visibility value) { SetCategoryLabelVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the visibility of the measure field labels.</p>
     */
    inline Visibility GetMeasureLabelVisibility() const { return m_measureLabelVisibility; }
    inline bool MeasureLabelVisibilityHasBeenSet() const { return m_measureLabelVisibilityHasBeenSet; }
    inline void SetMeasureLabelVisibility(Visibility value) { m_measureLabelVisibilityHasBeenSet = true; m_measureLabelVisibility = value; }
    inline DataLabelOptions& WithMeasureLabelVisibility(Visibility value) { SetMeasureLabelVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that determines the data label type.</p>
     */
    inline const Aws::Vector<DataLabelType>& GetDataLabelTypes() const { return m_dataLabelTypes; }
    inline bool DataLabelTypesHasBeenSet() const { return m_dataLabelTypesHasBeenSet; }
    template<typename DataLabelTypesT = Aws::Vector<DataLabelType>>
    void SetDataLabelTypes(DataLabelTypesT&& value) { m_dataLabelTypesHasBeenSet = true; m_dataLabelTypes = std::forward<DataLabelTypesT>(value); }
    template<typename DataLabelTypesT = Aws::Vector<DataLabelType>>
    DataLabelOptions& WithDataLabelTypes(DataLabelTypesT&& value) { SetDataLabelTypes(std::forward<DataLabelTypesT>(value)); return *this;}
    template<typename DataLabelTypesT = DataLabelType>
    DataLabelOptions& AddDataLabelTypes(DataLabelTypesT&& value) { m_dataLabelTypesHasBeenSet = true; m_dataLabelTypes.emplace_back(std::forward<DataLabelTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines the position of the data labels.</p>
     */
    inline DataLabelPosition GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(DataLabelPosition value) { m_positionHasBeenSet = true; m_position = value; }
    inline DataLabelOptions& WithPosition(DataLabelPosition value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the content of the data labels.</p>
     */
    inline DataLabelContent GetLabelContent() const { return m_labelContent; }
    inline bool LabelContentHasBeenSet() const { return m_labelContentHasBeenSet; }
    inline void SetLabelContent(DataLabelContent value) { m_labelContentHasBeenSet = true; m_labelContent = value; }
    inline DataLabelOptions& WithLabelContent(DataLabelContent value) { SetLabelContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the font configuration of the data labels.</p>
     */
    inline const FontConfiguration& GetLabelFontConfiguration() const { return m_labelFontConfiguration; }
    inline bool LabelFontConfigurationHasBeenSet() const { return m_labelFontConfigurationHasBeenSet; }
    template<typename LabelFontConfigurationT = FontConfiguration>
    void SetLabelFontConfiguration(LabelFontConfigurationT&& value) { m_labelFontConfigurationHasBeenSet = true; m_labelFontConfiguration = std::forward<LabelFontConfigurationT>(value); }
    template<typename LabelFontConfigurationT = FontConfiguration>
    DataLabelOptions& WithLabelFontConfiguration(LabelFontConfigurationT&& value) { SetLabelFontConfiguration(std::forward<LabelFontConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the color of the data labels.</p>
     */
    inline const Aws::String& GetLabelColor() const { return m_labelColor; }
    inline bool LabelColorHasBeenSet() const { return m_labelColorHasBeenSet; }
    template<typename LabelColorT = Aws::String>
    void SetLabelColor(LabelColorT&& value) { m_labelColorHasBeenSet = true; m_labelColor = std::forward<LabelColorT>(value); }
    template<typename LabelColorT = Aws::String>
    DataLabelOptions& WithLabelColor(LabelColorT&& value) { SetLabelColor(std::forward<LabelColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether overlap is enabled or disabled for the data labels.</p>
     */
    inline DataLabelOverlap GetOverlap() const { return m_overlap; }
    inline bool OverlapHasBeenSet() const { return m_overlapHasBeenSet; }
    inline void SetOverlap(DataLabelOverlap value) { m_overlapHasBeenSet = true; m_overlap = value; }
    inline DataLabelOptions& WithOverlap(DataLabelOverlap value) { SetOverlap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the visibility of the total.</p>
     */
    inline Visibility GetTotalsVisibility() const { return m_totalsVisibility; }
    inline bool TotalsVisibilityHasBeenSet() const { return m_totalsVisibilityHasBeenSet; }
    inline void SetTotalsVisibility(Visibility value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = value; }
    inline DataLabelOptions& WithTotalsVisibility(Visibility value) { SetTotalsVisibility(value); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    Visibility m_categoryLabelVisibility{Visibility::NOT_SET};
    bool m_categoryLabelVisibilityHasBeenSet = false;

    Visibility m_measureLabelVisibility{Visibility::NOT_SET};
    bool m_measureLabelVisibilityHasBeenSet = false;

    Aws::Vector<DataLabelType> m_dataLabelTypes;
    bool m_dataLabelTypesHasBeenSet = false;

    DataLabelPosition m_position{DataLabelPosition::NOT_SET};
    bool m_positionHasBeenSet = false;

    DataLabelContent m_labelContent{DataLabelContent::NOT_SET};
    bool m_labelContentHasBeenSet = false;

    FontConfiguration m_labelFontConfiguration;
    bool m_labelFontConfigurationHasBeenSet = false;

    Aws::String m_labelColor;
    bool m_labelColorHasBeenSet = false;

    DataLabelOverlap m_overlap{DataLabelOverlap::NOT_SET};
    bool m_overlapHasBeenSet = false;

    Visibility m_totalsVisibility{Visibility::NOT_SET};
    bool m_totalsVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
