/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

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
 * <p>Why one entry could not be instantiated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/BatchCreateCampaignAssetError">AWS
 * API Reference</a></p>
 */
class BatchCreateCampaignAssetError {
 public:
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetError() = default;
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetError(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API BatchCreateCampaignAssetError& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The failing entry's request identifier, so a caller can match this error to
   * the entry it sent.</p>
   */
  inline const Aws::String& GetSourceAssetTemplateId() const { return m_sourceAssetTemplateId; }
  inline bool SourceAssetTemplateIdHasBeenSet() const { return m_sourceAssetTemplateIdHasBeenSet; }
  template <typename SourceAssetTemplateIdT = Aws::String>
  void SetSourceAssetTemplateId(SourceAssetTemplateIdT&& value) {
    m_sourceAssetTemplateIdHasBeenSet = true;
    m_sourceAssetTemplateId = std::forward<SourceAssetTemplateIdT>(value);
  }
  template <typename SourceAssetTemplateIdT = Aws::String>
  BatchCreateCampaignAssetError& WithSourceAssetTemplateId(SourceAssetTemplateIdT&& value) {
    SetSourceAssetTemplateId(std::forward<SourceAssetTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error code -- ResourceNotFoundException when the blueprint is not on the
   * campaign's bound template, InternalServerException otherwise. Throttling never
   * appears here: DG throttles per operation, so a throttle fails the whole
   * batch.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  BatchCreateCampaignAssetError& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable cause.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchCreateCampaignAssetError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceAssetTemplateId;

  Aws::String m_code;

  Aws::String m_message;
  bool m_sourceAssetTemplateIdHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
