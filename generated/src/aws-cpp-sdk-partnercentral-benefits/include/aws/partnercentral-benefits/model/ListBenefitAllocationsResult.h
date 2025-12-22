/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitAllocationSummary.h>

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
class ListBenefitAllocationsResult {
 public:
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitAllocationsResult() = default;
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitAllocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitAllocationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of benefit allocation summaries matching the specified criteria.</p>
   */
  inline const Aws::Vector<BenefitAllocationSummary>& GetBenefitAllocationSummaries() const { return m_benefitAllocationSummaries; }
  template <typename BenefitAllocationSummariesT = Aws::Vector<BenefitAllocationSummary>>
  void SetBenefitAllocationSummaries(BenefitAllocationSummariesT&& value) {
    m_benefitAllocationSummariesHasBeenSet = true;
    m_benefitAllocationSummaries = std::forward<BenefitAllocationSummariesT>(value);
  }
  template <typename BenefitAllocationSummariesT = Aws::Vector<BenefitAllocationSummary>>
  ListBenefitAllocationsResult& WithBenefitAllocationSummaries(BenefitAllocationSummariesT&& value) {
    SetBenefitAllocationSummaries(std::forward<BenefitAllocationSummariesT>(value));
    return *this;
  }
  template <typename BenefitAllocationSummariesT = BenefitAllocationSummary>
  ListBenefitAllocationsResult& AddBenefitAllocationSummaries(BenefitAllocationSummariesT&& value) {
    m_benefitAllocationSummariesHasBeenSet = true;
    m_benefitAllocationSummaries.emplace_back(std::forward<BenefitAllocationSummariesT>(value));
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
  ListBenefitAllocationsResult& WithNextToken(NextTokenT&& value) {
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
  ListBenefitAllocationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BenefitAllocationSummary> m_benefitAllocationSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_benefitAllocationSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
