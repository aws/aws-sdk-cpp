/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

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

/**
 * <p>Details about notes chunk data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/NotesChunkDataDetails">AWS
 * API Reference</a></p>
 */
class NotesChunkDataDetails {
 public:
  AWS_QCONNECT_API NotesChunkDataDetails() = default;
  AWS_QCONNECT_API NotesChunkDataDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API NotesChunkDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A chunk of the notes completion.</p>
   */
  inline const Aws::String& GetCompletion() const { return m_completion; }
  inline bool CompletionHasBeenSet() const { return m_completionHasBeenSet; }
  template <typename CompletionT = Aws::String>
  void SetCompletion(CompletionT&& value) {
    m_completionHasBeenSet = true;
    m_completion = std::forward<CompletionT>(value);
  }
  template <typename CompletionT = Aws::String>
  NotesChunkDataDetails& WithCompletion(CompletionT&& value) {
    SetCompletion(std::forward<CompletionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next chunk of notes data.</p>
   */
  inline const Aws::String& GetNextChunkToken() const { return m_nextChunkToken; }
  inline bool NextChunkTokenHasBeenSet() const { return m_nextChunkTokenHasBeenSet; }
  template <typename NextChunkTokenT = Aws::String>
  void SetNextChunkToken(NextChunkTokenT&& value) {
    m_nextChunkTokenHasBeenSet = true;
    m_nextChunkToken = std::forward<NextChunkTokenT>(value);
  }
  template <typename NextChunkTokenT = Aws::String>
  NotesChunkDataDetails& WithNextChunkToken(NextChunkTokenT&& value) {
    SetNextChunkToken(std::forward<NextChunkTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_completion;
  bool m_completionHasBeenSet = false;

  Aws::String m_nextChunkToken;
  bool m_nextChunkTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
