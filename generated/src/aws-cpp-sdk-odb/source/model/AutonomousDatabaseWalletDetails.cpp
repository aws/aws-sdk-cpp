/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AutonomousDatabaseWalletDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AutonomousDatabaseWalletDetails::AutonomousDatabaseWalletDetails(JsonView jsonValue) { *this = jsonValue; }

AutonomousDatabaseWalletDetails& AutonomousDatabaseWalletDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = AutonomousDatabaseWalletStatusMapper::GetAutonomousDatabaseWalletStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeRotated")) {
    m_timeRotated = jsonValue.GetString("timeRotated");
    m_timeRotatedHasBeenSet = true;
  }
  return *this;
}

JsonValue AutonomousDatabaseWalletDetails::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", AutonomousDatabaseWalletStatusMapper::GetNameForAutonomousDatabaseWalletStatus(m_status));
  }

  if (m_timeRotatedHasBeenSet) {
    payload.WithString("timeRotated", m_timeRotated.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
