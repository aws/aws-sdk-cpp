/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/DestinationEndpointRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

DestinationEndpointRouterInputConfiguration::DestinationEndpointRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

DestinationEndpointRouterInputConfiguration& DestinationEndpointRouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpointLifecycleManagement")) {
    m_endpointLifecycleManagement =
        EndpointLifecycleMapper::GetEndpointLifecycleForName(jsonValue.GetString("endpointLifecycleManagement"));
    m_endpointLifecycleManagementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceTransitDecryptionType")) {
    m_sourceTransitDecryptionType =
        EndpointEncryptionTypeMapper::GetEndpointEncryptionTypeForName(jsonValue.GetString("sourceTransitDecryptionType"));
    m_sourceTransitDecryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceTransitDecryption")) {
    m_sourceTransitDecryption = jsonValue.GetObject("sourceTransitDecryption");
    m_sourceTransitDecryptionHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationEndpointRouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_endpointLifecycleManagementHasBeenSet) {
    payload.WithString("endpointLifecycleManagement", EndpointLifecycleMapper::GetNameForEndpointLifecycle(m_endpointLifecycleManagement));
  }

  if (m_sourceTransitDecryptionTypeHasBeenSet) {
    payload.WithString("sourceTransitDecryptionType",
                       EndpointEncryptionTypeMapper::GetNameForEndpointEncryptionType(m_sourceTransitDecryptionType));
  }

  if (m_sourceTransitDecryptionHasBeenSet) {
    payload.WithObject("sourceTransitDecryption", m_sourceTransitDecryption.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
