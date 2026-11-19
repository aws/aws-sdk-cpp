/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/LayoutFormat.h>
#include <aws/partnercentral-marketing/model/LayoutPageType.h>

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
 * <p>A rendering of an AWS-authored layout skeleton or placeholder image.</p>
 * <p>The url is a stable, cache-friendly CloudFront URL rather than a presigned
 * GET, because the bytes are AWS marketing content that is already public. The
 * key's random segment is the object's only protection, so the URL is a bearer
 * credential for the object and is withheld entirely while a template is not yet
 * effective — see CampaignTemplate.EffectiveDateBegin.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/LayoutPreview">AWS
 * API Reference</a></p>
 */
class LayoutPreview {
 public:
  AWS_PARTNERCENTRALMARKETING_API LayoutPreview() = default;
  AWS_PARTNERCENTRALMARKETING_API LayoutPreview(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API LayoutPreview& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The format of the referenced object.</p>
   */
  inline LayoutFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(LayoutFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline LayoutPreview& WithFormat(LayoutFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A stable URL serving the object. Not presigned, so it does not expire.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  LayoutPreview& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Which page of a multi-page layout this is. Present only for LANDING_PAGE,
   * which genuinely has two layout objects — the page carrying the form, and the
   * confirmation page shown after submit — and absent for every other category,
   * which has one.</p> <p>A confirmation page is a second LAYOUT, never a second
   * asset: modelling it as its own asset would give it a lifecycle, an activation
   * and a state it does not have.</p>
   */
  inline LayoutPageType GetPageType() const { return m_pageType; }
  inline bool PageTypeHasBeenSet() const { return m_pageTypeHasBeenSet; }
  inline void SetPageType(LayoutPageType value) {
    m_pageTypeHasBeenSet = true;
    m_pageType = value;
  }
  inline LayoutPreview& WithPageType(LayoutPageType value) {
    SetPageType(value);
    return *this;
  }
  ///@}
 private:
  LayoutFormat m_format{LayoutFormat::NOT_SET};

  Aws::String m_url;

  LayoutPageType m_pageType{LayoutPageType::NOT_SET};
  bool m_formatHasBeenSet = false;
  bool m_urlHasBeenSet = false;
  bool m_pageTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
