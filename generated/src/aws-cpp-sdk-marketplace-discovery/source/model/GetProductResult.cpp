/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-discovery/model/GetProductResult.h>

#include <utility>

using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProductResult::GetProductResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetProductResult& GetProductResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("productId")) {
    m_productId = jsonValue.GetString("productId");
    m_productIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productName")) {
    m_productName = jsonValue.GetString("productName");
    m_productNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deployedOnAws")) {
    m_deployedOnAws = DeployedOnAwsStatusMapper::GetDeployedOnAwsStatusForName(jsonValue.GetString("deployedOnAws"));
    m_deployedOnAwsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shortDescription")) {
    m_shortDescription = jsonValue.GetString("shortDescription");
    m_shortDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("longDescription")) {
    m_longDescription = jsonValue.GetString("longDescription");
    m_longDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("manufacturer")) {
    m_manufacturer = jsonValue.GetObject("manufacturer");
    m_manufacturerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logoThumbnailUrl")) {
    m_logoThumbnailUrl = jsonValue.GetString("logoThumbnailUrl");
    m_logoThumbnailUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentOptionSummaries")) {
    Aws::Utils::Array<JsonView> fulfillmentOptionSummariesJsonList = jsonValue.GetArray("fulfillmentOptionSummaries");
    for (unsigned fulfillmentOptionSummariesIndex = 0; fulfillmentOptionSummariesIndex < fulfillmentOptionSummariesJsonList.GetLength();
         ++fulfillmentOptionSummariesIndex) {
      m_fulfillmentOptionSummaries.push_back(fulfillmentOptionSummariesJsonList[fulfillmentOptionSummariesIndex].AsObject());
    }
    m_fulfillmentOptionSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("categories")) {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("categories");
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
    m_categoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("highlights")) {
    Aws::Utils::Array<JsonView> highlightsJsonList = jsonValue.GetArray("highlights");
    for (unsigned highlightsIndex = 0; highlightsIndex < highlightsJsonList.GetLength(); ++highlightsIndex) {
      m_highlights.push_back(highlightsJsonList[highlightsIndex].AsString());
    }
    m_highlightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("promotionalMedia")) {
    Aws::Utils::Array<JsonView> promotionalMediaJsonList = jsonValue.GetArray("promotionalMedia");
    for (unsigned promotionalMediaIndex = 0; promotionalMediaIndex < promotionalMediaJsonList.GetLength(); ++promotionalMediaIndex) {
      m_promotionalMedia.push_back(promotionalMediaJsonList[promotionalMediaIndex].AsObject());
    }
    m_promotionalMediaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sellerEngagements")) {
    Aws::Utils::Array<JsonView> sellerEngagementsJsonList = jsonValue.GetArray("sellerEngagements");
    for (unsigned sellerEngagementsIndex = 0; sellerEngagementsIndex < sellerEngagementsJsonList.GetLength(); ++sellerEngagementsIndex) {
      m_sellerEngagements.push_back(sellerEngagementsJsonList[sellerEngagementsIndex].AsObject());
    }
    m_sellerEngagementsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
