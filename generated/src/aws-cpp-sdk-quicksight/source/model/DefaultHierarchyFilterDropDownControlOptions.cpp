/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DefaultHierarchyFilterDropDownControlOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DefaultHierarchyFilterDropDownControlOptions::DefaultHierarchyFilterDropDownControlOptions(JsonView jsonValue) { *this = jsonValue; }

DefaultHierarchyFilterDropDownControlOptions& DefaultHierarchyFilterDropDownControlOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DisplayOptions")) {
    m_displayOptions = jsonValue.GetObject("DisplayOptions");
    m_displayOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = SheetControlListTypeMapper::GetSheetControlListTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CommitMode")) {
    m_commitMode = CommitModeMapper::GetCommitModeForName(jsonValue.GetString("CommitMode"));
    m_commitModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ControlSortConfigurations")) {
    Aws::Utils::Array<JsonView> controlSortConfigurationsJsonList = jsonValue.GetArray("ControlSortConfigurations");
    for (unsigned controlSortConfigurationsIndex = 0; controlSortConfigurationsIndex < controlSortConfigurationsJsonList.GetLength();
         ++controlSortConfigurationsIndex) {
      m_controlSortConfigurations.push_back(controlSortConfigurationsJsonList[controlSortConfigurationsIndex].AsObject());
    }
    m_controlSortConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ControlTitleFormatText")) {
    m_controlTitleFormatText = jsonValue.GetObject("ControlTitleFormatText");
    m_controlTitleFormatTextHasBeenSet = true;
  }
  return *this;
}

JsonValue DefaultHierarchyFilterDropDownControlOptions::Jsonize() const {
  JsonValue payload;

  if (m_displayOptionsHasBeenSet) {
    payload.WithObject("DisplayOptions", m_displayOptions.Jsonize());
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", SheetControlListTypeMapper::GetNameForSheetControlListType(m_type));
  }

  if (m_commitModeHasBeenSet) {
    payload.WithString("CommitMode", CommitModeMapper::GetNameForCommitMode(m_commitMode));
  }

  if (m_controlSortConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> controlSortConfigurationsJsonList(m_controlSortConfigurations.size());
    for (unsigned controlSortConfigurationsIndex = 0; controlSortConfigurationsIndex < controlSortConfigurationsJsonList.GetLength();
         ++controlSortConfigurationsIndex) {
      controlSortConfigurationsJsonList[controlSortConfigurationsIndex].AsObject(
          m_controlSortConfigurations[controlSortConfigurationsIndex].Jsonize());
    }
    payload.WithArray("ControlSortConfigurations", std::move(controlSortConfigurationsJsonList));
  }

  if (m_controlTitleFormatTextHasBeenSet) {
    payload.WithObject("ControlTitleFormatText", m_controlTitleFormatText.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
