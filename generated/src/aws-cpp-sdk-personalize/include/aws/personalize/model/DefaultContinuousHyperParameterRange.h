/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides the name and default range of a continuous hyperparameter and
   * whether the hyperparameter is tunable. A tunable hyperparameter can have its
   * value determined during hyperparameter optimization (HPO).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DefaultContinuousHyperParameterRange">AWS
   * API Reference</a></p>
   */
  class DefaultContinuousHyperParameterRange
  {
  public:
    AWS_PERSONALIZE_API DefaultContinuousHyperParameterRange() = default;
    AWS_PERSONALIZE_API DefaultContinuousHyperParameterRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API DefaultContinuousHyperParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DefaultContinuousHyperParameterRange& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum allowable value for the hyperparameter.</p>
     */
    inline double GetMinValue() const { return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(double value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline DefaultContinuousHyperParameterRange& WithMinValue(double value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowable value for the hyperparameter.</p>
     */
    inline double GetMaxValue() const { return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(double value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline DefaultContinuousHyperParameterRange& WithMaxValue(double value) { SetMaxValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline bool GetIsTunable() const { return m_isTunable; }
    inline bool IsTunableHasBeenSet() const { return m_isTunableHasBeenSet; }
    inline void SetIsTunable(bool value) { m_isTunableHasBeenSet = true; m_isTunable = value; }
    inline DefaultContinuousHyperParameterRange& WithIsTunable(bool value) { SetIsTunable(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_minValue{0.0};
    bool m_minValueHasBeenSet = false;

    double m_maxValue{0.0};
    bool m_maxValueHasBeenSet = false;

    bool m_isTunable{false};
    bool m_isTunableHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
