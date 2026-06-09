/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/CrossRegionDisasterRecoveryConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

CrossRegionDisasterRecoveryConfiguration::CrossRegionDisasterRecoveryConfiguration(JsonView jsonValue) { *this = jsonValue; }

CrossRegionDisasterRecoveryConfiguration& CrossRegionDisasterRecoveryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceAutonomousDatabaseArn")) {
    m_sourceAutonomousDatabaseArn = jsonValue.GetString("sourceAutonomousDatabaseArn");
    m_sourceAutonomousDatabaseArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remoteDisasterRecoveryType")) {
    m_remoteDisasterRecoveryType =
        DisasterRecoveryTypeMapper::GetDisasterRecoveryTypeForName(jsonValue.GetString("remoteDisasterRecoveryType"));
    m_remoteDisasterRecoveryTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isReplicateAutomaticBackups")) {
    m_isReplicateAutomaticBackups = jsonValue.GetBool("isReplicateAutomaticBackups");
    m_isReplicateAutomaticBackupsHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossRegionDisasterRecoveryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceAutonomousDatabaseArnHasBeenSet) {
    payload.WithString("sourceAutonomousDatabaseArn", m_sourceAutonomousDatabaseArn);
  }

  if (m_remoteDisasterRecoveryTypeHasBeenSet) {
    payload.WithString("remoteDisasterRecoveryType",
                       DisasterRecoveryTypeMapper::GetNameForDisasterRecoveryType(m_remoteDisasterRecoveryType));
  }

  if (m_isReplicateAutomaticBackupsHasBeenSet) {
    payload.WithBool("isReplicateAutomaticBackups", m_isReplicateAutomaticBackups);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
