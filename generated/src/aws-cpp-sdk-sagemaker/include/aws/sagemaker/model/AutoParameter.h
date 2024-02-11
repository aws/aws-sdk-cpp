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
   * <p>The name and an example value of the hyperparameter that you want to use in
   * Autotune. If Automatic model tuning (AMT) determines that your hyperparameter is
   * eligible for Autotune, an optimal hyperparameter range is selected for
   * you.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoParameter">AWS
   * API Reference</a></p>
   */
  class AutoParameter
  {
  public:
    AWS_SAGEMAKER_API AutoParameter();
    AWS_SAGEMAKER_API AutoParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the hyperparameter to optimize using Autotune.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hyperparameter to optimize using Autotune.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the hyperparameter to optimize using Autotune.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hyperparameter to optimize using Autotune.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hyperparameter to optimize using Autotune.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hyperparameter to optimize using Autotune.</p>
     */
    inline AutoParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hyperparameter to optimize using Autotune.</p>
     */
    inline AutoParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hyperparameter to optimize using Autotune.</p>
     */
    inline AutoParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An example value of the hyperparameter to optimize using Autotune.</p>
     */
    inline const Aws::String& GetValueHint() const{ return m_valueHint; }

    /**
     * <p>An example value of the hyperparameter to optimize using Autotune.</p>
     */
    inline bool ValueHintHasBeenSet() const { return m_valueHintHasBeenSet; }

    /**
     * <p>An example value of the hyperparameter to optimize using Autotune.</p>
     */
    inline void SetValueHint(const Aws::String& value) { m_valueHintHasBeenSet = true; m_valueHint = value; }

    /**
     * <p>An example value of the hyperparameter to optimize using Autotune.</p>
     */
    inline void SetValueHint(Aws::String&& value) { m_valueHintHasBeenSet = true; m_valueHint = std::move(value); }

    /**
     * <p>An example value of the hyperparameter to optimize using Autotune.</p>
     */
    inline void SetValueHint(const char* value) { m_valueHintHasBeenSet = true; m_valueHint.assign(value); }

    /**
     * <p>An example value of the hyperparameter to optimize using Autotune.</p>
     */
    inline AutoParameter& WithValueHint(const Aws::String& value) { SetValueHint(value); return *this;}

    /**
     * <p>An example value of the hyperparameter to optimize using Autotune.</p>
     */
    inline AutoParameter& WithValueHint(Aws::String&& value) { SetValueHint(std::move(value)); return *this;}

    /**
     * <p>An example value of the hyperparameter to optimize using Autotune.</p>
     */
    inline AutoParameter& WithValueHint(const char* value) { SetValueHint(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_valueHint;
    bool m_valueHintHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
