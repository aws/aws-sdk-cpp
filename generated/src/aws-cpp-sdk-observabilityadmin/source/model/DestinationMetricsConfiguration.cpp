/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/DestinationMetricsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

DestinationMetricsConfiguration::DestinationMetricsConfiguration(JsonView jsonValue) { *this = jsonValue; }

DestinationMetricsConfiguration& DestinationMetricsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BackupConfiguration")) {
    m_backupConfiguration = jsonValue.GetObject("BackupConfiguration");
    m_backupConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationMetricsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_backupConfigurationHasBeenSet) {
    payload.WithObject("BackupConfiguration", m_backupConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
