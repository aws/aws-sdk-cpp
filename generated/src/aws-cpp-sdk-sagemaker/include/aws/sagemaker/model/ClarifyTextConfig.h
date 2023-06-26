/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClarifyTextLanguage.h>
#include <aws/sagemaker/model/ClarifyTextGranularity.h>
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
   * <p>A parameter used to configure the SageMaker Clarify explainer to treat text
   * features as text so that explanations are provided for individual units of text.
   * Required only for natural language processing (NLP) explainability.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClarifyTextConfig">AWS
   * API Reference</a></p>
   */
  class ClarifyTextConfig
  {
  public:
    AWS_SAGEMAKER_API ClarifyTextConfig();
    AWS_SAGEMAKER_API ClarifyTextConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClarifyTextConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the language of the text features in <a href="
     * https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes">ISO 639-1</a> or <a
     * href="https://en.wikipedia.org/wiki/ISO_639-3">ISO 639-3</a> code of a supported
     * language. </p>  <p>For a mix of multiple languages, use code
     * <code>'xx'</code>.</p> 
     */
    inline const ClarifyTextLanguage& GetLanguage() const{ return m_language; }

    /**
     * <p>Specifies the language of the text features in <a href="
     * https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes">ISO 639-1</a> or <a
     * href="https://en.wikipedia.org/wiki/ISO_639-3">ISO 639-3</a> code of a supported
     * language. </p>  <p>For a mix of multiple languages, use code
     * <code>'xx'</code>.</p> 
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>Specifies the language of the text features in <a href="
     * https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes">ISO 639-1</a> or <a
     * href="https://en.wikipedia.org/wiki/ISO_639-3">ISO 639-3</a> code of a supported
     * language. </p>  <p>For a mix of multiple languages, use code
     * <code>'xx'</code>.</p> 
     */
    inline void SetLanguage(const ClarifyTextLanguage& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>Specifies the language of the text features in <a href="
     * https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes">ISO 639-1</a> or <a
     * href="https://en.wikipedia.org/wiki/ISO_639-3">ISO 639-3</a> code of a supported
     * language. </p>  <p>For a mix of multiple languages, use code
     * <code>'xx'</code>.</p> 
     */
    inline void SetLanguage(ClarifyTextLanguage&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>Specifies the language of the text features in <a href="
     * https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes">ISO 639-1</a> or <a
     * href="https://en.wikipedia.org/wiki/ISO_639-3">ISO 639-3</a> code of a supported
     * language. </p>  <p>For a mix of multiple languages, use code
     * <code>'xx'</code>.</p> 
     */
    inline ClarifyTextConfig& WithLanguage(const ClarifyTextLanguage& value) { SetLanguage(value); return *this;}

    /**
     * <p>Specifies the language of the text features in <a href="
     * https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes">ISO 639-1</a> or <a
     * href="https://en.wikipedia.org/wiki/ISO_639-3">ISO 639-3</a> code of a supported
     * language. </p>  <p>For a mix of multiple languages, use code
     * <code>'xx'</code>.</p> 
     */
    inline ClarifyTextConfig& WithLanguage(ClarifyTextLanguage&& value) { SetLanguage(std::move(value)); return *this;}


    /**
     * <p>The unit of granularity for the analysis of text features. For example, if
     * the unit is <code>'token'</code>, then each token (like a word in English) of
     * the text is treated as a feature. SHAP values are computed for each
     * unit/feature.</p>
     */
    inline const ClarifyTextGranularity& GetGranularity() const{ return m_granularity; }

    /**
     * <p>The unit of granularity for the analysis of text features. For example, if
     * the unit is <code>'token'</code>, then each token (like a word in English) of
     * the text is treated as a feature. SHAP values are computed for each
     * unit/feature.</p>
     */
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }

    /**
     * <p>The unit of granularity for the analysis of text features. For example, if
     * the unit is <code>'token'</code>, then each token (like a word in English) of
     * the text is treated as a feature. SHAP values are computed for each
     * unit/feature.</p>
     */
    inline void SetGranularity(const ClarifyTextGranularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>The unit of granularity for the analysis of text features. For example, if
     * the unit is <code>'token'</code>, then each token (like a word in English) of
     * the text is treated as a feature. SHAP values are computed for each
     * unit/feature.</p>
     */
    inline void SetGranularity(ClarifyTextGranularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }

    /**
     * <p>The unit of granularity for the analysis of text features. For example, if
     * the unit is <code>'token'</code>, then each token (like a word in English) of
     * the text is treated as a feature. SHAP values are computed for each
     * unit/feature.</p>
     */
    inline ClarifyTextConfig& WithGranularity(const ClarifyTextGranularity& value) { SetGranularity(value); return *this;}

    /**
     * <p>The unit of granularity for the analysis of text features. For example, if
     * the unit is <code>'token'</code>, then each token (like a word in English) of
     * the text is treated as a feature. SHAP values are computed for each
     * unit/feature.</p>
     */
    inline ClarifyTextConfig& WithGranularity(ClarifyTextGranularity&& value) { SetGranularity(std::move(value)); return *this;}

  private:

    ClarifyTextLanguage m_language;
    bool m_languageHasBeenSet = false;

    ClarifyTextGranularity m_granularity;
    bool m_granularityHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
