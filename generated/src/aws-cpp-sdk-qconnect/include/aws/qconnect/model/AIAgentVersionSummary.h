/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIAgentSummary.h>
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
   * <p>The summary of the AI Agent version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIAgentVersionSummary">AWS
   * API Reference</a></p>
   */
  class AIAgentVersionSummary
  {
  public:
    AWS_QCONNECT_API AIAgentVersionSummary() = default;
    AWS_QCONNECT_API AIAgentVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIAgentVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data for the summary of the AI Agent version.</p>
     */
    inline const AIAgentSummary& GetAiAgentSummary() const { return m_aiAgentSummary; }
    inline bool AiAgentSummaryHasBeenSet() const { return m_aiAgentSummaryHasBeenSet; }
    template<typename AiAgentSummaryT = AIAgentSummary>
    void SetAiAgentSummary(AiAgentSummaryT&& value) { m_aiAgentSummaryHasBeenSet = true; m_aiAgentSummary = std::forward<AiAgentSummaryT>(value); }
    template<typename AiAgentSummaryT = AIAgentSummary>
    AIAgentVersionSummary& WithAiAgentSummary(AiAgentSummaryT&& value) { SetAiAgentSummary(std::forward<AiAgentSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number for this AI Agent version.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline AIAgentVersionSummary& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    AIAgentSummary m_aiAgentSummary;
    bool m_aiAgentSummaryHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
