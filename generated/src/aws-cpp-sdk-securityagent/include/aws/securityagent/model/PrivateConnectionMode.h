/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/SelfManagedInput.h>
#include <aws/securityagent/model/ServiceManagedInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>The configuration for a private connection. Specify either a service-managed
 * or a self-managed mode.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/PrivateConnectionMode">AWS
 * API Reference</a></p>
 */
class PrivateConnectionMode {
 public:
  AWS_SECURITYAGENT_API PrivateConnectionMode() = default;
  AWS_SECURITYAGENT_API PrivateConnectionMode(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API PrivateConnectionMode& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a service-managed private connection, where the service
   * manages the resource gateway lifecycle.</p>
   */
  inline const ServiceManagedInput& GetServiceManaged() const { return m_serviceManaged; }
  inline bool ServiceManagedHasBeenSet() const { return m_serviceManagedHasBeenSet; }
  template <typename ServiceManagedT = ServiceManagedInput>
  void SetServiceManaged(ServiceManagedT&& value) {
    m_serviceManagedHasBeenSet = true;
    m_serviceManaged = std::forward<ServiceManagedT>(value);
  }
  template <typename ServiceManagedT = ServiceManagedInput>
  PrivateConnectionMode& WithServiceManaged(ServiceManagedT&& value) {
    SetServiceManaged(std::forward<ServiceManagedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a self-managed private connection, where you manage
   * your own resource configuration.</p>
   */
  inline const SelfManagedInput& GetSelfManaged() const { return m_selfManaged; }
  inline bool SelfManagedHasBeenSet() const { return m_selfManagedHasBeenSet; }
  template <typename SelfManagedT = SelfManagedInput>
  void SetSelfManaged(SelfManagedT&& value) {
    m_selfManagedHasBeenSet = true;
    m_selfManaged = std::forward<SelfManagedT>(value);
  }
  template <typename SelfManagedT = SelfManagedInput>
  PrivateConnectionMode& WithSelfManaged(SelfManagedT&& value) {
    SetSelfManaged(std::forward<SelfManagedT>(value));
    return *this;
  }
  ///@}
 private:
  ServiceManagedInput m_serviceManaged;

  SelfManagedInput m_selfManaged;
  bool m_serviceManagedHasBeenSet = false;
  bool m_selfManagedHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
