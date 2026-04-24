/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/uxc/model/UpdateAccountCustomizationsResult.h>

#include <utility>

using namespace Aws::uxc::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAccountCustomizationsResult::UpdateAccountCustomizationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateAccountCustomizationsResult& UpdateAccountCustomizationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("accountColor")) {
    m_accountColor = AccountColorMapper::GetAccountColorForName(jsonValue.GetString("accountColor"));
    m_accountColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("visibleServices")) {
    Aws::Utils::Array<JsonView> visibleServicesJsonList = jsonValue.GetArray("visibleServices");
    for (unsigned visibleServicesIndex = 0; visibleServicesIndex < visibleServicesJsonList.GetLength(); ++visibleServicesIndex) {
      m_visibleServices.push_back(visibleServicesJsonList[visibleServicesIndex].AsString());
    }
    m_visibleServicesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("visibleRegions")) {
    Aws::Utils::Array<JsonView> visibleRegionsJsonList = jsonValue.GetArray("visibleRegions");
    for (unsigned visibleRegionsIndex = 0; visibleRegionsIndex < visibleRegionsJsonList.GetLength(); ++visibleRegionsIndex) {
      m_visibleRegions.push_back(visibleRegionsJsonList[visibleRegionsIndex].AsString());
    }
    m_visibleRegionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
