﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The value of a hyperparameter. Only one of <code>NumberValue</code> or
   * <code>StringValue</code> can be specified.</p> <p>This object is specified in
   * the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrialComponent.html">CreateTrialComponent</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentParameterValue">AWS
   * API Reference</a></p>
   */
  class TrialComponentParameterValue
  {
  public:
    AWS_SAGEMAKER_API TrialComponentParameterValue() = default;
    AWS_SAGEMAKER_API TrialComponentParameterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string value of a categorical hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>NumberValue</code> parameter.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    TrialComponentParameterValue& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric value of a numeric hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>StringValue</code> parameter.</p>
     */
    inline double GetNumberValue() const { return m_numberValue; }
    inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }
    inline void SetNumberValue(double value) { m_numberValueHasBeenSet = true; m_numberValue = value; }
    inline TrialComponentParameterValue& WithNumberValue(double value) { SetNumberValue(value); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    double m_numberValue{0.0};
    bool m_numberValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
