/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/Platform.h>
#include <aws/partnercentral-marketing/model/SocialConnectionStatus.h>

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
 * <p>Summary of a social connection returned by ListSocialConnections.</p>
 * <p>Carries no ARN (owner ruling 2026-10-05): a connection is addressed by its
 * <code>Id</code>. Social connections are not taggable, and every social operation
 * authorizes on its action rather than on a resource ARN.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/SocialConnectionSummary">AWS
 * API Reference</a></p>
 */
class SocialConnectionSummary {
 public:
  AWS_PARTNERCENTRALMARKETING_API SocialConnectionSummary() = default;
  AWS_PARTNERCENTRALMARKETING_API SocialConnectionSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API SocialConnectionSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Identifier of the social connection.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  SocialConnectionSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Social platform this connection authorizes.</p>
   */
  inline Platform GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  inline void SetPlatform(Platform value) {
    m_platformHasBeenSet = true;
    m_platform = value;
  }
  inline SocialConnectionSummary& WithPlatform(Platform value) {
    SetPlatform(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Authorization state.</p>
   */
  inline SocialConnectionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SocialConnectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SocialConnectionSummary& WithStatus(SocialConnectionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Facebook Page this connection publishes to. Absent where no Page
   * applies.</p>
   */
  inline const Aws::String& GetPageName() const { return m_pageName; }
  inline bool PageNameHasBeenSet() const { return m_pageNameHasBeenSet; }
  template <typename PageNameT = Aws::String>
  void SetPageName(PageNameT&& value) {
    m_pageNameHasBeenSet = true;
    m_pageName = std::forward<PageNameT>(value);
  }
  template <typename PageNameT = Aws::String>
  SocialConnectionSummary& WithPageName(PageNameT&& value) {
    SetPageName(std::forward<PageNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Display name of the account behind this connection. Absent when the execution
   * backend reports none.</p>
   */
  inline const Aws::String& GetAccountName() const { return m_accountName; }
  inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
  template <typename AccountNameT = Aws::String>
  void SetAccountName(AccountNameT&& value) {
    m_accountNameHasBeenSet = true;
    m_accountName = std::forward<AccountNameT>(value);
  }
  template <typename AccountNameT = Aws::String>
  SocialConnectionSummary& WithAccountName(AccountNameT&& value) {
    SetAccountName(std::forward<AccountNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the account was last authorized. Advances on every re-authorization.</p>
   */
  inline const Aws::Utils::DateTime& GetConnectedAt() const { return m_connectedAt; }
  inline bool ConnectedAtHasBeenSet() const { return m_connectedAtHasBeenSet; }
  template <typename ConnectedAtT = Aws::Utils::DateTime>
  void SetConnectedAt(ConnectedAtT&& value) {
    m_connectedAtHasBeenSet = true;
    m_connectedAt = std::forward<ConnectedAtT>(value);
  }
  template <typename ConnectedAtT = Aws::Utils::DateTime>
  SocialConnectionSummary& WithConnectedAt(ConnectedAtT&& value) {
    SetConnectedAt(std::forward<ConnectedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the authorization lapses. Absent where the platform reports no expiry (X
   * never does). A connection past this time reads EXPIRED only once the backend
   * notices, so treat this as a warning date, not a status.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  SocialConnectionSummary& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Platform m_platform{Platform::NOT_SET};

  SocialConnectionStatus m_status{SocialConnectionStatus::NOT_SET};

  Aws::String m_pageName;

  Aws::String m_accountName;

  Aws::Utils::DateTime m_connectedAt{};

  Aws::Utils::DateTime m_expiresAt{};
  bool m_idHasBeenSet = false;
  bool m_platformHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_pageNameHasBeenSet = false;
  bool m_accountNameHasBeenSet = false;
  bool m_connectedAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
