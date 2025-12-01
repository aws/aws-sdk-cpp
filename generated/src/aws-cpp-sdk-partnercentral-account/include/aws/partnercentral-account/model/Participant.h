/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/AccountSummary.h>
#include <aws/partnercentral-account/model/PartnerProfileSummary.h>
#include <aws/partnercentral-account/model/SellerProfileSummary.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Represents a participant in a partner connection, containing their profile
 * and account information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/Participant">AWS
 * API Reference</a></p>
 */
class Participant {
 public:
  AWS_PARTNERCENTRALACCOUNT_API Participant() = default;
  AWS_PARTNERCENTRALACCOUNT_API Participant(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Participant& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The partner profile information for the participant.</p>
   */
  inline const PartnerProfileSummary& GetPartnerProfile() const { return m_partnerProfile; }
  inline bool PartnerProfileHasBeenSet() const { return m_partnerProfileHasBeenSet; }
  template <typename PartnerProfileT = PartnerProfileSummary>
  void SetPartnerProfile(PartnerProfileT&& value) {
    m_partnerProfileHasBeenSet = true;
    m_partnerProfile = std::forward<PartnerProfileT>(value);
  }
  template <typename PartnerProfileT = PartnerProfileSummary>
  Participant& WithPartnerProfile(PartnerProfileT&& value) {
    SetPartnerProfile(std::forward<PartnerProfileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The seller profile information for the participant.</p>
   */
  inline const SellerProfileSummary& GetSellerProfile() const { return m_sellerProfile; }
  inline bool SellerProfileHasBeenSet() const { return m_sellerProfileHasBeenSet; }
  template <typename SellerProfileT = SellerProfileSummary>
  void SetSellerProfile(SellerProfileT&& value) {
    m_sellerProfileHasBeenSet = true;
    m_sellerProfile = std::forward<SellerProfileT>(value);
  }
  template <typename SellerProfileT = SellerProfileSummary>
  Participant& WithSellerProfile(SellerProfileT&& value) {
    SetSellerProfile(std::forward<SellerProfileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account information for the participant.</p>
   */
  inline const AccountSummary& GetAccount() const { return m_account; }
  inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
  template <typename AccountT = AccountSummary>
  void SetAccount(AccountT&& value) {
    m_accountHasBeenSet = true;
    m_account = std::forward<AccountT>(value);
  }
  template <typename AccountT = AccountSummary>
  Participant& WithAccount(AccountT&& value) {
    SetAccount(std::forward<AccountT>(value));
    return *this;
  }
  ///@}
 private:
  PartnerProfileSummary m_partnerProfile;
  bool m_partnerProfileHasBeenSet = false;

  SellerProfileSummary m_sellerProfile;
  bool m_sellerProfileHasBeenSet = false;

  AccountSummary m_account;
  bool m_accountHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
