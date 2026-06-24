/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/CrossRegionDataGuardConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

CrossRegionDataGuardConfiguration::CrossRegionDataGuardConfiguration(JsonView jsonValue) { *this = jsonValue; }

CrossRegionDataGuardConfiguration& CrossRegionDataGuardConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceAutonomousDatabaseArn")) {
    m_sourceAutonomousDatabaseArn = jsonValue.GetString("sourceAutonomousDatabaseArn");
    m_sourceAutonomousDatabaseArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossRegionDataGuardConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceAutonomousDatabaseArnHasBeenSet) {
    payload.WithString("sourceAutonomousDatabaseArn", m_sourceAutonomousDatabaseArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
