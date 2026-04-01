/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/InsightTimeRange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

InsightTimeRange::InsightTimeRange(JsonView jsonValue) { *this = jsonValue; }

InsightTimeRange& InsightTimeRange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("From")) {
    m_from = jsonValue.GetInt64("From");
    m_fromHasBeenSet = true;
  }
  if (jsonValue.ValueExists("To")) {
    m_to = jsonValue.GetInt64("To");
    m_toHasBeenSet = true;
  }
  return *this;
}

JsonValue InsightTimeRange::Jsonize() const {
  JsonValue payload;

  if (m_fromHasBeenSet) {
    payload.WithInt64("From", m_from);
  }

  if (m_toHasBeenSet) {
    payload.WithInt64("To", m_to);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
