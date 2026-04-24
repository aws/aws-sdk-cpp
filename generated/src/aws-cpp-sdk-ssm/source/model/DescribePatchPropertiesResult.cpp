/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ssm/model/DescribePatchPropertiesResult.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePatchPropertiesResult::DescribePatchPropertiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribePatchPropertiesResult& DescribePatchPropertiesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Properties")) {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("Properties");
    for (unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex) {
      Aws::Map<Aws::String, JsonView> patchPropertyEntry2JsonMap = propertiesJsonList[propertiesIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> patchPropertyEntry2Map;
      for (auto& patchPropertyEntry2Item : patchPropertyEntry2JsonMap) {
        patchPropertyEntry2Map[patchPropertyEntry2Item.first] = patchPropertyEntry2Item.second.AsString();
      }
      m_properties.push_back(std::move(patchPropertyEntry2Map));
    }
    m_propertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
