/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/GetSecurityRequirementPackResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSecurityRequirementPackResult::GetSecurityRequirementPackResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetSecurityRequirementPackResult& GetSecurityRequirementPackResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("packId")) {
    m_packId = jsonValue.GetString("packId");
    m_packIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vendorName")) {
    m_vendorName = jsonValue.GetString("vendorName");
    m_vendorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managementType")) {
    m_managementType = ManagementTypeMapper::GetManagementTypeForName(jsonValue.GetString("managementType"));
    m_managementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SecurityRequirementPackStatusMapper::GetSecurityRequirementPackStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("importStatus")) {
    m_importStatus =
        SecurityRequirementPackImportStatusMapper::GetSecurityRequirementPackImportStatusForName(jsonValue.GetString("importStatus"));
    m_importStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
