/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FlowTimeouts.h>
#include <aws/network-firewall/model/StreamExceptionPolicyV2.h>

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
 * <p>Configuration settings for the handling of stateful traffic in a Next
 * Generation policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatefulEngineOptionsV2">AWS
 * API Reference</a></p>
 */
class StatefulEngineOptionsV2 {
 public:
  AWS_NETWORKFIREWALL_API StatefulEngineOptionsV2() = default;
  AWS_NETWORKFIREWALL_API StatefulEngineOptionsV2(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API StatefulEngineOptionsV2& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>How Network Firewall handles traffic on a network connection that breaks
   * midstream. A Next Generation policy supports <code>DROP</code> and
   * <code>REJECT</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/stream-exception-policy.html">Stream
   * exception policy options in your firewall policy</a> in the <i>Network Firewall
   * Developer Guide</i>.</p>
   */
  inline StreamExceptionPolicyV2 GetStreamExceptionPolicy() const { return m_streamExceptionPolicy; }
  inline bool StreamExceptionPolicyHasBeenSet() const { return m_streamExceptionPolicyHasBeenSet; }
  inline void SetStreamExceptionPolicy(StreamExceptionPolicyV2 value) {
    m_streamExceptionPolicyHasBeenSet = true;
    m_streamExceptionPolicy = value;
  }
  inline StatefulEngineOptionsV2& WithStreamExceptionPolicy(StreamExceptionPolicyV2 value) {
    SetStreamExceptionPolicy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time that can pass without any traffic sent through the
   * firewall before the firewall determines that the connection is idle.</p>
   */
  inline const FlowTimeouts& GetFlowTimeouts() const { return m_flowTimeouts; }
  inline bool FlowTimeoutsHasBeenSet() const { return m_flowTimeoutsHasBeenSet; }
  template <typename FlowTimeoutsT = FlowTimeouts>
  void SetFlowTimeouts(FlowTimeoutsT&& value) {
    m_flowTimeoutsHasBeenSet = true;
    m_flowTimeouts = std::forward<FlowTimeoutsT>(value);
  }
  template <typename FlowTimeoutsT = FlowTimeouts>
  StatefulEngineOptionsV2& WithFlowTimeouts(FlowTimeoutsT&& value) {
    SetFlowTimeouts(std::forward<FlowTimeoutsT>(value));
    return *this;
  }
  ///@}
 private:
  StreamExceptionPolicyV2 m_streamExceptionPolicy{StreamExceptionPolicyV2::NOT_SET};

  FlowTimeouts m_flowTimeouts;
  bool m_streamExceptionPolicyHasBeenSet = false;
  bool m_flowTimeoutsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
