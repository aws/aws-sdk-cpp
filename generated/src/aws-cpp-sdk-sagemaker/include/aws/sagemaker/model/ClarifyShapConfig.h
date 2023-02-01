/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClarifyShapBaselineConfig.h>
#include <aws/sagemaker/model/ClarifyTextConfig.h>
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
   * <p>The configuration for SHAP analysis using SageMaker Clarify
   * Explainer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClarifyShapConfig">AWS
   * API Reference</a></p>
   */
  class ClarifyShapConfig
  {
  public:
    AWS_SAGEMAKER_API ClarifyShapConfig();
    AWS_SAGEMAKER_API ClarifyShapConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClarifyShapConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for the SHAP baseline of the Kernal SHAP algorithm.</p>
     */
    inline const ClarifyShapBaselineConfig& GetShapBaselineConfig() const{ return m_shapBaselineConfig; }

    /**
     * <p>The configuration for the SHAP baseline of the Kernal SHAP algorithm.</p>
     */
    inline bool ShapBaselineConfigHasBeenSet() const { return m_shapBaselineConfigHasBeenSet; }

    /**
     * <p>The configuration for the SHAP baseline of the Kernal SHAP algorithm.</p>
     */
    inline void SetShapBaselineConfig(const ClarifyShapBaselineConfig& value) { m_shapBaselineConfigHasBeenSet = true; m_shapBaselineConfig = value; }

    /**
     * <p>The configuration for the SHAP baseline of the Kernal SHAP algorithm.</p>
     */
    inline void SetShapBaselineConfig(ClarifyShapBaselineConfig&& value) { m_shapBaselineConfigHasBeenSet = true; m_shapBaselineConfig = std::move(value); }

    /**
     * <p>The configuration for the SHAP baseline of the Kernal SHAP algorithm.</p>
     */
    inline ClarifyShapConfig& WithShapBaselineConfig(const ClarifyShapBaselineConfig& value) { SetShapBaselineConfig(value); return *this;}

    /**
     * <p>The configuration for the SHAP baseline of the Kernal SHAP algorithm.</p>
     */
    inline ClarifyShapConfig& WithShapBaselineConfig(ClarifyShapBaselineConfig&& value) { SetShapBaselineConfig(std::move(value)); return *this;}


    /**
     * <p>The number of samples to be used for analysis by the Kernal SHAP algorithm.
     * </p>  <p>The number of samples determines the size of the synthetic
     * dataset, which has an impact on latency of explainability requests. For more
     * information, see the <b>Synthetic data</b> of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html">Configure
     * and create an endpoint</a>.</p> 
     */
    inline int GetNumberOfSamples() const{ return m_numberOfSamples; }

    /**
     * <p>The number of samples to be used for analysis by the Kernal SHAP algorithm.
     * </p>  <p>The number of samples determines the size of the synthetic
     * dataset, which has an impact on latency of explainability requests. For more
     * information, see the <b>Synthetic data</b> of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html">Configure
     * and create an endpoint</a>.</p> 
     */
    inline bool NumberOfSamplesHasBeenSet() const { return m_numberOfSamplesHasBeenSet; }

    /**
     * <p>The number of samples to be used for analysis by the Kernal SHAP algorithm.
     * </p>  <p>The number of samples determines the size of the synthetic
     * dataset, which has an impact on latency of explainability requests. For more
     * information, see the <b>Synthetic data</b> of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html">Configure
     * and create an endpoint</a>.</p> 
     */
    inline void SetNumberOfSamples(int value) { m_numberOfSamplesHasBeenSet = true; m_numberOfSamples = value; }

    /**
     * <p>The number of samples to be used for analysis by the Kernal SHAP algorithm.
     * </p>  <p>The number of samples determines the size of the synthetic
     * dataset, which has an impact on latency of explainability requests. For more
     * information, see the <b>Synthetic data</b> of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html">Configure
     * and create an endpoint</a>.</p> 
     */
    inline ClarifyShapConfig& WithNumberOfSamples(int value) { SetNumberOfSamples(value); return *this;}


    /**
     * <p>A Boolean toggle to indicate if you want to use the logit function (true) or
     * log-odds units (false) for model predictions. Defaults to false.</p>
     */
    inline bool GetUseLogit() const{ return m_useLogit; }

    /**
     * <p>A Boolean toggle to indicate if you want to use the logit function (true) or
     * log-odds units (false) for model predictions. Defaults to false.</p>
     */
    inline bool UseLogitHasBeenSet() const { return m_useLogitHasBeenSet; }

    /**
     * <p>A Boolean toggle to indicate if you want to use the logit function (true) or
     * log-odds units (false) for model predictions. Defaults to false.</p>
     */
    inline void SetUseLogit(bool value) { m_useLogitHasBeenSet = true; m_useLogit = value; }

    /**
     * <p>A Boolean toggle to indicate if you want to use the logit function (true) or
     * log-odds units (false) for model predictions. Defaults to false.</p>
     */
    inline ClarifyShapConfig& WithUseLogit(bool value) { SetUseLogit(value); return *this;}


    /**
     * <p>The starting value used to initialize the random number generator in the
     * explainer. Provide a value for this parameter to obtain a deterministic SHAP
     * result.</p>
     */
    inline int GetSeed() const{ return m_seed; }

    /**
     * <p>The starting value used to initialize the random number generator in the
     * explainer. Provide a value for this parameter to obtain a deterministic SHAP
     * result.</p>
     */
    inline bool SeedHasBeenSet() const { return m_seedHasBeenSet; }

    /**
     * <p>The starting value used to initialize the random number generator in the
     * explainer. Provide a value for this parameter to obtain a deterministic SHAP
     * result.</p>
     */
    inline void SetSeed(int value) { m_seedHasBeenSet = true; m_seed = value; }

    /**
     * <p>The starting value used to initialize the random number generator in the
     * explainer. Provide a value for this parameter to obtain a deterministic SHAP
     * result.</p>
     */
    inline ClarifyShapConfig& WithSeed(int value) { SetSeed(value); return *this;}


    /**
     * <p>A parameter that indicates if text features are treated as text and
     * explanations are provided for individual units of text. Required for natural
     * language processing (NLP) explainability only.</p>
     */
    inline const ClarifyTextConfig& GetTextConfig() const{ return m_textConfig; }

    /**
     * <p>A parameter that indicates if text features are treated as text and
     * explanations are provided for individual units of text. Required for natural
     * language processing (NLP) explainability only.</p>
     */
    inline bool TextConfigHasBeenSet() const { return m_textConfigHasBeenSet; }

    /**
     * <p>A parameter that indicates if text features are treated as text and
     * explanations are provided for individual units of text. Required for natural
     * language processing (NLP) explainability only.</p>
     */
    inline void SetTextConfig(const ClarifyTextConfig& value) { m_textConfigHasBeenSet = true; m_textConfig = value; }

    /**
     * <p>A parameter that indicates if text features are treated as text and
     * explanations are provided for individual units of text. Required for natural
     * language processing (NLP) explainability only.</p>
     */
    inline void SetTextConfig(ClarifyTextConfig&& value) { m_textConfigHasBeenSet = true; m_textConfig = std::move(value); }

    /**
     * <p>A parameter that indicates if text features are treated as text and
     * explanations are provided for individual units of text. Required for natural
     * language processing (NLP) explainability only.</p>
     */
    inline ClarifyShapConfig& WithTextConfig(const ClarifyTextConfig& value) { SetTextConfig(value); return *this;}

    /**
     * <p>A parameter that indicates if text features are treated as text and
     * explanations are provided for individual units of text. Required for natural
     * language processing (NLP) explainability only.</p>
     */
    inline ClarifyShapConfig& WithTextConfig(ClarifyTextConfig&& value) { SetTextConfig(std::move(value)); return *this;}

  private:

    ClarifyShapBaselineConfig m_shapBaselineConfig;
    bool m_shapBaselineConfigHasBeenSet = false;

    int m_numberOfSamples;
    bool m_numberOfSamplesHasBeenSet = false;

    bool m_useLogit;
    bool m_useLogitHasBeenSet = false;

    int m_seed;
    bool m_seedHasBeenSet = false;

    ClarifyTextConfig m_textConfig;
    bool m_textConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
