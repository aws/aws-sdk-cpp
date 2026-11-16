/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/model/MetadataConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Vectors {
namespace Model {

MetadataConfiguration::MetadataConfiguration(JsonView jsonValue) { *this = jsonValue; }

MetadataConfiguration& MetadataConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("nonFilterableMetadataKeys")) {
    Aws::Utils::Array<JsonView> nonFilterableMetadataKeysJsonList = jsonValue.GetArray("nonFilterableMetadataKeys");
    for (unsigned nonFilterableMetadataKeysIndex = 0; nonFilterableMetadataKeysIndex < nonFilterableMetadataKeysJsonList.GetLength();
         ++nonFilterableMetadataKeysIndex) {
      m_nonFilterableMetadataKeys.push_back(nonFilterableMetadataKeysJsonList[nonFilterableMetadataKeysIndex].AsString());
    }
    m_nonFilterableMetadataKeysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("textSearchConfigurations")) {
    Aws::Utils::Array<JsonView> textSearchConfigurationsJsonList = jsonValue.GetArray("textSearchConfigurations");
    for (unsigned textSearchConfigurationsIndex = 0; textSearchConfigurationsIndex < textSearchConfigurationsJsonList.GetLength();
         ++textSearchConfigurationsIndex) {
      m_textSearchConfigurations.push_back(textSearchConfigurationsJsonList[textSearchConfigurationsIndex].AsObject());
    }
    m_textSearchConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_nonFilterableMetadataKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> nonFilterableMetadataKeysJsonList(m_nonFilterableMetadataKeys.size());
    for (unsigned nonFilterableMetadataKeysIndex = 0; nonFilterableMetadataKeysIndex < nonFilterableMetadataKeysJsonList.GetLength();
         ++nonFilterableMetadataKeysIndex) {
      nonFilterableMetadataKeysJsonList[nonFilterableMetadataKeysIndex].AsString(
          m_nonFilterableMetadataKeys[nonFilterableMetadataKeysIndex]);
    }
    payload.WithArray("nonFilterableMetadataKeys", std::move(nonFilterableMetadataKeysJsonList));
  }

  if (m_textSearchConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> textSearchConfigurationsJsonList(m_textSearchConfigurations.size());
    for (unsigned textSearchConfigurationsIndex = 0; textSearchConfigurationsIndex < textSearchConfigurationsJsonList.GetLength();
         ++textSearchConfigurationsIndex) {
      textSearchConfigurationsJsonList[textSearchConfigurationsIndex].AsObject(
          m_textSearchConfigurations[textSearchConfigurationsIndex].Jsonize());
    }
    payload.WithArray("textSearchConfigurations", std::move(textSearchConfigurationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
