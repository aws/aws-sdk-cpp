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
 * <p>An image stored on one of your assets, named by the field that holds
 * it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignAssetImageSource">AWS
 * API Reference</a></p>
 */
class CampaignAssetImageSource {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetImageSource() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetImageSource(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetImageSource& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The source campaign's id or ARN.</p>
   */
  inline const Aws::String& GetCampaignIdentifier() const { return m_campaignIdentifier; }
  inline bool CampaignIdentifierHasBeenSet() const { return m_campaignIdentifierHasBeenSet; }
  template <typename CampaignIdentifierT = Aws::String>
  void SetCampaignIdentifier(CampaignIdentifierT&& value) {
    m_campaignIdentifierHasBeenSet = true;
    m_campaignIdentifier = std::forward<CampaignIdentifierT>(value);
  }
  template <typename CampaignIdentifierT = Aws::String>
  CampaignAssetImageSource& WithCampaignIdentifier(CampaignIdentifierT&& value) {
    SetCampaignIdentifier(std::forward<CampaignIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source asset's id.</p>
   */
  inline const Aws::String& GetCampaignAssetIdentifier() const { return m_campaignAssetIdentifier; }
  inline bool CampaignAssetIdentifierHasBeenSet() const { return m_campaignAssetIdentifierHasBeenSet; }
  template <typename CampaignAssetIdentifierT = Aws::String>
  void SetCampaignAssetIdentifier(CampaignAssetIdentifierT&& value) {
    m_campaignAssetIdentifierHasBeenSet = true;
    m_campaignAssetIdentifier = std::forward<CampaignAssetIdentifierT>(value);
  }
  template <typename CampaignAssetIdentifierT = Aws::String>
  CampaignAssetImageSource& WithCampaignAssetIdentifier(CampaignAssetIdentifierT&& value) {
    SetCampaignAssetIdentifier(std::forward<CampaignAssetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source image field.</p>
   */
  inline const Aws::String& GetFieldId() const { return m_fieldId; }
  inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
  template <typename FieldIdT = Aws::String>
  void SetFieldId(FieldIdT&& value) {
    m_fieldIdHasBeenSet = true;
    m_fieldId = std::forward<FieldIdT>(value);
  }
  template <typename FieldIdT = Aws::String>
  CampaignAssetImageSource& WithFieldId(FieldIdT&& value) {
    SetFieldId(std::forward<FieldIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_campaignIdentifier;

  Aws::String m_campaignAssetIdentifier;

  Aws::String m_fieldId;
  bool m_campaignIdentifierHasBeenSet = false;
  bool m_campaignAssetIdentifierHasBeenSet = false;
  bool m_fieldIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
