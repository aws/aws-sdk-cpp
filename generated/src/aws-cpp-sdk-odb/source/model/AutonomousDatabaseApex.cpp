/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AutonomousDatabaseApex.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AutonomousDatabaseApex::AutonomousDatabaseApex(JsonView jsonValue) { *this = jsonValue; }

AutonomousDatabaseApex& AutonomousDatabaseApex::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apexVersion")) {
    m_apexVersion = jsonValue.GetString("apexVersion");
    m_apexVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ordsVersion")) {
    m_ordsVersion = jsonValue.GetString("ordsVersion");
    m_ordsVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue AutonomousDatabaseApex::Jsonize() const {
  JsonValue payload;

  if (m_apexVersionHasBeenSet) {
    payload.WithString("apexVersion", m_apexVersion);
  }

  if (m_ordsVersionHasBeenSet) {
    payload.WithString("ordsVersion", m_ordsVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
