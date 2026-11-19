/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetExportFailureCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Why a campaign asset export task failed. Present only when the task's status
 * is FAILED.</p> <p>Dedicated to the export flow — deliberately not the
 * service-wide FailureReason/FailureCode, so export codes are not advertised in
 * the SDKs of unrelated operations. Treat an unrecognised code as an unspecified
 * failure and fall back to message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignAssetExportFailureReason">AWS
 * API Reference</a></p>
 */
class CampaignAssetExportFailureReason {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetExportFailureReason() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetExportFailureReason(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetExportFailureReason& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Machine-readable failure cause.</p>
   */
  inline CampaignAssetExportFailureCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(CampaignAssetExportFailureCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline CampaignAssetExportFailureReason& WithCode(CampaignAssetExportFailureCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable explanation.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  CampaignAssetExportFailureReason& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  CampaignAssetExportFailureCode m_code{CampaignAssetExportFailureCode::NOT_SET};

  Aws::String m_message;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
