/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Identifier.h>
#include <aws/quicksight/model/AggFunction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TopicIRComparisonMethod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DisplayFormat.h>
#include <aws/quicksight/model/DisplayFormatOptions.h>
#include <aws/quicksight/model/NamedEntityRef.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition for a <code>TopicIRMetric</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicIRMetric">AWS
   * API Reference</a></p>
   */
  class TopicIRMetric
  {
  public:
    AWS_QUICKSIGHT_API TopicIRMetric();
    AWS_QUICKSIGHT_API TopicIRMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIRMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric ID for the <code>TopicIRMetric</code>.</p>
     */
    inline const Identifier& GetMetricId() const{ return m_metricId; }
    inline bool MetricIdHasBeenSet() const { return m_metricIdHasBeenSet; }
    inline void SetMetricId(const Identifier& value) { m_metricIdHasBeenSet = true; m_metricId = value; }
    inline void SetMetricId(Identifier&& value) { m_metricIdHasBeenSet = true; m_metricId = std::move(value); }
    inline TopicIRMetric& WithMetricId(const Identifier& value) { SetMetricId(value); return *this;}
    inline TopicIRMetric& WithMetricId(Identifier&& value) { SetMetricId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function for the <code>TopicIRMetric</code>.</p>
     */
    inline const AggFunction& GetFunction() const{ return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    inline void SetFunction(const AggFunction& value) { m_functionHasBeenSet = true; m_function = value; }
    inline void SetFunction(AggFunction&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }
    inline TopicIRMetric& WithFunction(const AggFunction& value) { SetFunction(value); return *this;}
    inline TopicIRMetric& WithFunction(AggFunction&& value) { SetFunction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operands for the <code>TopicIRMetric</code>.</p>
     */
    inline const Aws::Vector<Identifier>& GetOperands() const{ return m_operands; }
    inline bool OperandsHasBeenSet() const { return m_operandsHasBeenSet; }
    inline void SetOperands(const Aws::Vector<Identifier>& value) { m_operandsHasBeenSet = true; m_operands = value; }
    inline void SetOperands(Aws::Vector<Identifier>&& value) { m_operandsHasBeenSet = true; m_operands = std::move(value); }
    inline TopicIRMetric& WithOperands(const Aws::Vector<Identifier>& value) { SetOperands(value); return *this;}
    inline TopicIRMetric& WithOperands(Aws::Vector<Identifier>&& value) { SetOperands(std::move(value)); return *this;}
    inline TopicIRMetric& AddOperands(const Identifier& value) { m_operandsHasBeenSet = true; m_operands.push_back(value); return *this; }
    inline TopicIRMetric& AddOperands(Identifier&& value) { m_operandsHasBeenSet = true; m_operands.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The comparison method for the <code>TopicIRMetric</code>.</p>
     */
    inline const TopicIRComparisonMethod& GetComparisonMethod() const{ return m_comparisonMethod; }
    inline bool ComparisonMethodHasBeenSet() const { return m_comparisonMethodHasBeenSet; }
    inline void SetComparisonMethod(const TopicIRComparisonMethod& value) { m_comparisonMethodHasBeenSet = true; m_comparisonMethod = value; }
    inline void SetComparisonMethod(TopicIRComparisonMethod&& value) { m_comparisonMethodHasBeenSet = true; m_comparisonMethod = std::move(value); }
    inline TopicIRMetric& WithComparisonMethod(const TopicIRComparisonMethod& value) { SetComparisonMethod(value); return *this;}
    inline TopicIRMetric& WithComparisonMethod(TopicIRComparisonMethod&& value) { SetComparisonMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expression for the <code>TopicIRMetric</code>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline TopicIRMetric& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline TopicIRMetric& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline TopicIRMetric& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated field references for the <code>TopicIRMetric</code>.</p>
     */
    inline const Aws::Vector<Identifier>& GetCalculatedFieldReferences() const{ return m_calculatedFieldReferences; }
    inline bool CalculatedFieldReferencesHasBeenSet() const { return m_calculatedFieldReferencesHasBeenSet; }
    inline void SetCalculatedFieldReferences(const Aws::Vector<Identifier>& value) { m_calculatedFieldReferencesHasBeenSet = true; m_calculatedFieldReferences = value; }
    inline void SetCalculatedFieldReferences(Aws::Vector<Identifier>&& value) { m_calculatedFieldReferencesHasBeenSet = true; m_calculatedFieldReferences = std::move(value); }
    inline TopicIRMetric& WithCalculatedFieldReferences(const Aws::Vector<Identifier>& value) { SetCalculatedFieldReferences(value); return *this;}
    inline TopicIRMetric& WithCalculatedFieldReferences(Aws::Vector<Identifier>&& value) { SetCalculatedFieldReferences(std::move(value)); return *this;}
    inline TopicIRMetric& AddCalculatedFieldReferences(const Identifier& value) { m_calculatedFieldReferencesHasBeenSet = true; m_calculatedFieldReferences.push_back(value); return *this; }
    inline TopicIRMetric& AddCalculatedFieldReferences(Identifier&& value) { m_calculatedFieldReferencesHasBeenSet = true; m_calculatedFieldReferences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The display format for the <code>TopicIRMetric</code>.</p>
     */
    inline const DisplayFormat& GetDisplayFormat() const{ return m_displayFormat; }
    inline bool DisplayFormatHasBeenSet() const { return m_displayFormatHasBeenSet; }
    inline void SetDisplayFormat(const DisplayFormat& value) { m_displayFormatHasBeenSet = true; m_displayFormat = value; }
    inline void SetDisplayFormat(DisplayFormat&& value) { m_displayFormatHasBeenSet = true; m_displayFormat = std::move(value); }
    inline TopicIRMetric& WithDisplayFormat(const DisplayFormat& value) { SetDisplayFormat(value); return *this;}
    inline TopicIRMetric& WithDisplayFormat(DisplayFormat&& value) { SetDisplayFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DisplayFormatOptions& GetDisplayFormatOptions() const{ return m_displayFormatOptions; }
    inline bool DisplayFormatOptionsHasBeenSet() const { return m_displayFormatOptionsHasBeenSet; }
    inline void SetDisplayFormatOptions(const DisplayFormatOptions& value) { m_displayFormatOptionsHasBeenSet = true; m_displayFormatOptions = value; }
    inline void SetDisplayFormatOptions(DisplayFormatOptions&& value) { m_displayFormatOptionsHasBeenSet = true; m_displayFormatOptions = std::move(value); }
    inline TopicIRMetric& WithDisplayFormatOptions(const DisplayFormatOptions& value) { SetDisplayFormatOptions(value); return *this;}
    inline TopicIRMetric& WithDisplayFormatOptions(DisplayFormatOptions&& value) { SetDisplayFormatOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The named entity for the <code>TopicIRMetric</code>.</p>
     */
    inline const NamedEntityRef& GetNamedEntity() const{ return m_namedEntity; }
    inline bool NamedEntityHasBeenSet() const { return m_namedEntityHasBeenSet; }
    inline void SetNamedEntity(const NamedEntityRef& value) { m_namedEntityHasBeenSet = true; m_namedEntity = value; }
    inline void SetNamedEntity(NamedEntityRef&& value) { m_namedEntityHasBeenSet = true; m_namedEntity = std::move(value); }
    inline TopicIRMetric& WithNamedEntity(const NamedEntityRef& value) { SetNamedEntity(value); return *this;}
    inline TopicIRMetric& WithNamedEntity(NamedEntityRef&& value) { SetNamedEntity(std::move(value)); return *this;}
    ///@}
  private:

    Identifier m_metricId;
    bool m_metricIdHasBeenSet = false;

    AggFunction m_function;
    bool m_functionHasBeenSet = false;

    Aws::Vector<Identifier> m_operands;
    bool m_operandsHasBeenSet = false;

    TopicIRComparisonMethod m_comparisonMethod;
    bool m_comparisonMethodHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Vector<Identifier> m_calculatedFieldReferences;
    bool m_calculatedFieldReferencesHasBeenSet = false;

    DisplayFormat m_displayFormat;
    bool m_displayFormatHasBeenSet = false;

    DisplayFormatOptions m_displayFormatOptions;
    bool m_displayFormatOptionsHasBeenSet = false;

    NamedEntityRef m_namedEntity;
    bool m_namedEntityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
