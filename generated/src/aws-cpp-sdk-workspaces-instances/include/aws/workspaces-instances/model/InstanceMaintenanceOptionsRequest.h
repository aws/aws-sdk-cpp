/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/AutoRecoveryEnum.h>

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
 * <p>Configures automatic maintenance settings for WorkSpace
 * Instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/InstanceMaintenanceOptionsRequest">AWS
 * API Reference</a></p>
 */
class InstanceMaintenanceOptionsRequest {
 public:
  AWS_WORKSPACESINSTANCES_API InstanceMaintenanceOptionsRequest() = default;
  AWS_WORKSPACESINSTANCES_API InstanceMaintenanceOptionsRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API InstanceMaintenanceOptionsRequest& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Enables or disables automatic instance recovery.</p>
   */
  inline AutoRecoveryEnum GetAutoRecovery() const { return m_autoRecovery; }
  inline bool AutoRecoveryHasBeenSet() const { return m_autoRecoveryHasBeenSet; }
  inline void SetAutoRecovery(AutoRecoveryEnum value) {
    m_autoRecoveryHasBeenSet = true;
    m_autoRecovery = value;
  }
  inline InstanceMaintenanceOptionsRequest& WithAutoRecovery(AutoRecoveryEnum value) {
    SetAutoRecovery(value);
    return *this;
  }
  ///@}
 private:
  AutoRecoveryEnum m_autoRecovery{AutoRecoveryEnum::NOT_SET};
  bool m_autoRecoveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
