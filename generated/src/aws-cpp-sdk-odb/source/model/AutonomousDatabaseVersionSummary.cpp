/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AutonomousDatabaseVersionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AutonomousDatabaseVersionSummary::AutonomousDatabaseVersionSummary(JsonView jsonValue) { *this = jsonValue; }

AutonomousDatabaseVersionSummary& AutonomousDatabaseVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dbWorkload")) {
    m_dbWorkload = DbWorkloadMapper::GetDbWorkloadForName(jsonValue.GetString("dbWorkload"));
    m_dbWorkloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("details")) {
    m_details = jsonValue.GetString("details");
    m_detailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue AutonomousDatabaseVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_dbWorkloadHasBeenSet) {
    payload.WithString("dbWorkload", DbWorkloadMapper::GetNameForDbWorkload(m_dbWorkload));
  }

  if (m_detailsHasBeenSet) {
    payload.WithString("details", m_details);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
