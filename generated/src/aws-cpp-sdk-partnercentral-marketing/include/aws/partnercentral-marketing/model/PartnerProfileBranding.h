/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
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
 * <p>A partner's branding, read from their AWS Partner Central profile.</p> <p>The
 * profile is the only source: a campaign carries no branding of its own, so every
 * campaign of a partner shows the same identity, vetted by Partner Central. Edit
 * it in Partner Central.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/PartnerProfileBranding">AWS
 * API Reference</a></p>
 */
class PartnerProfileBranding {
 public:
  AWS_PARTNERCENTRALMARKETING_API PartnerProfileBranding() = default;
  AWS_PARTNERCENTRALMARKETING_API PartnerProfileBranding(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API PartnerProfileBranding& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The profile's display name.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  PartnerProfileBranding& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The profile's website.</p>
   */
  inline const Aws::String& GetWebsiteUrl() const { return m_websiteUrl; }
  inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
  template <typename WebsiteUrlT = Aws::String>
  void SetWebsiteUrl(WebsiteUrlT&& value) {
    m_websiteUrlHasBeenSet = true;
    m_websiteUrl = std::forward<WebsiteUrlT>(value);
  }
  template <typename WebsiteUrlT = Aws::String>
  PartnerProfileBranding& WithWebsiteUrl(WebsiteUrlT&& value) {
    SetWebsiteUrl(std::forward<WebsiteUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The profile's logo URL, as AWS Partner Central serves it — the image every
   * asset of the campaign shows. Absent when the profile names none.</p> <p>Partner
   * Central Marketing keeps no copy: the same URL is written into a published
   * landing page and email, and fetched when a document is composed, so what a
   * client renders from it is what is sent. Only a document fetches the image: one
   * it cannot fetch and draw fails that asset with `INTERNAL_ERROR`, which a retry
   * can clear. A landing page or email links the URL as given, so a logo that does
   * not load shows as a broken image.
   */
  inline const Aws::String& GetLogoUrl() const { return m_logoUrl; }
  inline bool LogoUrlHasBeenSet() const { return m_logoUrlHasBeenSet; }
  template <typename LogoUrlT = Aws::String>
  void SetLogoUrl(LogoUrlT&& value) {
    m_logoUrlHasBeenSet = true;
    m_logoUrl = std::forward<LogoUrlT>(value);
  }
  template <typename LogoUrlT = Aws::String>
  PartnerProfileBranding& WithLogoUrl(LogoUrlT&& value) {
    SetLogoUrl(std::forward<LogoUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this branding was last read from Partner Central. Earlier than the
   * request when Partner Central could not be reached and Partner Central Marketing
   * answered from its last copy.</p>
   */
  inline const Aws::Utils::DateTime& GetRefreshedAt() const { return m_refreshedAt; }
  inline bool RefreshedAtHasBeenSet() const { return m_refreshedAtHasBeenSet; }
  template <typename RefreshedAtT = Aws::Utils::DateTime>
  void SetRefreshedAt(RefreshedAtT&& value) {
    m_refreshedAtHasBeenSet = true;
    m_refreshedAt = std::forward<RefreshedAtT>(value);
  }
  template <typename RefreshedAtT = Aws::Utils::DateTime>
  PartnerProfileBranding& WithRefreshedAt(RefreshedAtT&& value) {
    SetRefreshedAt(std::forward<RefreshedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;

  Aws::String m_websiteUrl;

  Aws::String m_logoUrl;

  Aws::Utils::DateTime m_refreshedAt{};
  bool m_displayNameHasBeenSet = false;
  bool m_websiteUrlHasBeenSet = false;
  bool m_logoUrlHasBeenSet = false;
  bool m_refreshedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
