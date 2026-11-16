/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/PillarCount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

PillarCount::PillarCount(JsonView jsonValue) { *this = jsonValue; }

PillarCount& PillarCount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pillar")) {
    m_pillar = PillarMapper::GetPillarForName(jsonValue.GetString("pillar"));
    m_pillarHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInt64("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue PillarCount::Jsonize() const {
  JsonValue payload;

  if (m_pillarHasBeenSet) {
    payload.WithString("pillar", PillarMapper::GetNameForPillar(m_pillar));
  }

  if (m_countHasBeenSet) {
    payload.WithInt64("count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
