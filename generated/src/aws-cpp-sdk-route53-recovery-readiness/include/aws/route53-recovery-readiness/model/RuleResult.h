/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/Message.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>The result of a successful Rule request, with status for an individual
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/RuleResult">AWS
   * API Reference</a></p>
   */
  class RuleResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API RuleResult() = default;
    AWS_ROUTE53RECOVERYREADINESS_API RuleResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API RuleResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time the resource was last checked for readiness, in ISO-8601 format,
     * UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCheckedTimestamp() const { return m_lastCheckedTimestamp; }
    inline bool LastCheckedTimestampHasBeenSet() const { return m_lastCheckedTimestampHasBeenSet; }
    template<typename LastCheckedTimestampT = Aws::Utils::DateTime>
    void SetLastCheckedTimestamp(LastCheckedTimestampT&& value) { m_lastCheckedTimestampHasBeenSet = true; m_lastCheckedTimestamp = std::forward<LastCheckedTimestampT>(value); }
    template<typename LastCheckedTimestampT = Aws::Utils::DateTime>
    RuleResult& WithLastCheckedTimestamp(LastCheckedTimestampT&& value) { SetLastCheckedTimestamp(std::forward<LastCheckedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the resource's readiness.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const { return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    template<typename MessagesT = Aws::Vector<Message>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<Message>>
    RuleResult& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = Message>
    RuleResult& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The readiness at rule level.</p>
     */
    inline Readiness GetReadiness() const { return m_readiness; }
    inline bool ReadinessHasBeenSet() const { return m_readinessHasBeenSet; }
    inline void SetReadiness(Readiness value) { m_readinessHasBeenSet = true; m_readiness = value; }
    inline RuleResult& WithReadiness(Readiness value) { SetReadiness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the rule.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    RuleResult& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastCheckedTimestamp{};
    bool m_lastCheckedTimestampHasBeenSet = false;

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;

    Readiness m_readiness{Readiness::NOT_SET};
    bool m_readinessHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
