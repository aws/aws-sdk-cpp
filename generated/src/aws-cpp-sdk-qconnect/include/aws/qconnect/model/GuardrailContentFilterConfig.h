/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/GuardrailContentFilterType.h>
#include <aws/qconnect/model/GuardrailFilterStrength.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Contains filter strengths for harmful content. AI Guardrail's support the
   * following content filters to detect and filter harmful user inputs and
   * FM-generated outputs.</p> <ul> <li> <p> <b>Hate</b>: Describes input prompts and
   * model responses that discriminate, criticize, insult, denounce, or dehumanize a
   * person or group on the basis of an identity (such as race, ethnicity, gender,
   * religion, sexual orientation, ability, and national origin).</p> </li> <li> <p>
   * <b>Insults</b>: Describes input prompts and model responses that includes
   * demeaning, humiliating, mocking, insulting, or belittling language. This type of
   * language is also labeled as bullying.</p> </li> <li> <p> <b>Sexual</b>:
   * Describes input prompts and model responses that indicates sexual interest,
   * activity, or arousal using direct or indirect references to body parts, physical
   * traits, or sex.</p> </li> <li> <p> <b>Violence</b>: Describes input prompts and
   * model responses that includes glorification of, or threats to inflict physical
   * pain, hurt, or injury toward a person, group, or thing.</p> </li> </ul>
   * <p>Content filtering depends on the confidence classification of user inputs and
   * FM responses across each of the four harmful categories. All input and output
   * statements are classified into one of four confidence levels (NONE, LOW, MEDIUM,
   * HIGH) for each harmful category. For example, if a statement is classified as
   * <i>Hate</i> with HIGH confidence, the likelihood of the statement representing
   * hateful content is high. A single statement can be classified across multiple
   * categories with varying confidence levels. For example, a single statement can
   * be classified as <i>Hate</i> with HIGH confidence, <i> Insults</i> with LOW
   * confidence, <i>Sexual</i> with NONE confidence, and <i>Violence</i> with MEDIUM
   * confidence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GuardrailContentFilterConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailContentFilterConfig
  {
  public:
    AWS_QCONNECT_API GuardrailContentFilterConfig() = default;
    AWS_QCONNECT_API GuardrailContentFilterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API GuardrailContentFilterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The harmful category that the content filter is applied to.</p>
     */
    inline GuardrailContentFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailContentFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailContentFilterConfig& WithType(GuardrailContentFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strength of the content filter to apply to prompts. As you increase the
     * filter strength, the likelihood of filtering harmful content increases and the
     * probability of seeing harmful content in your application reduces.</p>
     */
    inline GuardrailFilterStrength GetInputStrength() const { return m_inputStrength; }
    inline bool InputStrengthHasBeenSet() const { return m_inputStrengthHasBeenSet; }
    inline void SetInputStrength(GuardrailFilterStrength value) { m_inputStrengthHasBeenSet = true; m_inputStrength = value; }
    inline GuardrailContentFilterConfig& WithInputStrength(GuardrailFilterStrength value) { SetInputStrength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strength of the content filter to apply to model responses. As you
     * increase the filter strength, the likelihood of filtering harmful content
     * increases and the probability of seeing harmful content in your application
     * reduces.</p>
     */
    inline GuardrailFilterStrength GetOutputStrength() const { return m_outputStrength; }
    inline bool OutputStrengthHasBeenSet() const { return m_outputStrengthHasBeenSet; }
    inline void SetOutputStrength(GuardrailFilterStrength value) { m_outputStrengthHasBeenSet = true; m_outputStrength = value; }
    inline GuardrailContentFilterConfig& WithOutputStrength(GuardrailFilterStrength value) { SetOutputStrength(value); return *this;}
    ///@}
  private:

    GuardrailContentFilterType m_type{GuardrailContentFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailFilterStrength m_inputStrength{GuardrailFilterStrength::NOT_SET};
    bool m_inputStrengthHasBeenSet = false;

    GuardrailFilterStrength m_outputStrength{GuardrailFilterStrength::NOT_SET};
    bool m_outputStrengthHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
