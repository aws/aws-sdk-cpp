/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SourceEndpointRouterOutputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SourceEndpointRouterOutputConfiguration::SourceEndpointRouterOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

SourceEndpointRouterOutputConfiguration& SourceEndpointRouterOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpointLifecycleManagement")) {
    m_endpointLifecycleManagement =
        EndpointLifecycleMapper::GetEndpointLifecycleForName(jsonValue.GetString("endpointLifecycleManagement"));
    m_endpointLifecycleManagementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationTransitEncryptionType")) {
    m_destinationTransitEncryptionType =
        EndpointEncryptionTypeMapper::GetEndpointEncryptionTypeForName(jsonValue.GetString("destinationTransitEncryptionType"));
    m_destinationTransitEncryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationTransitEncryption")) {
    m_destinationTransitEncryption = jsonValue.GetObject("destinationTransitEncryption");
    m_destinationTransitEncryptionHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceEndpointRouterOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_endpointLifecycleManagementHasBeenSet) {
    payload.WithString("endpointLifecycleManagement", EndpointLifecycleMapper::GetNameForEndpointLifecycle(m_endpointLifecycleManagement));
  }

  if (m_destinationTransitEncryptionTypeHasBeenSet) {
    payload.WithString("destinationTransitEncryptionType",
                       EndpointEncryptionTypeMapper::GetNameForEndpointEncryptionType(m_destinationTransitEncryptionType));
  }

  if (m_destinationTransitEncryptionHasBeenSet) {
    payload.WithObject("destinationTransitEncryption", m_destinationTransitEncryption.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
