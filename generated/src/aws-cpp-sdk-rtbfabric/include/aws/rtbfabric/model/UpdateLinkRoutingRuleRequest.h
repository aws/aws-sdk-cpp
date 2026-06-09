/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/RuleCondition.h>

#include <utility>

namespace Aws {
namespace RTBFabric {
namespace Model {

/**
 */
class UpdateLinkRoutingRuleRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API UpdateLinkRoutingRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLinkRoutingRule"; }

  AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  UpdateLinkRoutingRuleRequest& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the link.</p>
   */
  inline const Aws::String& GetLinkId() const { return m_linkId; }
  inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
  template <typename LinkIdT = Aws::String>
  void SetLinkId(LinkIdT&& value) {
    m_linkIdHasBeenSet = true;
    m_linkId = std::forward<LinkIdT>(value);
  }
  template <typename LinkIdT = Aws::String>
  UpdateLinkRoutingRuleRequest& WithLinkId(LinkIdT&& value) {
    SetLinkId(std::forward<LinkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the routing rule.</p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  UpdateLinkRoutingRuleRequest& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated priority of the routing rule. Lower numbers are evaluated first.
   * Valid values are 1 to 1000. Priority must be unique among non-deleted rules
   * within a link.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline UpdateLinkRoutingRuleRequest& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated conditions for the routing rule. All specified fields must match
   * for the rule to apply. At least one condition field must be set.</p>
   */
  inline const RuleCondition& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = RuleCondition>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = RuleCondition>
  UpdateLinkRoutingRuleRequest& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayId;

  Aws::String m_linkId;

  Aws::String m_ruleId;

  int m_priority{0};

  RuleCondition m_conditions;
  bool m_gatewayIdHasBeenSet = false;
  bool m_linkIdHasBeenSet = false;
  bool m_ruleIdHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_conditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
