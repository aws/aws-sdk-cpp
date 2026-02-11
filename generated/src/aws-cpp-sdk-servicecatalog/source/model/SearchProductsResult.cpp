/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/servicecatalog/model/SearchProductsResult.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchProductsResult::SearchProductsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SearchProductsResult& SearchProductsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ProductViewSummaries")) {
    Aws::Utils::Array<JsonView> productViewSummariesJsonList = jsonValue.GetArray("ProductViewSummaries");
    for (unsigned productViewSummariesIndex = 0; productViewSummariesIndex < productViewSummariesJsonList.GetLength();
         ++productViewSummariesIndex) {
      m_productViewSummaries.push_back(productViewSummariesJsonList[productViewSummariesIndex].AsObject());
    }
    m_productViewSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProductViewAggregations")) {
    Aws::Map<Aws::String, JsonView> productViewAggregationsJsonMap = jsonValue.GetObject("ProductViewAggregations").GetAllObjects();
    for (auto& productViewAggregationsItem : productViewAggregationsJsonMap) {
      Aws::Utils::Array<JsonView> productViewAggregationValues2JsonList = productViewAggregationsItem.second.AsArray();
      Aws::Vector<ProductViewAggregationValue> productViewAggregationValues2List;
      productViewAggregationValues2List.reserve((size_t)productViewAggregationValues2JsonList.GetLength());
      for (unsigned productViewAggregationValues2Index = 0;
           productViewAggregationValues2Index < productViewAggregationValues2JsonList.GetLength(); ++productViewAggregationValues2Index) {
        productViewAggregationValues2List.push_back(productViewAggregationValues2JsonList[productViewAggregationValues2Index].AsObject());
      }
      m_productViewAggregations[productViewAggregationsItem.first] = std::move(productViewAggregationValues2List);
    }
    m_productViewAggregationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextPageToken")) {
    m_nextPageToken = jsonValue.GetString("NextPageToken");
    m_nextPageTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
