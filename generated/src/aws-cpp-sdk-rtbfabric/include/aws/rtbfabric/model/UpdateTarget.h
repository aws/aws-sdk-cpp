/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/LinkTarget.h>
#include <aws/rtbfabric/model/RoutingRuleTarget.h>
#include <aws/rtbfabric/model/Unit.h>

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
 * <p>What an update targeted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/UpdateTarget">AWS
 * API Reference</a></p>
 */
class UpdateTarget {
 public:
  AWS_RTBFABRIC_API UpdateTarget() = default;
  AWS_RTBFABRIC_API UpdateTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API UpdateTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The gateway itself.</p>
   */
  inline const Unit& GetGateway() const { return m_gateway; }
  inline bool GatewayHasBeenSet() const { return m_gatewayHasBeenSet; }
  template <typename GatewayT = Unit>
  void SetGateway(GatewayT&& value) {
    m_gatewayHasBeenSet = true;
    m_gateway = std::forward<GatewayT>(value);
  }
  template <typename GatewayT = Unit>
  UpdateTarget& WithGateway(GatewayT&& value) {
    SetGateway(std::forward<GatewayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A link on the gateway.</p>
   */
  inline const LinkTarget& GetLink() const { return m_link; }
  inline bool LinkHasBeenSet() const { return m_linkHasBeenSet; }
  template <typename LinkT = LinkTarget>
  void SetLink(LinkT&& value) {
    m_linkHasBeenSet = true;
    m_link = std::forward<LinkT>(value);
  }
  template <typename LinkT = LinkTarget>
  UpdateTarget& WithLink(LinkT&& value) {
    SetLink(std::forward<LinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A routing rule on one of the gateway's links.</p>
   */
  inline const RoutingRuleTarget& GetRoutingRule() const { return m_routingRule; }
  inline bool RoutingRuleHasBeenSet() const { return m_routingRuleHasBeenSet; }
  template <typename RoutingRuleT = RoutingRuleTarget>
  void SetRoutingRule(RoutingRuleT&& value) {
    m_routingRuleHasBeenSet = true;
    m_routingRule = std::forward<RoutingRuleT>(value);
  }
  template <typename RoutingRuleT = RoutingRuleTarget>
  UpdateTarget& WithRoutingRule(RoutingRuleT&& value) {
    SetRoutingRule(std::forward<RoutingRuleT>(value));
    return *this;
  }
  ///@}
 private:
  Unit m_gateway;

  LinkTarget m_link;

  RoutingRuleTarget m_routingRule;
  bool m_gatewayHasBeenSet = false;
  bool m_linkHasBeenSet = false;
  bool m_routingRuleHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
