/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/CurrentCapacity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

CurrentCapacity::CurrentCapacity(JsonView jsonValue) { *this = jsonValue; }

CurrentCapacity& CurrentCapacity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("search")) {
    m_search = jsonValue.GetObject("search");
    m_searchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("indexing")) {
    m_indexing = jsonValue.GetObject("indexing");
    m_indexingHasBeenSet = true;
  }
  return *this;
}

JsonValue CurrentCapacity::Jsonize() const {
  JsonValue payload;

  if (m_searchHasBeenSet) {
    payload.WithObject("search", m_search.Jsonize());
  }

  if (m_indexingHasBeenSet) {
    payload.WithObject("indexing", m_indexing.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
