/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/DataSummary.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {
class DataSummary;

/**
 * <p>Details of streaming chunk data for email generative answers including
 * completion text and references.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/EmailGenerativeAnswerChunkDataDetails">AWS
 * API Reference</a></p>
 */
class EmailGenerativeAnswerChunkDataDetails {
 public:
  AWS_QCONNECT_API EmailGenerativeAnswerChunkDataDetails() = default;
  AWS_QCONNECT_API EmailGenerativeAnswerChunkDataDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API EmailGenerativeAnswerChunkDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The partial or complete text content of the generative answer response.</p>
   */
  inline const Aws::String& GetCompletion() const { return m_completion; }
  inline bool CompletionHasBeenSet() const { return m_completionHasBeenSet; }
  template <typename CompletionT = Aws::String>
  void SetCompletion(CompletionT&& value) {
    m_completionHasBeenSet = true;
    m_completion = std::forward<CompletionT>(value);
  }
  template <typename CompletionT = Aws::String>
  EmailGenerativeAnswerChunkDataDetails& WithCompletion(CompletionT&& value) {
    SetCompletion(std::forward<CompletionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Source references and citations from knowledge base articles used to generate
   * the answer.</p>
   */
  inline const Aws::Vector<DataSummary>& GetReferences() const { return m_references; }
  inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
  template <typename ReferencesT = Aws::Vector<DataSummary>>
  void SetReferences(ReferencesT&& value) {
    m_referencesHasBeenSet = true;
    m_references = std::forward<ReferencesT>(value);
  }
  template <typename ReferencesT = Aws::Vector<DataSummary>>
  EmailGenerativeAnswerChunkDataDetails& WithReferences(ReferencesT&& value) {
    SetReferences(std::forward<ReferencesT>(value));
    return *this;
  }
  template <typename ReferencesT = DataSummary>
  EmailGenerativeAnswerChunkDataDetails& AddReferences(ReferencesT&& value) {
    m_referencesHasBeenSet = true;
    m_references.emplace_back(std::forward<ReferencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for retrieving the next chunk of streaming response data, if
   * available.</p>
   */
  inline const Aws::String& GetNextChunkToken() const { return m_nextChunkToken; }
  inline bool NextChunkTokenHasBeenSet() const { return m_nextChunkTokenHasBeenSet; }
  template <typename NextChunkTokenT = Aws::String>
  void SetNextChunkToken(NextChunkTokenT&& value) {
    m_nextChunkTokenHasBeenSet = true;
    m_nextChunkToken = std::forward<NextChunkTokenT>(value);
  }
  template <typename NextChunkTokenT = Aws::String>
  EmailGenerativeAnswerChunkDataDetails& WithNextChunkToken(NextChunkTokenT&& value) {
    SetNextChunkToken(std::forward<NextChunkTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_completion;
  bool m_completionHasBeenSet = false;

  Aws::Vector<DataSummary> m_references;
  bool m_referencesHasBeenSet = false;

  Aws::String m_nextChunkToken;
  bool m_nextChunkTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
