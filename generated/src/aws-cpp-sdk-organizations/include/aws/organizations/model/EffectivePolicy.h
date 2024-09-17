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
    AWS_ORGANIZATIONS_API EffectivePolicy();
    AWS_ORGANIZATIONS_API EffectivePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API EffectivePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text content of the policy.</p>
     */
    inline const Aws::String& GetPolicyContent() const{ return m_policyContent; }
    inline bool PolicyContentHasBeenSet() const { return m_policyContentHasBeenSet; }
    inline void SetPolicyContent(const Aws::String& value) { m_policyContentHasBeenSet = true; m_policyContent = value; }
    inline void SetPolicyContent(Aws::String&& value) { m_policyContentHasBeenSet = true; m_policyContent = std::move(value); }
    inline void SetPolicyContent(const char* value) { m_policyContentHasBeenSet = true; m_policyContent.assign(value); }
    inline EffectivePolicy& WithPolicyContent(const Aws::String& value) { SetPolicyContent(value); return *this;}
    inline EffectivePolicy& WithPolicyContent(Aws::String&& value) { SetPolicyContent(std::move(value)); return *this;}
    inline EffectivePolicy& WithPolicyContent(const char* value) { SetPolicyContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last update to this policy.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline EffectivePolicy& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline EffectivePolicy& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the policy target. </p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }
    inline EffectivePolicy& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}
    inline EffectivePolicy& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}
    inline EffectivePolicy& WithTargetId(const char* value) { SetTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy type.</p>
     */
    inline const EffectivePolicyType& GetPolicyType() const{ return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(const EffectivePolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline void SetPolicyType(EffectivePolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }
    inline EffectivePolicy& WithPolicyType(const EffectivePolicyType& value) { SetPolicyType(value); return *this;}
    inline EffectivePolicy& WithPolicyType(EffectivePolicyType&& value) { SetPolicyType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyContent;
    bool m_policyContentHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    EffectivePolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
