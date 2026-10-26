/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/DestinationEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

DestinationEndpoint::DestinationEndpoint(JsonView jsonValue) { *this = jsonValue; }

DestinationEndpoint& DestinationEndpoint::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
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
  if (jsonValue.ValueExists("messages")) {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      m_messages.push_back(messagesJsonList[messagesIndex].AsObject());
    }
    m_messagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationType")) {
    m_destinationType = DestinationEndpointTypeMapper::GetDestinationEndpointTypeForName(jsonValue.GetString("destinationType"));
    m_destinationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceShareOwnership")) {
    m_resourceShareOwnership =
        ResourceShareOwnershipMapper::GetResourceShareOwnershipForName(jsonValue.GetString("resourceShareOwnership"));
    m_resourceShareOwnershipHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceShareDetails")) {
    m_resourceShareDetails = jsonValue.GetObject("resourceShareDetails");
    m_resourceShareDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registrationState")) {
    m_registrationState = DestinationEndpointRegistrationStateMapper::GetDestinationEndpointRegistrationStateForName(
        jsonValue.GetString("registrationState"));
    m_registrationStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectionDetails")) {
    m_connectionDetails = jsonValue.GetObject("connectionDetails");
    m_connectionDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectionState")) {
    m_connectionState =
        DestinationEndpointConnectionStateMapper::GetDestinationEndpointConnectionStateForName(jsonValue.GetString("connectionState"));
    m_connectionStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectedSource")) {
    m_connectedSource = jsonValue.GetString("connectedSource");
    m_connectedSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("decryptionType")) {
    m_decryptionType = EndpointEncryptionTypeMapper::GetEndpointEncryptionTypeForName(jsonValue.GetString("decryptionType"));
    m_decryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("decryptionConfiguration")) {
    m_decryptionConfiguration = jsonValue.GetObject("decryptionConfiguration");
    m_decryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedResourceDetails")) {
    m_associatedResourceDetails = jsonValue.GetObject("associatedResourceDetails");
    m_associatedResourceDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationEndpoint::Jsonize() const {
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

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
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

  if (m_messagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
    }
    payload.WithArray("messages", std::move(messagesJsonList));
  }

  if (m_destinationTypeHasBeenSet) {
    payload.WithString("destinationType", DestinationEndpointTypeMapper::GetNameForDestinationEndpointType(m_destinationType));
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_resourceShareOwnershipHasBeenSet) {
    payload.WithString("resourceShareOwnership", ResourceShareOwnershipMapper::GetNameForResourceShareOwnership(m_resourceShareOwnership));
  }

  if (m_resourceShareDetailsHasBeenSet) {
    payload.WithObject("resourceShareDetails", m_resourceShareDetails.Jsonize());
  }

  if (m_registrationStateHasBeenSet) {
    payload.WithString("registrationState",
                       DestinationEndpointRegistrationStateMapper::GetNameForDestinationEndpointRegistrationState(m_registrationState));
  }

  if (m_connectionDetailsHasBeenSet) {
    payload.WithObject("connectionDetails", m_connectionDetails.Jsonize());
  }

  if (m_connectionStateHasBeenSet) {
    payload.WithString("connectionState",
                       DestinationEndpointConnectionStateMapper::GetNameForDestinationEndpointConnectionState(m_connectionState));
  }

  if (m_connectedSourceHasBeenSet) {
    payload.WithString("connectedSource", m_connectedSource);
  }

  if (m_decryptionTypeHasBeenSet) {
    payload.WithString("decryptionType", EndpointEncryptionTypeMapper::GetNameForEndpointEncryptionType(m_decryptionType));
  }

  if (m_decryptionConfigurationHasBeenSet) {
    payload.WithObject("decryptionConfiguration", m_decryptionConfiguration.Jsonize());
  }

  if (m_associatedResourceDetailsHasBeenSet) {
    payload.WithObject("associatedResourceDetails", m_associatedResourceDetails.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
