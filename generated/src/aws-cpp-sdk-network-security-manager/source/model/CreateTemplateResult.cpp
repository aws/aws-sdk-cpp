/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-security-manager/model/CreateTemplateResult.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateTemplateResult::CreateTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateTemplateResult& CreateTemplateResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("templateId")) {
    m_templateId = jsonValue.GetString("templateId");
    m_templateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("templateArn")) {
    m_templateArn = jsonValue.GetString("templateArn");
    m_templateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("templateName")) {
    m_templateName = jsonValue.GetString("templateName");
    m_templateNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("templateDescription")) {
    m_templateDescription = jsonValue.GetString("templateDescription");
    m_templateDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedRuleList")) {
    Aws::Utils::Array<JsonView> associatedRuleListJsonList = jsonValue.GetArray("associatedRuleList");
    for (unsigned associatedRuleListIndex = 0; associatedRuleListIndex < associatedRuleListJsonList.GetLength();
         ++associatedRuleListIndex) {
      m_associatedRuleList.push_back(associatedRuleListJsonList[associatedRuleListIndex].AsObject());
    }
    m_associatedRuleListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateToken")) {
    m_updateToken = jsonValue.GetString("updateToken");
    m_updateTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isSnapshot")) {
    m_isSnapshot = jsonValue.GetBool("isSnapshot");
    m_isSnapshotHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasPublishedVersion")) {
    m_hasPublishedVersion = jsonValue.GetBool("hasPublishedVersion");
    m_hasPublishedVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallType")) {
    m_firewallType = TemplateFirewallTypeMapper::GetTemplateFirewallTypeForName(jsonValue.GetString("firewallType"));
    m_firewallTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
