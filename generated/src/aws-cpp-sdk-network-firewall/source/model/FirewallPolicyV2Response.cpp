/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/FirewallPolicyV2Response.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

FirewallPolicyV2Response::FirewallPolicyV2Response(JsonView jsonValue) { *this = jsonValue; }

FirewallPolicyV2Response& FirewallPolicyV2Response::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FirewallPolicyV2Name")) {
    m_firewallPolicyV2Name = jsonValue.GetString("FirewallPolicyV2Name");
    m_firewallPolicyV2NameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirewallPolicyV2Arn")) {
    m_firewallPolicyV2Arn = jsonValue.GetString("FirewallPolicyV2Arn");
    m_firewallPolicyV2ArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirewallPolicyV2Id")) {
    m_firewallPolicyV2Id = jsonValue.GetString("FirewallPolicyV2Id");
    m_firewallPolicyV2IdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirewallPolicyV2Status")) {
    m_firewallPolicyV2Status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("FirewallPolicyV2Status"));
    m_firewallPolicyV2StatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConsumedFirewallRuleCapacity")) {
    m_consumedFirewallRuleCapacity = jsonValue.GetInteger("ConsumedFirewallRuleCapacity");
    m_consumedFirewallRuleCapacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConsumedIpsRuleCapacity")) {
    m_consumedIpsRuleCapacity = jsonValue.GetInteger("ConsumedIpsRuleCapacity");
    m_consumedIpsRuleCapacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConsumedIpsDomainCapacity")) {
    m_consumedIpsDomainCapacity = jsonValue.GetInteger("ConsumedIpsDomainCapacity");
    m_consumedIpsDomainCapacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NumberOfAssociations")) {
    m_numberOfAssociations = jsonValue.GetInteger("NumberOfAssociations");
    m_numberOfAssociationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallPolicyV2Response::Jsonize() const {
  JsonValue payload;

  if (m_firewallPolicyV2NameHasBeenSet) {
    payload.WithString("FirewallPolicyV2Name", m_firewallPolicyV2Name);
  }

  if (m_firewallPolicyV2ArnHasBeenSet) {
    payload.WithString("FirewallPolicyV2Arn", m_firewallPolicyV2Arn);
  }

  if (m_firewallPolicyV2IdHasBeenSet) {
    payload.WithString("FirewallPolicyV2Id", m_firewallPolicyV2Id);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_firewallPolicyV2StatusHasBeenSet) {
    payload.WithString("FirewallPolicyV2Status", ResourceStatusMapper::GetNameForResourceStatus(m_firewallPolicyV2Status));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("StatusMessage", m_statusMessage);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_consumedFirewallRuleCapacityHasBeenSet) {
    payload.WithInteger("ConsumedFirewallRuleCapacity", m_consumedFirewallRuleCapacity);
  }

  if (m_consumedIpsRuleCapacityHasBeenSet) {
    payload.WithInteger("ConsumedIpsRuleCapacity", m_consumedIpsRuleCapacity);
  }

  if (m_consumedIpsDomainCapacityHasBeenSet) {
    payload.WithInteger("ConsumedIpsDomainCapacity", m_consumedIpsDomainCapacity);
  }

  if (m_numberOfAssociationsHasBeenSet) {
    payload.WithInteger("NumberOfAssociations", m_numberOfAssociations);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  if (m_errorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
    }
    payload.WithArray("Errors", std::move(errorsJsonList));
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
