/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/PolicyType.h>
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
namespace MPA
{
namespace Model
{

  /**
   * <p>Contains details about a policy for a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ListResourcePoliciesResponseResourcePolicy">AWS
   * API Reference</a></p>
   */
  class ListResourcePoliciesResponseResourcePolicy
  {
  public:
    AWS_MPA_API ListResourcePoliciesResponseResourcePolicy() = default;
    AWS_MPA_API ListResourcePoliciesResponseResourcePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API ListResourcePoliciesResponseResourcePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    ListResourcePoliciesResponseResourcePolicy& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy.</p>
     */
    inline PolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline ListResourcePoliciesResponseResourcePolicy& WithPolicyType(PolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    ListResourcePoliciesResponseResourcePolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    PolicyType m_policyType{PolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
