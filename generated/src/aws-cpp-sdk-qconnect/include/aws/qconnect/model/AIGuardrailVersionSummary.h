/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIGuardrailSummary.h>
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
   * <p>The summary of the AI Guardrail version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIGuardrailVersionSummary">AWS
   * API Reference</a></p>
   */
  class AIGuardrailVersionSummary
  {
  public:
    AWS_QCONNECT_API AIGuardrailVersionSummary() = default;
    AWS_QCONNECT_API AIGuardrailVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIGuardrailVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data for the summary of the AI Guardrail version.</p>
     */
    inline const AIGuardrailSummary& GetAiGuardrailSummary() const { return m_aiGuardrailSummary; }
    inline bool AiGuardrailSummaryHasBeenSet() const { return m_aiGuardrailSummaryHasBeenSet; }
    template<typename AiGuardrailSummaryT = AIGuardrailSummary>
    void SetAiGuardrailSummary(AiGuardrailSummaryT&& value) { m_aiGuardrailSummaryHasBeenSet = true; m_aiGuardrailSummary = std::forward<AiGuardrailSummaryT>(value); }
    template<typename AiGuardrailSummaryT = AIGuardrailSummary>
    AIGuardrailVersionSummary& WithAiGuardrailSummary(AiGuardrailSummaryT&& value) { SetAiGuardrailSummary(std::forward<AiGuardrailSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number for this AI Guardrail version.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline AIGuardrailVersionSummary& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    AIGuardrailSummary m_aiGuardrailSummary;
    bool m_aiGuardrailSummaryHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
