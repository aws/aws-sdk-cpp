/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ConditionOperatorType.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Indicates the condition based on which you want to filter the
   * metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/Condition">AWS
   * API Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_RESILIENCEHUB_API Condition() = default;
    AWS_RESILIENCEHUB_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the field in the metric.</p>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    Condition& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of operator or comparison to be used when evaluating a
     * condition against the specified field. </p>
     */
    inline ConditionOperatorType GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(ConditionOperatorType value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline Condition& WithOperator(ConditionOperatorType value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the value or data against which a condition is evaluated.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Condition& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    ConditionOperatorType m_operator{ConditionOperatorType::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
