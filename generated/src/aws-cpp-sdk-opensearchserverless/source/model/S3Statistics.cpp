/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/S3Statistics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

S3Statistics::S3Statistics(JsonView jsonValue) { *this = jsonValue; }

S3Statistics& S3Statistics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("objectsDiscovered")) {
    m_objectsDiscovered = jsonValue.GetInt64("objectsDiscovered");
    m_objectsDiscoveredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objectsIngested")) {
    m_objectsIngested = jsonValue.GetInt64("objectsIngested");
    m_objectsIngestedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objectsFailed")) {
    m_objectsFailed = jsonValue.GetInt64("objectsFailed");
    m_objectsFailedHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Statistics::Jsonize() const {
  JsonValue payload;

  if (m_objectsDiscoveredHasBeenSet) {
    payload.WithInt64("objectsDiscovered", m_objectsDiscovered);
  }

  if (m_objectsIngestedHasBeenSet) {
    payload.WithInt64("objectsIngested", m_objectsIngested);
  }

  if (m_objectsFailedHasBeenSet) {
    payload.WithInt64("objectsFailed", m_objectsFailed);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
