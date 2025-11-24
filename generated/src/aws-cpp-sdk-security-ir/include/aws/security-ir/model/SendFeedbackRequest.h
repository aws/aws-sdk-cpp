/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/UsefulnessRating.h>

#include <utility>

namespace Aws {
namespace SecurityIR {
namespace Model {

/**
 */
class SendFeedbackRequest : public SecurityIRRequest {
 public:
  AWS_SECURITYIR_API SendFeedbackRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendFeedback"; }

  AWS_SECURITYIR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Send feedback based on request caseID</p>
   */
  inline const Aws::String& GetCaseId() const { return m_caseId; }
  inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
  template <typename CaseIdT = Aws::String>
  void SetCaseId(CaseIdT&& value) {
    m_caseIdHasBeenSet = true;
    m_caseId = std::forward<CaseIdT>(value);
  }
  template <typename CaseIdT = Aws::String>
  SendFeedbackRequest& WithCaseId(CaseIdT&& value) {
    SetCaseId(std::forward<CaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Send feedback based on request result ID</p>
   */
  inline const Aws::String& GetResultId() const { return m_resultId; }
  inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
  template <typename ResultIdT = Aws::String>
  void SetResultId(ResultIdT&& value) {
    m_resultIdHasBeenSet = true;
    m_resultId = std::forward<ResultIdT>(value);
  }
  template <typename ResultIdT = Aws::String>
  SendFeedbackRequest& WithResultId(ResultIdT&& value) {
    SetResultId(std::forward<ResultIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Required enum value indicating user assessment of result q.....</p>
   */
  inline UsefulnessRating GetUsefulness() const { return m_usefulness; }
  inline bool UsefulnessHasBeenSet() const { return m_usefulnessHasBeenSet; }
  inline void SetUsefulness(UsefulnessRating value) {
    m_usefulnessHasBeenSet = true;
    m_usefulness = value;
  }
  inline SendFeedbackRequest& WithUsefulness(UsefulnessRating value) {
    SetUsefulness(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Send feedback based on request comments</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  SendFeedbackRequest& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_caseId;
  bool m_caseIdHasBeenSet = false;

  Aws::String m_resultId;
  bool m_resultIdHasBeenSet = false;

  UsefulnessRating m_usefulness{UsefulnessRating::NOT_SET};
  bool m_usefulnessHasBeenSet = false;

  Aws::String m_comment;
  bool m_commentHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
