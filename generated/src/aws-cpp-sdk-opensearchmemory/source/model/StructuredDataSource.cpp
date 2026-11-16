/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/StructuredDataSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

StructuredDataSource::StructuredDataSource(JsonView jsonValue) { *this = jsonValue; }

StructuredDataSource& StructuredDataSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("json")) {
    m_json = jsonValue.GetObject("json");
    m_jsonHasBeenSet = true;
  }
  return *this;
}

JsonValue StructuredDataSource::Jsonize() const {
  JsonValue payload;

  if (m_jsonHasBeenSet) {
    if (!m_json.View().IsNull()) {
      payload.WithObject("json", JsonValue(m_json.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
