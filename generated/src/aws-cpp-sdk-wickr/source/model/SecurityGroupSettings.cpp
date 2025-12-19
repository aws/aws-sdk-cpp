/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/SecurityGroupSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

SecurityGroupSettings::SecurityGroupSettings(JsonView jsonValue) { *this = jsonValue; }

SecurityGroupSettings& SecurityGroupSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("alwaysReauthenticate")) {
    m_alwaysReauthenticate = jsonValue.GetBool("alwaysReauthenticate");
    m_alwaysReauthenticateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("atakPackageValues")) {
    Aws::Utils::Array<JsonView> atakPackageValuesJsonList = jsonValue.GetArray("atakPackageValues");
    for (unsigned atakPackageValuesIndex = 0; atakPackageValuesIndex < atakPackageValuesJsonList.GetLength(); ++atakPackageValuesIndex) {
      m_atakPackageValues.push_back(atakPackageValuesJsonList[atakPackageValuesIndex].AsString());
    }
    m_atakPackageValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("calling")) {
    m_calling = jsonValue.GetObject("calling");
    m_callingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("checkForUpdates")) {
    m_checkForUpdates = jsonValue.GetBool("checkForUpdates");
    m_checkForUpdatesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableAtak")) {
    m_enableAtak = jsonValue.GetBool("enableAtak");
    m_enableAtakHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableCrashReports")) {
    m_enableCrashReports = jsonValue.GetBool("enableCrashReports");
    m_enableCrashReportsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableFileDownload")) {
    m_enableFileDownload = jsonValue.GetBool("enableFileDownload");
    m_enableFileDownloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableGuestFederation")) {
    m_enableGuestFederation = jsonValue.GetBool("enableGuestFederation");
    m_enableGuestFederationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableNotificationPreview")) {
    m_enableNotificationPreview = jsonValue.GetBool("enableNotificationPreview");
    m_enableNotificationPreviewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableOpenAccessOption")) {
    m_enableOpenAccessOption = jsonValue.GetBool("enableOpenAccessOption");
    m_enableOpenAccessOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableRestrictedGlobalFederation")) {
    m_enableRestrictedGlobalFederation = jsonValue.GetBool("enableRestrictedGlobalFederation");
    m_enableRestrictedGlobalFederationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filesEnabled")) {
    m_filesEnabled = jsonValue.GetBool("filesEnabled");
    m_filesEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("forceDeviceLockout")) {
    m_forceDeviceLockout = jsonValue.GetInteger("forceDeviceLockout");
    m_forceDeviceLockoutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("forceOpenAccess")) {
    m_forceOpenAccess = jsonValue.GetBool("forceOpenAccess");
    m_forceOpenAccessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("forceReadReceipts")) {
    m_forceReadReceipts = jsonValue.GetBool("forceReadReceipts");
    m_forceReadReceiptsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("globalFederation")) {
    m_globalFederation = jsonValue.GetBool("globalFederation");
    m_globalFederationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isAtoEnabled")) {
    m_isAtoEnabled = jsonValue.GetBool("isAtoEnabled");
    m_isAtoEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isLinkPreviewEnabled")) {
    m_isLinkPreviewEnabled = jsonValue.GetBool("isLinkPreviewEnabled");
    m_isLinkPreviewEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("locationAllowMaps")) {
    m_locationAllowMaps = jsonValue.GetBool("locationAllowMaps");
    m_locationAllowMapsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("locationEnabled")) {
    m_locationEnabled = jsonValue.GetBool("locationEnabled");
    m_locationEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxAutoDownloadSize")) {
    m_maxAutoDownloadSize = jsonValue.GetInt64("maxAutoDownloadSize");
    m_maxAutoDownloadSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxBor")) {
    m_maxBor = jsonValue.GetInteger("maxBor");
    m_maxBorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxTtl")) {
    m_maxTtl = jsonValue.GetInt64("maxTtl");
    m_maxTtlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messageForwardingEnabled")) {
    m_messageForwardingEnabled = jsonValue.GetBool("messageForwardingEnabled");
    m_messageForwardingEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("passwordRequirements")) {
    m_passwordRequirements = jsonValue.GetObject("passwordRequirements");
    m_passwordRequirementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("presenceEnabled")) {
    m_presenceEnabled = jsonValue.GetBool("presenceEnabled");
    m_presenceEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quickResponses")) {
    Aws::Utils::Array<JsonView> quickResponsesJsonList = jsonValue.GetArray("quickResponses");
    for (unsigned quickResponsesIndex = 0; quickResponsesIndex < quickResponsesJsonList.GetLength(); ++quickResponsesIndex) {
      m_quickResponses.push_back(quickResponsesJsonList[quickResponsesIndex].AsString());
    }
    m_quickResponsesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("showMasterRecoveryKey")) {
    m_showMasterRecoveryKey = jsonValue.GetBool("showMasterRecoveryKey");
    m_showMasterRecoveryKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shredder")) {
    m_shredder = jsonValue.GetObject("shredder");
    m_shredderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ssoMaxIdleMinutes")) {
    m_ssoMaxIdleMinutes = jsonValue.GetInteger("ssoMaxIdleMinutes");
    m_ssoMaxIdleMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("federationMode")) {
    m_federationMode = jsonValue.GetInteger("federationMode");
    m_federationModeHasBeenSet = true;
  }
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

