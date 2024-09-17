/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/PolicyParameter.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> HIT Review Policy data structures represent HIT review policies, which you
   * specify when you create a HIT. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ReviewPolicy">AWS
   * API Reference</a></p>
   */
  class ReviewPolicy
  {
  public:
    AWS_MTURK_API ReviewPolicy();
    AWS_MTURK_API ReviewPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API ReviewPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Name of a Review Policy: SimplePlurality/2011-09-01 or
     * ScoreMyKnownAnswers/2011-09-01 </p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline ReviewPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline ReviewPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline ReviewPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the parameter from the Review policy.</p>
     */
    inline const Aws::Vector<PolicyParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<PolicyParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<PolicyParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline ReviewPolicy& WithParameters(const Aws::Vector<PolicyParameter>& value) { SetParameters(value); return *this;}
    inline ReviewPolicy& WithParameters(Aws::Vector<PolicyParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline ReviewPolicy& AddParameters(const PolicyParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline ReviewPolicy& AddParameters(PolicyParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::Vector<PolicyParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
