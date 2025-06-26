/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/PermissionConditionOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Defines a condition that restricts when a permission is effective. Conditions
   * allow you to control access based on specific attributes of the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/PermissionCondition">AWS
   * API Reference</a></p>
   */
  class PermissionCondition
  {
  public:
    AWS_QBUSINESS_API PermissionCondition() = default;
    AWS_QBUSINESS_API PermissionCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API PermissionCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to use for the condition evaluation. This determines how the
     * condition values are compared.</p>
     */
    inline PermissionConditionOperator GetConditionOperator() const { return m_conditionOperator; }
    inline bool ConditionOperatorHasBeenSet() const { return m_conditionOperatorHasBeenSet; }
    inline void SetConditionOperator(PermissionConditionOperator value) { m_conditionOperatorHasBeenSet = true; m_conditionOperator = value; }
    inline PermissionCondition& WithConditionOperator(PermissionConditionOperator value) { SetConditionOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key for the condition. This identifies the attribute that the condition
     * applies to.</p>
     */
    inline const Aws::String& GetConditionKey() const { return m_conditionKey; }
    inline bool ConditionKeyHasBeenSet() const { return m_conditionKeyHasBeenSet; }
    template<typename ConditionKeyT = Aws::String>
    void SetConditionKey(ConditionKeyT&& value) { m_conditionKeyHasBeenSet = true; m_conditionKey = std::forward<ConditionKeyT>(value); }
    template<typename ConditionKeyT = Aws::String>
    PermissionCondition& WithConditionKey(ConditionKeyT&& value) { SetConditionKey(std::forward<ConditionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to compare against using the specified condition operator.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConditionValues() const { return m_conditionValues; }
    inline bool ConditionValuesHasBeenSet() const { return m_conditionValuesHasBeenSet; }
    template<typename ConditionValuesT = Aws::Vector<Aws::String>>
    void SetConditionValues(ConditionValuesT&& value) { m_conditionValuesHasBeenSet = true; m_conditionValues = std::forward<ConditionValuesT>(value); }
    template<typename ConditionValuesT = Aws::Vector<Aws::String>>
    PermissionCondition& WithConditionValues(ConditionValuesT&& value) { SetConditionValues(std::forward<ConditionValuesT>(value)); return *this;}
    template<typename ConditionValuesT = Aws::String>
    PermissionCondition& AddConditionValues(ConditionValuesT&& value) { m_conditionValuesHasBeenSet = true; m_conditionValues.emplace_back(std::forward<ConditionValuesT>(value)); return *this; }
    ///@}
  private:

    PermissionConditionOperator m_conditionOperator{PermissionConditionOperator::NOT_SET};
    bool m_conditionOperatorHasBeenSet = false;

    Aws::String m_conditionKey;
    bool m_conditionKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_conditionValues;
    bool m_conditionValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
