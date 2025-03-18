/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClarifyInferenceConfig.h>
#include <aws/sagemaker/model/ClarifyShapConfig.h>
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
   * <p>The configuration parameters for the SageMaker Clarify
   * explainer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClarifyExplainerConfig">AWS
   * API Reference</a></p>
   */
  class ClarifyExplainerConfig
  {
  public:
    AWS_SAGEMAKER_API ClarifyExplainerConfig() = default;
    AWS_SAGEMAKER_API ClarifyExplainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClarifyExplainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A JMESPath boolean expression used to filter which records to explain.
     * Explanations are activated by default. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-enable">
     * <code>EnableExplanations</code> </a>for additional information.</p>
     */
    inline const Aws::String& GetEnableExplanations() const { return m_enableExplanations; }
    inline bool EnableExplanationsHasBeenSet() const { return m_enableExplanationsHasBeenSet; }
    template<typename EnableExplanationsT = Aws::String>
    void SetEnableExplanations(EnableExplanationsT&& value) { m_enableExplanationsHasBeenSet = true; m_enableExplanations = std::forward<EnableExplanationsT>(value); }
    template<typename EnableExplanationsT = Aws::String>
    ClarifyExplainerConfig& WithEnableExplanations(EnableExplanationsT&& value) { SetEnableExplanations(std::forward<EnableExplanationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inference configuration parameter for the model container.</p>
     */
    inline const ClarifyInferenceConfig& GetInferenceConfig() const { return m_inferenceConfig; }
    inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }
    template<typename InferenceConfigT = ClarifyInferenceConfig>
    void SetInferenceConfig(InferenceConfigT&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::forward<InferenceConfigT>(value); }
    template<typename InferenceConfigT = ClarifyInferenceConfig>
    ClarifyExplainerConfig& WithInferenceConfig(InferenceConfigT&& value) { SetInferenceConfig(std::forward<InferenceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for SHAP analysis.</p>
     */
    inline const ClarifyShapConfig& GetShapConfig() const { return m_shapConfig; }
    inline bool ShapConfigHasBeenSet() const { return m_shapConfigHasBeenSet; }
    template<typename ShapConfigT = ClarifyShapConfig>
    void SetShapConfig(ShapConfigT&& value) { m_shapConfigHasBeenSet = true; m_shapConfig = std::forward<ShapConfigT>(value); }
    template<typename ShapConfigT = ClarifyShapConfig>
    ClarifyExplainerConfig& WithShapConfig(ShapConfigT&& value) { SetShapConfig(std::forward<ShapConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_enableExplanations;
    bool m_enableExplanationsHasBeenSet = false;

    ClarifyInferenceConfig m_inferenceConfig;
    bool m_inferenceConfigHasBeenSet = false;

    ClarifyShapConfig m_shapConfig;
    bool m_shapConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
