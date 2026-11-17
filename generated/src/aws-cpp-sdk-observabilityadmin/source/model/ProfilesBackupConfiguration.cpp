/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/ProfilesBackupConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

ProfilesBackupConfiguration::ProfilesBackupConfiguration(JsonView jsonValue) { *this = jsonValue; }

ProfilesBackupConfiguration& ProfilesBackupConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfilesBackupConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
