/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>

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
 * <p>Identifies a specific capacity reservation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/CapacityReservationTarget">AWS
 * API Reference</a></p>
 */
class CapacityReservationTarget {
 public:
  AWS_WORKSPACESINSTANCES_API CapacityReservationTarget() = default;
  AWS_WORKSPACESINSTANCES_API CapacityReservationTarget(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API CapacityReservationTarget& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Unique identifier for the capacity reservation.</p>
   */
  inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
  inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
  template <typename CapacityReservationIdT = Aws::String>
  void SetCapacityReservationId(CapacityReservationIdT&& value) {
    m_capacityReservationIdHasBeenSet = true;
    m_capacityReservationId = std::forward<CapacityReservationIdT>(value);
  }
  template <typename CapacityReservationIdT = Aws::String>
  CapacityReservationTarget& WithCapacityReservationId(CapacityReservationIdT&& value) {
    SetCapacityReservationId(std::forward<CapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN of the capacity reservation resource group.</p>
   */
  inline const Aws::String& GetCapacityReservationResourceGroupArn() const { return m_capacityReservationResourceGroupArn; }
  inline bool CapacityReservationResourceGroupArnHasBeenSet() const { return m_capacityReservationResourceGroupArnHasBeenSet; }
  template <typename CapacityReservationResourceGroupArnT = Aws::String>
  void SetCapacityReservationResourceGroupArn(CapacityReservationResourceGroupArnT&& value) {
    m_capacityReservationResourceGroupArnHasBeenSet = true;
    m_capacityReservationResourceGroupArn = std::forward<CapacityReservationResourceGroupArnT>(value);
  }
  template <typename CapacityReservationResourceGroupArnT = Aws::String>
  CapacityReservationTarget& WithCapacityReservationResourceGroupArn(CapacityReservationResourceGroupArnT&& value) {
    SetCapacityReservationResourceGroupArn(std::forward<CapacityReservationResourceGroupArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityReservationId;

  Aws::String m_capacityReservationResourceGroupArn;
  bool m_capacityReservationIdHasBeenSet = false;
  bool m_capacityReservationResourceGroupArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
