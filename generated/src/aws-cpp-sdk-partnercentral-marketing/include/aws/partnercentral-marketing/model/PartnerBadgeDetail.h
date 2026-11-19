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
 * <p>The campaign's partner badge, as read.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/PartnerBadgeDetail">AWS
 * API Reference</a></p>
 */
class PartnerBadgeDetail {
 public:
  AWS_PARTNERCENTRALMARKETING_API PartnerBadgeDetail() = default;
  AWS_PARTNERCENTRALMARKETING_API PartnerBadgeDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API PartnerBadgeDetail& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A presigned GET of the badge, which expires one hour after the read: fetch it
   * again with <code>GetCampaign</code> when it returns 403.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  PartnerBadgeDetail& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the badge was set.</p>
   */
  inline const Aws::Utils::DateTime& GetAttachedAt() const { return m_attachedAt; }
  inline bool AttachedAtHasBeenSet() const { return m_attachedAtHasBeenSet; }
  template <typename AttachedAtT = Aws::Utils::DateTime>
  void SetAttachedAt(AttachedAtT&& value) {
    m_attachedAtHasBeenSet = true;
    m_attachedAt = std::forward<AttachedAtT>(value);
  }
  template <typename AttachedAtT = Aws::Utils::DateTime>
  PartnerBadgeDetail& WithAttachedAt(AttachedAtT&& value) {
    SetAttachedAt(std::forward<AttachedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_url;

  Aws::Utils::DateTime m_attachedAt{};
  bool m_urlHasBeenSet = false;
  bool m_attachedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
