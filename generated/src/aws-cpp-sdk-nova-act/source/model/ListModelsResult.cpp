/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/nova-act/model/ListModelsResult.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelsResult::ListModelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListModelsResult& ListModelsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("modelSummaries")) {
    Aws::Utils::Array<JsonView> modelSummariesJsonList = jsonValue.GetArray("modelSummaries");
    for (unsigned modelSummariesIndex = 0; modelSummariesIndex < modelSummariesJsonList.GetLength(); ++modelSummariesIndex) {
      m_modelSummaries.push_back(modelSummariesJsonList[modelSummariesIndex].AsObject());
    }
    m_modelSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelAliases")) {
    Aws::Utils::Array<JsonView> modelAliasesJsonList = jsonValue.GetArray("modelAliases");
    for (unsigned modelAliasesIndex = 0; modelAliasesIndex < modelAliasesJsonList.GetLength(); ++modelAliasesIndex) {
      m_modelAliases.push_back(modelAliasesJsonList[modelAliasesIndex].AsObject());
    }
    m_modelAliasesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("compatibilityInformation")) {
    m_compatibilityInformation = jsonValue.GetObject("compatibilityInformation");
    m_compatibilityInformationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
