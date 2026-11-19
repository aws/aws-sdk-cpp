/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/LinkConfigParameters.h>
#include <aws/rtbfabric/model/LinkFlowParameters.h>
#include <aws/rtbfabric/model/ResponderGatewayConfigParameters.h>
#include <aws/rtbfabric/model/RoutingRuleParameters.h>

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
 * <p>What an update requested.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/UpdateParameters">AWS
 * API Reference</a></p>
 */
class UpdateParameters {
 public:
  AWS_RTBFABRIC_API UpdateParameters() = default;
  AWS_RTBFABRIC_API UpdateParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API UpdateParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The requested responder gateway configuration.</p>
   */
  inline const ResponderGatewayConfigParameters& GetResponderGatewayConfig() const { return m_responderGatewayConfig; }
  inline bool ResponderGatewayConfigHasBeenSet() const { return m_responderGatewayConfigHasBeenSet; }
  template <typename ResponderGatewayConfigT = ResponderGatewayConfigParameters>
  void SetResponderGatewayConfig(ResponderGatewayConfigT&& value) {
    m_responderGatewayConfigHasBeenSet = true;
    m_responderGatewayConfig = std::forward<ResponderGatewayConfigT>(value);
  }
  template <typename ResponderGatewayConfigT = ResponderGatewayConfigParameters>
  UpdateParameters& WithResponderGatewayConfig(ResponderGatewayConfigT&& value) {
    SetResponderGatewayConfig(std::forward<ResponderGatewayConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requested link configuration.</p>
   */
  inline const LinkConfigParameters& GetLinkConfig() const { return m_linkConfig; }
  inline bool LinkConfigHasBeenSet() const { return m_linkConfigHasBeenSet; }
  template <typename LinkConfigT = LinkConfigParameters>
  void SetLinkConfig(LinkConfigT&& value) {
    m_linkConfigHasBeenSet = true;
    m_linkConfig = std::forward<LinkConfigT>(value);
  }
  template <typename LinkConfigT = LinkConfigParameters>
  UpdateParameters& WithLinkConfig(LinkConfigT&& value) {
    SetLinkConfig(std::forward<LinkConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requested link flow.</p>
   */
  inline const LinkFlowParameters& GetLinkFlow() const { return m_linkFlow; }
  inline bool LinkFlowHasBeenSet() const { return m_linkFlowHasBeenSet; }
  template <typename LinkFlowT = LinkFlowParameters>
  void SetLinkFlow(LinkFlowT&& value) {
    m_linkFlowHasBeenSet = true;
    m_linkFlow = std::forward<LinkFlowT>(value);
  }
  template <typename LinkFlowT = LinkFlowParameters>
  UpdateParameters& WithLinkFlow(LinkFlowT&& value) {
    SetLinkFlow(std::forward<LinkFlowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requested routing rule.</p>
   */
  inline const RoutingRuleParameters& GetRoutingRule() const { return m_routingRule; }
  inline bool RoutingRuleHasBeenSet() const { return m_routingRuleHasBeenSet; }
  template <typename RoutingRuleT = RoutingRuleParameters>
  void SetRoutingRule(RoutingRuleT&& value) {
    m_routingRuleHasBeenSet = true;
    m_routingRule = std::forward<RoutingRuleT>(value);
  }
  template <typename RoutingRuleT = RoutingRuleParameters>
  UpdateParameters& WithRoutingRule(RoutingRuleT&& value) {
    SetRoutingRule(std::forward<RoutingRuleT>(value));
    return *this;
  }
  ///@}
 private:
  ResponderGatewayConfigParameters m_responderGatewayConfig;

  LinkConfigParameters m_linkConfig;

  LinkFlowParameters m_linkFlow;

  RoutingRuleParameters m_routingRule;
  bool m_responderGatewayConfigHasBeenSet = false;
  bool m_linkConfigHasBeenSet = false;
  bool m_linkFlowHasBeenSet = false;
  bool m_routingRuleHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
