/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/GuardrailManagedWordsConfig.h>
#include <aws/qconnect/model/GuardrailWordConfig.h>
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
   * <p>Contains details about the word policy to configured for the AI
   * Guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIGuardrailWordPolicyConfig">AWS
   * API Reference</a></p>
   */
  class AIGuardrailWordPolicyConfig
  {
  public:
    AWS_QCONNECT_API AIGuardrailWordPolicyConfig();
    AWS_QCONNECT_API AIGuardrailWordPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIGuardrailWordPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of managed words to configure for the AI Guardrail.</p>
     */
    inline const Aws::Vector<GuardrailManagedWordsConfig>& GetManagedWordListsConfig() const{ return m_managedWordListsConfig; }
    inline bool ManagedWordListsConfigHasBeenSet() const { return m_managedWordListsConfigHasBeenSet; }
    inline void SetManagedWordListsConfig(const Aws::Vector<GuardrailManagedWordsConfig>& value) { m_managedWordListsConfigHasBeenSet = true; m_managedWordListsConfig = value; }
    inline void SetManagedWordListsConfig(Aws::Vector<GuardrailManagedWordsConfig>&& value) { m_managedWordListsConfigHasBeenSet = true; m_managedWordListsConfig = std::move(value); }
    inline AIGuardrailWordPolicyConfig& WithManagedWordListsConfig(const Aws::Vector<GuardrailManagedWordsConfig>& value) { SetManagedWordListsConfig(value); return *this;}
    inline AIGuardrailWordPolicyConfig& WithManagedWordListsConfig(Aws::Vector<GuardrailManagedWordsConfig>&& value) { SetManagedWordListsConfig(std::move(value)); return *this;}
    inline AIGuardrailWordPolicyConfig& AddManagedWordListsConfig(const GuardrailManagedWordsConfig& value) { m_managedWordListsConfigHasBeenSet = true; m_managedWordListsConfig.push_back(value); return *this; }
    inline AIGuardrailWordPolicyConfig& AddManagedWordListsConfig(GuardrailManagedWordsConfig&& value) { m_managedWordListsConfigHasBeenSet = true; m_managedWordListsConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of words to configure for the AI Guardrail.</p>
     */
    inline const Aws::Vector<GuardrailWordConfig>& GetWordsConfig() const{ return m_wordsConfig; }
    inline bool WordsConfigHasBeenSet() const { return m_wordsConfigHasBeenSet; }
    inline void SetWordsConfig(const Aws::Vector<GuardrailWordConfig>& value) { m_wordsConfigHasBeenSet = true; m_wordsConfig = value; }
    inline void SetWordsConfig(Aws::Vector<GuardrailWordConfig>&& value) { m_wordsConfigHasBeenSet = true; m_wordsConfig = std::move(value); }
    inline AIGuardrailWordPolicyConfig& WithWordsConfig(const Aws::Vector<GuardrailWordConfig>& value) { SetWordsConfig(value); return *this;}
    inline AIGuardrailWordPolicyConfig& WithWordsConfig(Aws::Vector<GuardrailWordConfig>&& value) { SetWordsConfig(std::move(value)); return *this;}
    inline AIGuardrailWordPolicyConfig& AddWordsConfig(const GuardrailWordConfig& value) { m_wordsConfigHasBeenSet = true; m_wordsConfig.push_back(value); return *this; }
    inline AIGuardrailWordPolicyConfig& AddWordsConfig(GuardrailWordConfig&& value) { m_wordsConfigHasBeenSet = true; m_wordsConfig.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailManagedWordsConfig> m_managedWordListsConfig;
    bool m_managedWordListsConfigHasBeenSet = false;

    Aws::Vector<GuardrailWordConfig> m_wordsConfig;
    bool m_wordsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
