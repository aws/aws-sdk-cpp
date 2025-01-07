/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/GuardrailPiiEntityConfig.h>
#include <aws/qconnect/model/GuardrailRegexConfig.h>
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
   * <p>Contains details about PII entities and regular expressions to configure for
   * the AI Guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIGuardrailSensitiveInformationPolicyConfig">AWS
   * API Reference</a></p>
   */
  class AIGuardrailSensitiveInformationPolicyConfig
  {
  public:
    AWS_QCONNECT_API AIGuardrailSensitiveInformationPolicyConfig();
    AWS_QCONNECT_API AIGuardrailSensitiveInformationPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIGuardrailSensitiveInformationPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of PII entities to configure to the AI Guardrail.</p>
     */
    inline const Aws::Vector<GuardrailPiiEntityConfig>& GetPiiEntitiesConfig() const{ return m_piiEntitiesConfig; }
    inline bool PiiEntitiesConfigHasBeenSet() const { return m_piiEntitiesConfigHasBeenSet; }
    inline void SetPiiEntitiesConfig(const Aws::Vector<GuardrailPiiEntityConfig>& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig = value; }
    inline void SetPiiEntitiesConfig(Aws::Vector<GuardrailPiiEntityConfig>&& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig = std::move(value); }
    inline AIGuardrailSensitiveInformationPolicyConfig& WithPiiEntitiesConfig(const Aws::Vector<GuardrailPiiEntityConfig>& value) { SetPiiEntitiesConfig(value); return *this;}
    inline AIGuardrailSensitiveInformationPolicyConfig& WithPiiEntitiesConfig(Aws::Vector<GuardrailPiiEntityConfig>&& value) { SetPiiEntitiesConfig(std::move(value)); return *this;}
    inline AIGuardrailSensitiveInformationPolicyConfig& AddPiiEntitiesConfig(const GuardrailPiiEntityConfig& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig.push_back(value); return *this; }
    inline AIGuardrailSensitiveInformationPolicyConfig& AddPiiEntitiesConfig(GuardrailPiiEntityConfig&& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expressions to configure to the AI Guardrail.</p>
     */
    inline const Aws::Vector<GuardrailRegexConfig>& GetRegexesConfig() const{ return m_regexesConfig; }
    inline bool RegexesConfigHasBeenSet() const { return m_regexesConfigHasBeenSet; }
    inline void SetRegexesConfig(const Aws::Vector<GuardrailRegexConfig>& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig = value; }
    inline void SetRegexesConfig(Aws::Vector<GuardrailRegexConfig>&& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig = std::move(value); }
    inline AIGuardrailSensitiveInformationPolicyConfig& WithRegexesConfig(const Aws::Vector<GuardrailRegexConfig>& value) { SetRegexesConfig(value); return *this;}
    inline AIGuardrailSensitiveInformationPolicyConfig& WithRegexesConfig(Aws::Vector<GuardrailRegexConfig>&& value) { SetRegexesConfig(std::move(value)); return *this;}
    inline AIGuardrailSensitiveInformationPolicyConfig& AddRegexesConfig(const GuardrailRegexConfig& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig.push_back(value); return *this; }
    inline AIGuardrailSensitiveInformationPolicyConfig& AddRegexesConfig(GuardrailRegexConfig&& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailPiiEntityConfig> m_piiEntitiesConfig;
    bool m_piiEntitiesConfigHasBeenSet = false;

    Aws::Vector<GuardrailRegexConfig> m_regexesConfig;
    bool m_regexesConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
