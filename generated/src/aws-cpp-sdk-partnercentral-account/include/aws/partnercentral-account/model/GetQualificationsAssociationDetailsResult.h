/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/QualificationsAssociationPartner.h>
#include <aws/partnercentral-account/model/QualificationsAssociationStatus.h>

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
class GetQualificationsAssociationDetailsResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API GetQualificationsAssociationDetailsResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API GetQualificationsAssociationDetailsResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API GetQualificationsAssociationDetailsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The catalog identifier echoed from the request.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetQualificationsAssociationDetailsResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies your partner
   * resource.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetQualificationsAssociationDetailsResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your unique partner identifier in the AWS Partner Network.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetQualificationsAssociationDetailsResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current qualifications association status. Valid values:
   * <code>ASSOCIATED</code> (the partner is associated with a primary),
   * <code>NOT_ASSOCIATED</code> (the partner has no active association).</p>
   */
  inline QualificationsAssociationStatus GetStatus() const { return m_status; }
  inline void SetStatus(QualificationsAssociationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetQualificationsAssociationDetailsResult& WithStatus(QualificationsAssociationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary partner's profile and account identifiers. This field is null
   * when the status is <code>NOT_ASSOCIATED</code>.</p>
   */
  inline const QualificationsAssociationPartner& GetPrimaryPartner() const { return m_primaryPartner; }
  template <typename PrimaryPartnerT = QualificationsAssociationPartner>
  void SetPrimaryPartner(PrimaryPartnerT&& value) {
    m_primaryPartnerHasBeenSet = true;
    m_primaryPartner = std::forward<PrimaryPartnerT>(value);
  }
  template <typename PrimaryPartnerT = QualificationsAssociationPartner>
  GetQualificationsAssociationDetailsResult& WithPrimaryPartner(PrimaryPartnerT&& value) {
    SetPrimaryPartner(std::forward<PrimaryPartnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of all partner profile and account identifiers currently associated
   * under the primary partner. This field is null when the status is
   * <code>NOT_ASSOCIATED</code>.</p>
   */
  inline const Aws::Vector<QualificationsAssociationPartner>& GetAssociatedPartners() const { return m_associatedPartners; }
  template <typename AssociatedPartnersT = Aws::Vector<QualificationsAssociationPartner>>
  void SetAssociatedPartners(AssociatedPartnersT&& value) {
    m_associatedPartnersHasBeenSet = true;
    m_associatedPartners = std::forward<AssociatedPartnersT>(value);
  }
  template <typename AssociatedPartnersT = Aws::Vector<QualificationsAssociationPartner>>
  GetQualificationsAssociationDetailsResult& WithAssociatedPartners(AssociatedPartnersT&& value) {
    SetAssociatedPartners(std::forward<AssociatedPartnersT>(value));
    return *this;
  }
  template <typename AssociatedPartnersT = QualificationsAssociationPartner>
  GetQualificationsAssociationDetailsResult& AddAssociatedPartners(AssociatedPartnersT&& value) {
    m_associatedPartnersHasBeenSet = true;
    m_associatedPartners.emplace_back(std::forward<AssociatedPartnersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the qualifications association was last updated, in ISO
   * 8601 format. This field is null when the status is
   * <code>NOT_ASSOCIATED</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetQualificationsAssociationDetailsResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  GetQualificationsAssociationDetailsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_catalog;

  Aws::String m_arn;

  Aws::String m_id;

  QualificationsAssociationStatus m_status{QualificationsAssociationStatus::NOT_SET};

  QualificationsAssociationPartner m_primaryPartner;

  Aws::Vector<QualificationsAssociationPartner> m_associatedPartners;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_catalogHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_primaryPartnerHasBeenSet = false;
  bool m_associatedPartnersHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
