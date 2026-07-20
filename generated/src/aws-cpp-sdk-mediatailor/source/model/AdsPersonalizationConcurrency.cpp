/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/AdsPersonalizationConcurrency.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

AdsPersonalizationConcurrency::AdsPersonalizationConcurrency(JsonView jsonValue) { *this = jsonValue; }

AdsPersonalizationConcurrency& AdsPersonalizationConcurrency::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxConcurrentAdsRequests")) {
    m_maxConcurrentAdsRequests = jsonValue.GetInteger("MaxConcurrentAdsRequests");
    m_maxConcurrentAdsRequestsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnableVodVastParallelization")) {
    m_enableVodVastParallelization = jsonValue.GetBool("EnableVodVastParallelization");
    m_enableVodVastParallelizationHasBeenSet = true;
  }
  return *this;
}

JsonValue AdsPersonalizationConcurrency::Jsonize() const {
  JsonValue payload;

  if (m_maxConcurrentAdsRequestsHasBeenSet) {
    payload.WithInteger("MaxConcurrentAdsRequests", m_maxConcurrentAdsRequests);
  }

  if (m_enableVodVastParallelizationHasBeenSet) {
    payload.WithBool("EnableVodVastParallelization", m_enableVodVastParallelization);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
