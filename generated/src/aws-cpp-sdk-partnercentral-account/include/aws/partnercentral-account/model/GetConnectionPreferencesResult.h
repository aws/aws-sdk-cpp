/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/AccessType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {
class GetConnectionPreferencesResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API GetConnectionPreferencesResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API GetConnectionPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API GetConnectionPreferencesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The catalog identifier for the partner account.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetConnectionPreferencesResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connection preferences.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetConnectionPreferencesResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access type setting for connections (e.g., open, restricted,
   * invitation-only).</p>
   */
  inline AccessType GetAccessType() const { return m_accessType; }
  inline void SetAccessType(AccessType value) {
    m_accessTypeHasBeenSet = true;
    m_accessType = value;
  }
  inline GetConnectionPreferencesResult& WithAccessType(AccessType value) {
    SetAccessType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of participant IDs that are excluded from connection requests or
   * interactions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludedParticipantIds() const { return m_excludedParticipantIds; }
  template <typename ExcludedParticipantIdsT = Aws::Vector<Aws::String>>
  void SetExcludedParticipantIds(ExcludedParticipantIdsT&& value) {
    m_excludedParticipantIdsHasBeenSet = true;
    m_excludedParticipantIds = std::forward<ExcludedParticipantIdsT>(value);
  }
  template <typename ExcludedParticipantIdsT = Aws::Vector<Aws::String>>
  GetConnectionPreferencesResult& WithExcludedParticipantIds(ExcludedParticipantIdsT&& value) {
    SetExcludedParticipantIds(std::forward<ExcludedParticipantIdsT>(value));
    return *this;
  }
  template <typename ExcludedParticipantIdsT = Aws::String>
  GetConnectionPreferencesResult& AddExcludedParticipantIds(ExcludedParticipantIdsT&& value) {
    m_excludedParticipantIdsHasBeenSet = true;
    m_excludedParticipantIds.emplace_back(std::forward<ExcludedParticipantIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the connection preferences were last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetConnectionPreferencesResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision number of the connection preferences for optimistic locking.</p>
   */
  inline long long GetRevision() const { return m_revision; }
  inline void SetRevision(long long value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline GetConnectionPreferencesResult& WithRevision(long long value) {
    SetRevision(value);
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
  GetConnectionPreferencesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_arn;

  AccessType m_accessType{AccessType::NOT_SET};

  Aws::Vector<Aws::String> m_excludedParticipantIds;

  Aws::Utils::DateTime m_updatedAt{};

  long long m_revision{0};

  Aws::String m_requestId;
  bool m_catalogHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_accessTypeHasBeenSet = false;
  bool m_excludedParticipantIdsHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
