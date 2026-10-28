/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/opensearch/model/CompareDomainConfigurationResult.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CompareDomainConfigurationResult::CompareDomainConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CompareDomainConfigurationResult& CompareDomainConfigurationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("SourceDomainArn")) {
    m_sourceDomainArn = jsonValue.GetString("SourceDomainArn");
    m_sourceDomainArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetDomainArn")) {
    m_targetDomainArn = jsonValue.GetString("TargetDomainArn");
    m_targetDomainArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Categories")) {
    Aws::Map<Aws::String, JsonView> categoriesJsonMap = jsonValue.GetObject("Categories").GetAllObjects();
    for (auto& categoriesItem : categoriesJsonMap) {
      m_categories[categoriesItem.first] = categoriesItem.second.AsObject();
    }
    m_categoriesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
