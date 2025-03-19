/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIPromptSummary.h>
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
   * <p>The summary of the AI Prompt version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIPromptVersionSummary">AWS
   * API Reference</a></p>
   */
  class AIPromptVersionSummary
  {
  public:
    AWS_QCONNECT_API AIPromptVersionSummary() = default;
    AWS_QCONNECT_API AIPromptVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIPromptVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date for the summary of the AI Prompt version.</p>
     */
    inline const AIPromptSummary& GetAiPromptSummary() const { return m_aiPromptSummary; }
    inline bool AiPromptSummaryHasBeenSet() const { return m_aiPromptSummaryHasBeenSet; }
    template<typename AiPromptSummaryT = AIPromptSummary>
    void SetAiPromptSummary(AiPromptSummaryT&& value) { m_aiPromptSummaryHasBeenSet = true; m_aiPromptSummary = std::forward<AiPromptSummaryT>(value); }
    template<typename AiPromptSummaryT = AIPromptSummary>
    AIPromptVersionSummary& WithAiPromptSummary(AiPromptSummaryT&& value) { SetAiPromptSummary(std::forward<AiPromptSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number for this AI Prompt version.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline AIPromptVersionSummary& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    AIPromptSummary m_aiPromptSummary;
    bool m_aiPromptSummaryHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
