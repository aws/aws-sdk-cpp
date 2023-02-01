/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Environment parameters you want to benchmark your load test
   * against.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CategoricalParameter">AWS
   * API Reference</a></p>
   */
  class CategoricalParameter
  {
  public:
    AWS_SAGEMAKER_API CategoricalParameter();
    AWS_SAGEMAKER_API CategoricalParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CategoricalParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Name of the environment variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The Name of the environment variable.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The Name of the environment variable.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The Name of the environment variable.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The Name of the environment variable.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The Name of the environment variable.</p>
     */
    inline CategoricalParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The Name of the environment variable.</p>
     */
    inline CategoricalParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The Name of the environment variable.</p>
     */
    inline CategoricalParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The list of values you can pass.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const{ return m_value; }

    /**
     * <p>The list of values you can pass.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The list of values you can pass.</p>
     */
    inline void SetValue(const Aws::Vector<Aws::String>& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The list of values you can pass.</p>
     */
    inline void SetValue(Aws::Vector<Aws::String>&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The list of values you can pass.</p>
     */
    inline CategoricalParameter& WithValue(const Aws::Vector<Aws::String>& value) { SetValue(value); return *this;}

    /**
     * <p>The list of values you can pass.</p>
     */
    inline CategoricalParameter& WithValue(Aws::Vector<Aws::String>&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The list of values you can pass.</p>
     */
    inline CategoricalParameter& AddValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }

    /**
     * <p>The list of values you can pass.</p>
     */
    inline CategoricalParameter& AddValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of values you can pass.</p>
     */
    inline CategoricalParameter& AddValue(const char* value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
