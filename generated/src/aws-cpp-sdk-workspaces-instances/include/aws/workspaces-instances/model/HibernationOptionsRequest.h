/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkspacesInstances {
namespace Model {

/**
 * <p>Defines hibernation configuration for the WorkSpace Instance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/HibernationOptionsRequest">AWS
 * API Reference</a></p>
 */
class HibernationOptionsRequest {
 public:
  AWS_WORKSPACESINSTANCES_API HibernationOptionsRequest() = default;
  AWS_WORKSPACESINSTANCES_API HibernationOptionsRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API HibernationOptionsRequest& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Enables or disables instance hibernation capability.</p>
   */
  inline bool GetConfigured() const { return m_configured; }
  inline bool ConfiguredHasBeenSet() const { return m_configuredHasBeenSet; }
  inline void SetConfigured(bool value) {
    m_configuredHasBeenSet = true;
    m_configured = value;
  }
  inline HibernationOptionsRequest& WithConfigured(bool value) {
    SetConfigured(value);
    return *this;
  }
  ///@}
 private:
  bool m_configured{false};
  bool m_configuredHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
