/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/CollectionGroupCapacityLimits.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

CollectionGroupCapacityLimits::CollectionGroupCapacityLimits(JsonView jsonValue) { *this = jsonValue; }

CollectionGroupCapacityLimits& CollectionGroupCapacityLimits::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxIndexingCapacityInOCU")) {
    m_maxIndexingCapacityInOCU = jsonValue.GetDouble("maxIndexingCapacityInOCU");
    m_maxIndexingCapacityInOCUHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxSearchCapacityInOCU")) {
    m_maxSearchCapacityInOCU = jsonValue.GetDouble("maxSearchCapacityInOCU");
    m_maxSearchCapacityInOCUHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minIndexingCapacityInOCU")) {
    m_minIndexingCapacityInOCU = jsonValue.GetDouble("minIndexingCapacityInOCU");
    m_minIndexingCapacityInOCUHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minSearchCapacityInOCU")) {
    m_minSearchCapacityInOCU = jsonValue.GetDouble("minSearchCapacityInOCU");
    m_minSearchCapacityInOCUHasBeenSet = true;
  }
  return *this;
}

JsonValue CollectionGroupCapacityLimits::Jsonize() const {
  JsonValue payload;

  if (m_maxIndexingCapacityInOCUHasBeenSet) {
    payload.WithDouble("maxIndexingCapacityInOCU", m_maxIndexingCapacityInOCU);
  }

  if (m_maxSearchCapacityInOCUHasBeenSet) {
    payload.WithDouble("maxSearchCapacityInOCU", m_maxSearchCapacityInOCU);
  }

  if (m_minIndexingCapacityInOCUHasBeenSet) {
    payload.WithDouble("minIndexingCapacityInOCU", m_minIndexingCapacityInOCU);
  }

  if (m_minSearchCapacityInOCUHasBeenSet) {
    payload.WithDouble("minSearchCapacityInOCU", m_minSearchCapacityInOCU);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
