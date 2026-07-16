/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/MigrationSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

MigrationSource::MigrationSource(JsonView jsonValue) { *this = jsonValue; }

MigrationSource& MigrationSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("datasourceArn")) {
    m_datasourceArn = jsonValue.GetString("datasourceArn");
    m_datasourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationSource::Jsonize() const {
  JsonValue payload;

  if (m_datasourceArnHasBeenSet) {
    payload.WithString("datasourceArn", m_datasourceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