JsonValue SecurityGroupSettings::Jsonize() const {
  JsonValue payload;

  if (m_alwaysReauthenticateHasBeenSet) {
    payload.WithBool("alwaysReauthenticate", m_alwaysReauthenticate);
  }

  if (m_atakPackageValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> atakPackageValuesJsonList(m_atakPackageValues.size());
    for (unsigned atakPackageValuesIndex = 0; atakPackageValuesIndex < atakPackageValuesJsonList.GetLength(); ++atakPackageValuesIndex) {
      atakPackageValuesJsonList[atakPackageValuesIndex].AsString(m_atakPackageValues[atakPackageValuesIndex]);
    }
    payload.WithArray("atakPackageValues", std::move(atakPackageValuesJsonList));
  }

  if (m_callingHasBeenSet) {
    payload.WithObject("calling", m_calling.Jsonize());
  }

  if (m_checkForUpdatesHasBeenSet) {
    payload.WithBool("checkForUpdates", m_checkForUpdates);
  }

  if (m_enableAtakHasBeenSet) {
    payload.WithBool("enableAtak", m_enableAtak);
  }

  if (m_enableCrashReportsHasBeenSet) {
    payload.WithBool("enableCrashReports", m_enableCrashReports);
  }

  if (m_enableFileDownloadHasBeenSet) {
    payload.WithBool("enableFileDownload", m_enableFileDownload);
  }

  if (m_enableGuestFederationHasBeenSet) {
    payload.WithBool("enableGuestFederation", m_enableGuestFederation);
  }

  if (m_enableNotificationPreviewHasBeenSet) {
    payload.WithBool("enableNotificationPreview", m_enableNotificationPreview);
  }

  if (m_enableOpenAccessOptionHasBeenSet) {
    payload.WithBool("enableOpenAccessOption", m_enableOpenAccessOption);
  }

  if (m_enableRestrictedGlobalFederationHasBeenSet) {
    payload.WithBool("enableRestrictedGlobalFederation", m_enableRestrictedGlobalFederation);
  }

  if (m_filesEnabledHasBeenSet) {
    payload.WithBool("filesEnabled", m_filesEnabled);
  }

  if (m_forceDeviceLockoutHasBeenSet) {
    payload.WithInteger("forceDeviceLockout", m_forceDeviceLockout);
  }

  if (m_forceOpenAccessHasBeenSet) {
    payload.WithBool("forceOpenAccess", m_forceOpenAccess);
  }

  if (m_forceReadReceiptsHasBeenSet) {
    payload.WithBool("forceReadReceipts", m_forceReadReceipts);
  }

  if (m_globalFederationHasBeenSet) {
    payload.WithBool("globalFederation", m_globalFederation);
  }

  if (m_isAtoEnabledHasBeenSet) {
    payload.WithBool("isAtoEnabled", m_isAtoEnabled);
  }

  if (m_isLinkPreviewEnabledHasBeenSet) {
    payload.WithBool("isLinkPreviewEnabled", m_isLinkPreviewEnabled);
  }

  if (m_locationAllowMapsHasBeenSet) {
    payload.WithBool("locationAllowMaps", m_locationAllowMaps);
  }

  if (m_locationEnabledHasBeenSet) {
    payload.WithBool("locationEnabled", m_locationEnabled);
  }

  if (m_maxAutoDownloadSizeHasBeenSet) {
    payload.WithInt64("maxAutoDownloadSize", m_maxAutoDownloadSize);
  }

  if (m_maxBorHasBeenSet) {
    payload.WithInteger("maxBor", m_maxBor);
  }

  if (m_maxTtlHasBeenSet) {
    payload.WithInt64("maxTtl", m_maxTtl);
  }

  if (m_messageForwardingEnabledHasBeenSet) {
    payload.WithBool("messageForwardingEnabled", m_messageForwardingEnabled);
  }

  if (m_passwordRequirementsHasBeenSet) {
    payload.WithObject("passwordRequirements", m_passwordRequirements.Jsonize());
  }

  if (m_presenceEnabledHasBeenSet) {
    payload.WithBool("presenceEnabled", m_presenceEnabled);
  }

  if (m_quickResponsesHasBeenSet) {
    Aws::Utils::Array<JsonValue> quickResponsesJsonList(m_quickResponses.size());
    for (unsigned quickResponsesIndex = 0; quickResponsesIndex < quickResponsesJsonList.GetLength(); ++quickResponsesIndex) {
      quickResponsesJsonList[quickResponsesIndex].AsString(m_quickResponses[quickResponsesIndex]);
    }
    payload.WithArray("quickResponses", std::move(quickResponsesJsonList));
  }

  if (m_showMasterRecoveryKeyHasBeenSet) {
    payload.WithBool("showMasterRecoveryKey", m_showMasterRecoveryKey);
  }

  if (m_shredderHasBeenSet) {
    payload.WithObject("shredder", m_shredder.Jsonize());
  }

  if (m_ssoMaxIdleMinutesHasBeenSet) {
    payload.WithInteger("ssoMaxIdleMinutes", m_ssoMaxIdleMinutes);
  }

  if (m_federationModeHasBeenSet) {
    payload.WithInteger("federationMode", m_federationMode);
  }

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
