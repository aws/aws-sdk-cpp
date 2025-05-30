﻿/**
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
    AWS_MTURK_API ReviewPolicy() = default;
    AWS_MTURK_API ReviewPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API ReviewPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Name of a Review Policy: SimplePlurality/2011-09-01 or
     * ScoreMyKnownAnswers/2011-09-01 </p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    ReviewPolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the parameter from the Review policy.</p>
     */
    inline const Aws::Vector<PolicyParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<PolicyParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<PolicyParameter>>
    ReviewPolicy& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = PolicyParameter>
    ReviewPolicy& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
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
