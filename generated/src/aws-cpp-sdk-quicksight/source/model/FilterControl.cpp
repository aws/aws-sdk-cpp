/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FilterControl.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FilterControl::FilterControl(JsonView jsonValue) { *this = jsonValue; }

FilterControl& FilterControl::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DateTimePicker")) {
    m_dateTimePicker = jsonValue.GetObject("DateTimePicker");
    m_dateTimePickerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("List")) {
    m_list = jsonValue.GetObject("List");
    m_listHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Dropdown")) {
    m_dropdown = jsonValue.GetObject("Dropdown");
    m_dropdownHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextField")) {
    m_textField = jsonValue.GetObject("TextField");
    m_textFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextArea")) {
    m_textArea = jsonValue.GetObject("TextArea");
    m_textAreaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Slider")) {
    m_slider = jsonValue.GetObject("Slider");
    m_sliderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RelativeDateTime")) {
    m_relativeDateTime = jsonValue.GetObject("RelativeDateTime");
    m_relativeDateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CrossSheet")) {
    m_crossSheet = jsonValue.GetObject("CrossSheet");
    m_crossSheetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HierarchyList")) {
    m_hierarchyList = jsonValue.GetObject("HierarchyList");
    m_hierarchyListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HierarchyDropdown")) {
    m_hierarchyDropdown = jsonValue.GetObject("HierarchyDropdown");
    m_hierarchyDropdownHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterControl::Jsonize() const {
  JsonValue payload;

  if (m_dateTimePickerHasBeenSet) {
    payload.WithObject("DateTimePicker", m_dateTimePicker.Jsonize());
  }

  if (m_listHasBeenSet) {
    payload.WithObject("List", m_list.Jsonize());
  }

  if (m_dropdownHasBeenSet) {
    payload.WithObject("Dropdown", m_dropdown.Jsonize());
  }

  if (m_textFieldHasBeenSet) {
    payload.WithObject("TextField", m_textField.Jsonize());
  }

  if (m_textAreaHasBeenSet) {
    payload.WithObject("TextArea", m_textArea.Jsonize());
  }

  if (m_sliderHasBeenSet) {
    payload.WithObject("Slider", m_slider.Jsonize());
  }

  if (m_relativeDateTimeHasBeenSet) {
    payload.WithObject("RelativeDateTime", m_relativeDateTime.Jsonize());
  }

  if (m_crossSheetHasBeenSet) {
    payload.WithObject("CrossSheet", m_crossSheet.Jsonize());
  }

  if (m_hierarchyListHasBeenSet) {
    payload.WithObject("HierarchyList", m_hierarchyList.Jsonize());
  }

  if (m_hierarchyDropdownHasBeenSet) {
    payload.WithObject("HierarchyDropdown", m_hierarchyDropdown.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
