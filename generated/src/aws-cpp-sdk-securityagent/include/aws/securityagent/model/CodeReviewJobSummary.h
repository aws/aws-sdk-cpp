/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/JobStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Contains summary information about a code review job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CodeReviewJobSummary">AWS
 * API Reference</a></p>
 */
class CodeReviewJobSummary {
 public:
  AWS_SECURITYAGENT_API CodeReviewJobSummary() = default;
  AWS_SECURITYAGENT_API CodeReviewJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API CodeReviewJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the code review job.</p>
   */
  inline const Aws::String& GetCodeReviewJobId() const { return m_codeReviewJobId; }
  inline bool CodeReviewJobIdHasBeenSet() const { return m_codeReviewJobIdHasBeenSet; }
  template <typename CodeReviewJobIdT = Aws::String>
  void SetCodeReviewJobId(CodeReviewJobIdT&& value) {
    m_codeReviewJobIdHasBeenSet = true;
    m_codeReviewJobId = std::forward<CodeReviewJobIdT>(value);
  }
  template <typename CodeReviewJobIdT = Aws::String>
  CodeReviewJobSummary& WithCodeReviewJobId(CodeReviewJobIdT&& value) {
    SetCodeReviewJobId(std::forward<CodeReviewJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the code review associated with the job.</p>
   */
  inline const Aws::String& GetCodeReviewId() const { return m_codeReviewId; }
  inline bool CodeReviewIdHasBeenSet() const { return m_codeReviewIdHasBeenSet; }
  template <typename CodeReviewIdT = Aws::String>
  void SetCodeReviewId(CodeReviewIdT&& value) {
    m_codeReviewIdHasBeenSet = true;
    m_codeReviewId = std::forward<CodeReviewIdT>(value);
  }
  template <typename CodeReviewIdT = Aws::String>
  CodeReviewJobSummary& WithCodeReviewId(CodeReviewIdT&& value) {
    SetCodeReviewId(std::forward<CodeReviewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the code review job.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CodeReviewJobSummary& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the code review job.</p>
   */
  inline JobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(JobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CodeReviewJobSummary& WithStatus(JobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the code review job was created, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CodeReviewJobSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the code review job was last updated, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CodeReviewJobSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_codeReviewJobId;

  Aws::String m_codeReviewId;

  Aws::String m_title;

  JobStatus m_status{JobStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_codeReviewJobIdHasBeenSet = false;
  bool m_codeReviewIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
