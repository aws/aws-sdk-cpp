/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/SecurityGroupSettingsRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

SecurityGroupSettingsRequest::SecurityGroupSettingsRequest(JsonView jsonValue) { *this = jsonValue; }

SecurityGroupSettingsRequest& SecurityGroupSettingsRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lockoutThreshold")) {
    m_lockoutThreshold = jsonValue.GetInteger("lockoutThreshold");
    m_lockoutThresholdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permittedNetworks")) {
    Aws::Utils::Array<JsonView> permittedNetworksJsonList = jsonValue.GetArray("permittedNetworks");
    for (unsigned permittedNetworksIndex = 0; permittedNetworksIndex < permittedNetworksJsonList.GetLength(); ++permittedNetworksIndex) {
      m_permittedNetworks.push_back(permittedNetworksJsonList[permittedNetworksIndex].AsString());
    }
    m_permittedNetworksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableGuestFederation")) {
    m_enableGuestFederation = jsonValue.GetBool("enableGuestFederation");
    m_enableGuestFederationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("globalFederation")) {
    m_globalFederation = jsonValue.GetBool("globalFederation");
    m_globalFederationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("federationMode")) {
    m_federationMode = jsonValue.GetInteger("federationMode");
    m_federationModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableRestrictedGlobalFederation")) {
    m_enableRestrictedGlobalFederation = jsonValue.GetBool("enableRestrictedGlobalFederation");
    m_enableRestrictedGlobalFederationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permittedWickrAwsNetworks")) {
    Aws::Utils::Array<JsonView> permittedWickrAwsNetworksJsonList = jsonValue.GetArray("permittedWickrAwsNetworks");
    for (unsigned permittedWickrAwsNetworksIndex = 0; permittedWickrAwsNetworksIndex < permittedWickrAwsNetworksJsonList.GetLength();
         ++permittedWickrAwsNetworksIndex) {
      m_permittedWickrAwsNetworks.push_back(permittedWickrAwsNetworksJsonList[permittedWickrAwsNetworksIndex].AsObject());
    }
    m_permittedWickrAwsNetworksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permittedWickrEnterpriseNetworks")) {
    Aws::Utils::Array<JsonView> permittedWickrEnterpriseNetworksJsonList = jsonValue.GetArray("permittedWickrEnterpriseNetworks");
    for (unsigned permittedWickrEnterpriseNetworksIndex = 0;
         permittedWickrEnterpriseNetworksIndex < permittedWickrEnterpriseNetworksJsonList.GetLength();
         ++permittedWickrEnterpriseNetworksIndex) {
      m_permittedWickrEnterpriseNetworks.push_back(
          permittedWickrEnterpriseNetworksJsonList[permittedWickrEnterpriseNetworksIndex].AsObject());
    }
    m_permittedWickrEnterpriseNetworksHasBeenSet = true;
  }
  return *this;
}

JsonValue SecurityGroupSettingsRequest::Jsonize() const {
  JsonValue payload;

  if (m_lockoutThresholdHasBeenSet) {
    payload.WithInteger("lockoutThreshold", m_lockoutThreshold);
  }

  if (m_permittedNetworksHasBeenSet) {
    Aws::Utils::Array<JsonValue> permittedNetworksJsonList(m_permittedNetworks.size());
    for (unsigned permittedNetworksIndex = 0; permittedNetworksIndex < permittedNetworksJsonList.GetLength(); ++permittedNetworksIndex) {
      permittedNetworksJsonList[permittedNetworksIndex].AsString(m_permittedNetworks[permittedNetworksIndex]);
    }
    payload.WithArray("permittedNetworks", std::move(permittedNetworksJsonList));
  }

  if (m_enableGuestFederationHasBeenSet) {
    payload.WithBool("enableGuestFederation", m_enableGuestFederation);
  }

  if (m_globalFederationHasBeenSet) {
    payload.WithBool("globalFederation", m_globalFederation);
  }

  if (m_federationModeHasBeenSet) {
    payload.WithInteger("federationMode", m_federationMode);
  }

  if (m_enableRestrictedGlobalFederationHasBeenSet) {
    payload.WithBool("enableRestrictedGlobalFederation", m_enableRestrictedGlobalFederation);
  }

  if (m_permittedWickrAwsNetworksHasBeenSet) {
    Aws::Utils::Array<JsonValue> permittedWickrAwsNetworksJsonList(m_permittedWickrAwsNetworks.size());
    for (unsigned permittedWickrAwsNetworksIndex = 0; permittedWickrAwsNetworksIndex < permittedWickrAwsNetworksJsonList.GetLength();
         ++permittedWickrAwsNetworksIndex) {
      permittedWickrAwsNetworksJsonList[permittedWickrAwsNetworksIndex].AsObject(
          m_permittedWickrAwsNetworks[permittedWickrAwsNetworksIndex].Jsonize());
    }
    payload.WithArray("permittedWickrAwsNetworks", std::move(permittedWickrAwsNetworksJsonList));
  }

  if (m_permittedWickrEnterpriseNetworksHasBeenSet) {
    Aws::Utils::Array<JsonValue> permittedWickrEnterpriseNetworksJsonList(m_permittedWickrEnterpriseNetworks.size());
    for (unsigned permittedWickrEnterpriseNetworksIndex = 0;
         permittedWickrEnterpriseNetworksIndex < permittedWickrEnterpriseNetworksJsonList.GetLength();
         ++permittedWickrEnterpriseNetworksIndex) {
      permittedWickrEnterpriseNetworksJsonList[permittedWickrEnterpriseNetworksIndex].AsObject(
          m_permittedWickrEnterpriseNetworks[permittedWickrEnterpriseNetworksIndex].Jsonize());
    }
    payload.WithArray("permittedWickrEnterpriseNetworks", std::move(permittedWickrEnterpriseNetworksJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
