/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/PartnerSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {
class ListPartnersResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API ListPartnersResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API ListPartnersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API ListPartnersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of partner summaries including basic information about each partner
   * account.</p>
   */
  inline const Aws::Vector<PartnerSummary>& GetPartnerSummaryList() const { return m_partnerSummaryList; }
  template <typename PartnerSummaryListT = Aws::Vector<PartnerSummary>>
  void SetPartnerSummaryList(PartnerSummaryListT&& value) {
    m_partnerSummaryListHasBeenSet = true;
    m_partnerSummaryList = std::forward<PartnerSummaryListT>(value);
  }
  template <typename PartnerSummaryListT = Aws::Vector<PartnerSummary>>
  ListPartnersResult& WithPartnerSummaryList(PartnerSummaryListT&& value) {
    SetPartnerSummaryList(std::forward<PartnerSummaryListT>(value));
    return *this;
  }
  template <typename PartnerSummaryListT = PartnerSummary>
  ListPartnersResult& AddPartnerSummaryList(PartnerSummaryListT&& value) {
    m_partnerSummaryListHasBeenSet = true;
    m_partnerSummaryList.emplace_back(std::forward<PartnerSummaryListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for retrieving the next page of results if more results are
   * available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPartnersResult& WithNextToken(NextTokenT&& value) {
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
  ListPartnersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PartnerSummary> m_partnerSummaryList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_partnerSummaryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
