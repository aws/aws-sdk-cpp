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
 * <p>Details of streaming chunk data for email overview including completion text
 * and pagination tokens.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/EmailOverviewChunkDataDetails">AWS
 * API Reference</a></p>
 */
class EmailOverviewChunkDataDetails {
 public:
  AWS_QCONNECT_API EmailOverviewChunkDataDetails() = default;
  AWS_QCONNECT_API EmailOverviewChunkDataDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API EmailOverviewChunkDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The partial or complete overview text content in structured HTML format with
   * customer issues, resolutions, and next steps.</p>
   */
  inline const Aws::String& GetCompletion() const { return m_completion; }
  inline bool CompletionHasBeenSet() const { return m_completionHasBeenSet; }
  template <typename CompletionT = Aws::String>
  void SetCompletion(CompletionT&& value) {
    m_completionHasBeenSet = true;
    m_completion = std::forward<CompletionT>(value);
  }
  template <typename CompletionT = Aws::String>
  EmailOverviewChunkDataDetails& WithCompletion(CompletionT&& value) {
    SetCompletion(std::forward<CompletionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for retrieving the next chunk of streaming overview data, if
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
  EmailOverviewChunkDataDetails& WithNextChunkToken(NextChunkTokenT&& value) {
    SetNextChunkToken(std::forward<NextChunkTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_completion;

  Aws::String m_nextChunkToken;
  bool m_completionHasBeenSet = false;
  bool m_nextChunkTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
