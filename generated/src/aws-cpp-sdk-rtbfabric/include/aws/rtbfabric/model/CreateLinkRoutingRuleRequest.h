/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
class CreateLinkRoutingRuleRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API CreateLinkRoutingRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateLinkRoutingRule"; }

  AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. This lets you safely retry the request without
   * accidentally performing the same operation a second time. Passing the same value
   * to a later call to an operation requires that you also pass the same value for
   * all other parameters. We recommend that you use a <a
   * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
   * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
   * generates a random one for you.</p> <p>If you retry the operation with the same
   * <code>ClientToken</code>, but with different parameters, the retry fails with an
   * <code>IdempotentParameterMismatch</code> error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateLinkRoutingRuleRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

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
  CreateLinkRoutingRuleRequest& WithGatewayId(GatewayIdT&& value) {
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
  CreateLinkRoutingRuleRequest& WithLinkId(LinkIdT&& value) {
    SetLinkId(std::forward<LinkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority of the routing rule. Lower numbers are evaluated first. Valid
   * values are 1 to 1000. Priority must be unique among non-deleted rules within a
   * link.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline CreateLinkRoutingRuleRequest& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conditions for the routing rule. All specified fields must match for the
   * rule to apply. At least one condition field must be set.</p>
   */
  inline const RuleCondition& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = RuleCondition>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = RuleCondition>
  CreateLinkRoutingRuleRequest& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of the key-value pairs of the tag or tags to assign to the
   * resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateLinkRoutingRuleRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateLinkRoutingRuleRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_gatewayId;

  Aws::String m_linkId;

  int m_priority{0};

  RuleCondition m_conditions;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_gatewayIdHasBeenSet = false;
  bool m_linkIdHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_conditionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
