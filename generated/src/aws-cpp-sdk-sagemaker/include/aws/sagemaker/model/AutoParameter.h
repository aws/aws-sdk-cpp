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
    AWS_SAGEMAKER_API AutoParameter() = default;
    AWS_SAGEMAKER_API AutoParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hyperparameter to optimize using Autotune.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AutoParameter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An example value of the hyperparameter to optimize using Autotune.</p>
     */
    inline const Aws::String& GetValueHint() const { return m_valueHint; }
    inline bool ValueHintHasBeenSet() const { return m_valueHintHasBeenSet; }
    template<typename ValueHintT = Aws::String>
    void SetValueHint(ValueHintT&& value) { m_valueHintHasBeenSet = true; m_valueHint = std::forward<ValueHintT>(value); }
    template<typename ValueHintT = Aws::String>
    AutoParameter& WithValueHint(ValueHintT&& value) { SetValueHint(std::forward<ValueHintT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_valueHint;
    bool m_valueHintHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
