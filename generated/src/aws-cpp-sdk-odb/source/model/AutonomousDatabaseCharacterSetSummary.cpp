/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AutonomousDatabaseCharacterSetSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AutonomousDatabaseCharacterSetSummary::AutonomousDatabaseCharacterSetSummary(JsonView jsonValue) { *this = jsonValue; }

AutonomousDatabaseCharacterSetSummary& AutonomousDatabaseCharacterSetSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("characterSet")) {
    m_characterSet = jsonValue.GetString("characterSet");
    m_characterSetHasBeenSet = true;
  }
  return *this;
}

JsonValue AutonomousDatabaseCharacterSetSummary::Jsonize() const {
  JsonValue payload;

  if (m_characterSetHasBeenSet) {
    payload.WithString("characterSet", m_characterSet);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
