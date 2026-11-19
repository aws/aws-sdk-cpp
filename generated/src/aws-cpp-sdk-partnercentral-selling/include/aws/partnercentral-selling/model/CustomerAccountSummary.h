/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsEnrichmentSummary.h>
#include <aws/partnercentral-selling/model/CustomerAccountDetailsSummary.h>
#include <aws/partnercentral-selling/model/EnrichmentStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>A customer account in the results of <code>SearchCustomerAccounts</code>. It
 * carries a reduced set of fields compared to the full account that is returned by
 * <code>GetCustomerAccount</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CustomerAccountSummary">AWS
 * API Reference</a></p>
 */
class CustomerAccountSummary {
 public:
  AWS_PARTNERCENTRALSELLING_API CustomerAccountSummary() = default;
  AWS_PARTNERCENTRALSELLING_API CustomerAccountSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API CustomerAccountSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer account.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CustomerAccountSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the customer account.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CustomerAccountSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog that the customer account belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  CustomerAccountSummary& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enrichment status of the customer account.</p>
   */
  inline EnrichmentStatus GetEnrichmentStatus() const { return m_enrichmentStatus; }
  inline bool EnrichmentStatusHasBeenSet() const { return m_enrichmentStatusHasBeenSet; }
  inline void SetEnrichmentStatus(EnrichmentStatus value) {
    m_enrichmentStatusHasBeenSet = true;
    m_enrichmentStatus = value;
  }
  inline CustomerAccountSummary& WithEnrichmentStatus(EnrichmentStatus value) {
    SetEnrichmentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your own identifier for the customer account, if you provided one.</p>
   */
  inline const Aws::String& GetPartnerAccountIdentifier() const { return m_partnerAccountIdentifier; }
  inline bool PartnerAccountIdentifierHasBeenSet() const { return m_partnerAccountIdentifierHasBeenSet; }
  template <typename PartnerAccountIdentifierT = Aws::String>
  void SetPartnerAccountIdentifier(PartnerAccountIdentifierT&& value) {
    m_partnerAccountIdentifierHasBeenSet = true;
    m_partnerAccountIdentifier = std::forward<PartnerAccountIdentifierT>(value);
  }
  template <typename PartnerAccountIdentifierT = Aws::String>
  CustomerAccountSummary& WithPartnerAccountIdentifier(PartnerAccountIdentifierT&& value) {
    SetPartnerAccountIdentifier(std::forward<PartnerAccountIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the customer account was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
  inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  CustomerAccountSummary& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the customer account was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
  inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  CustomerAccountSummary& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the details of the customer that you provided.</p>
   */
  inline const CustomerAccountDetailsSummary& GetCustomerAccount() const { return m_customerAccount; }
  inline bool CustomerAccountHasBeenSet() const { return m_customerAccountHasBeenSet; }
  template <typename CustomerAccountT = CustomerAccountDetailsSummary>
  void SetCustomerAccount(CustomerAccountT&& value) {
    m_customerAccountHasBeenSet = true;
    m_customerAccount = std::forward<CustomerAccountT>(value);
  }
  template <typename CustomerAccountT = CustomerAccountDetailsSummary>
  CustomerAccountSummary& WithCustomerAccount(CustomerAccountT&& value) {
    SetCustomerAccount(std::forward<CustomerAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the enrichment information that AWS provides about the customer.
   * Present only when <code>EnrichmentStatus</code> is <code>ENRICHED</code>.</p>
   */
  inline const AwsEnrichmentSummary& GetAwsEnrichment() const { return m_awsEnrichment; }
  inline bool AwsEnrichmentHasBeenSet() const { return m_awsEnrichmentHasBeenSet; }
  template <typename AwsEnrichmentT = AwsEnrichmentSummary>
  void SetAwsEnrichment(AwsEnrichmentT&& value) {
    m_awsEnrichmentHasBeenSet = true;
    m_awsEnrichment = std::forward<AwsEnrichmentT>(value);
  }
  template <typename AwsEnrichmentT = AwsEnrichmentSummary>
  CustomerAccountSummary& WithAwsEnrichment(AwsEnrichmentT&& value) {
    SetAwsEnrichment(std::forward<AwsEnrichmentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_catalog;

  EnrichmentStatus m_enrichmentStatus{EnrichmentStatus::NOT_SET};

  Aws::String m_partnerAccountIdentifier;

  Aws::Utils::DateTime m_createdDate{};

  Aws::Utils::DateTime m_lastModifiedDate{};

  CustomerAccountDetailsSummary m_customerAccount;

  AwsEnrichmentSummary m_awsEnrichment;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_enrichmentStatusHasBeenSet = false;
  bool m_partnerAccountIdentifierHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
  bool m_customerAccountHasBeenSet = false;
  bool m_awsEnrichmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
