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
 * <p>Details about notes data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/NotesDataDetails">AWS
 * API Reference</a></p>
 */
class NotesDataDetails {
 public:
  AWS_QCONNECT_API NotesDataDetails() = default;
  AWS_QCONNECT_API NotesDataDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API NotesDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The completion data for notes.</p>
   */
  inline const Aws::String& GetCompletion() const { return m_completion; }
  inline bool CompletionHasBeenSet() const { return m_completionHasBeenSet; }
  template <typename CompletionT = Aws::String>
  void SetCompletion(CompletionT&& value) {
    m_completionHasBeenSet = true;
    m_completion = std::forward<CompletionT>(value);
  }
  template <typename CompletionT = Aws::String>
  NotesDataDetails& WithCompletion(CompletionT&& value) {
    SetCompletion(std::forward<CompletionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_completion;
  bool m_completionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
