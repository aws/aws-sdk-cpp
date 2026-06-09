/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AutonomousDatabasePeerSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AutonomousDatabasePeerSummary::AutonomousDatabasePeerSummary(JsonView jsonValue) { *this = jsonValue; }

AutonomousDatabasePeerSummary& AutonomousDatabasePeerSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autonomousDatabaseId")) {
    m_autonomousDatabaseId = jsonValue.GetString("autonomousDatabaseId");
    m_autonomousDatabaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autonomousDatabaseArn")) {
    m_autonomousDatabaseArn = jsonValue.GetString("autonomousDatabaseArn");
    m_autonomousDatabaseArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ocid")) {
    m_ocid = jsonValue.GetString("ocid");
    m_ocidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue AutonomousDatabasePeerSummary::Jsonize() const {
  JsonValue payload;

  if (m_autonomousDatabaseIdHasBeenSet) {
    payload.WithString("autonomousDatabaseId", m_autonomousDatabaseId);
  }

  if (m_autonomousDatabaseArnHasBeenSet) {
    payload.WithString("autonomousDatabaseArn", m_autonomousDatabaseArn);
  }

  if (m_ocidHasBeenSet) {
    payload.WithString("ocid", m_ocid);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
