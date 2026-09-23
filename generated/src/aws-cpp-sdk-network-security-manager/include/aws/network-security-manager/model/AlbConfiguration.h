/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/IpAddressType.h>
#include <aws/network-security-manager/model/Scheme.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {

/**
 * <p>Filter criteria specific to Application Load Balancers.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/AlbConfiguration">AWS
 * API Reference</a></p>
 */
class AlbConfiguration {
 public:
  AWS_NETWORKSECURITYMANAGER_API AlbConfiguration() = default;
  AWS_NETWORKSECURITYMANAGER_API AlbConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API AlbConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scheme of the Application Load Balancer, either
   * <code>internet-facing</code> or <code>internal</code>.</p>
   */
  inline Scheme GetScheme() const { return m_scheme; }
  inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
  inline void SetScheme(Scheme value) {
    m_schemeHasBeenSet = true;
    m_scheme = value;
  }
  inline AlbConfiguration& WithScheme(Scheme value) {
    SetScheme(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type of the Application Load Balancer.</p>
   */
  inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(IpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline AlbConfiguration& WithIpAddressType(IpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}
 private:
  Scheme m_scheme{Scheme::NOT_SET};

  IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
  bool m_schemeHasBeenSet = false;
  bool m_ipAddressTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
