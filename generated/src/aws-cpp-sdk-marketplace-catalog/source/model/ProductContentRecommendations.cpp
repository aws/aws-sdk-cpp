/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ProductContentRecommendations.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ProductContentRecommendations::ProductContentRecommendations(JsonView jsonValue) { *this = jsonValue; }

ProductContentRecommendations& ProductContentRecommendations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProductTitle")) {
    m_productTitle = jsonValue.GetObject("ProductTitle");
    m_productTitleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShortDescription")) {
    m_shortDescription = jsonValue.GetObject("ShortDescription");
    m_shortDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LongDescription")) {
    m_longDescription = jsonValue.GetObject("LongDescription");
    m_longDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportDescription")) {
    m_supportDescription = jsonValue.GetObject("SupportDescription");
    m_supportDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Highlights")) {
    m_highlights = jsonValue.GetObject("Highlights");
    m_highlightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SearchKeywords")) {
    m_searchKeywords = jsonValue.GetObject("SearchKeywords");
    m_searchKeywordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Categories")) {
    m_categories = jsonValue.GetObject("Categories");
    m_categoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalResources")) {
    m_additionalResources = jsonValue.GetObject("AdditionalResources");
    m_additionalResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Citations")) {
    Aws::Utils::Array<JsonView> citationsJsonList = jsonValue.GetArray("Citations");
    for (unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex) {
      m_citations.push_back(citationsJsonList[citationsIndex].AsObject());
    }
    m_citationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductContentRecommendations::Jsonize() const {
  JsonValue payload;

  if (m_productTitleHasBeenSet) {
    payload.WithObject("ProductTitle", m_productTitle.Jsonize());
  }

  if (m_shortDescriptionHasBeenSet) {
    payload.WithObject("ShortDescription", m_shortDescription.Jsonize());
  }

  if (m_longDescriptionHasBeenSet) {
    payload.WithObject("LongDescription", m_longDescription.Jsonize());
  }

  if (m_supportDescriptionHasBeenSet) {
    payload.WithObject("SupportDescription", m_supportDescription.Jsonize());
  }

  if (m_highlightsHasBeenSet) {
    payload.WithObject("Highlights", m_highlights.Jsonize());
  }

  if (m_searchKeywordsHasBeenSet) {
    payload.WithObject("SearchKeywords", m_searchKeywords.Jsonize());
  }

  if (m_categoriesHasBeenSet) {
    payload.WithObject("Categories", m_categories.Jsonize());
  }

  if (m_additionalResourcesHasBeenSet) {
    payload.WithObject("AdditionalResources", m_additionalResources.Jsonize());
  }

  if (m_citationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> citationsJsonList(m_citations.size());
    for (unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex) {
      citationsJsonList[citationsIndex].AsObject(m_citations[citationsIndex].Jsonize());
    }
    payload.WithArray("Citations", std::move(citationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
