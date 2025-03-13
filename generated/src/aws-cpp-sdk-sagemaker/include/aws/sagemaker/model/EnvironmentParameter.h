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
    AWS_SAGEMAKER_API EnvironmentParameter() = default;
    AWS_SAGEMAKER_API EnvironmentParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EnvironmentParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment key suggested by the Amazon SageMaker Inference
     * Recommender.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    EnvironmentParameter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value type suggested by the Amazon SageMaker Inference Recommender.</p>
     */
    inline const Aws::String& GetValueType() const { return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    template<typename ValueTypeT = Aws::String>
    void SetValueType(ValueTypeT&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::forward<ValueTypeT>(value); }
    template<typename ValueTypeT = Aws::String>
    EnvironmentParameter& WithValueType(ValueTypeT&& value) { SetValueType(std::forward<ValueTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value suggested by the Amazon SageMaker Inference Recommender.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    EnvironmentParameter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
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
