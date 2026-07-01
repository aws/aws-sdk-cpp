/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ContainerAssociationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {
class ListContainerAssociationsResult {
 public:
  AWS_NETWORKFIREWALL_API ListContainerAssociationsResult() = default;
  AWS_NETWORKFIREWALL_API ListContainerAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API ListContainerAssociationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The container association metadata objects.</p>
   */
  inline const Aws::Vector<ContainerAssociationSummary>& GetContainerAssociations() const { return m_containerAssociations; }
  template <typename ContainerAssociationsT = Aws::Vector<ContainerAssociationSummary>>
  void SetContainerAssociations(ContainerAssociationsT&& value) {
    m_containerAssociationsHasBeenSet = true;
    m_containerAssociations = std::forward<ContainerAssociationsT>(value);
  }
  template <typename ContainerAssociationsT = Aws::Vector<ContainerAssociationSummary>>
  ListContainerAssociationsResult& WithContainerAssociations(ContainerAssociationsT&& value) {
    SetContainerAssociations(std::forward<ContainerAssociationsT>(value));
    return *this;
  }
  template <typename ContainerAssociationsT = ContainerAssociationSummary>
  ListContainerAssociationsResult& AddContainerAssociations(ContainerAssociationsT&& value) {
    m_containerAssociationsHasBeenSet = true;
    m_containerAssociations.emplace_back(std::forward<ContainerAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
   * the number of objects that are still available for retrieval exceeds the maximum
   * you requested, Network Firewall returns a <code>NextToken</code> value in the
   * response. To retrieve the next batch of objects, use the token returned from the
   * prior request in your next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListContainerAssociationsResult& WithNextToken(NextTokenT&& value) {
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
  ListContainerAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ContainerAssociationSummary> m_containerAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_containerAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
