/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationAnalysisResultTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationAnalysisResultTarget::NetworkMigrationAnalysisResultTarget(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationAnalysisResultTarget& NetworkMigrationAnalysisResultTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vpcID")) {
    m_vpcID = jsonValue.GetString("vpcID");
    m_vpcIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetID")) {
    m_subnetID = jsonValue.GetString("subnetID");
    m_subnetIDHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationAnalysisResultTarget::Jsonize() const {
  JsonValue payload;

  if (m_vpcIDHasBeenSet) {
    payload.WithString("vpcID", m_vpcID);
  }

  if (m_subnetIDHasBeenSet) {
    payload.WithString("subnetID", m_subnetID);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
