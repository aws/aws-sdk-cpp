/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/CatalogConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

CatalogConfiguration::CatalogConfiguration(JsonView jsonValue) { *this = jsonValue; }

CatalogConfiguration& CatalogConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ServiceManagedS3Tables")) {
    m_serviceManagedS3Tables = jsonValue.GetObject("ServiceManagedS3Tables");
    m_serviceManagedS3TablesHasBeenSet = true;
  }
  return *this;
}

JsonValue CatalogConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_serviceManagedS3TablesHasBeenSet) {
    payload.WithObject("ServiceManagedS3Tables", m_serviceManagedS3Tables.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
