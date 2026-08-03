/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ListenerProperty.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>The listener configuration for a proxy mode firewall. This specifies the
 * ports and protocols on which the firewall's proxy listens for traffic.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxySettings">AWS
 * API Reference</a></p>
 */
class ProxySettings {
 public:
  AWS_NETWORKFIREWALL_API ProxySettings() = default;
  AWS_NETWORKFIREWALL_API ProxySettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ProxySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Listener properties for HTTP and HTTPS traffic. </p>
   */
  inline const Aws::Vector<ListenerProperty>& GetListenerProperties() const { return m_listenerProperties; }
  inline bool ListenerPropertiesHasBeenSet() const { return m_listenerPropertiesHasBeenSet; }
  template <typename ListenerPropertiesT = Aws::Vector<ListenerProperty>>
  void SetListenerProperties(ListenerPropertiesT&& value) {
    m_listenerPropertiesHasBeenSet = true;
    m_listenerProperties = std::forward<ListenerPropertiesT>(value);
  }
  template <typename ListenerPropertiesT = Aws::Vector<ListenerProperty>>
  ProxySettings& WithListenerProperties(ListenerPropertiesT&& value) {
    SetListenerProperties(std::forward<ListenerPropertiesT>(value));
    return *this;
  }
  template <typename ListenerPropertiesT = ListenerProperty>
  ProxySettings& AddListenerProperties(ListenerPropertiesT&& value) {
    m_listenerPropertiesHasBeenSet = true;
    m_listenerProperties.emplace_back(std::forward<ListenerPropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ListenerProperty> m_listenerProperties;
  bool m_listenerPropertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
