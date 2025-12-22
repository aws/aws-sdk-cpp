/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitApplicationSummary.h>

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
class ListBenefitApplicationsResult {
 public:
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitApplicationsResult() = default;
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitApplicationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of benefit application summaries matching the specified criteria.</p>
   */
  inline const Aws::Vector<BenefitApplicationSummary>& GetBenefitApplicationSummaries() const { return m_benefitApplicationSummaries; }
  template <typename BenefitApplicationSummariesT = Aws::Vector<BenefitApplicationSummary>>
  void SetBenefitApplicationSummaries(BenefitApplicationSummariesT&& value) {
    m_benefitApplicationSummariesHasBeenSet = true;
    m_benefitApplicationSummaries = std::forward<BenefitApplicationSummariesT>(value);
  }
  template <typename BenefitApplicationSummariesT = Aws::Vector<BenefitApplicationSummary>>
  ListBenefitApplicationsResult& WithBenefitApplicationSummaries(BenefitApplicationSummariesT&& value) {
    SetBenefitApplicationSummaries(std::forward<BenefitApplicationSummariesT>(value));
    return *this;
  }
  template <typename BenefitApplicationSummariesT = BenefitApplicationSummary>
  ListBenefitApplicationsResult& AddBenefitApplicationSummaries(BenefitApplicationSummariesT&& value) {
    m_benefitApplicationSummariesHasBeenSet = true;
    m_benefitApplicationSummaries.emplace_back(std::forward<BenefitApplicationSummariesT>(value));
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
  ListBenefitApplicationsResult& WithNextToken(NextTokenT&& value) {
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
  ListBenefitApplicationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BenefitApplicationSummary> m_benefitApplicationSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_benefitApplicationSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
