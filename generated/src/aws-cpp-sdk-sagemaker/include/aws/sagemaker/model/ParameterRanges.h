/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/IntegerParameterRange.h>
#include <aws/sagemaker/model/ContinuousParameterRange.h>
#include <aws/sagemaker/model/CategoricalParameterRange.h>
#include <aws/sagemaker/model/AutoParameter.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies ranges of integer, continuous, and categorical hyperparameters that
   * a hyperparameter tuning job searches. The hyperparameter tuning job launches
   * training jobs with hyperparameter values within these ranges to find the
   * combination of values that result in the training job with the best performance
   * as measured by the objective metric of the hyperparameter tuning job.</p> 
   * <p>The maximum number of items specified for <code>Array Members</code> refers
   * to the maximum number of hyperparameters for each range and also the maximum for
   * the hyperparameter tuning job itself. That is, the sum of the number of
   * hyperparameters for all the ranges can't exceed the maximum number
   * specified.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ParameterRanges">AWS
   * API Reference</a></p>
   */
  class ParameterRanges
  {
  public:
    AWS_SAGEMAKER_API ParameterRanges() = default;
    AWS_SAGEMAKER_API ParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_IntegerParameterRange.html">IntegerParameterRange</a>
     * objects that specify ranges of integer hyperparameters that a hyperparameter
     * tuning job searches.</p>
     */
    inline const Aws::Vector<IntegerParameterRange>& GetIntegerParameterRanges() const { return m_integerParameterRanges; }
    inline bool IntegerParameterRangesHasBeenSet() const { return m_integerParameterRangesHasBeenSet; }
    template<typename IntegerParameterRangesT = Aws::Vector<IntegerParameterRange>>
    void SetIntegerParameterRanges(IntegerParameterRangesT&& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges = std::forward<IntegerParameterRangesT>(value); }
    template<typename IntegerParameterRangesT = Aws::Vector<IntegerParameterRange>>
    ParameterRanges& WithIntegerParameterRanges(IntegerParameterRangesT&& value) { SetIntegerParameterRanges(std::forward<IntegerParameterRangesT>(value)); return *this;}
    template<typename IntegerParameterRangesT = IntegerParameterRange>
    ParameterRanges& AddIntegerParameterRanges(IntegerParameterRangesT&& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges.emplace_back(std::forward<IntegerParameterRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ContinuousParameterRange.html">ContinuousParameterRange</a>
     * objects that specify ranges of continuous hyperparameters that a hyperparameter
     * tuning job searches.</p>
     */
    inline const Aws::Vector<ContinuousParameterRange>& GetContinuousParameterRanges() const { return m_continuousParameterRanges; }
    inline bool ContinuousParameterRangesHasBeenSet() const { return m_continuousParameterRangesHasBeenSet; }
    template<typename ContinuousParameterRangesT = Aws::Vector<ContinuousParameterRange>>
    void SetContinuousParameterRanges(ContinuousParameterRangesT&& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges = std::forward<ContinuousParameterRangesT>(value); }
    template<typename ContinuousParameterRangesT = Aws::Vector<ContinuousParameterRange>>
    ParameterRanges& WithContinuousParameterRanges(ContinuousParameterRangesT&& value) { SetContinuousParameterRanges(std::forward<ContinuousParameterRangesT>(value)); return *this;}
    template<typename ContinuousParameterRangesT = ContinuousParameterRange>
    ParameterRanges& AddContinuousParameterRanges(ContinuousParameterRangesT&& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges.emplace_back(std::forward<ContinuousParameterRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CategoricalParameterRange.html">CategoricalParameterRange</a>
     * objects that specify ranges of categorical hyperparameters that a hyperparameter
     * tuning job searches.</p>
     */
    inline const Aws::Vector<CategoricalParameterRange>& GetCategoricalParameterRanges() const { return m_categoricalParameterRanges; }
    inline bool CategoricalParameterRangesHasBeenSet() const { return m_categoricalParameterRangesHasBeenSet; }
    template<typename CategoricalParameterRangesT = Aws::Vector<CategoricalParameterRange>>
    void SetCategoricalParameterRanges(CategoricalParameterRangesT&& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges = std::forward<CategoricalParameterRangesT>(value); }
    template<typename CategoricalParameterRangesT = Aws::Vector<CategoricalParameterRange>>
    ParameterRanges& WithCategoricalParameterRanges(CategoricalParameterRangesT&& value) { SetCategoricalParameterRanges(std::forward<CategoricalParameterRangesT>(value)); return *this;}
    template<typename CategoricalParameterRangesT = CategoricalParameterRange>
    ParameterRanges& AddCategoricalParameterRanges(CategoricalParameterRangesT&& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges.emplace_back(std::forward<CategoricalParameterRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing hyperparameter names and example values to be used by
     * Autotune to determine optimal ranges for your tuning job.</p>
     */
    inline const Aws::Vector<AutoParameter>& GetAutoParameters() const { return m_autoParameters; }
    inline bool AutoParametersHasBeenSet() const { return m_autoParametersHasBeenSet; }
    template<typename AutoParametersT = Aws::Vector<AutoParameter>>
    void SetAutoParameters(AutoParametersT&& value) { m_autoParametersHasBeenSet = true; m_autoParameters = std::forward<AutoParametersT>(value); }
    template<typename AutoParametersT = Aws::Vector<AutoParameter>>
    ParameterRanges& WithAutoParameters(AutoParametersT&& value) { SetAutoParameters(std::forward<AutoParametersT>(value)); return *this;}
    template<typename AutoParametersT = AutoParameter>
    ParameterRanges& AddAutoParameters(AutoParametersT&& value) { m_autoParametersHasBeenSet = true; m_autoParameters.emplace_back(std::forward<AutoParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IntegerParameterRange> m_integerParameterRanges;
    bool m_integerParameterRangesHasBeenSet = false;

    Aws::Vector<ContinuousParameterRange> m_continuousParameterRanges;
    bool m_continuousParameterRangesHasBeenSet = false;

    Aws::Vector<CategoricalParameterRange> m_categoricalParameterRanges;
    bool m_categoricalParameterRangesHasBeenSet = false;

    Aws::Vector<AutoParameter> m_autoParameters;
    bool m_autoParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
