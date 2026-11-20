/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeAction.h>
#include <aws/route53/model/ChangeHistoryOperation.h>
#include <aws/route53/model/ResourceRecordSet.h>

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
 * <p>One change to a resource record set in the change history of a hosted zone,
 * with the resource record set that the change wrote or deleted.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ResourceRecordSetChange">AWS
 * API Reference</a></p>
 */
class ResourceRecordSetChange {
 public:
  AWS_ROUTE53_API ResourceRecordSetChange() = default;
  AWS_ROUTE53_API ResourceRecordSetChange(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API ResourceRecordSetChange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The ID of the change batch that contains the change. To get every change in
   * the change batch, specify this ID in <code>GetHostedZoneChangeBatch</code>.</p>
   */
  inline const Aws::String& GetChangeId() const { return m_changeId; }
  inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }
  template <typename ChangeIdT = Aws::String>
  void SetChangeId(ChangeIdT&& value) {
    m_changeIdHasBeenSet = true;
    m_changeId = std::forward<ChangeIdT>(value);
  }
  template <typename ChangeIdT = Aws::String>
  ResourceRecordSetChange& WithChangeId(ChangeIdT&& value) {
    SetChangeId(std::forward<ChangeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Route 53 API operation that submitted the change. New values might be
   * added, so ignore values that your code doesn't recognize.</p>
   */
  inline ChangeHistoryOperation GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  inline void SetOperation(ChangeHistoryOperation value) {
    m_operationHasBeenSet = true;
    m_operation = value;
  }
  inline ResourceRecordSetChange& WithOperation(ChangeHistoryOperation value) {
    SetOperation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in UTC, when the change batch that contains the change was
   * submitted.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
  inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  void SetSubmittedAt(SubmittedAtT&& value) {
    m_submittedAtHasBeenSet = true;
    m_submittedAt = std::forward<SubmittedAtT>(value);
  }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  ResourceRecordSetChange& WithSubmittedAt(SubmittedAtT&& value) {
    SetSubmittedAt(std::forward<SubmittedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name of the principal that submitted the request. This
   * element is absent when Route 53 has no principal to record for the change.</p>
   */
  inline const Aws::String& GetSubmittedBy() const { return m_submittedBy; }
  inline bool SubmittedByHasBeenSet() const { return m_submittedByHasBeenSet; }
  template <typename SubmittedByT = Aws::String>
  void SetSubmittedBy(SubmittedByT&& value) {
    m_submittedByHasBeenSet = true;
    m_submittedBy = std::forward<SubmittedByT>(value);
  }
  template <typename SubmittedByT = Aws::String>
  ResourceRecordSetChange& WithSubmittedBy(SubmittedByT&& value) {
    SetSubmittedBy(std::forward<SubmittedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request ID of the call that submitted the change. CloudTrail records the
   * same value in <code>requestID</code>. This element is absent when there was no
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
  ResourceRecordSetChange& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action in the change: <code>CREATE</code>, <code>DELETE</code>, or
   * <code>UPSERT</code>.</p>
   */
  inline ChangeAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ChangeAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline ResourceRecordSetChange& WithAction(ChangeAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource record set that the change wrote or deleted, in the same form
   * that <code>ListResourceRecordSets</code> returns. For example, the name is in
   * lowercase and ends with a dot. For an <code>UPSERT</code> or a
   * <code>DELETE</code>, the response doesn't contain the values that the resource
   * record set had before the change.</p>
   */
  inline const ResourceRecordSet& GetResourceRecordSet() const { return m_resourceRecordSet; }
  inline bool ResourceRecordSetHasBeenSet() const { return m_resourceRecordSetHasBeenSet; }
  template <typename ResourceRecordSetT = ResourceRecordSet>
  void SetResourceRecordSet(ResourceRecordSetT&& value) {
    m_resourceRecordSetHasBeenSet = true;
    m_resourceRecordSet = std::forward<ResourceRecordSetT>(value);
  }
  template <typename ResourceRecordSetT = ResourceRecordSet>
  ResourceRecordSetChange& WithResourceRecordSet(ResourceRecordSetT&& value) {
    SetResourceRecordSet(std::forward<ResourceRecordSetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_changeId;

  ChangeHistoryOperation m_operation{ChangeHistoryOperation::NOT_SET};

  Aws::Utils::DateTime m_submittedAt{};

  Aws::String m_submittedBy;

  Aws::String m_requestId;

  ChangeAction m_action{ChangeAction::NOT_SET};

  ResourceRecordSet m_resourceRecordSet;
  bool m_changeIdHasBeenSet = false;
  bool m_operationHasBeenSet = false;
  bool m_submittedAtHasBeenSet = false;
  bool m_submittedByHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_resourceRecordSetHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
