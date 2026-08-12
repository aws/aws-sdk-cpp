/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/LabelActionMapping.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

LabelActionMapping::LabelActionMapping(JsonView jsonValue) { *this = jsonValue; }

LabelActionMapping& LabelActionMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LabelId")) {
    m_labelId = jsonValue.GetString("LabelId");
    m_labelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LabelName")) {
    m_labelName = jsonValue.GetString("LabelName");
    m_labelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Action")) {
    m_action = DlpActionMapper::GetDlpActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue LabelActionMapping::Jsonize() const {
  JsonValue payload;

  if (m_labelIdHasBeenSet) {
    payload.WithString("LabelId", m_labelId);
  }

  if (m_labelNameHasBeenSet) {
    payload.WithString("LabelName", m_labelName);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("Action", DlpActionMapper::GetNameForDlpAction(m_action));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
