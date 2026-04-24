/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-discovery/model/SearchFacetsResult.h>

#include <utility>

using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchFacetsResult::SearchFacetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SearchFacetsResult& SearchFacetsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("totalResults")) {
    m_totalResults = jsonValue.GetInt64("totalResults");
    m_totalResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingFacets")) {
    Aws::Map<Aws::String, JsonView> listingFacetsJsonMap = jsonValue.GetObject("listingFacets").GetAllObjects();
    for (auto& listingFacetsItem : listingFacetsJsonMap) {
      Aws::Utils::Array<JsonView> listingFacetList2JsonList = listingFacetsItem.second.AsArray();
      Aws::Vector<ListingFacet> listingFacetList2List;
      listingFacetList2List.reserve((size_t)listingFacetList2JsonList.GetLength());
      for (unsigned listingFacetList2Index = 0; listingFacetList2Index < listingFacetList2JsonList.GetLength(); ++listingFacetList2Index) {
        listingFacetList2List.push_back(listingFacetList2JsonList[listingFacetList2Index].AsObject());
      }
      m_listingFacets[SearchFacetTypeMapper::GetSearchFacetTypeForName(listingFacetsItem.first)] = std::move(listingFacetList2List);
    }
    m_listingFacetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
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
