/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>

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
 * <p>The network that an address in a network flow belongs to.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/Network">AWS
 * API Reference</a></p>
 */
class Network {
 public:
  AWS_NETWORKFLOWMONITOR_API Network() = default;
  AWS_NETWORKFLOWMONITOR_API Network(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API Network& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the autonomous system that the network belongs to.</p>
   */
  inline const Aws::String& GetAsName() const { return m_asName; }
  inline bool AsNameHasBeenSet() const { return m_asNameHasBeenSet; }
  template <typename AsNameT = Aws::String>
  void SetAsName(AsNameT&& value) {
    m_asNameHasBeenSet = true;
    m_asName = std::forward<AsNameT>(value);
  }
  template <typename AsNameT = Aws::String>
  Network& WithAsName(AsNameT&& value) {
    SetAsName(std::forward<AsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The autonomous system number (ASN) of the autonomous system that the network
   * belongs to.</p>
   */
  inline long long GetAsNumber() const { return m_asNumber; }
  inline bool AsNumberHasBeenSet() const { return m_asNumberHasBeenSet; }
  inline void SetAsNumber(long long value) {
    m_asNumberHasBeenSet = true;
    m_asNumber = value;
  }
  inline Network& WithAsNumber(long long value) {
    SetAsNumber(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_asName;

  long long m_asNumber{0};
  bool m_asNameHasBeenSet = false;
  bool m_asNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
