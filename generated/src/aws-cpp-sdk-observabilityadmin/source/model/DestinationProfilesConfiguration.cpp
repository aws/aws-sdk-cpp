/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/DestinationProfilesConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

DestinationProfilesConfiguration::DestinationProfilesConfiguration(JsonView jsonValue) { *this = jsonValue; }

DestinationProfilesConfiguration& DestinationProfilesConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BackupConfiguration")) {
    m_backupConfiguration = jsonValue.GetObject("BackupConfiguration");
    m_backupConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationProfilesConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_backupConfigurationHasBeenSet) {
    payload.WithObject("BackupConfiguration", m_backupConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
