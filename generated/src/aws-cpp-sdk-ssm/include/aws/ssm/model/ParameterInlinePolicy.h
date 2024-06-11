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
    AWS_SSM_API ParameterInlinePolicy();
    AWS_SSM_API ParameterInlinePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ParameterInlinePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The JSON text of the policy.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }
    inline bool PolicyTextHasBeenSet() const { return m_policyTextHasBeenSet; }
    inline void SetPolicyText(const Aws::String& value) { m_policyTextHasBeenSet = true; m_policyText = value; }
    inline void SetPolicyText(Aws::String&& value) { m_policyTextHasBeenSet = true; m_policyText = std::move(value); }
    inline void SetPolicyText(const char* value) { m_policyTextHasBeenSet = true; m_policyText.assign(value); }
    inline ParameterInlinePolicy& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}
    inline ParameterInlinePolicy& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}
    inline ParameterInlinePolicy& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy. Parameter Store, a capability of Amazon Web Services
     * Systems Manager, supports the following policy types: Expiration,
     * ExpirationNotification, and NoChangeNotification. </p>
     */
    inline const Aws::String& GetPolicyType() const{ return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(const Aws::String& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline void SetPolicyType(Aws::String&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }
    inline void SetPolicyType(const char* value) { m_policyTypeHasBeenSet = true; m_policyType.assign(value); }
    inline ParameterInlinePolicy& WithPolicyType(const Aws::String& value) { SetPolicyType(value); return *this;}
    inline ParameterInlinePolicy& WithPolicyType(Aws::String&& value) { SetPolicyType(std::move(value)); return *this;}
    inline ParameterInlinePolicy& WithPolicyType(const char* value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the policy. Policies report the following statuses: Pending
     * (the policy hasn't been enforced or applied yet), Finished (the policy was
     * applied), Failed (the policy wasn't applied), or InProgress (the policy is being
     * applied now). </p>
     */
    inline const Aws::String& GetPolicyStatus() const{ return m_policyStatus; }
    inline bool PolicyStatusHasBeenSet() const { return m_policyStatusHasBeenSet; }
    inline void SetPolicyStatus(const Aws::String& value) { m_policyStatusHasBeenSet = true; m_policyStatus = value; }
    inline void SetPolicyStatus(Aws::String&& value) { m_policyStatusHasBeenSet = true; m_policyStatus = std::move(value); }
    inline void SetPolicyStatus(const char* value) { m_policyStatusHasBeenSet = true; m_policyStatus.assign(value); }
    inline ParameterInlinePolicy& WithPolicyStatus(const Aws::String& value) { SetPolicyStatus(value); return *this;}
    inline ParameterInlinePolicy& WithPolicyStatus(Aws::String&& value) { SetPolicyStatus(std::move(value)); return *this;}
    inline ParameterInlinePolicy& WithPolicyStatus(const char* value) { SetPolicyStatus(value); return *this;}
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
