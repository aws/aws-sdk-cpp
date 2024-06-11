/**
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
   * <p>A list of environment parameters suggested by the Amazon SageMaker Inference
   * Recommender.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EnvironmentParameter">AWS
   * API Reference</a></p>
   */
  class EnvironmentParameter
  {
  public:
    AWS_SAGEMAKER_API EnvironmentParameter();
    AWS_SAGEMAKER_API EnvironmentParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EnvironmentParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment key suggested by the Amazon SageMaker Inference
     * Recommender.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline EnvironmentParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline EnvironmentParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline EnvironmentParameter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value type suggested by the Amazon SageMaker Inference Recommender.</p>
     */
    inline const Aws::String& GetValueType() const{ return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(const Aws::String& value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline void SetValueType(Aws::String&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::move(value); }
    inline void SetValueType(const char* value) { m_valueTypeHasBeenSet = true; m_valueType.assign(value); }
    inline EnvironmentParameter& WithValueType(const Aws::String& value) { SetValueType(value); return *this;}
    inline EnvironmentParameter& WithValueType(Aws::String&& value) { SetValueType(std::move(value)); return *this;}
    inline EnvironmentParameter& WithValueType(const char* value) { SetValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value suggested by the Amazon SageMaker Inference Recommender.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline EnvironmentParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline EnvironmentParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline EnvironmentParameter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_valueType;
    bool m_valueTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
