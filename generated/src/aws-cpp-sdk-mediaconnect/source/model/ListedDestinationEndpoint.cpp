/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/ListedDestinationEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

ListedDestinationEndpoint::ListedDestinationEndpoint(JsonView jsonValue) { *this = jsonValue; }

ListedDestinationEndpoint& ListedDestinationEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationType")) {
    m_destinationType = DestinationEndpointTypeMapper::GetDestinationEndpointTypeForName(jsonValue.GetString("destinationType"));
    m_destinationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionName")) {
    m_regionName = jsonValue.GetString("regionName");
    m_regionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZone")) {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZoneId")) {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lifecycleManagement")) {
    m_lifecycleManagement = EndpointLifecycleMapper::GetEndpointLifecycleForName(jsonValue.GetString("lifecycleManagement"));
    m_lifecycleManagementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messageCount")) {
    m_messageCount = jsonValue.GetInteger("messageCount");
    m_messageCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceShareOwnership")) {
    m_resourceShareOwnership =
        ResourceShareOwnershipMapper::GetResourceShareOwnershipForName(jsonValue.GetString("resourceShareOwnership"));
    m_resourceShareOwnershipHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceShareState")) {
    m_resourceShareState = ResourceShareStateMapper::GetResourceShareStateForName(jsonValue.GetString("resourceShareState"));
    m_resourceShareStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registrationState")) {
    m_registrationState = DestinationEndpointRegistrationStateMapper::GetDestinationEndpointRegistrationStateForName(
        jsonValue.GetString("registrationState"));
    m_registrationStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectionState")) {
    m_connectionState =
        DestinationEndpointConnectionStateMapper::GetDestinationEndpointConnectionStateForName(jsonValue.GetString("connectionState"));
    m_connectionStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("decryptionType")) {
    m_decryptionType = EndpointEncryptionTypeMapper::GetEndpointEncryptionTypeForName(jsonValue.GetString("decryptionType"));
    m_decryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectedSource")) {
    m_connectedSource = jsonValue.GetString("connectedSource");
    m_connectedSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedResourceArn")) {
    m_associatedResourceArn = jsonValue.GetString("associatedResourceArn");
    m_associatedResourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ListedDestinationEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_destinationTypeHasBeenSet) {
    payload.WithString("destinationType", DestinationEndpointTypeMapper::GetNameForDestinationEndpointType(m_destinationType));
  }

  if (m_regionNameHasBeenSet) {
    payload.WithString("regionName", m_regionName);
  }

  if (m_availabilityZoneHasBeenSet) {
    payload.WithString("availabilityZone", m_availabilityZone);
  }

  if (m_availabilityZoneIdHasBeenSet) {
    payload.WithString("availabilityZoneId", m_availabilityZoneId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lifecycleManagementHasBeenSet) {
    payload.WithString("lifecycleManagement", EndpointLifecycleMapper::GetNameForEndpointLifecycle(m_lifecycleManagement));
  }

  if (m_messageCountHasBeenSet) {
    payload.WithInteger("messageCount", m_messageCount);
  }

  if (m_resourceShareOwnershipHasBeenSet) {
    payload.WithString("resourceShareOwnership", ResourceShareOwnershipMapper::GetNameForResourceShareOwnership(m_resourceShareOwnership));
  }

  if (m_resourceShareStateHasBeenSet) {
    payload.WithString("resourceShareState", ResourceShareStateMapper::GetNameForResourceShareState(m_resourceShareState));
  }

  if (m_registrationStateHasBeenSet) {
    payload.WithString("registrationState",
                       DestinationEndpointRegistrationStateMapper::GetNameForDestinationEndpointRegistrationState(m_registrationState));
  }

  if (m_connectionStateHasBeenSet) {
    payload.WithString("connectionState",
                       DestinationEndpointConnectionStateMapper::GetNameForDestinationEndpointConnectionState(m_connectionState));
  }

  if (m_decryptionTypeHasBeenSet) {
    payload.WithString("decryptionType", EndpointEncryptionTypeMapper::GetNameForEndpointEncryptionType(m_decryptionType));
  }

  if (m_connectedSourceHasBeenSet) {
    payload.WithString("connectedSource", m_connectedSource);
  }

  if (m_associatedResourceArnHasBeenSet) {
    payload.WithString("associatedResourceArn", m_associatedResourceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
