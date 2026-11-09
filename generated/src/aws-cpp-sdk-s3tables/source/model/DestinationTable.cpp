/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/DestinationTable.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

DestinationTable::DestinationTable(JsonView jsonValue) { *this = jsonValue; }

DestinationTable& DestinationTable::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tableBucketARN")) {
    m_tableBucketARN = jsonValue.GetString("tableBucketARN");
    m_tableBucketARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespace")) {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storageClassConfiguration")) {
    m_storageClassConfiguration = jsonValue.GetObject("storageClassConfiguration");
    m_storageClassConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("properties")) {
    m_properties = jsonValue.GetObject("properties");
    m_propertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schema")) {
    m_schema = jsonValue.GetObject("schema");
    m_schemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("icebergSortOrder")) {
    m_icebergSortOrder = jsonValue.GetObject("icebergSortOrder");
    m_icebergSortOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationTable::Jsonize() const {
  JsonValue payload;

  if (m_tableBucketARNHasBeenSet) {
    payload.WithString("tableBucketARN", m_tableBucketARN);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  if (m_storageClassConfigurationHasBeenSet) {
    payload.WithObject("storageClassConfiguration", m_storageClassConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_propertiesHasBeenSet) {
    payload.WithObject("properties", m_properties.Jsonize());
  }

  if (m_schemaHasBeenSet) {
    payload.WithObject("schema", m_schema.Jsonize());
  }

  if (m_icebergSortOrderHasBeenSet) {
    payload.WithObject("icebergSortOrder", m_icebergSortOrder.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
