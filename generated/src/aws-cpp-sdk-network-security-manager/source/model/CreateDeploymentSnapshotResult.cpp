/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-security-manager/model/CreateDeploymentSnapshotResult.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDeploymentSnapshotResult::CreateDeploymentSnapshotResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateDeploymentSnapshotResult& CreateDeploymentSnapshotResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("deploymentId")) {
    m_deploymentId = jsonValue.GetString("deploymentId");
    m_deploymentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentArn")) {
    m_deploymentArn = jsonValue.GetString("deploymentArn");
    m_deploymentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentName")) {
    m_deploymentName = jsonValue.GetString("deploymentName");
    m_deploymentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentDescription")) {
    m_deploymentDescription = jsonValue.GetString("deploymentDescription");
    m_deploymentDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deploymentConfiguration")) {
    m_deploymentConfiguration = jsonValue.GetObject("deploymentConfiguration");
    m_deploymentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedPolicyList")) {
    Aws::Utils::Array<JsonView> associatedPolicyListJsonList = jsonValue.GetArray("associatedPolicyList");
    for (unsigned associatedPolicyListIndex = 0; associatedPolicyListIndex < associatedPolicyListJsonList.GetLength();
         ++associatedPolicyListIndex) {
      m_associatedPolicyList.push_back(associatedPolicyListJsonList[associatedPolicyListIndex].AsObject());
    }
    m_associatedPolicyListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedScopeList")) {
    Aws::Utils::Array<JsonView> associatedScopeListJsonList = jsonValue.GetArray("associatedScopeList");
    for (unsigned associatedScopeListIndex = 0; associatedScopeListIndex < associatedScopeListJsonList.GetLength();
         ++associatedScopeListIndex) {
      m_associatedScopeList.push_back(associatedScopeListJsonList[associatedScopeListIndex].AsObject());
    }
    m_associatedScopeListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
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
