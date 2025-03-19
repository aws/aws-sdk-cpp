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
   * <p>Defines under what conditions SageMaker creates a human loop. Used within <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateFlowDefinition.html">CreateFlowDefinition</a>.
   * See <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HumanLoopActivationConditionsConfig.html">HumanLoopActivationConditionsConfig</a>
   * for the required format of activation conditions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HumanLoopActivationConditionsConfig">AWS
   * API Reference</a></p>
   */
  class HumanLoopActivationConditionsConfig
  {
  public:
    AWS_SAGEMAKER_API HumanLoopActivationConditionsConfig() = default;
    AWS_SAGEMAKER_API HumanLoopActivationConditionsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HumanLoopActivationConditionsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>JSON expressing use-case specific conditions declaratively. If any condition
     * is matched, atomic tasks are created against the configured work team. The set
     * of conditions is different for Rekognition and Textract. For more information
     * about how to structure the JSON, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-human-fallback-conditions-json-schema.html">JSON
     * Schema for Human Loop Activation Conditions in Amazon Augmented AI</a> in the
     * <i>Amazon SageMaker Developer Guide</i>.</p>
     */
    inline const Aws::String& GetHumanLoopActivationConditions() const { return m_humanLoopActivationConditions; }
    inline bool HumanLoopActivationConditionsHasBeenSet() const { return m_humanLoopActivationConditionsHasBeenSet; }
    template<typename HumanLoopActivationConditionsT = Aws::String>
    void SetHumanLoopActivationConditions(HumanLoopActivationConditionsT&& value) { m_humanLoopActivationConditionsHasBeenSet = true; m_humanLoopActivationConditions = std::forward<HumanLoopActivationConditionsT>(value); }
    template<typename HumanLoopActivationConditionsT = Aws::String>
    HumanLoopActivationConditionsConfig& WithHumanLoopActivationConditions(HumanLoopActivationConditionsT&& value) { SetHumanLoopActivationConditions(std::forward<HumanLoopActivationConditionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanLoopActivationConditions;
    bool m_humanLoopActivationConditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
