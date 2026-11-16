/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {

/**
 * <p>Settings for a memory strategy. The defaults described here apply when you
 * create a strategy. In <code>UpdateSpace</code>, a member you omit for a kept
 * strategy keeps its current value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/MemoryStrategyConfiguration">AWS
 * API Reference</a></p>
 */
class MemoryStrategyConfiguration {
 public:
  AWS_OPENSEARCHMEMORY_API MemoryStrategyConfiguration() = default;
  AWS_OPENSEARCHMEMORY_API MemoryStrategyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API MemoryStrategyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Instructions that define what a <code>CUSTOM</code> strategy extracts, up to
   * 30,720 characters. Required for a <code>CUSTOM</code> strategy:
   * <code>CreateSpace</code> and <code>UpdateSpace</code> fail with
   * <code>ValidationException</code> if a <code>CUSTOM</code> strategy has none.</p>
   * <p>Only <code>CUSTOM</code> strategies use it. <code>SEMANTIC</code> and
   * <code>SUMMARY</code> strategies always extract with the service's built-in
   * instructions: the service accepts and stores a prompt on them, and
   * <code>GetSpace</code> returns it, but extraction doesn't use it.</p>
   */
  inline const Aws::String& GetExtractionPrompt() const { return m_extractionPrompt; }
  inline bool ExtractionPromptHasBeenSet() const { return m_extractionPromptHasBeenSet; }
  template <typename ExtractionPromptT = Aws::String>
  void SetExtractionPrompt(ExtractionPromptT&& value) {
    m_extractionPromptHasBeenSet = true;
    m_extractionPrompt = std::forward<ExtractionPromptT>(value);
  }
  template <typename ExtractionPromptT = Aws::String>
  MemoryStrategyConfiguration& WithExtractionPrompt(ExtractionPromptT&& value) {
    SetExtractionPrompt(std::forward<ExtractionPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Extract once this many messages have accumulated, from 1 to 1000. Lower
   * values extract more often, in smaller batches. The default is 12.</p>
   * <p>Messages accumulate until the first of <code>extractEveryNMessages</code>,
   * <code>extractEveryNTokens</code>, and <code>idleTimeoutSeconds</code> is
   * reached. The service then extracts them together in one pass.</p>
   */
  inline int GetExtractEveryNMessages() const { return m_extractEveryNMessages; }
  inline bool ExtractEveryNMessagesHasBeenSet() const { return m_extractEveryNMessagesHasBeenSet; }
  inline void SetExtractEveryNMessages(int value) {
    m_extractEveryNMessagesHasBeenSet = true;
    m_extractEveryNMessages = value;
  }
  inline MemoryStrategyConfiguration& WithExtractEveryNMessages(int value) {
    SetExtractEveryNMessages(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Extract once this many tokens of conversation have accumulated, from 1 to
   * 80,000, however few messages that takes. Use it to bound how much text one
   * extraction call carries when message sizes vary widely. Omit it to bound a batch
   * only by <code>extractEveryNMessages</code>, <code>idleTimeoutSeconds</code>, and
   * the service's maximum batch size.</p>
   */
  inline int GetExtractEveryNTokens() const { return m_extractEveryNTokens; }
  inline bool ExtractEveryNTokensHasBeenSet() const { return m_extractEveryNTokensHasBeenSet; }
  inline void SetExtractEveryNTokens(int value) {
    m_extractEveryNTokensHasBeenSet = true;
    m_extractEveryNTokens = value;
  }
  inline MemoryStrategyConfiguration& WithExtractEveryNTokens(int value) {
    SetExtractEveryNTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Extract what has accumulated once the conversation has been idle for this
   * many seconds, from 1 to 86,400. The default is 60. This is what extracts the end
   * of a conversation that stops. Raise it when the pauses in your conversations are
   * longer than that, so that one exchange isn't split across several extraction
   * passes.</p>
   */
  inline int GetIdleTimeoutSeconds() const { return m_idleTimeoutSeconds; }
  inline bool IdleTimeoutSecondsHasBeenSet() const { return m_idleTimeoutSecondsHasBeenSet; }
  inline void SetIdleTimeoutSeconds(int value) {
    m_idleTimeoutSecondsHasBeenSet = true;
    m_idleTimeoutSeconds = value;
  }
  inline MemoryStrategyConfiguration& WithIdleTimeoutSeconds(int value) {
    SetIdleTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many of the strategy's stored memories that are most relevant to the
   * conversation to include in the extraction prompt, from 0 to 20, to improve
   * extraction and reduce duplicates. If you omit this or set it to 0, the service
   * uses its default (see <code>extractionSeedRecentN</code>). When this and
   * <code>extractionSeedRecentN</code> are both set, the two sets of memories are
   * combined without duplicates.</p>
   */
  inline int GetExtractionSeedTopK() const { return m_extractionSeedTopK; }
  inline bool ExtractionSeedTopKHasBeenSet() const { return m_extractionSeedTopKHasBeenSet; }
  inline void SetExtractionSeedTopK(int value) {
    m_extractionSeedTopKHasBeenSet = true;
    m_extractionSeedTopK = value;
  }
  inline MemoryStrategyConfiguration& WithExtractionSeedTopK(int value) {
    SetExtractionSeedTopK(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many of the strategy's most recent stored memories to include in the
   * extraction prompt, from 0 to 20. If you omit this or set it to 0, the service
   * uses its default: no seeding for most strategy types, and the 10 most recent
   * memories for a <code>SUMMARY</code> strategy when neither seed setting is given.
   * When this and <code>extractionSeedTopK</code> are both set, the two sets of
   * memories are combined without duplicates.</p>
   */
  inline int GetExtractionSeedRecentN() const { return m_extractionSeedRecentN; }
  inline bool ExtractionSeedRecentNHasBeenSet() const { return m_extractionSeedRecentNHasBeenSet; }
  inline void SetExtractionSeedRecentN(int value) {
    m_extractionSeedRecentNHasBeenSet = true;
    m_extractionSeedRecentN = value;
  }
  inline MemoryStrategyConfiguration& WithExtractionSeedRecentN(int value) {
    SetExtractionSeedRecentN(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the strategy consolidates memories. With consolidation,
   * each new memory is compared with similar stored memories, and the service adds
   * it, updates a stored memory, or skips it, so duplicate or contradicting facts
   * don't accumulate. Without it, every extracted memory is stored as a new memory,
   * which costs less and keeps a full history.</p> <p>When omitted, the default
   * depends on the strategy's type: on for <code>SEMANTIC</code> and
   * <code>SUMMARY</code>, off for <code>CUSTOM</code>.</p>
   */
  inline bool GetConsolidationEnabled() const { return m_consolidationEnabled; }
  inline bool ConsolidationEnabledHasBeenSet() const { return m_consolidationEnabledHasBeenSet; }
  inline void SetConsolidationEnabled(bool value) {
    m_consolidationEnabledHasBeenSet = true;
    m_consolidationEnabled = value;
  }
  inline MemoryStrategyConfiguration& WithConsolidationEnabled(bool value) {
    SetConsolidationEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_extractionPrompt;

  int m_extractEveryNMessages{0};

  int m_extractEveryNTokens{0};

  int m_idleTimeoutSeconds{0};

  int m_extractionSeedTopK{0};

  int m_extractionSeedRecentN{0};

  bool m_consolidationEnabled{false};
  bool m_extractionPromptHasBeenSet = false;
  bool m_extractEveryNMessagesHasBeenSet = false;
  bool m_extractEveryNTokensHasBeenSet = false;
  bool m_idleTimeoutSecondsHasBeenSet = false;
  bool m_extractionSeedTopKHasBeenSet = false;
  bool m_extractionSeedRecentNHasBeenSet = false;
  bool m_consolidationEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
