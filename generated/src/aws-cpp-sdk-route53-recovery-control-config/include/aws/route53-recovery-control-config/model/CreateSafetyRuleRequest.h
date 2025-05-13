/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/route53-recovery-control-config/model/NewAssertionRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-control-config/model/NewGatingRule.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>The request body that you include when you create a safety
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/CreateSafetyRuleRequest">AWS
   * API Reference</a></p>
   */
  class CreateSafetyRuleRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API CreateSafetyRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSafetyRule"; }

    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The assertion rule requested.</p>
     */
    inline const NewAssertionRule& GetAssertionRule() const { return m_assertionRule; }
    inline bool AssertionRuleHasBeenSet() const { return m_assertionRuleHasBeenSet; }
    template<typename AssertionRuleT = NewAssertionRule>
    void SetAssertionRule(AssertionRuleT&& value) { m_assertionRuleHasBeenSet = true; m_assertionRule = std::forward<AssertionRuleT>(value); }
    template<typename AssertionRuleT = NewAssertionRule>
    CreateSafetyRuleRequest& WithAssertionRule(AssertionRuleT&& value) { SetAssertionRule(std::forward<AssertionRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive string of up to 64 ASCII characters. To make an
     * idempotent API request with an action, specify a client token in the
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateSafetyRuleRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gating rule requested.</p>
     */
    inline const NewGatingRule& GetGatingRule() const { return m_gatingRule; }
    inline bool GatingRuleHasBeenSet() const { return m_gatingRuleHasBeenSet; }
    template<typename GatingRuleT = NewGatingRule>
    void SetGatingRule(GatingRuleT&& value) { m_gatingRuleHasBeenSet = true; m_gatingRule = std::forward<GatingRuleT>(value); }
    template<typename GatingRuleT = NewGatingRule>
    CreateSafetyRuleRequest& WithGatingRule(GatingRuleT&& value) { SetGatingRule(std::forward<GatingRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the safety rule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSafetyRuleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSafetyRuleRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    NewAssertionRule m_assertionRule;
    bool m_assertionRuleHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    NewGatingRule m_gatingRule;
    bool m_gatingRuleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
