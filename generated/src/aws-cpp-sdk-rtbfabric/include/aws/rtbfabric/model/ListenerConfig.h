/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/Protocol.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Listener configuration for the protocols (HTTP, HTTPS, or both) accepted by
 * the gateway.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ListenerConfig">AWS
 * API Reference</a></p>
 */
class ListenerConfig {
 public:
  AWS_RTBFABRIC_API ListenerConfig() = default;
  AWS_RTBFABRIC_API ListenerConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API ListenerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The protocol for connections from clients to the gateway</p>
   */
  inline const Aws::Vector<Protocol>& GetProtocols() const { return m_protocols; }
  inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
  template <typename ProtocolsT = Aws::Vector<Protocol>>
  void SetProtocols(ProtocolsT&& value) {
    m_protocolsHasBeenSet = true;
    m_protocols = std::forward<ProtocolsT>(value);
  }
  template <typename ProtocolsT = Aws::Vector<Protocol>>
  ListenerConfig& WithProtocols(ProtocolsT&& value) {
    SetProtocols(std::forward<ProtocolsT>(value));
    return *this;
  }
  inline ListenerConfig& AddProtocols(Protocol value) {
    m_protocolsHasBeenSet = true;
    m_protocols.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Protocol> m_protocols;
  bool m_protocolsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
