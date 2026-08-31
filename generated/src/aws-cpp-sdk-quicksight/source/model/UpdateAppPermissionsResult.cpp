/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/UpdateAppPermissionsResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAppPermissionsResult::UpdateAppPermissionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateAppPermissionsResult& UpdateAppPermissionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AppId")) {
    m_appId = jsonValue.GetString("AppId");
    m_appIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Permissions")) {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("Permissions");
    for (unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex) {
      m_permissions.push_back(permissionsJsonList[permissionsIndex].AsObject());
    }
    m_permissionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Visibility")) {
    m_visibility = AppVisibilityMapper::GetAppVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
