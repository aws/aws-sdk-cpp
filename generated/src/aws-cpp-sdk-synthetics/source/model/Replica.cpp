/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/synthetics/model/Replica.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Synthetics {
namespace Model {

Replica::Replica(JsonView jsonValue) { *this = jsonValue; }

Replica& Replica::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Location")) {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReplicationStatus")) {
    m_replicationStatus = jsonValue.GetObject("ReplicationStatus");
    m_replicationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CanaryState")) {
    m_canaryState = CanaryStateMapper::GetCanaryStateForName(jsonValue.GetString("CanaryState"));
    m_canaryStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModified")) {
    m_lastModified = jsonValue.GetDouble("LastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VpcConfig")) {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue Replica::Jsonize() const {
  JsonValue payload;

  if (m_locationHasBeenSet) {
    payload.WithString("Location", m_location);
  }

  if (m_replicationStatusHasBeenSet) {
    payload.WithObject("ReplicationStatus", m_replicationStatus.Jsonize());
  }

  if (m_canaryStateHasBeenSet) {
    payload.WithString("CanaryState", CanaryStateMapper::GetNameForCanaryState(m_canaryState));
  }

  if (m_lastModifiedHasBeenSet) {
    payload.WithDouble("LastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
