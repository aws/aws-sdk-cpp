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
#include <aws/partnercentral-marketing/model/BatchCreateCampaignAssetError.h>
#include <aws/partnercentral-marketing/model/BatchCreateCampaignAssetResult.h>

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
 * <p>Output for BatchCreateCampaignAsset.</p> <p>Per-entry, per AWS Batch
 * Operations. <code>Errors</code> is required and is empty rather than absent on a
 * fully successful call; <code>Successful</code> is the success list the standard
 * makes optional, and DG returns it because a client otherwise cannot learn the
 * ids that were created.</p> <p>Status is 200 whenever entries were processed
 * individually -- including when every entry failed, since the batch itself
 * succeeded and the entries did not. A 4xx means the batch could not be attempted
 * as a whole and nothing was written.</p> <p>A partial batch is a real state and
 * the recovery is to re-send the same entry list: an entry is idempotent by
 * identity (I-15/I-16), so what landed no-ops and what did not gets created. An
 * already-existing asset is therefore a <code>Successful</code> row, not an error
 * -- were it an error, a client looping until <code>Errors</code> is empty would
 * never terminate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/BatchCreateCampaignAssetResponse">AWS
 * API Reference</a></p>
 */
class BatchCreateCampaignAssetSdkResult {
 public:
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetSdkResult() = default;
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetSdkResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>One entry per blueprint that could not be instantiated. Empty, never absent,
   * when all entries succeeded.</p>
   */
  inline const Aws::Vector<BatchCreateCampaignAssetError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchCreateCampaignAssetError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchCreateCampaignAssetError>>
  BatchCreateCampaignAssetSdkResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchCreateCampaignAssetError>
  BatchCreateCampaignAssetSdkResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One entry per asset that exists as a result of this call, whether created
   * here or already present.</p>
   */
  inline const Aws::Vector<BatchCreateCampaignAssetResult>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<BatchCreateCampaignAssetResult>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<BatchCreateCampaignAssetResult>>
  BatchCreateCampaignAssetSdkResult& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = BatchCreateCampaignAssetResult>
  BatchCreateCampaignAssetSdkResult& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
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
  BatchCreateCampaignAssetSdkResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchCreateCampaignAssetError> m_errors;

  Aws::Vector<BatchCreateCampaignAssetResult> m_successful;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_errorsHasBeenSet = false;
  bool m_successfulHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
