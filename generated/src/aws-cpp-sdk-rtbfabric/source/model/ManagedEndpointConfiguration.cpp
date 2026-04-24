/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/ManagedEndpointConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

ManagedEndpointConfiguration::ManagedEndpointConfiguration(JsonView jsonValue) { *this = jsonValue; }

ManagedEndpointConfiguration& ManagedEndpointConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autoScalingGroups")) {
    m_autoScalingGroups = jsonValue.GetObject("autoScalingGroups");
    m_autoScalingGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eksEndpoints")) {
    m_eksEndpoints = jsonValue.GetObject("eksEndpoints");
    m_eksEndpointsHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedEndpointConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_autoScalingGroupsHasBeenSet) {
    payload.WithObject("autoScalingGroups", m_autoScalingGroups.Jsonize());
  }

  if (m_eksEndpointsHasBeenSet) {
    payload.WithObject("eksEndpoints", m_eksEndpoints.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
