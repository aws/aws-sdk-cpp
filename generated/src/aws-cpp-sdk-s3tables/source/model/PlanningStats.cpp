/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/PlanningStats.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

PlanningStats::PlanningStats(JsonView jsonValue) { *this = jsonValue; }

PlanningStats& PlanningStats::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("objectsScanned")) {
    m_objectsScanned = jsonValue.GetInt64("objectsScanned");
    m_objectsScannedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objectsPlanned")) {
    m_objectsPlanned = jsonValue.GetInt64("objectsPlanned");
    m_objectsPlannedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("partitionCount")) {
    m_partitionCount = jsonValue.GetInt64("partitionCount");
    m_partitionCountHasBeenSet = true;
  }
  return *this;
}

JsonValue PlanningStats::Jsonize() const {
  JsonValue payload;

  if (m_objectsScannedHasBeenSet) {
    payload.WithInt64("objectsScanned", m_objectsScanned);
  }

  if (m_objectsPlannedHasBeenSet) {
    payload.WithInt64("objectsPlanned", m_objectsPlanned);
  }

  if (m_partitionCountHasBeenSet) {
    payload.WithInt64("partitionCount", m_partitionCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
