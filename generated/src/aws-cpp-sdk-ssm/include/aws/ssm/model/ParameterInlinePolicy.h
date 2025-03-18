/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>One or more policies assigned to a parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ParameterInlinePolicy">AWS
   * API Reference</a></p>
   */
  class ParameterInlinePolicy
  {
  public:
    AWS_SSM_API ParameterInlinePolicy() = default;
    AWS_SSM_API ParameterInlinePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ParameterInlinePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The JSON text of the policy.</p>
     */
    inline const Aws::String& GetPolicyText() const { return m_policyText; }
    inline bool PolicyTextHasBeenSet() const { return m_policyTextHasBeenSet; }
    template<typename PolicyTextT = Aws::String>
    void SetPolicyText(PolicyTextT&& value) { m_policyTextHasBeenSet = true; m_policyText = std::forward<PolicyTextT>(value); }
    template<typename PolicyTextT = Aws::String>
    ParameterInlinePolicy& WithPolicyText(PolicyTextT&& value) { SetPolicyText(std::forward<PolicyTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy. Parameter Store, a tool in Amazon Web Services Systems
     * Manager, supports the following policy types: Expiration,
     * ExpirationNotification, and NoChangeNotification. </p>
     */
    inline const Aws::String& GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    template<typename PolicyTypeT = Aws::String>
    void SetPolicyType(PolicyTypeT&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::forward<PolicyTypeT>(value); }
    template<typename PolicyTypeT = Aws::String>
    ParameterInlinePolicy& WithPolicyType(PolicyTypeT&& value) { SetPolicyType(std::forward<PolicyTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the policy. Policies report the following statuses: Pending
     * (the policy hasn't been enforced or applied yet), Finished (the policy was
     * applied), Failed (the policy wasn't applied), or InProgress (the policy is being
     * applied now). </p>
     */
    inline const Aws::String& GetPolicyStatus() const { return m_policyStatus; }
    inline bool PolicyStatusHasBeenSet() const { return m_policyStatusHasBeenSet; }
    template<typename PolicyStatusT = Aws::String>
    void SetPolicyStatus(PolicyStatusT&& value) { m_policyStatusHasBeenSet = true; m_policyStatus = std::forward<PolicyStatusT>(value); }
    template<typename PolicyStatusT = Aws::String>
    ParameterInlinePolicy& WithPolicyStatus(PolicyStatusT&& value) { SetPolicyStatus(std::forward<PolicyStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyText;
    bool m_policyTextHasBeenSet = false;

    Aws::String m_policyType;
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_policyStatus;
    bool m_policyStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
