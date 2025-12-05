/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccountRequest.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/AccessType.h>

#include <utility>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

/**
 */
class UpdateConnectionPreferencesRequest : public PartnerCentralAccountRequest {
 public:
  AWS_PARTNERCENTRALACCOUNT_API UpdateConnectionPreferencesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectionPreferences"; }

  AWS_PARTNERCENTRALACCOUNT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALACCOUNT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier for the partner account.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  UpdateConnectionPreferencesRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision number of the connection preferences for optimistic locking.</p>
   */
  inline long long GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  inline void SetRevision(long long value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline UpdateConnectionPreferencesRequest& WithRevision(long long value) {
    SetRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access type setting for connections (e.g., open, restricted,
   * invitation-only).</p>
   */
  inline AccessType GetAccessType() const { return m_accessType; }
  inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
  inline void SetAccessType(AccessType value) {
    m_accessTypeHasBeenSet = true;
    m_accessType = value;
  }
  inline UpdateConnectionPreferencesRequest& WithAccessType(AccessType value) {
    SetAccessType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated list of participant identifiers to exclude from connections.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludedParticipantIdentifiers() const { return m_excludedParticipantIdentifiers; }
  inline bool ExcludedParticipantIdentifiersHasBeenSet() const { return m_excludedParticipantIdentifiersHasBeenSet; }
  template <typename ExcludedParticipantIdentifiersT = Aws::Vector<Aws::String>>
  void SetExcludedParticipantIdentifiers(ExcludedParticipantIdentifiersT&& value) {
    m_excludedParticipantIdentifiersHasBeenSet = true;
    m_excludedParticipantIdentifiers = std::forward<ExcludedParticipantIdentifiersT>(value);
  }
  template <typename ExcludedParticipantIdentifiersT = Aws::Vector<Aws::String>>
  UpdateConnectionPreferencesRequest& WithExcludedParticipantIdentifiers(ExcludedParticipantIdentifiersT&& value) {
    SetExcludedParticipantIdentifiers(std::forward<ExcludedParticipantIdentifiersT>(value));
    return *this;
  }
  template <typename ExcludedParticipantIdentifiersT = Aws::String>
  UpdateConnectionPreferencesRequest& AddExcludedParticipantIdentifiers(ExcludedParticipantIdentifiersT&& value) {
    m_excludedParticipantIdentifiersHasBeenSet = true;
    m_excludedParticipantIdentifiers.emplace_back(std::forward<ExcludedParticipantIdentifiersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  long long m_revision{0};

  AccessType m_accessType{AccessType::NOT_SET};

  Aws::Vector<Aws::String> m_excludedParticipantIdentifiers;
  bool m_catalogHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_accessTypeHasBeenSet = false;
  bool m_excludedParticipantIdentifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
