/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateNotifyConfigurationResult.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateNotifyConfigurationResult::CreateNotifyConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateNotifyConfigurationResult& CreateNotifyConfigurationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NotifyConfigurationArn")) {
    m_notifyConfigurationArn = jsonValue.GetString("NotifyConfigurationArn");
    m_notifyConfigurationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotifyConfigurationId")) {
    m_notifyConfigurationId = jsonValue.GetString("NotifyConfigurationId");
    m_notifyConfigurationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisplayName")) {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseCase")) {
    m_useCase = NotifyConfigurationUseCaseMapper::GetNotifyConfigurationUseCaseForName(jsonValue.GetString("UseCase"));
    m_useCaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultTemplateId")) {
    m_defaultTemplateId = jsonValue.GetString("DefaultTemplateId");
    m_defaultTemplateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PoolId")) {
    m_poolId = jsonValue.GetString("PoolId");
    m_poolIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnabledCountries")) {
    Aws::Utils::Array<JsonView> enabledCountriesJsonList = jsonValue.GetArray("EnabledCountries");
    for (unsigned enabledCountriesIndex = 0; enabledCountriesIndex < enabledCountriesJsonList.GetLength(); ++enabledCountriesIndex) {
      m_enabledCountries.push_back(enabledCountriesJsonList[enabledCountriesIndex].AsString());
    }
    m_enabledCountriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnabledChannels")) {
    Aws::Utils::Array<JsonView> enabledChannelsJsonList = jsonValue.GetArray("EnabledChannels");
    for (unsigned enabledChannelsIndex = 0; enabledChannelsIndex < enabledChannelsJsonList.GetLength(); ++enabledChannelsIndex) {
      m_enabledChannels.push_back(
          NumberCapabilityMapper::GetNumberCapabilityForName(enabledChannelsJsonList[enabledChannelsIndex].AsString()));
    }
    m_enabledChannelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tier")) {
    m_tier = NotifyConfigurationTierMapper::GetNotifyConfigurationTierForName(jsonValue.GetString("Tier"));
    m_tierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TierUpgradeStatus")) {
    m_tierUpgradeStatus = TierUpgradeStatusMapper::GetTierUpgradeStatusForName(jsonValue.GetString("TierUpgradeStatus"));
    m_tierUpgradeStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = NotifyConfigurationStatusMapper::GetNotifyConfigurationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RejectionReason")) {
    m_rejectionReason = jsonValue.GetString("RejectionReason");
    m_rejectionReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeletionProtectionEnabled")) {
    m_deletionProtectionEnabled = jsonValue.GetBool("DeletionProtectionEnabled");
    m_deletionProtectionEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTimestamp")) {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
