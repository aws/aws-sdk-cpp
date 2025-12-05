/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/HostedZoneAssociationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {
class ListHostedZoneAssociationsResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ListHostedZoneAssociationsResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API ListHostedZoneAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API ListHostedZoneAssociationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A pagination token used for large sets of results that can't be returned in a
   * single response. Provide this token in the next call to get the results not
   * returned in this call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListHostedZoneAssociationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of the private hosted zone associations.</p>
   */
  inline const Aws::Vector<HostedZoneAssociationSummary>& GetHostedZoneAssociations() const { return m_hostedZoneAssociations; }
  template <typename HostedZoneAssociationsT = Aws::Vector<HostedZoneAssociationSummary>>
  void SetHostedZoneAssociations(HostedZoneAssociationsT&& value) {
    m_hostedZoneAssociationsHasBeenSet = true;
    m_hostedZoneAssociations = std::forward<HostedZoneAssociationsT>(value);
  }
  template <typename HostedZoneAssociationsT = Aws::Vector<HostedZoneAssociationSummary>>
  ListHostedZoneAssociationsResult& WithHostedZoneAssociations(HostedZoneAssociationsT&& value) {
    SetHostedZoneAssociations(std::forward<HostedZoneAssociationsT>(value));
    return *this;
  }
  template <typename HostedZoneAssociationsT = HostedZoneAssociationSummary>
  ListHostedZoneAssociationsResult& AddHostedZoneAssociations(HostedZoneAssociationsT&& value) {
    m_hostedZoneAssociationsHasBeenSet = true;
    m_hostedZoneAssociations.emplace_back(std::forward<HostedZoneAssociationsT>(value));
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
  ListHostedZoneAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<HostedZoneAssociationSummary> m_hostedZoneAssociations;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_hostedZoneAssociationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
