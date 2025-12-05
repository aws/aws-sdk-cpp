/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccountRequest.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/AllianceLeadContact.h>
#include <aws/partnercentral-account/model/PrimarySolutionType.h>
#include <aws/partnercentral-account/model/Tag.h>

#include <utility>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

/**
 */
class CreatePartnerRequest : public PartnerCentralAccountRequest {
 public:
  AWS_PARTNERCENTRALACCOUNT_API CreatePartnerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePartner"; }

  AWS_PARTNERCENTRALACCOUNT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALACCOUNT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier where the partner account will be created.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  CreatePartnerRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreatePartnerRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The legal name of the organization becoming a partner.</p>
   */
  inline const Aws::String& GetLegalName() const { return m_legalName; }
  inline bool LegalNameHasBeenSet() const { return m_legalNameHasBeenSet; }
  template <typename LegalNameT = Aws::String>
  void SetLegalName(LegalNameT&& value) {
    m_legalNameHasBeenSet = true;
    m_legalName = std::forward<LegalNameT>(value);
  }
  template <typename LegalNameT = Aws::String>
  CreatePartnerRequest& WithLegalName(LegalNameT&& value) {
    SetLegalName(std::forward<LegalNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary type of solution or service the partner provides (e.g.,
   * consulting, software, managed services).</p>
   */
  inline PrimarySolutionType GetPrimarySolutionType() const { return m_primarySolutionType; }
  inline bool PrimarySolutionTypeHasBeenSet() const { return m_primarySolutionTypeHasBeenSet; }
  inline void SetPrimarySolutionType(PrimarySolutionType value) {
    m_primarySolutionTypeHasBeenSet = true;
    m_primarySolutionType = value;
  }
  inline CreatePartnerRequest& WithPrimarySolutionType(PrimarySolutionType value) {
    SetPrimarySolutionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary contact person for alliance and partnership matters.</p>
   */
  inline const AllianceLeadContact& GetAllianceLeadContact() const { return m_allianceLeadContact; }
  inline bool AllianceLeadContactHasBeenSet() const { return m_allianceLeadContactHasBeenSet; }
  template <typename AllianceLeadContactT = AllianceLeadContact>
  void SetAllianceLeadContact(AllianceLeadContactT&& value) {
    m_allianceLeadContactHasBeenSet = true;
    m_allianceLeadContact = std::forward<AllianceLeadContactT>(value);
  }
  template <typename AllianceLeadContactT = AllianceLeadContact>
  CreatePartnerRequest& WithAllianceLeadContact(AllianceLeadContactT&& value) {
    SetAllianceLeadContact(std::forward<AllianceLeadContactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The verification code sent to the alliance lead contact's email to confirm
   * account creation.</p>
   */
  inline const Aws::String& GetEmailVerificationCode() const { return m_emailVerificationCode; }
  inline bool EmailVerificationCodeHasBeenSet() const { return m_emailVerificationCodeHasBeenSet; }
  template <typename EmailVerificationCodeT = Aws::String>
  void SetEmailVerificationCode(EmailVerificationCodeT&& value) {
    m_emailVerificationCodeHasBeenSet = true;
    m_emailVerificationCode = std::forward<EmailVerificationCodeT>(value);
  }
  template <typename EmailVerificationCodeT = Aws::String>
  CreatePartnerRequest& WithEmailVerificationCode(EmailVerificationCodeT&& value) {
    SetEmailVerificationCode(std::forward<EmailVerificationCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tags to associate with the partner account for organization and
   * billing purposes.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreatePartnerRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreatePartnerRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_legalName;

  PrimarySolutionType m_primarySolutionType{PrimarySolutionType::NOT_SET};

  AllianceLeadContact m_allianceLeadContact;

  Aws::String m_emailVerificationCode;

  Aws::Vector<Tag> m_tags;
  bool m_catalogHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_legalNameHasBeenSet = false;
  bool m_primarySolutionTypeHasBeenSet = false;
  bool m_allianceLeadContactHasBeenSet = false;
  bool m_emailVerificationCodeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
