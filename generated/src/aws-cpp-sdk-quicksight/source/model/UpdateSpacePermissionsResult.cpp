/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateSpacePermissionsResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSpacePermissionsResult::UpdateSpacePermissionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateSpacePermissionsResult& UpdateSpacePermissionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("spaceId")) {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spaceArn")) {
    m_spaceArn = jsonValue.GetString("spaceArn");
    m_spaceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("permissions")) {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("permissions");
    for (unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex) {
      m_permissions.push_back(permissionsJsonList[permissionsIndex].AsObject());
    }
    m_permissionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestId")) {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
