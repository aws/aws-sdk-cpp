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
    AWS_QUICKSIGHT_API TopicIRMetric() = default;
    AWS_QUICKSIGHT_API TopicIRMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIRMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric ID for the <code>TopicIRMetric</code>.</p>
     */
    inline const Identifier& GetMetricId() const { return m_metricId; }
    inline bool MetricIdHasBeenSet() const { return m_metricIdHasBeenSet; }
    template<typename MetricIdT = Identifier>
    void SetMetricId(MetricIdT&& value) { m_metricIdHasBeenSet = true; m_metricId = std::forward<MetricIdT>(value); }
    template<typename MetricIdT = Identifier>
    TopicIRMetric& WithMetricId(MetricIdT&& value) { SetMetricId(std::forward<MetricIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function for the <code>TopicIRMetric</code>.</p>
     */
    inline const AggFunction& GetFunction() const { return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    template<typename FunctionT = AggFunction>
    void SetFunction(FunctionT&& value) { m_functionHasBeenSet = true; m_function = std::forward<FunctionT>(value); }
    template<typename FunctionT = AggFunction>
    TopicIRMetric& WithFunction(FunctionT&& value) { SetFunction(std::forward<FunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operands for the <code>TopicIRMetric</code>.</p>
     */
    inline const Aws::Vector<Identifier>& GetOperands() const { return m_operands; }
    inline bool OperandsHasBeenSet() const { return m_operandsHasBeenSet; }
    template<typename OperandsT = Aws::Vector<Identifier>>
    void SetOperands(OperandsT&& value) { m_operandsHasBeenSet = true; m_operands = std::forward<OperandsT>(value); }
    template<typename OperandsT = Aws::Vector<Identifier>>
    TopicIRMetric& WithOperands(OperandsT&& value) { SetOperands(std::forward<OperandsT>(value)); return *this;}
    template<typename OperandsT = Identifier>
    TopicIRMetric& AddOperands(OperandsT&& value) { m_operandsHasBeenSet = true; m_operands.emplace_back(std::forward<OperandsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The comparison method for the <code>TopicIRMetric</code>.</p>
     */
    inline const TopicIRComparisonMethod& GetComparisonMethod() const { return m_comparisonMethod; }
    inline bool ComparisonMethodHasBeenSet() const { return m_comparisonMethodHasBeenSet; }
    template<typename ComparisonMethodT = TopicIRComparisonMethod>
    void SetComparisonMethod(ComparisonMethodT&& value) { m_comparisonMethodHasBeenSet = true; m_comparisonMethod = std::forward<ComparisonMethodT>(value); }
    template<typename ComparisonMethodT = TopicIRComparisonMethod>
    TopicIRMetric& WithComparisonMethod(ComparisonMethodT&& value) { SetComparisonMethod(std::forward<ComparisonMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expression for the <code>TopicIRMetric</code>.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    TopicIRMetric& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated field references for the <code>TopicIRMetric</code>.</p>
     */
    inline const Aws::Vector<Identifier>& GetCalculatedFieldReferences() const { return m_calculatedFieldReferences; }
    inline bool CalculatedFieldReferencesHasBeenSet() const { return m_calculatedFieldReferencesHasBeenSet; }
    template<typename CalculatedFieldReferencesT = Aws::Vector<Identifier>>
    void SetCalculatedFieldReferences(CalculatedFieldReferencesT&& value) { m_calculatedFieldReferencesHasBeenSet = true; m_calculatedFieldReferences = std::forward<CalculatedFieldReferencesT>(value); }
    template<typename CalculatedFieldReferencesT = Aws::Vector<Identifier>>
    TopicIRMetric& WithCalculatedFieldReferences(CalculatedFieldReferencesT&& value) { SetCalculatedFieldReferences(std::forward<CalculatedFieldReferencesT>(value)); return *this;}
    template<typename CalculatedFieldReferencesT = Identifier>
    TopicIRMetric& AddCalculatedFieldReferences(CalculatedFieldReferencesT&& value) { m_calculatedFieldReferencesHasBeenSet = true; m_calculatedFieldReferences.emplace_back(std::forward<CalculatedFieldReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The display format for the <code>TopicIRMetric</code>.</p>
     */
    inline DisplayFormat GetDisplayFormat() const { return m_displayFormat; }
    inline bool DisplayFormatHasBeenSet() const { return m_displayFormatHasBeenSet; }
    inline void SetDisplayFormat(DisplayFormat value) { m_displayFormatHasBeenSet = true; m_displayFormat = value; }
    inline TopicIRMetric& WithDisplayFormat(DisplayFormat value) { SetDisplayFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const DisplayFormatOptions& GetDisplayFormatOptions() const { return m_displayFormatOptions; }
    inline bool DisplayFormatOptionsHasBeenSet() const { return m_displayFormatOptionsHasBeenSet; }
    template<typename DisplayFormatOptionsT = DisplayFormatOptions>
    void SetDisplayFormatOptions(DisplayFormatOptionsT&& value) { m_displayFormatOptionsHasBeenSet = true; m_displayFormatOptions = std::forward<DisplayFormatOptionsT>(value); }
    template<typename DisplayFormatOptionsT = DisplayFormatOptions>
    TopicIRMetric& WithDisplayFormatOptions(DisplayFormatOptionsT&& value) { SetDisplayFormatOptions(std::forward<DisplayFormatOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The named entity for the <code>TopicIRMetric</code>.</p>
     */
    inline const NamedEntityRef& GetNamedEntity() const { return m_namedEntity; }
    inline bool NamedEntityHasBeenSet() const { return m_namedEntityHasBeenSet; }
    template<typename NamedEntityT = NamedEntityRef>
    void SetNamedEntity(NamedEntityT&& value) { m_namedEntityHasBeenSet = true; m_namedEntity = std::forward<NamedEntityT>(value); }
    template<typename NamedEntityT = NamedEntityRef>
    TopicIRMetric& WithNamedEntity(NamedEntityT&& value) { SetNamedEntity(std::forward<NamedEntityT>(value)); return *this;}
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

    DisplayFormat m_displayFormat{DisplayFormat::NOT_SET};
    bool m_displayFormatHasBeenSet = false;

    DisplayFormatOptions m_displayFormatOptions;
    bool m_displayFormatOptionsHasBeenSet = false;

    NamedEntityRef m_namedEntity;
    bool m_namedEntityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
