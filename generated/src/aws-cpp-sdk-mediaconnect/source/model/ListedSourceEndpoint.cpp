/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/ListedSourceEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

ListedSourceEndpoint::ListedSourceEndpoint(JsonView jsonValue) { *this = jsonValue; }

ListedSourceEndpoint& ListedSourceEndpoint::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("sourceType")) {
    m_sourceType = SourceEndpointTypeMapper::GetSourceEndpointTypeForName(jsonValue.GetString("sourceType"));
    m_sourceTypeHasBeenSet = true;
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
    m_registrationState =
        SourceEndpointRegistrationStateMapper::GetSourceEndpointRegistrationStateForName(jsonValue.GetString("registrationState"));
    m_registrationStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectionState")) {
    m_connectionState =
        SourceEndpointConnectionStateMapper::GetSourceEndpointConnectionStateForName(jsonValue.GetString("connectionState"));
    m_connectionStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionType")) {
    m_encryptionType = EndpointEncryptionTypeMapper::GetEndpointEncryptionTypeForName(jsonValue.GetString("encryptionType"));
    m_encryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectedDestinationCount")) {
    m_connectedDestinationCount = jsonValue.GetInteger("connectedDestinationCount");
    m_connectedDestinationCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedResourceArn")) {
    m_associatedResourceArn = jsonValue.GetString("associatedResourceArn");
    m_associatedResourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ListedSourceEndpoint::Jsonize() const {
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

  if (m_sourceTypeHasBeenSet) {
    payload.WithString("sourceType", SourceEndpointTypeMapper::GetNameForSourceEndpointType(m_sourceType));
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
                       SourceEndpointRegistrationStateMapper::GetNameForSourceEndpointRegistrationState(m_registrationState));
  }

  if (m_connectionStateHasBeenSet) {
    payload.WithString("connectionState", SourceEndpointConnectionStateMapper::GetNameForSourceEndpointConnectionState(m_connectionState));
  }

  if (m_encryptionTypeHasBeenSet) {
    payload.WithString("encryptionType", EndpointEncryptionTypeMapper::GetNameForEndpointEncryptionType(m_encryptionType));
  }

  if (m_connectedDestinationCountHasBeenSet) {
    payload.WithInteger("connectedDestinationCount", m_connectedDestinationCount);
  }

  if (m_associatedResourceArnHasBeenSet) {
    payload.WithString("associatedResourceArn", m_associatedResourceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
