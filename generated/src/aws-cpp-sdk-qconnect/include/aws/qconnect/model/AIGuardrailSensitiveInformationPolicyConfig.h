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
    AWS_QCONNECT_API AIGuardrailSensitiveInformationPolicyConfig() = default;
    AWS_QCONNECT_API AIGuardrailSensitiveInformationPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIGuardrailSensitiveInformationPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of PII entities to configure to the AI Guardrail.</p>
     */
    inline const Aws::Vector<GuardrailPiiEntityConfig>& GetPiiEntitiesConfig() const { return m_piiEntitiesConfig; }
    inline bool PiiEntitiesConfigHasBeenSet() const { return m_piiEntitiesConfigHasBeenSet; }
    template<typename PiiEntitiesConfigT = Aws::Vector<GuardrailPiiEntityConfig>>
    void SetPiiEntitiesConfig(PiiEntitiesConfigT&& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig = std::forward<PiiEntitiesConfigT>(value); }
    template<typename PiiEntitiesConfigT = Aws::Vector<GuardrailPiiEntityConfig>>
    AIGuardrailSensitiveInformationPolicyConfig& WithPiiEntitiesConfig(PiiEntitiesConfigT&& value) { SetPiiEntitiesConfig(std::forward<PiiEntitiesConfigT>(value)); return *this;}
    template<typename PiiEntitiesConfigT = GuardrailPiiEntityConfig>
    AIGuardrailSensitiveInformationPolicyConfig& AddPiiEntitiesConfig(PiiEntitiesConfigT&& value) { m_piiEntitiesConfigHasBeenSet = true; m_piiEntitiesConfig.emplace_back(std::forward<PiiEntitiesConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expressions to configure to the AI Guardrail.</p>
     */
    inline const Aws::Vector<GuardrailRegexConfig>& GetRegexesConfig() const { return m_regexesConfig; }
    inline bool RegexesConfigHasBeenSet() const { return m_regexesConfigHasBeenSet; }
    template<typename RegexesConfigT = Aws::Vector<GuardrailRegexConfig>>
    void SetRegexesConfig(RegexesConfigT&& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig = std::forward<RegexesConfigT>(value); }
    template<typename RegexesConfigT = Aws::Vector<GuardrailRegexConfig>>
    AIGuardrailSensitiveInformationPolicyConfig& WithRegexesConfig(RegexesConfigT&& value) { SetRegexesConfig(std::forward<RegexesConfigT>(value)); return *this;}
    template<typename RegexesConfigT = GuardrailRegexConfig>
    AIGuardrailSensitiveInformationPolicyConfig& AddRegexesConfig(RegexesConfigT&& value) { m_regexesConfigHasBeenSet = true; m_regexesConfig.emplace_back(std::forward<RegexesConfigT>(value)); return *this; }
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
