/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ProfileRecommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ProfileRecommendation::ProfileRecommendation(JsonView jsonValue) { *this = jsonValue; }

ProfileRecommendation& ProfileRecommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("score")) {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalogItem")) {
    m_catalogItem = jsonValue.GetObject("catalogItem");
    m_catalogItemHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileRecommendation::Jsonize() const {
  JsonValue payload;

  if (m_scoreHasBeenSet) {
    payload.WithDouble("score", m_score);
  }

  if (m_catalogItemHasBeenSet) {
    payload.WithObject("catalogItem", m_catalogItem.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
