/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/AdsPersonalizationTimeouts.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

AdsPersonalizationTimeouts::AdsPersonalizationTimeouts(JsonView jsonValue) { *this = jsonValue; }

AdsPersonalizationTimeouts& AdsPersonalizationTimeouts::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AdsRequestTimeoutMilliseconds")) {
    m_adsRequestTimeoutMilliseconds = jsonValue.GetInteger("AdsRequestTimeoutMilliseconds");
    m_adsRequestTimeoutMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LiveMaximumAdsPersonalizationTimeMilliseconds")) {
    m_liveMaximumAdsPersonalizationTimeMilliseconds = jsonValue.GetInteger("LiveMaximumAdsPersonalizationTimeMilliseconds");
    m_liveMaximumAdsPersonalizationTimeMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VodMaximumAdsPersonalizationTimeMilliseconds")) {
    m_vodMaximumAdsPersonalizationTimeMilliseconds = jsonValue.GetInteger("VodMaximumAdsPersonalizationTimeMilliseconds");
    m_vodMaximumAdsPersonalizationTimeMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrefetchAdsRequestTimeoutMilliseconds")) {
    m_prefetchAdsRequestTimeoutMilliseconds = jsonValue.GetInteger("PrefetchAdsRequestTimeoutMilliseconds");
    m_prefetchAdsRequestTimeoutMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrefetchMaximumAdsPersonalizationTimeMilliseconds")) {
    m_prefetchMaximumAdsPersonalizationTimeMilliseconds = jsonValue.GetInteger("PrefetchMaximumAdsPersonalizationTimeMilliseconds");
    m_prefetchMaximumAdsPersonalizationTimeMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue AdsPersonalizationTimeouts::Jsonize() const {
  JsonValue payload;

  if (m_adsRequestTimeoutMillisecondsHasBeenSet) {
    payload.WithInteger("AdsRequestTimeoutMilliseconds", m_adsRequestTimeoutMilliseconds);
  }

  if (m_liveMaximumAdsPersonalizationTimeMillisecondsHasBeenSet) {
    payload.WithInteger("LiveMaximumAdsPersonalizationTimeMilliseconds", m_liveMaximumAdsPersonalizationTimeMilliseconds);
  }

  if (m_vodMaximumAdsPersonalizationTimeMillisecondsHasBeenSet) {
    payload.WithInteger("VodMaximumAdsPersonalizationTimeMilliseconds", m_vodMaximumAdsPersonalizationTimeMilliseconds);
  }

  if (m_prefetchAdsRequestTimeoutMillisecondsHasBeenSet) {
    payload.WithInteger("PrefetchAdsRequestTimeoutMilliseconds", m_prefetchAdsRequestTimeoutMilliseconds);
  }

  if (m_prefetchMaximumAdsPersonalizationTimeMillisecondsHasBeenSet) {
    payload.WithInteger("PrefetchMaximumAdsPersonalizationTimeMilliseconds", m_prefetchMaximumAdsPersonalizationTimeMilliseconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
