/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/CustomerAccountData.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Information about update customer account request.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/UpdateCustomerAccountRequest">AWS
 * API Reference</a></p>
 */
class UpdateCustomerAccountRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API UpdateCustomerAccountRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomerAccount"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog for the request. Valid values:</p> <ul> <li> <p>
   * <code>AWS</code>: Production.</p> </li> <li> <p> <code>Sandbox</code>: Testing
   * environments.</p> </li> </ul>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  UpdateCustomerAccountRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ARN or the identifier of the customer account.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  UpdateCustomerAccountRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the complete, updated details of the customer. These details
   * replace the existing details on the customer account.</p>
   */
  inline const CustomerAccountData& GetAccount() const { return m_account; }
  inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
  template <typename AccountT = CustomerAccountData>
  void SetAccount(AccountT&& value) {
    m_accountHasBeenSet = true;
    m_account = std::forward<AccountT>(value);
  }
  template <typename AccountT = CustomerAccountData>
  UpdateCustomerAccountRequest& WithAccount(AccountT&& value) {
    SetAccount(std::forward<AccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies your own identifier for the customer account, such as the account
   * ID in your CRM system. Use it to correlate the customer account with your
   * records.</p>
   */
  inline const Aws::String& GetPartnerAccountIdentifier() const { return m_partnerAccountIdentifier; }
  inline bool PartnerAccountIdentifierHasBeenSet() const { return m_partnerAccountIdentifierHasBeenSet; }
  template <typename PartnerAccountIdentifierT = Aws::String>
  void SetPartnerAccountIdentifier(PartnerAccountIdentifierT&& value) {
    m_partnerAccountIdentifierHasBeenSet = true;
    m_partnerAccountIdentifier = std::forward<PartnerAccountIdentifierT>(value);
  }
  template <typename PartnerAccountIdentifierT = Aws::String>
  UpdateCustomerAccountRequest& WithPartnerAccountIdentifier(PartnerAccountIdentifierT&& value) {
    SetPartnerAccountIdentifier(std::forward<PartnerAccountIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the <code>LastModifiedDate</code> of the customer account as you
   * last read it. If it doesn't match the current value, the request fails with a
   * <code>ConflictException</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
  inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  UpdateCustomerAccountRequest& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_identifier;

  CustomerAccountData m_account;

  Aws::String m_partnerAccountIdentifier;

  Aws::Utils::DateTime m_lastModifiedDate{};
  bool m_catalogHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_accountHasBeenSet = false;
  bool m_partnerAccountIdentifierHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
