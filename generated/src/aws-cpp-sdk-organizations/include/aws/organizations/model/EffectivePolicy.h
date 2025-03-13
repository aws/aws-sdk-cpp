/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/organizations/model/EffectivePolicyType.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains rules to be applied to the affected accounts. The effective policy
   * is the aggregation of any policies the account inherits, plus any policy
   * directly attached to the account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EffectivePolicy">AWS
   * API Reference</a></p>
   */
  class EffectivePolicy
  {
  public:
    AWS_ORGANIZATIONS_API EffectivePolicy() = default;
    AWS_ORGANIZATIONS_API EffectivePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API EffectivePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text content of the policy.</p>
     */
    inline const Aws::String& GetPolicyContent() const { return m_policyContent; }
    inline bool PolicyContentHasBeenSet() const { return m_policyContentHasBeenSet; }
    template<typename PolicyContentT = Aws::String>
    void SetPolicyContent(PolicyContentT&& value) { m_policyContentHasBeenSet = true; m_policyContent = std::forward<PolicyContentT>(value); }
    template<typename PolicyContentT = Aws::String>
    EffectivePolicy& WithPolicyContent(PolicyContentT&& value) { SetPolicyContent(std::forward<PolicyContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last update to this policy.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    EffectivePolicy& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the policy target. </p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    EffectivePolicy& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy type.</p>
     */
    inline EffectivePolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(EffectivePolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline EffectivePolicy& WithPolicyType(EffectivePolicyType value) { SetPolicyType(value); return *this;}
    ///@}
  private:

    Aws::String m_policyContent;
    bool m_policyContentHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    EffectivePolicyType m_policyType{EffectivePolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
