/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/TargetNetworkTopology.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Updated configuration for the target network topology and
 * addressing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/TargetNetworkUpdate">AWS
 * API Reference</a></p>
 */
class TargetNetworkUpdate {
 public:
  AWS_MGN_API TargetNetworkUpdate() = default;
  AWS_MGN_API TargetNetworkUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API TargetNetworkUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated network topology type.</p>
   */
  inline TargetNetworkTopology GetTopology() const { return m_topology; }
  inline bool TopologyHasBeenSet() const { return m_topologyHasBeenSet; }
  inline void SetTopology(TargetNetworkTopology value) {
    m_topologyHasBeenSet = true;
    m_topology = value;
  }
  inline TargetNetworkUpdate& WithTopology(TargetNetworkTopology value) {
    SetTopology(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated CIDR block for inbound traffic.</p>
   */
  inline const Aws::String& GetInboundCidr() const { return m_inboundCidr; }
  inline bool InboundCidrHasBeenSet() const { return m_inboundCidrHasBeenSet; }
  template <typename InboundCidrT = Aws::String>
  void SetInboundCidr(InboundCidrT&& value) {
    m_inboundCidrHasBeenSet = true;
    m_inboundCidr = std::forward<InboundCidrT>(value);
  }
  template <typename InboundCidrT = Aws::String>
  TargetNetworkUpdate& WithInboundCidr(InboundCidrT&& value) {
    SetInboundCidr(std::forward<InboundCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated CIDR block for outbound traffic.</p>
   */
  inline const Aws::String& GetOutboundCidr() const { return m_outboundCidr; }
  inline bool OutboundCidrHasBeenSet() const { return m_outboundCidrHasBeenSet; }
  template <typename OutboundCidrT = Aws::String>
  void SetOutboundCidr(OutboundCidrT&& value) {
    m_outboundCidrHasBeenSet = true;
    m_outboundCidr = std::forward<OutboundCidrT>(value);
  }
  template <typename OutboundCidrT = Aws::String>
  TargetNetworkUpdate& WithOutboundCidr(OutboundCidrT&& value) {
    SetOutboundCidr(std::forward<OutboundCidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated CIDR block for inspection traffic.</p>
   */
  inline const Aws::String& GetInspectionCidr() const { return m_inspectionCidr; }
  inline bool InspectionCidrHasBeenSet() const { return m_inspectionCidrHasBeenSet; }
  template <typename InspectionCidrT = Aws::String>
  void SetInspectionCidr(InspectionCidrT&& value) {
    m_inspectionCidrHasBeenSet = true;
    m_inspectionCidr = std::forward<InspectionCidrT>(value);
  }
  template <typename InspectionCidrT = Aws::String>
  TargetNetworkUpdate& WithInspectionCidr(InspectionCidrT&& value) {
    SetInspectionCidr(std::forward<InspectionCidrT>(value));
    return *this;
  }
  ///@}
 private:
  TargetNetworkTopology m_topology{TargetNetworkTopology::NOT_SET};

  Aws::String m_inboundCidr;

  Aws::String m_outboundCidr;

  Aws::String m_inspectionCidr;
  bool m_topologyHasBeenSet = false;
  bool m_inboundCidrHasBeenSet = false;
  bool m_outboundCidrHasBeenSet = false;
  bool m_inspectionCidrHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
