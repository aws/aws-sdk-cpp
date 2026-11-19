/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rtbfabric/model/GetAvailableModuleVersionResult.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAvailableModuleVersionResult::GetAvailableModuleVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAvailableModuleVersionResult& GetAvailableModuleVersionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("moduleId")) {
    m_moduleId = jsonValue.GetString("moduleId");
    m_moduleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("moduleVersionArn")) {
    m_moduleVersionArn = jsonValue.GetString("moduleVersionArn");
    m_moduleVersionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ModuleVersionStatusMapper::GetModuleVersionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permissions")) {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("permissions");
    for (unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex) {
      m_permissions.push_back(ModulePermissionMapper::GetModulePermissionForName(permissionsJsonList[permissionsIndex].AsString()));
    }
    m_permissionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configurableActions")) {
    Aws::Utils::Array<JsonView> configurableActionsJsonList = jsonValue.GetArray("configurableActions");
    for (unsigned configurableActionsIndex = 0; configurableActionsIndex < configurableActionsJsonList.GetLength();
         ++configurableActionsIndex) {
      m_configurableActions.push_back(
          ConfigurableActionMapper::GetConfigurableActionForName(configurableActionsJsonList[configurableActionsIndex].AsString()));
    }
    m_configurableActionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configurationSchema")) {
    m_configurationSchema = jsonValue.GetString("configurationSchema");
    m_configurationSchemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("releaseNotes")) {
    m_releaseNotes = jsonValue.GetString("releaseNotes");
    m_releaseNotesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
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
