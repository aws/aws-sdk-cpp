/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {
class ListBenefitsResult {
 public:
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitsResult() = default;
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of benefit summaries matching the specified criteria.</p>
   */
  inline const Aws::Vector<BenefitSummary>& GetBenefitSummaries() const { return m_benefitSummaries; }
  template <typename BenefitSummariesT = Aws::Vector<BenefitSummary>>
  void SetBenefitSummaries(BenefitSummariesT&& value) {
    m_benefitSummariesHasBeenSet = true;
    m_benefitSummaries = std::forward<BenefitSummariesT>(value);
  }
  template <typename BenefitSummariesT = Aws::Vector<BenefitSummary>>
  ListBenefitsResult& WithBenefitSummaries(BenefitSummariesT&& value) {
    SetBenefitSummaries(std::forward<BenefitSummariesT>(value));
    return *this;
  }
  template <typename BenefitSummariesT = BenefitSummary>
  ListBenefitsResult& AddBenefitSummaries(BenefitSummariesT&& value) {
    m_benefitSummariesHasBeenSet = true;
    m_benefitSummaries.emplace_back(std::forward<BenefitSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token to retrieve the next set of results, if more results are
   * available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBenefitsResult& WithNextToken(NextTokenT&& value) {
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
  ListBenefitsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BenefitSummary> m_benefitSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_benefitSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
