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
    AWS_SAGEMAKER_API ParameterRange();
    AWS_SAGEMAKER_API ParameterRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>IntegerParameterRangeSpecification</code> object that defines the
     * possible values for an integer hyperparameter.</p>
     */
    inline const IntegerParameterRangeSpecification& GetIntegerParameterRangeSpecification() const{ return m_integerParameterRangeSpecification; }
    inline bool IntegerParameterRangeSpecificationHasBeenSet() const { return m_integerParameterRangeSpecificationHasBeenSet; }
    inline void SetIntegerParameterRangeSpecification(const IntegerParameterRangeSpecification& value) { m_integerParameterRangeSpecificationHasBeenSet = true; m_integerParameterRangeSpecification = value; }
    inline void SetIntegerParameterRangeSpecification(IntegerParameterRangeSpecification&& value) { m_integerParameterRangeSpecificationHasBeenSet = true; m_integerParameterRangeSpecification = std::move(value); }
    inline ParameterRange& WithIntegerParameterRangeSpecification(const IntegerParameterRangeSpecification& value) { SetIntegerParameterRangeSpecification(value); return *this;}
    inline ParameterRange& WithIntegerParameterRangeSpecification(IntegerParameterRangeSpecification&& value) { SetIntegerParameterRangeSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ContinuousParameterRangeSpecification</code> object that defines the
     * possible values for a continuous hyperparameter.</p>
     */
    inline const ContinuousParameterRangeSpecification& GetContinuousParameterRangeSpecification() const{ return m_continuousParameterRangeSpecification; }
    inline bool ContinuousParameterRangeSpecificationHasBeenSet() const { return m_continuousParameterRangeSpecificationHasBeenSet; }
    inline void SetContinuousParameterRangeSpecification(const ContinuousParameterRangeSpecification& value) { m_continuousParameterRangeSpecificationHasBeenSet = true; m_continuousParameterRangeSpecification = value; }
    inline void SetContinuousParameterRangeSpecification(ContinuousParameterRangeSpecification&& value) { m_continuousParameterRangeSpecificationHasBeenSet = true; m_continuousParameterRangeSpecification = std::move(value); }
    inline ParameterRange& WithContinuousParameterRangeSpecification(const ContinuousParameterRangeSpecification& value) { SetContinuousParameterRangeSpecification(value); return *this;}
    inline ParameterRange& WithContinuousParameterRangeSpecification(ContinuousParameterRangeSpecification&& value) { SetContinuousParameterRangeSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CategoricalParameterRangeSpecification</code> object that defines the
     * possible values for a categorical hyperparameter.</p>
     */
    inline const CategoricalParameterRangeSpecification& GetCategoricalParameterRangeSpecification() const{ return m_categoricalParameterRangeSpecification; }
    inline bool CategoricalParameterRangeSpecificationHasBeenSet() const { return m_categoricalParameterRangeSpecificationHasBeenSet; }
    inline void SetCategoricalParameterRangeSpecification(const CategoricalParameterRangeSpecification& value) { m_categoricalParameterRangeSpecificationHasBeenSet = true; m_categoricalParameterRangeSpecification = value; }
    inline void SetCategoricalParameterRangeSpecification(CategoricalParameterRangeSpecification&& value) { m_categoricalParameterRangeSpecificationHasBeenSet = true; m_categoricalParameterRangeSpecification = std::move(value); }
    inline ParameterRange& WithCategoricalParameterRangeSpecification(const CategoricalParameterRangeSpecification& value) { SetCategoricalParameterRangeSpecification(value); return *this;}
    inline ParameterRange& WithCategoricalParameterRangeSpecification(CategoricalParameterRangeSpecification&& value) { SetCategoricalParameterRangeSpecification(std::move(value)); return *this;}
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
