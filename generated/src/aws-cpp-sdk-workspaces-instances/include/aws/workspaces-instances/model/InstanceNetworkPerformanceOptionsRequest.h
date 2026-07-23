/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/BandwidthWeightingEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkspacesInstances {
namespace Model {

/**
 * <p>Configures network performance settings for WorkSpace Instance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/InstanceNetworkPerformanceOptionsRequest">AWS
 * API Reference</a></p>
 */
class InstanceNetworkPerformanceOptionsRequest {
 public:
  AWS_WORKSPACESINSTANCES_API InstanceNetworkPerformanceOptionsRequest() = default;
  AWS_WORKSPACESINSTANCES_API InstanceNetworkPerformanceOptionsRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API InstanceNetworkPerformanceOptionsRequest& operator=(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Defines bandwidth allocation strategy for network interfaces.</p>
   */
  inline BandwidthWeightingEnum GetBandwidthWeighting() const { return m_bandwidthWeighting; }
  inline bool BandwidthWeightingHasBeenSet() const { return m_bandwidthWeightingHasBeenSet; }
  inline void SetBandwidthWeighting(BandwidthWeightingEnum value) {
    m_bandwidthWeightingHasBeenSet = true;
    m_bandwidthWeighting = value;
  }
  inline InstanceNetworkPerformanceOptionsRequest& WithBandwidthWeighting(BandwidthWeightingEnum value) {
    SetBandwidthWeighting(value);
    return *this;
  }
  ///@}
 private:
  BandwidthWeightingEnum m_bandwidthWeighting{BandwidthWeightingEnum::NOT_SET};
  bool m_bandwidthWeightingHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
