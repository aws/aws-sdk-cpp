/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateRcsAgentResult.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateRcsAgentResult::CreateRcsAgentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateRcsAgentResult& CreateRcsAgentResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("RcsAgentArn")) {
    m_rcsAgentArn = jsonValue.GetString("RcsAgentArn");
    m_rcsAgentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RcsAgentId")) {
    m_rcsAgentId = jsonValue.GetString("RcsAgentId");
    m_rcsAgentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RcsAgentStatusMapper::GetRcsAgentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeletionProtectionEnabled")) {
    m_deletionProtectionEnabled = jsonValue.GetBool("DeletionProtectionEnabled");
    m_deletionProtectionEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OptOutListName")) {
    m_optOutListName = jsonValue.GetString("OptOutListName");
    m_optOutListNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTimestamp")) {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfManagedOptOutsEnabled")) {
    m_selfManagedOptOutsEnabled = jsonValue.GetBool("SelfManagedOptOutsEnabled");
    m_selfManagedOptOutsEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TwoWayChannelArn")) {
    m_twoWayChannelArn = jsonValue.GetString("TwoWayChannelArn");
    m_twoWayChannelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TwoWayChannelRole")) {
    m_twoWayChannelRole = jsonValue.GetString("TwoWayChannelRole");
    m_twoWayChannelRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TwoWayEnabled")) {
    m_twoWayEnabled = jsonValue.GetBool("TwoWayEnabled");
    m_twoWayEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
