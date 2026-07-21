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
 * <p>The concurrency settings for ad decision server interactions during ad
 * personalization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AdsPersonalizationConcurrency">AWS
 * API Reference</a></p>
 */
class AdsPersonalizationConcurrency {
 public:
  AWS_MEDIATAILOR_API AdsPersonalizationConcurrency() = default;
  AWS_MEDIATAILOR_API AdsPersonalizationConcurrency(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API AdsPersonalizationConcurrency& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of simultaneous requests that MediaTailor makes to the ad
   * decision server per manifest request. The default is 1.</p>
   */
  inline int GetMaxConcurrentAdsRequests() const { return m_maxConcurrentAdsRequests; }
  inline bool MaxConcurrentAdsRequestsHasBeenSet() const { return m_maxConcurrentAdsRequestsHasBeenSet; }
  inline void SetMaxConcurrentAdsRequests(int value) {
    m_maxConcurrentAdsRequestsHasBeenSet = true;
    m_maxConcurrentAdsRequests = value;
  }
  inline AdsPersonalizationConcurrency& WithMaxConcurrentAdsRequests(int value) {
    SetMaxConcurrentAdsRequests(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables parallel processing of ad decision server requests in VOD workflows
   * when the ADS returns VAST responses. The default is false.</p>
   */
  inline bool GetEnableVodVastParallelization() const { return m_enableVodVastParallelization; }
  inline bool EnableVodVastParallelizationHasBeenSet() const { return m_enableVodVastParallelizationHasBeenSet; }
  inline void SetEnableVodVastParallelization(bool value) {
    m_enableVodVastParallelizationHasBeenSet = true;
    m_enableVodVastParallelization = value;
  }
  inline AdsPersonalizationConcurrency& WithEnableVodVastParallelization(bool value) {
    SetEnableVodVastParallelization(value);
    return *this;
  }
  ///@}
 private:
  int m_maxConcurrentAdsRequests{0};

  bool m_enableVodVastParallelization{false};
  bool m_maxConcurrentAdsRequestsHasBeenSet = false;
  bool m_enableVodVastParallelizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
