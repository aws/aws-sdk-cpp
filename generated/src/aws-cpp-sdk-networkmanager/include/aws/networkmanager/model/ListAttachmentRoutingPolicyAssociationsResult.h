/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/AttachmentRoutingPolicyAssociationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {
class ListAttachmentRoutingPolicyAssociationsResult {
 public:
  AWS_NETWORKMANAGER_API ListAttachmentRoutingPolicyAssociationsResult() = default;
  AWS_NETWORKMANAGER_API ListAttachmentRoutingPolicyAssociationsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API ListAttachmentRoutingPolicyAssociationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of attachment routing policy associations.</p>
   */
  inline const Aws::Vector<AttachmentRoutingPolicyAssociationSummary>& GetAttachmentRoutingPolicyAssociations() const {
    return m_attachmentRoutingPolicyAssociations;
  }
  template <typename AttachmentRoutingPolicyAssociationsT = Aws::Vector<AttachmentRoutingPolicyAssociationSummary>>
  void SetAttachmentRoutingPolicyAssociations(AttachmentRoutingPolicyAssociationsT&& value) {
    m_attachmentRoutingPolicyAssociationsHasBeenSet = true;
    m_attachmentRoutingPolicyAssociations = std::forward<AttachmentRoutingPolicyAssociationsT>(value);
  }
  template <typename AttachmentRoutingPolicyAssociationsT = Aws::Vector<AttachmentRoutingPolicyAssociationSummary>>
  ListAttachmentRoutingPolicyAssociationsResult& WithAttachmentRoutingPolicyAssociations(AttachmentRoutingPolicyAssociationsT&& value) {
    SetAttachmentRoutingPolicyAssociations(std::forward<AttachmentRoutingPolicyAssociationsT>(value));
    return *this;
  }
  template <typename AttachmentRoutingPolicyAssociationsT = AttachmentRoutingPolicyAssociationSummary>
  ListAttachmentRoutingPolicyAssociationsResult& AddAttachmentRoutingPolicyAssociations(AttachmentRoutingPolicyAssociationsT&& value) {
    m_attachmentRoutingPolicyAssociationsHasBeenSet = true;
    m_attachmentRoutingPolicyAssociations.emplace_back(std::forward<AttachmentRoutingPolicyAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAttachmentRoutingPolicyAssociationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListAttachmentRoutingPolicyAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AttachmentRoutingPolicyAssociationSummary> m_attachmentRoutingPolicyAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_attachmentRoutingPolicyAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
