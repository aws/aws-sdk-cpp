/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/MigrationCompactionSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

MigrationCompactionSettings::MigrationCompactionSettings(JsonView jsonValue) { *this = jsonValue; }

MigrationCompactionSettings& MigrationCompactionSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetFileSizeMB")) {
    m_targetFileSizeMB = jsonValue.GetInteger("targetFileSizeMB");
    m_targetFileSizeMBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("strategy")) {
    m_strategy = IcebergCompactionStrategyMapper::GetIcebergCompactionStrategyForName(jsonValue.GetString("strategy"));
    m_strategyHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationCompactionSettings::Jsonize() const {
  JsonValue payload;

  if (m_targetFileSizeMBHasBeenSet) {
    payload.WithInteger("targetFileSizeMB", m_targetFileSizeMB);
  }

  if (m_strategyHasBeenSet) {
    payload.WithString("strategy", IcebergCompactionStrategyMapper::GetNameForIcebergCompactionStrategy(m_strategy));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
