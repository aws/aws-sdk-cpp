/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/Typography.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

Typography::Typography(JsonView jsonValue) { *this = jsonValue; }

Typography& Typography::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FontFamilies")) {
    Aws::Utils::Array<JsonView> fontFamiliesJsonList = jsonValue.GetArray("FontFamilies");
    for (unsigned fontFamiliesIndex = 0; fontFamiliesIndex < fontFamiliesJsonList.GetLength(); ++fontFamiliesIndex) {
      m_fontFamilies.push_back(fontFamiliesJsonList[fontFamiliesIndex].AsObject());
    }
    m_fontFamiliesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AxisTitleFontConfiguration")) {
    m_axisTitleFontConfiguration = jsonValue.GetObject("AxisTitleFontConfiguration");
    m_axisTitleFontConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AxisLabelFontConfiguration")) {
    m_axisLabelFontConfiguration = jsonValue.GetObject("AxisLabelFontConfiguration");
    m_axisLabelFontConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LegendTitleFontConfiguration")) {
    m_legendTitleFontConfiguration = jsonValue.GetObject("LegendTitleFontConfiguration");
    m_legendTitleFontConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LegendValueFontConfiguration")) {
    m_legendValueFontConfiguration = jsonValue.GetObject("LegendValueFontConfiguration");
    m_legendValueFontConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataLabelFontConfiguration")) {
    m_dataLabelFontConfiguration = jsonValue.GetObject("DataLabelFontConfiguration");
    m_dataLabelFontConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VisualTitleFontConfiguration")) {
    m_visualTitleFontConfiguration = jsonValue.GetObject("VisualTitleFontConfiguration");
    m_visualTitleFontConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VisualSubtitleFontConfiguration")) {
    m_visualSubtitleFontConfiguration = jsonValue.GetObject("VisualSubtitleFontConfiguration");
    m_visualSubtitleFontConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue Typography::Jsonize() const {
  JsonValue payload;

  if (m_fontFamiliesHasBeenSet) {
    Aws::Utils::Array<JsonValue> fontFamiliesJsonList(m_fontFamilies.size());
    for (unsigned fontFamiliesIndex = 0; fontFamiliesIndex < fontFamiliesJsonList.GetLength(); ++fontFamiliesIndex) {
      fontFamiliesJsonList[fontFamiliesIndex].AsObject(m_fontFamilies[fontFamiliesIndex].Jsonize());
    }
    payload.WithArray("FontFamilies", std::move(fontFamiliesJsonList));
  }

  if (m_axisTitleFontConfigurationHasBeenSet) {
    payload.WithObject("AxisTitleFontConfiguration", m_axisTitleFontConfiguration.Jsonize());
  }

  if (m_axisLabelFontConfigurationHasBeenSet) {
    payload.WithObject("AxisLabelFontConfiguration", m_axisLabelFontConfiguration.Jsonize());
  }

  if (m_legendTitleFontConfigurationHasBeenSet) {
    payload.WithObject("LegendTitleFontConfiguration", m_legendTitleFontConfiguration.Jsonize());
  }

  if (m_legendValueFontConfigurationHasBeenSet) {
    payload.WithObject("LegendValueFontConfiguration", m_legendValueFontConfiguration.Jsonize());
  }

  if (m_dataLabelFontConfigurationHasBeenSet) {
    payload.WithObject("DataLabelFontConfiguration", m_dataLabelFontConfiguration.Jsonize());
  }

  if (m_visualTitleFontConfigurationHasBeenSet) {
    payload.WithObject("VisualTitleFontConfiguration", m_visualTitleFontConfiguration.Jsonize());
  }

  if (m_visualSubtitleFontConfigurationHasBeenSet) {
    payload.WithObject("VisualSubtitleFontConfiguration", m_visualSubtitleFontConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
