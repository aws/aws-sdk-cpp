/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/IntegerParameterRangeSpecification.h>
#include <aws/sagemaker/model/ContinuousParameterRangeSpecification.h>
#include <aws/sagemaker/model/CategoricalParameterRangeSpecification.h>
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
   * <p>Defines the possible values for categorical, continuous, and integer
   * hyperparameters to be used by an algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ParameterRange">AWS
   * API Reference</a></p>
   */
  class ParameterRange
  {
  public:
    AWS_SAGEMAKER_API ParameterRange() = default;
    AWS_SAGEMAKER_API ParameterRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>IntegerParameterRangeSpecification</code> object that defines the
     * possible values for an integer hyperparameter.</p>
     */
    inline const IntegerParameterRangeSpecification& GetIntegerParameterRangeSpecification() const { return m_integerParameterRangeSpecification; }
    inline bool IntegerParameterRangeSpecificationHasBeenSet() const { return m_integerParameterRangeSpecificationHasBeenSet; }
    template<typename IntegerParameterRangeSpecificationT = IntegerParameterRangeSpecification>
    void SetIntegerParameterRangeSpecification(IntegerParameterRangeSpecificationT&& value) { m_integerParameterRangeSpecificationHasBeenSet = true; m_integerParameterRangeSpecification = std::forward<IntegerParameterRangeSpecificationT>(value); }
    template<typename IntegerParameterRangeSpecificationT = IntegerParameterRangeSpecification>
    ParameterRange& WithIntegerParameterRangeSpecification(IntegerParameterRangeSpecificationT&& value) { SetIntegerParameterRangeSpecification(std::forward<IntegerParameterRangeSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ContinuousParameterRangeSpecification</code> object that defines the
     * possible values for a continuous hyperparameter.</p>
     */
    inline const ContinuousParameterRangeSpecification& GetContinuousParameterRangeSpecification() const { return m_continuousParameterRangeSpecification; }
    inline bool ContinuousParameterRangeSpecificationHasBeenSet() const { return m_continuousParameterRangeSpecificationHasBeenSet; }
    template<typename ContinuousParameterRangeSpecificationT = ContinuousParameterRangeSpecification>
    void SetContinuousParameterRangeSpecification(ContinuousParameterRangeSpecificationT&& value) { m_continuousParameterRangeSpecificationHasBeenSet = true; m_continuousParameterRangeSpecification = std::forward<ContinuousParameterRangeSpecificationT>(value); }
    template<typename ContinuousParameterRangeSpecificationT = ContinuousParameterRangeSpecification>
    ParameterRange& WithContinuousParameterRangeSpecification(ContinuousParameterRangeSpecificationT&& value) { SetContinuousParameterRangeSpecification(std::forward<ContinuousParameterRangeSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CategoricalParameterRangeSpecification</code> object that defines the
     * possible values for a categorical hyperparameter.</p>
     */
    inline const CategoricalParameterRangeSpecification& GetCategoricalParameterRangeSpecification() const { return m_categoricalParameterRangeSpecification; }
    inline bool CategoricalParameterRangeSpecificationHasBeenSet() const { return m_categoricalParameterRangeSpecificationHasBeenSet; }
    template<typename CategoricalParameterRangeSpecificationT = CategoricalParameterRangeSpecification>
    void SetCategoricalParameterRangeSpecification(CategoricalParameterRangeSpecificationT&& value) { m_categoricalParameterRangeSpecificationHasBeenSet = true; m_categoricalParameterRangeSpecification = std::forward<CategoricalParameterRangeSpecificationT>(value); }
    template<typename CategoricalParameterRangeSpecificationT = CategoricalParameterRangeSpecification>
    ParameterRange& WithCategoricalParameterRangeSpecification(CategoricalParameterRangeSpecificationT&& value) { SetCategoricalParameterRangeSpecification(std::forward<CategoricalParameterRangeSpecificationT>(value)); return *this;}
    ///@}
  private:

    IntegerParameterRangeSpecification m_integerParameterRangeSpecification;
    bool m_integerParameterRangeSpecificationHasBeenSet = false;

    ContinuousParameterRangeSpecification m_continuousParameterRangeSpecification;
    bool m_continuousParameterRangeSpecificationHasBeenSet = false;

    CategoricalParameterRangeSpecification m_categoricalParameterRangeSpecification;
    bool m_categoricalParameterRangeSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
