/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>The timeout settings for ad decision server interactions during ad
 * personalization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AdsPersonalizationTimeouts">AWS
 * API Reference</a></p>
 */
class AdsPersonalizationTimeouts {
 public:
  AWS_MEDIATAILOR_API AdsPersonalizationTimeouts() = default;
  AWS_MEDIATAILOR_API AdsPersonalizationTimeouts(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API AdsPersonalizationTimeouts& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum time, in milliseconds, that MediaTailor waits for a single ad
   * decision server response during live or VOD playback. The default is 3000.</p>
   */
  inline int GetAdsRequestTimeoutMilliseconds() const { return m_adsRequestTimeoutMilliseconds; }
  inline bool AdsRequestTimeoutMillisecondsHasBeenSet() const { return m_adsRequestTimeoutMillisecondsHasBeenSet; }
  inline void SetAdsRequestTimeoutMilliseconds(int value) {
    m_adsRequestTimeoutMillisecondsHasBeenSet = true;
    m_adsRequestTimeoutMilliseconds = value;
  }
  inline AdsPersonalizationTimeouts& WithAdsRequestTimeoutMilliseconds(int value) {
    SetAdsRequestTimeoutMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum total time, in milliseconds, that MediaTailor spends on ad
   * decision server activity for live manifests, including making requests, waiting
   * for responses, and following VAST wrapper redirects. The default is 10000.</p>
   */
  inline int GetLiveMaximumAdsPersonalizationTimeMilliseconds() const { return m_liveMaximumAdsPersonalizationTimeMilliseconds; }
  inline bool LiveMaximumAdsPersonalizationTimeMillisecondsHasBeenSet() const {
    return m_liveMaximumAdsPersonalizationTimeMillisecondsHasBeenSet;
  }
  inline void SetLiveMaximumAdsPersonalizationTimeMilliseconds(int value) {
    m_liveMaximumAdsPersonalizationTimeMillisecondsHasBeenSet = true;
    m_liveMaximumAdsPersonalizationTimeMilliseconds = value;
  }
  inline AdsPersonalizationTimeouts& WithLiveMaximumAdsPersonalizationTimeMilliseconds(int value) {
    SetLiveMaximumAdsPersonalizationTimeMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum total time, in milliseconds, that MediaTailor spends on ad
   * decision server activity for VOD manifests, including making requests, waiting
   * for responses, and following VAST wrapper redirects. The default is 10000.</p>
   */
  inline int GetVodMaximumAdsPersonalizationTimeMilliseconds() const { return m_vodMaximumAdsPersonalizationTimeMilliseconds; }
  inline bool VodMaximumAdsPersonalizationTimeMillisecondsHasBeenSet() const {
    return m_vodMaximumAdsPersonalizationTimeMillisecondsHasBeenSet;
  }
  inline void SetVodMaximumAdsPersonalizationTimeMilliseconds(int value) {
    m_vodMaximumAdsPersonalizationTimeMillisecondsHasBeenSet = true;
    m_vodMaximumAdsPersonalizationTimeMilliseconds = value;
  }
  inline AdsPersonalizationTimeouts& WithVodMaximumAdsPersonalizationTimeMilliseconds(int value) {
    SetVodMaximumAdsPersonalizationTimeMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in milliseconds, that MediaTailor waits for a single ad
   * decision server response during prefetch retrieval. If not set, the value of
   * AdsRequestTimeoutMilliseconds is used.</p>
   */
  inline int GetPrefetchAdsRequestTimeoutMilliseconds() const { return m_prefetchAdsRequestTimeoutMilliseconds; }
  inline bool PrefetchAdsRequestTimeoutMillisecondsHasBeenSet() const { return m_prefetchAdsRequestTimeoutMillisecondsHasBeenSet; }
  inline void SetPrefetchAdsRequestTimeoutMilliseconds(int value) {
    m_prefetchAdsRequestTimeoutMillisecondsHasBeenSet = true;
    m_prefetchAdsRequestTimeoutMilliseconds = value;
  }
  inline AdsPersonalizationTimeouts& WithPrefetchAdsRequestTimeoutMilliseconds(int value) {
    SetPrefetchAdsRequestTimeoutMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum total time, in milliseconds, that MediaTailor spends on ad
   * decision server activity during prefetch retrieval, including making requests,
   * waiting for responses, and following VAST wrapper redirects.</p>
   */
  inline int GetPrefetchMaximumAdsPersonalizationTimeMilliseconds() const { return m_prefetchMaximumAdsPersonalizationTimeMilliseconds; }
  inline bool PrefetchMaximumAdsPersonalizationTimeMillisecondsHasBeenSet() const {
    return m_prefetchMaximumAdsPersonalizationTimeMillisecondsHasBeenSet;
  }
  inline void SetPrefetchMaximumAdsPersonalizationTimeMilliseconds(int value) {
    m_prefetchMaximumAdsPersonalizationTimeMillisecondsHasBeenSet = true;
    m_prefetchMaximumAdsPersonalizationTimeMilliseconds = value;
  }
  inline AdsPersonalizationTimeouts& WithPrefetchMaximumAdsPersonalizationTimeMilliseconds(int value) {
    SetPrefetchMaximumAdsPersonalizationTimeMilliseconds(value);
    return *this;
  }
  ///@}
 private:
  int m_adsRequestTimeoutMilliseconds{0};

  int m_liveMaximumAdsPersonalizationTimeMilliseconds{0};

  int m_vodMaximumAdsPersonalizationTimeMilliseconds{0};

  int m_prefetchAdsRequestTimeoutMilliseconds{0};

  int m_prefetchMaximumAdsPersonalizationTimeMilliseconds{0};
  bool m_adsRequestTimeoutMillisecondsHasBeenSet = false;
  bool m_liveMaximumAdsPersonalizationTimeMillisecondsHasBeenSet = false;
  bool m_vodMaximumAdsPersonalizationTimeMillisecondsHasBeenSet = false;
  bool m_prefetchAdsRequestTimeoutMillisecondsHasBeenSet = false;
  bool m_prefetchMaximumAdsPersonalizationTimeMillisecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
