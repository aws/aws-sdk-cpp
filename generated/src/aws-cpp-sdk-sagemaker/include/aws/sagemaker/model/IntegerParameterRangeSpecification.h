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
   * <p>Defines the possible values for an integer hyperparameter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/IntegerParameterRangeSpecification">AWS
   * API Reference</a></p>
   */
  class IntegerParameterRangeSpecification
  {
  public:
    AWS_SAGEMAKER_API IntegerParameterRangeSpecification();
    AWS_SAGEMAKER_API IntegerParameterRangeSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API IntegerParameterRangeSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum integer value allowed.</p>
     */
    inline const Aws::String& GetMinValue() const{ return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(const Aws::String& value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline void SetMinValue(Aws::String&& value) { m_minValueHasBeenSet = true; m_minValue = std::move(value); }
    inline void SetMinValue(const char* value) { m_minValueHasBeenSet = true; m_minValue.assign(value); }
    inline IntegerParameterRangeSpecification& WithMinValue(const Aws::String& value) { SetMinValue(value); return *this;}
    inline IntegerParameterRangeSpecification& WithMinValue(Aws::String&& value) { SetMinValue(std::move(value)); return *this;}
    inline IntegerParameterRangeSpecification& WithMinValue(const char* value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum integer value allowed.</p>
     */
    inline const Aws::String& GetMaxValue() const{ return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(const Aws::String& value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline void SetMaxValue(Aws::String&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::move(value); }
    inline void SetMaxValue(const char* value) { m_maxValueHasBeenSet = true; m_maxValue.assign(value); }
    inline IntegerParameterRangeSpecification& WithMaxValue(const Aws::String& value) { SetMaxValue(value); return *this;}
    inline IntegerParameterRangeSpecification& WithMaxValue(Aws::String&& value) { SetMaxValue(std::move(value)); return *this;}
    inline IntegerParameterRangeSpecification& WithMaxValue(const char* value) { SetMaxValue(value); return *this;}
    ///@}
  private:

    Aws::String m_minValue;
    bool m_minValueHasBeenSet = false;

    Aws::String m_maxValue;
    bool m_maxValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
