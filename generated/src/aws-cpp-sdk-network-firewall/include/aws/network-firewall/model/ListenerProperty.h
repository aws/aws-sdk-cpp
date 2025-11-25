/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ListenerPropertyType.h>

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
 * <p>Open port for taking HTTP or HTTPS traffic. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListenerProperty">AWS
 * API Reference</a></p>
 */
class ListenerProperty {
 public:
  AWS_NETWORKFIREWALL_API ListenerProperty() = default;
  AWS_NETWORKFIREWALL_API ListenerProperty(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ListenerProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Port for processing traffic.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline ListenerProperty& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Selection of HTTP or HTTPS traffic.</p>
   */
  inline ListenerPropertyType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ListenerPropertyType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ListenerProperty& WithType(ListenerPropertyType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  int m_port{0};
  bool m_portHasBeenSet = false;

  ListenerPropertyType m_type{ListenerPropertyType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
