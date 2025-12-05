/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/UsefulnessRating.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityIR {
namespace Model {

/**
 * <p>Represents user feedback for an investigation result. This structure captures
 * the user's evaluation of the investigation's quality, usefulness, and any
 * additional comments.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/InvestigationFeedback">AWS
 * API Reference</a></p>
 */
class InvestigationFeedback {
 public:
  AWS_SECURITYIR_API InvestigationFeedback() = default;
  AWS_SECURITYIR_API InvestigationFeedback(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYIR_API InvestigationFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>User assessment of the investigation result's quality and helpfulness. This
   * rating indicates how valuable the investigation findings were in addressing the
   * case.</p>
   */
  inline UsefulnessRating GetUsefulness() const { return m_usefulness; }
  inline bool UsefulnessHasBeenSet() const { return m_usefulnessHasBeenSet; }
  inline void SetUsefulness(UsefulnessRating value) {
    m_usefulnessHasBeenSet = true;
    m_usefulness = value;
  }
  inline InvestigationFeedback& WithUsefulness(UsefulnessRating value) {
    SetUsefulness(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional user comments providing additional context about the investigation
   * feedback. This allows users to explain their rating or provide suggestions for
   * improvement.</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  InvestigationFeedback& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ISO 8601 timestamp when the feedback was submitted. This records when the
   * user provided their assessment of the investigation results.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
  inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  void SetSubmittedAt(SubmittedAtT&& value) {
    m_submittedAtHasBeenSet = true;
    m_submittedAt = std::forward<SubmittedAtT>(value);
  }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  InvestigationFeedback& WithSubmittedAt(SubmittedAtT&& value) {
    SetSubmittedAt(std::forward<SubmittedAtT>(value));
    return *this;
  }
  ///@}
 private:
  UsefulnessRating m_usefulness{UsefulnessRating::NOT_SET};

  Aws::String m_comment;

  Aws::Utils::DateTime m_submittedAt{};
  bool m_usefulnessHasBeenSet = false;
  bool m_commentHasBeenSet = false;
  bool m_submittedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
