/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/Operator.h>
#include <aws/pinpoint/model/SimpleCondition.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the conditions to evaluate for an activity in a journey, and how to
   * evaluate those conditions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/Condition">AWS
   * API Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_PINPOINT_API Condition() = default;
    AWS_PINPOINT_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditions to evaluate for the activity.</p>
     */
    inline const Aws::Vector<SimpleCondition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<SimpleCondition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<SimpleCondition>>
    Condition& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = SimpleCondition>
    Condition& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how to handle multiple conditions for the activity. For example, if
     * you specify two conditions for an activity, whether both or only one of the
     * conditions must be met for the activity to be performed.</p>
     */
    inline Operator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(Operator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline Condition& WithOperator(Operator value) { SetOperator(value); return *this;}
    ///@}
  private:

    Aws::Vector<SimpleCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    Operator m_operator{Operator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
