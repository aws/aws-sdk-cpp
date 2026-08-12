/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/PillarItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

PillarItem::PillarItem(JsonView jsonValue) { *this = jsonValue; }

PillarItem& PillarItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pillar")) {
    m_pillar = PillarMapper::GetPillarForName(jsonValue.GetString("pillar"));
    m_pillarHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ids")) {
    Aws::Utils::Array<JsonView> idsJsonList = jsonValue.GetArray("ids");
    for (unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex) {
      m_ids.push_back(idsJsonList[idsIndex].AsString());
    }
    m_idsHasBeenSet = true;
  }
  return *this;
}

JsonValue PillarItem::Jsonize() const {
  JsonValue payload;

  if (m_pillarHasBeenSet) {
    payload.WithString("pillar", PillarMapper::GetNameForPillar(m_pillar));
  }

  if (m_idsHasBeenSet) {
    Aws::Utils::Array<JsonValue> idsJsonList(m_ids.size());
    for (unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex) {
      idsJsonList[idsIndex].AsString(m_ids[idsIndex]);
    }
    payload.WithArray("ids", std::move(idsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
