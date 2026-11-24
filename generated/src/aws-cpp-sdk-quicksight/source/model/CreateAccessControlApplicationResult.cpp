/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/CreateAccessControlApplicationResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAccessControlApplicationResult::CreateAccessControlApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

CreateAccessControlApplicationResult& CreateAccessControlApplicationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ApplicationId")) {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccessControlApplicationStatus")) {
    m_accessControlApplicationStatus = AccessControlApplicationStatusMapper::GetAccessControlApplicationStatusForName(
        jsonValue.GetString("AccessControlApplicationStatus"));
    m_accessControlApplicationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TenantUrl")) {
    m_tenantUrl = jsonValue.GetString("TenantUrl");
    m_tenantUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdcApplicationArn")) {
    m_idcApplicationArn = jsonValue.GetString("IdcApplicationArn");
    m_idcApplicationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuickAuthenticationConfiguration")) {
    m_quickAuthenticationConfiguration = jsonValue.GetObject("QuickAuthenticationConfiguration");
    m_quickAuthenticationConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
