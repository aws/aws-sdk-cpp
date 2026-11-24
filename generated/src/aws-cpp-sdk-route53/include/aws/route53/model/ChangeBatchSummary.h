/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeHistoryOperation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Route53 {
namespace Model {

/**
 * <p>A summary of one change batch in the change history of a hosted
 * zone.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeBatchSummary">AWS
 * API Reference</a></p>
 */
class ChangeBatchSummary {
 public:
  AWS_ROUTE53_API ChangeBatchSummary() = default;
  AWS_ROUTE53_API ChangeBatchSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API ChangeBatchSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The ID of the change batch. This is the same ID that
   * <code>ChangeResourceRecordSets</code> returns in <code>ChangeInfo/Id</code> and
   * that you pass to <code>GetChange</code>.</p>
   */
  inline const Aws::String& GetChangeId() const { return m_changeId; }
  inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }
  template <typename ChangeIdT = Aws::String>
  void SetChangeId(ChangeIdT&& value) {
    m_changeIdHasBeenSet = true;
    m_changeId = std::forward<ChangeIdT>(value);
  }
  template <typename ChangeIdT = Aws::String>
  ChangeBatchSummary& WithChangeId(ChangeIdT&& value) {
    SetChangeId(std::forward<ChangeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Route 53 API operation that submitted the change batch:
   * <code>ChangeResourceRecordSets</code> or <code>CreateHostedZone</code>. New
   * values might be added, so ignore values that your code doesn't recognize.</p>
   */
  inline ChangeHistoryOperation GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  inline void SetOperation(ChangeHistoryOperation value) {
    m_operationHasBeenSet = true;
    m_operation = value;
  }
  inline ChangeBatchSummary& WithOperation(ChangeHistoryOperation value) {
    SetOperation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in UTC, when the change batch was submitted.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
  inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  void SetSubmittedAt(SubmittedAtT&& value) {
    m_submittedAtHasBeenSet = true;
    m_submittedAt = std::forward<SubmittedAtT>(value);
  }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  ChangeBatchSummary& WithSubmittedAt(SubmittedAtT&& value) {
    SetSubmittedAt(std::forward<SubmittedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name of the principal that submitted the request, for
   * example, <code>arn:aws:sts::111122223333:assumed-role/Admin/my-session</code>.
   * This element is absent when Route 53 has no principal to record for the
   * change.</p>
   */
  inline const Aws::String& GetSubmittedBy() const { return m_submittedBy; }
  inline bool SubmittedByHasBeenSet() const { return m_submittedByHasBeenSet; }
  template <typename SubmittedByT = Aws::String>
  void SetSubmittedBy(SubmittedByT&& value) {
    m_submittedByHasBeenSet = true;
    m_submittedBy = std::forward<SubmittedByT>(value);
  }
  template <typename SubmittedByT = Aws::String>
  ChangeBatchSummary& WithSubmittedBy(SubmittedByT&& value) {
    SetSubmittedBy(std::forward<SubmittedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request ID of the call that submitted the change batch. CloudTrail
   * records the same value in <code>requestID</code>, so you can use it to find the
   * CloudTrail event for the change. This element is absent when there was no
   * request.</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ChangeBatchSummary& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comment that was submitted with the change batch, if any.</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  ChangeBatchSummary& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of changes in the change batch. For <code>CreateHostedZone</code>,
   * the value is 0.</p>
   */
  inline long long GetChangeCount() const { return m_changeCount; }
  inline bool ChangeCountHasBeenSet() const { return m_changeCountHasBeenSet; }
  inline void SetChangeCount(long long value) {
    m_changeCountHasBeenSet = true;
    m_changeCount = value;
  }
  inline ChangeBatchSummary& WithChangeCount(long long value) {
    SetChangeCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_changeId;

  ChangeHistoryOperation m_operation{ChangeHistoryOperation::NOT_SET};

  Aws::Utils::DateTime m_submittedAt{};

  Aws::String m_submittedBy;

  Aws::String m_requestId;

  Aws::String m_comment;

  long long m_changeCount{0};
  bool m_changeIdHasBeenSet = false;
  bool m_operationHasBeenSet = false;
  bool m_submittedAtHasBeenSet = false;
  bool m_submittedByHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_commentHasBeenSet = false;
  bool m_changeCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
