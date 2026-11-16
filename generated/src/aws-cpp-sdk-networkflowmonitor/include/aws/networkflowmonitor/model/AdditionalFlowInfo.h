/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/ClientLocation.h>
#include <aws/networkflowmonitor/model/Network.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {

/**
 * <p>Additional information about a network flow, such as the network that the
 * remote address belongs to and the location of the client.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/AdditionalFlowInfo">AWS
 * API Reference</a></p>
 */
class AdditionalFlowInfo {
 public:
  AWS_NETWORKFLOWMONITOR_API AdditionalFlowInfo() = default;
  AWS_NETWORKFLOWMONITOR_API AdditionalFlowInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API AdditionalFlowInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The network that the remote address of the network flow belongs to.</p>
   */
  inline const Network& GetNetwork() const { return m_network; }
  inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
  template <typename NetworkT = Network>
  void SetNetwork(NetworkT&& value) {
    m_networkHasBeenSet = true;
    m_network = std::forward<NetworkT>(value);
  }
  template <typename NetworkT = Network>
  AdditionalFlowInfo& WithNetwork(NetworkT&& value) {
    SetNetwork(std::forward<NetworkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the client for the network flow.</p>
   */
  inline const ClientLocation& GetClientLocation() const { return m_clientLocation; }
  inline bool ClientLocationHasBeenSet() const { return m_clientLocationHasBeenSet; }
  template <typename ClientLocationT = ClientLocation>
  void SetClientLocation(ClientLocationT&& value) {
    m_clientLocationHasBeenSet = true;
    m_clientLocation = std::forward<ClientLocationT>(value);
  }
  template <typename ClientLocationT = ClientLocation>
  AdditionalFlowInfo& WithClientLocation(ClientLocationT&& value) {
    SetClientLocation(std::forward<ClientLocationT>(value));
    return *this;
  }
  ///@}
 private:
  Network m_network;

  ClientLocation m_clientLocation;
  bool m_networkHasBeenSet = false;
  bool m_clientLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
