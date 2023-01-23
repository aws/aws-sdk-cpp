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
    AWS_QUICKSIGHT_API DataLabelOptions();
    AWS_QUICKSIGHT_API DataLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the visibility of the data labels.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>Determines the visibility of the data labels.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>Determines the visibility of the data labels.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>Determines the visibility of the data labels.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>Determines the visibility of the data labels.</p>
     */
    inline DataLabelOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>Determines the visibility of the data labels.</p>
     */
    inline DataLabelOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>Determines the visibility of the category field labels.</p>
     */
    inline const Visibility& GetCategoryLabelVisibility() const{ return m_categoryLabelVisibility; }

    /**
     * <p>Determines the visibility of the category field labels.</p>
     */
    inline bool CategoryLabelVisibilityHasBeenSet() const { return m_categoryLabelVisibilityHasBeenSet; }

    /**
     * <p>Determines the visibility of the category field labels.</p>
     */
    inline void SetCategoryLabelVisibility(const Visibility& value) { m_categoryLabelVisibilityHasBeenSet = true; m_categoryLabelVisibility = value; }

    /**
     * <p>Determines the visibility of the category field labels.</p>
     */
    inline void SetCategoryLabelVisibility(Visibility&& value) { m_categoryLabelVisibilityHasBeenSet = true; m_categoryLabelVisibility = std::move(value); }

    /**
     * <p>Determines the visibility of the category field labels.</p>
     */
    inline DataLabelOptions& WithCategoryLabelVisibility(const Visibility& value) { SetCategoryLabelVisibility(value); return *this;}

    /**
     * <p>Determines the visibility of the category field labels.</p>
     */
    inline DataLabelOptions& WithCategoryLabelVisibility(Visibility&& value) { SetCategoryLabelVisibility(std::move(value)); return *this;}


    /**
     * <p>Determines the visibility of the measure field labels.</p>
     */
    inline const Visibility& GetMeasureLabelVisibility() const{ return m_measureLabelVisibility; }

    /**
     * <p>Determines the visibility of the measure field labels.</p>
     */
    inline bool MeasureLabelVisibilityHasBeenSet() const { return m_measureLabelVisibilityHasBeenSet; }

    /**
     * <p>Determines the visibility of the measure field labels.</p>
     */
    inline void SetMeasureLabelVisibility(const Visibility& value) { m_measureLabelVisibilityHasBeenSet = true; m_measureLabelVisibility = value; }

    /**
     * <p>Determines the visibility of the measure field labels.</p>
     */
    inline void SetMeasureLabelVisibility(Visibility&& value) { m_measureLabelVisibilityHasBeenSet = true; m_measureLabelVisibility = std::move(value); }

    /**
     * <p>Determines the visibility of the measure field labels.</p>
     */
    inline DataLabelOptions& WithMeasureLabelVisibility(const Visibility& value) { SetMeasureLabelVisibility(value); return *this;}

    /**
     * <p>Determines the visibility of the measure field labels.</p>
     */
    inline DataLabelOptions& WithMeasureLabelVisibility(Visibility&& value) { SetMeasureLabelVisibility(std::move(value)); return *this;}


    /**
     * <p>The option that determines the data label type.</p>
     */
    inline const Aws::Vector<DataLabelType>& GetDataLabelTypes() const{ return m_dataLabelTypes; }

    /**
     * <p>The option that determines the data label type.</p>
     */
    inline bool DataLabelTypesHasBeenSet() const { return m_dataLabelTypesHasBeenSet; }

    /**
     * <p>The option that determines the data label type.</p>
     */
    inline void SetDataLabelTypes(const Aws::Vector<DataLabelType>& value) { m_dataLabelTypesHasBeenSet = true; m_dataLabelTypes = value; }

    /**
     * <p>The option that determines the data label type.</p>
     */
    inline void SetDataLabelTypes(Aws::Vector<DataLabelType>&& value) { m_dataLabelTypesHasBeenSet = true; m_dataLabelTypes = std::move(value); }

    /**
     * <p>The option that determines the data label type.</p>
     */
    inline DataLabelOptions& WithDataLabelTypes(const Aws::Vector<DataLabelType>& value) { SetDataLabelTypes(value); return *this;}

    /**
     * <p>The option that determines the data label type.</p>
     */
    inline DataLabelOptions& WithDataLabelTypes(Aws::Vector<DataLabelType>&& value) { SetDataLabelTypes(std::move(value)); return *this;}

    /**
     * <p>The option that determines the data label type.</p>
     */
    inline DataLabelOptions& AddDataLabelTypes(const DataLabelType& value) { m_dataLabelTypesHasBeenSet = true; m_dataLabelTypes.push_back(value); return *this; }

    /**
     * <p>The option that determines the data label type.</p>
     */
    inline DataLabelOptions& AddDataLabelTypes(DataLabelType&& value) { m_dataLabelTypesHasBeenSet = true; m_dataLabelTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Determines the position of the data labels.</p>
     */
    inline const DataLabelPosition& GetPosition() const{ return m_position; }

    /**
     * <p>Determines the position of the data labels.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>Determines the position of the data labels.</p>
     */
    inline void SetPosition(const DataLabelPosition& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>Determines the position of the data labels.</p>
     */
    inline void SetPosition(DataLabelPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>Determines the position of the data labels.</p>
     */
    inline DataLabelOptions& WithPosition(const DataLabelPosition& value) { SetPosition(value); return *this;}

    /**
     * <p>Determines the position of the data labels.</p>
     */
    inline DataLabelOptions& WithPosition(DataLabelPosition&& value) { SetPosition(std::move(value)); return *this;}


    /**
     * <p>Determines the content of the data labels.</p>
     */
    inline const DataLabelContent& GetLabelContent() const{ return m_labelContent; }

    /**
     * <p>Determines the content of the data labels.</p>
     */
    inline bool LabelContentHasBeenSet() const { return m_labelContentHasBeenSet; }

    /**
     * <p>Determines the content of the data labels.</p>
     */
    inline void SetLabelContent(const DataLabelContent& value) { m_labelContentHasBeenSet = true; m_labelContent = value; }

    /**
     * <p>Determines the content of the data labels.</p>
     */
    inline void SetLabelContent(DataLabelContent&& value) { m_labelContentHasBeenSet = true; m_labelContent = std::move(value); }

    /**
     * <p>Determines the content of the data labels.</p>
     */
    inline DataLabelOptions& WithLabelContent(const DataLabelContent& value) { SetLabelContent(value); return *this;}

    /**
     * <p>Determines the content of the data labels.</p>
     */
    inline DataLabelOptions& WithLabelContent(DataLabelContent&& value) { SetLabelContent(std::move(value)); return *this;}


    /**
     * <p>Determines the font configuration of the data labels.</p>
     */
    inline const FontConfiguration& GetLabelFontConfiguration() const{ return m_labelFontConfiguration; }

    /**
     * <p>Determines the font configuration of the data labels.</p>
     */
    inline bool LabelFontConfigurationHasBeenSet() const { return m_labelFontConfigurationHasBeenSet; }

    /**
     * <p>Determines the font configuration of the data labels.</p>
     */
    inline void SetLabelFontConfiguration(const FontConfiguration& value) { m_labelFontConfigurationHasBeenSet = true; m_labelFontConfiguration = value; }

    /**
     * <p>Determines the font configuration of the data labels.</p>
     */
    inline void SetLabelFontConfiguration(FontConfiguration&& value) { m_labelFontConfigurationHasBeenSet = true; m_labelFontConfiguration = std::move(value); }

    /**
     * <p>Determines the font configuration of the data labels.</p>
     */
    inline DataLabelOptions& WithLabelFontConfiguration(const FontConfiguration& value) { SetLabelFontConfiguration(value); return *this;}

    /**
     * <p>Determines the font configuration of the data labels.</p>
     */
    inline DataLabelOptions& WithLabelFontConfiguration(FontConfiguration&& value) { SetLabelFontConfiguration(std::move(value)); return *this;}


    /**
     * <p>Determines the color of the data labels.</p>
     */
    inline const Aws::String& GetLabelColor() const{ return m_labelColor; }

    /**
     * <p>Determines the color of the data labels.</p>
     */
    inline bool LabelColorHasBeenSet() const { return m_labelColorHasBeenSet; }

    /**
     * <p>Determines the color of the data labels.</p>
     */
    inline void SetLabelColor(const Aws::String& value) { m_labelColorHasBeenSet = true; m_labelColor = value; }

    /**
     * <p>Determines the color of the data labels.</p>
     */
    inline void SetLabelColor(Aws::String&& value) { m_labelColorHasBeenSet = true; m_labelColor = std::move(value); }

    /**
     * <p>Determines the color of the data labels.</p>
     */
    inline void SetLabelColor(const char* value) { m_labelColorHasBeenSet = true; m_labelColor.assign(value); }

    /**
     * <p>Determines the color of the data labels.</p>
     */
    inline DataLabelOptions& WithLabelColor(const Aws::String& value) { SetLabelColor(value); return *this;}

    /**
     * <p>Determines the color of the data labels.</p>
     */
    inline DataLabelOptions& WithLabelColor(Aws::String&& value) { SetLabelColor(std::move(value)); return *this;}

    /**
     * <p>Determines the color of the data labels.</p>
     */
    inline DataLabelOptions& WithLabelColor(const char* value) { SetLabelColor(value); return *this;}


    /**
     * <p>Determines whether overlap is enabled or disabled for the data labels.</p>
     */
    inline const DataLabelOverlap& GetOverlap() const{ return m_overlap; }

    /**
     * <p>Determines whether overlap is enabled or disabled for the data labels.</p>
     */
    inline bool OverlapHasBeenSet() const { return m_overlapHasBeenSet; }

    /**
     * <p>Determines whether overlap is enabled or disabled for the data labels.</p>
     */
    inline void SetOverlap(const DataLabelOverlap& value) { m_overlapHasBeenSet = true; m_overlap = value; }

    /**
     * <p>Determines whether overlap is enabled or disabled for the data labels.</p>
     */
    inline void SetOverlap(DataLabelOverlap&& value) { m_overlapHasBeenSet = true; m_overlap = std::move(value); }

    /**
     * <p>Determines whether overlap is enabled or disabled for the data labels.</p>
     */
    inline DataLabelOptions& WithOverlap(const DataLabelOverlap& value) { SetOverlap(value); return *this;}

    /**
     * <p>Determines whether overlap is enabled or disabled for the data labels.</p>
     */
    inline DataLabelOptions& WithOverlap(DataLabelOverlap&& value) { SetOverlap(std::move(value)); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    Visibility m_categoryLabelVisibility;
    bool m_categoryLabelVisibilityHasBeenSet = false;

    Visibility m_measureLabelVisibility;
    bool m_measureLabelVisibilityHasBeenSet = false;

    Aws::Vector<DataLabelType> m_dataLabelTypes;
    bool m_dataLabelTypesHasBeenSet = false;

    DataLabelPosition m_position;
    bool m_positionHasBeenSet = false;

    DataLabelContent m_labelContent;
    bool m_labelContentHasBeenSet = false;

    FontConfiguration m_labelFontConfiguration;
    bool m_labelFontConfigurationHasBeenSet = false;

    Aws::String m_labelColor;
    bool m_labelColorHasBeenSet = false;

    DataLabelOverlap m_overlap;
    bool m_overlapHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
