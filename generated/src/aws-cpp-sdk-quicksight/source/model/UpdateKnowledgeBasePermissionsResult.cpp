/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/UpdateKnowledgeBasePermissionsResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateKnowledgeBasePermissionsResult::UpdateKnowledgeBasePermissionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateKnowledgeBasePermissionsResult& UpdateKnowledgeBasePermissionsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("KnowledgeBaseArn")) {
    m_knowledgeBaseArn = jsonValue.GetString("KnowledgeBaseArn");
    m_knowledgeBaseArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KnowledgeBaseId")) {
    m_knowledgeBaseId = jsonValue.GetString("KnowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Permissions")) {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("Permissions");
    for (unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex) {
      m_permissions.push_back(permissionsJsonList[permissionsIndex].AsObject());
    }
    m_permissionsHasBeenSet = true;
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
