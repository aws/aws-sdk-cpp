/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterScalingType.h>
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
   * <p>For a hyperparameter of the integer type, specifies the range that a
   * hyperparameter tuning job searches.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/IntegerParameterRange">AWS
   * API Reference</a></p>
   */
  class IntegerParameterRange
  {
  public:
    AWS_SAGEMAKER_API IntegerParameterRange() = default;
    AWS_SAGEMAKER_API IntegerParameterRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API IntegerParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hyperparameter to search.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    IntegerParameterRange& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value of the hyperparameter to search.</p>
     */
    inline const Aws::String& GetMinValue() const { return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    template<typename MinValueT = Aws::String>
    void SetMinValue(MinValueT&& value) { m_minValueHasBeenSet = true; m_minValue = std::forward<MinValueT>(value); }
    template<typename MinValueT = Aws::String>
    IntegerParameterRange& WithMinValue(MinValueT&& value) { SetMinValue(std::forward<MinValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of the hyperparameter to search.</p>
     */
    inline const Aws::String& GetMaxValue() const { return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    template<typename MaxValueT = Aws::String>
    void SetMaxValue(MaxValueT&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::forward<MaxValueT>(value); }
    template<typename MaxValueT = Aws::String>
    IntegerParameterRange& WithMaxValue(MaxValueT&& value) { SetMaxValue(std::forward<MaxValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale that hyperparameter tuning uses to search the hyperparameter range.
     * For information about choosing a hyperparameter scale, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-ranges.html#scaling-type">Hyperparameter
     * Scaling</a>. One of the following values:</p> <dl> <dt>Auto</dt> <dd>
     * <p>SageMaker hyperparameter tuning chooses the best scale for the
     * hyperparameter.</p> </dd> <dt>Linear</dt> <dd> <p>Hyperparameter tuning searches
     * the values in the hyperparameter range by using a linear scale.</p> </dd>
     * <dt>Logarithmic</dt> <dd> <p>Hyperparameter tuning searches the values in the
     * hyperparameter range by using a logarithmic scale.</p> <p>Logarithmic scaling
     * works only for ranges that have only values greater than 0.</p> </dd> </dl>
     */
    inline HyperParameterScalingType GetScalingType() const { return m_scalingType; }
    inline bool ScalingTypeHasBeenSet() const { return m_scalingTypeHasBeenSet; }
    inline void SetScalingType(HyperParameterScalingType value) { m_scalingTypeHasBeenSet = true; m_scalingType = value; }
    inline IntegerParameterRange& WithScalingType(HyperParameterScalingType value) { SetScalingType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_minValue;
    bool m_minValueHasBeenSet = false;

    Aws::String m_maxValue;
    bool m_maxValueHasBeenSet = false;

    HyperParameterScalingType m_scalingType{HyperParameterScalingType::NOT_SET};
    bool m_scalingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
