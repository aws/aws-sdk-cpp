/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignTemplate.h>

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
 * <p>Output for GetCampaignTemplate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/GetCampaignTemplateResponse">AWS
 * API Reference</a></p>
 */
class GetCampaignTemplateResult {
 public:
  AWS_PARTNERCENTRALMARKETING_API GetCampaignTemplateResult() = default;
  AWS_PARTNERCENTRALMARKETING_API GetCampaignTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALMARKETING_API GetCampaignTemplateResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The campaign template, including its asset templates.</p>
   */
  inline const CampaignTemplate& GetCampaignTemplate() const { return m_campaignTemplate; }
  template <typename CampaignTemplateT = CampaignTemplate>
  void SetCampaignTemplate(CampaignTemplateT&& value) {
    m_campaignTemplateHasBeenSet = true;
    m_campaignTemplate = std::forward<CampaignTemplateT>(value);
  }
  template <typename CampaignTemplateT = CampaignTemplate>
  GetCampaignTemplateResult& WithCampaignTemplate(CampaignTemplateT&& value) {
    SetCampaignTemplate(std::forward<CampaignTemplateT>(value));
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
  GetCampaignTemplateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  CampaignTemplate m_campaignTemplate;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_campaignTemplateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
