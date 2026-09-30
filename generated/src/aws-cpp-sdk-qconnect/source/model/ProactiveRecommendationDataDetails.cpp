/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ProactiveRecommendationDataDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ProactiveRecommendationDataDetails::ProactiveRecommendationDataDetails(JsonView jsonValue) { *this = jsonValue; }

ProactiveRecommendationDataDetails& ProactiveRecommendationDataDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("nextMessageToken")) {
    m_nextMessageToken = jsonValue.GetString("nextMessageToken");
    m_nextMessageTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue ProactiveRecommendationDataDetails::Jsonize() const {
  JsonValue payload;

  if (m_nextMessageTokenHasBeenSet) {
    payload.WithString("nextMessageToken", m_nextMessageToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
