/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-web/model/WebContentFilteringPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {

WebContentFilteringPolicy::WebContentFilteringPolicy(JsonView jsonValue) { *this = jsonValue; }

WebContentFilteringPolicy& WebContentFilteringPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("blockedCategories")) {
    Aws::Utils::Array<JsonView> blockedCategoriesJsonList = jsonValue.GetArray("blockedCategories");
    for (unsigned blockedCategoriesIndex = 0; blockedCategoriesIndex < blockedCategoriesJsonList.GetLength(); ++blockedCategoriesIndex) {
      m_blockedCategories.push_back(CategoryMapper::GetCategoryForName(blockedCategoriesJsonList[blockedCategoriesIndex].AsString()));
    }
    m_blockedCategoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedUrls")) {
    Aws::Utils::Array<JsonView> allowedUrlsJsonList = jsonValue.GetArray("allowedUrls");
    for (unsigned allowedUrlsIndex = 0; allowedUrlsIndex < allowedUrlsJsonList.GetLength(); ++allowedUrlsIndex) {
      m_allowedUrls.push_back(allowedUrlsJsonList[allowedUrlsIndex].AsString());
    }
    m_allowedUrlsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockedUrls")) {
    Aws::Utils::Array<JsonView> blockedUrlsJsonList = jsonValue.GetArray("blockedUrls");
    for (unsigned blockedUrlsIndex = 0; blockedUrlsIndex < blockedUrlsJsonList.GetLength(); ++blockedUrlsIndex) {
      m_blockedUrls.push_back(blockedUrlsJsonList[blockedUrlsIndex].AsString());
    }
    m_blockedUrlsHasBeenSet = true;
  }
  return *this;
}

JsonValue WebContentFilteringPolicy::Jsonize() const {
  JsonValue payload;

  if (m_blockedCategoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> blockedCategoriesJsonList(m_blockedCategories.size());
    for (unsigned blockedCategoriesIndex = 0; blockedCategoriesIndex < blockedCategoriesJsonList.GetLength(); ++blockedCategoriesIndex) {
      blockedCategoriesJsonList[blockedCategoriesIndex].AsString(
          CategoryMapper::GetNameForCategory(m_blockedCategories[blockedCategoriesIndex]));
    }
    payload.WithArray("blockedCategories", std::move(blockedCategoriesJsonList));
  }

  if (m_allowedUrlsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedUrlsJsonList(m_allowedUrls.size());
    for (unsigned allowedUrlsIndex = 0; allowedUrlsIndex < allowedUrlsJsonList.GetLength(); ++allowedUrlsIndex) {
      allowedUrlsJsonList[allowedUrlsIndex].AsString(m_allowedUrls[allowedUrlsIndex]);
    }
    payload.WithArray("allowedUrls", std::move(allowedUrlsJsonList));
  }

  if (m_blockedUrlsHasBeenSet) {
    Aws::Utils::Array<JsonValue> blockedUrlsJsonList(m_blockedUrls.size());
    for (unsigned blockedUrlsIndex = 0; blockedUrlsIndex < blockedUrlsJsonList.GetLength(); ++blockedUrlsIndex) {
      blockedUrlsJsonList[blockedUrlsIndex].AsString(m_blockedUrls[blockedUrlsIndex]);
    }
    payload.WithArray("blockedUrls", std::move(blockedUrlsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
