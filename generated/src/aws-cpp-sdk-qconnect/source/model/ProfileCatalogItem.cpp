/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ProfileCatalogItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ProfileCatalogItem::ProfileCatalogItem(JsonView jsonValue) { *this = jsonValue; }

ProfileCatalogItem& ProfileCatalogItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("category")) {
    m_category = jsonValue.GetString("category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalInformation")) {
    m_additionalInformation = jsonValue.GetString("additionalInformation");
    m_additionalInformationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageLink")) {
    m_imageLink = jsonValue.GetString("imageLink");
    m_imageLinkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("link")) {
    m_link = jsonValue.GetString("link");
    m_linkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("price")) {
    m_price = jsonValue.GetString("price");
    m_priceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributes")) {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for (auto& attributesItem : attributesJsonMap) {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileCatalogItem::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("category", m_category);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_additionalInformationHasBeenSet) {
    payload.WithString("additionalInformation", m_additionalInformation);
  }

  if (m_imageLinkHasBeenSet) {
    payload.WithString("imageLink", m_imageLink);
  }

  if (m_linkHasBeenSet) {
    payload.WithString("link", m_link);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt);
  }

  if (m_priceHasBeenSet) {
    payload.WithString("price", m_price);
  }

  if (m_attributesHasBeenSet) {
    JsonValue attributesJsonMap;
    for (auto& attributesItem : m_attributes) {
      attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
    }
    payload.WithObject("attributes", std::move(attributesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
