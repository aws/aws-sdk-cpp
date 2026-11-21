/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InboundConnectorApplicationAssociationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class ListInboundConnectorApplicationAssociationsResult {
 public:
  AWS_QUICKSIGHT_API ListInboundConnectorApplicationAssociationsResult() = default;
  AWS_QUICKSIGHT_API ListInboundConnectorApplicationAssociationsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListInboundConnectorApplicationAssociationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListInboundConnectorApplicationAssociationsResult& WithStatus(int value) {
    SetStatus(value);
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
  ListInboundConnectorApplicationAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of the access control applications that are associated with the
   * inbound connector.</p>
   */
  inline const Aws::Vector<InboundConnectorApplicationAssociationSummary>& GetApplicationAssociations() const {
    return m_applicationAssociations;
  }
  template <typename ApplicationAssociationsT = Aws::Vector<InboundConnectorApplicationAssociationSummary>>
  void SetApplicationAssociations(ApplicationAssociationsT&& value) {
    m_applicationAssociationsHasBeenSet = true;
    m_applicationAssociations = std::forward<ApplicationAssociationsT>(value);
  }
  template <typename ApplicationAssociationsT = Aws::Vector<InboundConnectorApplicationAssociationSummary>>
  ListInboundConnectorApplicationAssociationsResult& WithApplicationAssociations(ApplicationAssociationsT&& value) {
    SetApplicationAssociations(std::forward<ApplicationAssociationsT>(value));
    return *this;
  }
  template <typename ApplicationAssociationsT = InboundConnectorApplicationAssociationSummary>
  ListInboundConnectorApplicationAssociationsResult& AddApplicationAssociations(ApplicationAssociationsT&& value) {
    m_applicationAssociationsHasBeenSet = true;
    m_applicationAssociations.emplace_back(std::forward<ApplicationAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInboundConnectorApplicationAssociationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int m_status{0};

  Aws::String m_requestId;

  Aws::Vector<InboundConnectorApplicationAssociationSummary> m_applicationAssociations;

  Aws::String m_nextToken;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_applicationAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
