/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccountRequest.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/AllianceLeadContact.h>

#include <utility>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

/**
 */
class PutAllianceLeadContactRequest : public PartnerCentralAccountRequest {
 public:
  AWS_PARTNERCENTRALACCOUNT_API PutAllianceLeadContactRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAllianceLeadContact"; }

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
  PutAllianceLeadContactRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the partner account.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  PutAllianceLeadContactRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alliance lead contact information to set for the partner account.</p>
   */
  inline const AllianceLeadContact& GetAllianceLeadContact() const { return m_allianceLeadContact; }
  inline bool AllianceLeadContactHasBeenSet() const { return m_allianceLeadContactHasBeenSet; }
  template <typename AllianceLeadContactT = AllianceLeadContact>
  void SetAllianceLeadContact(AllianceLeadContactT&& value) {
    m_allianceLeadContactHasBeenSet = true;
    m_allianceLeadContact = std::forward<AllianceLeadContactT>(value);
  }
  template <typename AllianceLeadContactT = AllianceLeadContact>
  PutAllianceLeadContactRequest& WithAllianceLeadContact(AllianceLeadContactT&& value) {
    SetAllianceLeadContact(std::forward<AllianceLeadContactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The verification code sent to the alliance lead contact's email to confirm
   * the update.</p>
   */
  inline const Aws::String& GetEmailVerificationCode() const { return m_emailVerificationCode; }
  inline bool EmailVerificationCodeHasBeenSet() const { return m_emailVerificationCodeHasBeenSet; }
  template <typename EmailVerificationCodeT = Aws::String>
  void SetEmailVerificationCode(EmailVerificationCodeT&& value) {
    m_emailVerificationCodeHasBeenSet = true;
    m_emailVerificationCode = std::forward<EmailVerificationCodeT>(value);
  }
  template <typename EmailVerificationCodeT = Aws::String>
  PutAllianceLeadContactRequest& WithEmailVerificationCode(EmailVerificationCodeT&& value) {
    SetEmailVerificationCode(std::forward<EmailVerificationCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_identifier;

  AllianceLeadContact m_allianceLeadContact;

  Aws::String m_emailVerificationCode;
  bool m_catalogHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_allianceLeadContactHasBeenSet = false;
  bool m_emailVerificationCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
