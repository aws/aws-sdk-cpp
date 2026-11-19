/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignTemplateSummary.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {
/**
 * <p>Output for SearchCampaignTemplates.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/SearchCampaignTemplatesResponse">AWS
 * API Reference</a></p>
 */
class SearchCampaignTemplatesResult {
 public:
  AWS_PARTNERCENTRALMARKETING_API SearchCampaignTemplatesResult() = default;
  AWS_PARTNERCENTRALMARKETING_API SearchCampaignTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALMARKETING_API SearchCampaignTemplatesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>Total count over the whole matching set, not just this page — for &quot;over
   * N results&quot; display.</p>
   */
  inline int64_t GetTotalResults() const { return m_totalResults; }
  inline void SetTotalResults(int64_t value) {
    m_totalResultsHasBeenSet = true;
    m_totalResults = value;
  }
  inline SearchCampaignTemplatesResult& WithTotalResults(int64_t value) {
    SetTotalResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This page of template summaries.</p>
   */
  inline const Aws::Vector<CampaignTemplateSummary>& GetCampaignTemplates() const { return m_campaignTemplates; }
  template <typename CampaignTemplatesT = Aws::Vector<CampaignTemplateSummary>>
  void SetCampaignTemplates(CampaignTemplatesT&& value) {
    m_campaignTemplatesHasBeenSet = true;
    m_campaignTemplates = std::forward<CampaignTemplatesT>(value);
  }
  template <typename CampaignTemplatesT = Aws::Vector<CampaignTemplateSummary>>
  SearchCampaignTemplatesResult& WithCampaignTemplates(CampaignTemplatesT&& value) {
    SetCampaignTemplates(std::forward<CampaignTemplatesT>(value));
    return *this;
  }
  template <typename CampaignTemplatesT = CampaignTemplateSummary>
  SearchCampaignTemplatesResult& AddCampaignTemplates(CampaignTemplatesT&& value) {
    m_campaignTemplatesHasBeenSet = true;
    m_campaignTemplates.emplace_back(std::forward<CampaignTemplatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchCampaignTemplatesResult& WithNextToken(NextTokenT&& value) {
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
  SearchCampaignTemplatesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int64_t m_totalResults{0};

  Aws::Vector<CampaignTemplateSummary> m_campaignTemplates;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_totalResultsHasBeenSet = false;
  bool m_campaignTemplatesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
