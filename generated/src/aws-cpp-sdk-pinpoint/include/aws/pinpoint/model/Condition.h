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
    AWS_PINPOINT_API Condition();
    AWS_PINPOINT_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The conditions to evaluate for the activity.</p>
     */
    inline const Aws::Vector<SimpleCondition>& GetConditions() const{ return m_conditions; }

    /**
     * <p>The conditions to evaluate for the activity.</p>
     */
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }

    /**
     * <p>The conditions to evaluate for the activity.</p>
     */
    inline void SetConditions(const Aws::Vector<SimpleCondition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>The conditions to evaluate for the activity.</p>
     */
    inline void SetConditions(Aws::Vector<SimpleCondition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }

    /**
     * <p>The conditions to evaluate for the activity.</p>
     */
    inline Condition& WithConditions(const Aws::Vector<SimpleCondition>& value) { SetConditions(value); return *this;}

    /**
     * <p>The conditions to evaluate for the activity.</p>
     */
    inline Condition& WithConditions(Aws::Vector<SimpleCondition>&& value) { SetConditions(std::move(value)); return *this;}

    /**
     * <p>The conditions to evaluate for the activity.</p>
     */
    inline Condition& AddConditions(const SimpleCondition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }

    /**
     * <p>The conditions to evaluate for the activity.</p>
     */
    inline Condition& AddConditions(SimpleCondition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies how to handle multiple conditions for the activity. For example, if
     * you specify two conditions for an activity, whether both or only one of the
     * conditions must be met for the activity to be performed.</p>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>Specifies how to handle multiple conditions for the activity. For example, if
     * you specify two conditions for an activity, whether both or only one of the
     * conditions must be met for the activity to be performed.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>Specifies how to handle multiple conditions for the activity. For example, if
     * you specify two conditions for an activity, whether both or only one of the
     * conditions must be met for the activity to be performed.</p>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>Specifies how to handle multiple conditions for the activity. For example, if
     * you specify two conditions for an activity, whether both or only one of the
     * conditions must be met for the activity to be performed.</p>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>Specifies how to handle multiple conditions for the activity. For example, if
     * you specify two conditions for an activity, whether both or only one of the
     * conditions must be met for the activity to be performed.</p>
     */
    inline Condition& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>Specifies how to handle multiple conditions for the activity. For example, if
     * you specify two conditions for an activity, whether both or only one of the
     * conditions must be met for the activity to be performed.</p>
     */
    inline Condition& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    Aws::Vector<SimpleCondition> m_conditions;
    bool m_conditionsHasBeenSet = false;

    Operator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
