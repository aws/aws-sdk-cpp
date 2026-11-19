/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignAssetLayoutOption.h>

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
 * <p>A multi-layout asset's layout choice: the selection, when made, and its
 * options.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CampaignAssetLayout">AWS
 * API Reference</a></p>
 */
class CampaignAssetLayout {
 public:
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetLayout() = default;
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetLayout(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API CampaignAssetLayout& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The selected option's value. An asset is created with its first option
   * selected; an asset created before that rule, with none stored, reports and
   * activates its first option.</p>
   */
  inline const Aws::String& GetSelected() const { return m_selected; }
  inline bool SelectedHasBeenSet() const { return m_selectedHasBeenSet; }
  template <typename SelectedT = Aws::String>
  void SetSelected(SelectedT&& value) {
    m_selectedHasBeenSet = true;
    m_selected = std::forward<SelectedT>(value);
  }
  template <typename SelectedT = Aws::String>
  CampaignAssetLayout& WithSelected(SelectedT&& value) {
    SetSelected(std::forward<SelectedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Every option the asset was created with, in authored order.</p>
   */
  inline const Aws::Vector<CampaignAssetLayoutOption>& GetOptions() const { return m_options; }
  inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
  template <typename OptionsT = Aws::Vector<CampaignAssetLayoutOption>>
  void SetOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options = std::forward<OptionsT>(value);
  }
  template <typename OptionsT = Aws::Vector<CampaignAssetLayoutOption>>
  CampaignAssetLayout& WithOptions(OptionsT&& value) {
    SetOptions(std::forward<OptionsT>(value));
    return *this;
  }
  template <typename OptionsT = CampaignAssetLayoutOption>
  CampaignAssetLayout& AddOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options.emplace_back(std::forward<OptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_selected;

  Aws::Vector<CampaignAssetLayoutOption> m_options;
  bool m_selectedHasBeenSet = false;
  bool m_optionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
