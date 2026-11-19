/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsEnrichment.h>
#include <aws/partnercentral-selling/model/CustomerAccountData.h>
#include <aws/partnercentral-selling/model/CustomerAccountFailureReason.h>
#include <aws/partnercentral-selling/model/EnrichmentStatus.h>
#include <aws/partnercentral-selling/model/Issue.h>
#include <aws/partnercentral-selling/model/Tag.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {
/**
 * <p>Information about get customer account response.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetCustomerAccountResponse">AWS
 * API Reference</a></p>
 */
class GetCustomerAccountResult {
 public:
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountResult() = default;
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer account.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetCustomerAccountResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the customer account.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetCustomerAccountResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog that the customer account belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetCustomerAccountResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enrichment status of the customer account.</p>
   */
  inline EnrichmentStatus GetEnrichmentStatus() const { return m_enrichmentStatus; }
  inline void SetEnrichmentStatus(EnrichmentStatus value) {
    m_enrichmentStatusHasBeenSet = true;
    m_enrichmentStatus = value;
  }
  inline GetCustomerAccountResult& WithEnrichmentStatus(EnrichmentStatus value) {
    SetEnrichmentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your own identifier for the customer account, if you provided one.</p>
   */
  inline const Aws::String& GetPartnerAccountIdentifier() const { return m_partnerAccountIdentifier; }
  template <typename PartnerAccountIdentifierT = Aws::String>
  void SetPartnerAccountIdentifier(PartnerAccountIdentifierT&& value) {
    m_partnerAccountIdentifierHasBeenSet = true;
    m_partnerAccountIdentifier = std::forward<PartnerAccountIdentifierT>(value);
  }
  template <typename PartnerAccountIdentifierT = Aws::String>
  GetCustomerAccountResult& WithPartnerAccountIdentifier(PartnerAccountIdentifierT&& value) {
    SetPartnerAccountIdentifier(std::forward<PartnerAccountIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the customer account was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  GetCustomerAccountResult& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the customer account was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = Aws::Utils::DateTime>
  GetCustomerAccountResult& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issues found with the customer account. Present only when there is at
   * least one issue.</p>
   */
  inline const Aws::Vector<Issue>& GetIssues() const { return m_issues; }
  template <typename IssuesT = Aws::Vector<Issue>>
  void SetIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues = std::forward<IssuesT>(value);
  }
  template <typename IssuesT = Aws::Vector<Issue>>
  GetCustomerAccountResult& WithIssues(IssuesT&& value) {
    SetIssues(std::forward<IssuesT>(value));
    return *this;
  }
  template <typename IssuesT = Issue>
  GetCustomerAccountResult& AddIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues.emplace_back(std::forward<IssuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enrichment information that AWS provides about the customer. Present only
   * when <code>EnrichmentStatus</code> is <code>ENRICHED</code>.</p>
   */
  inline const AwsEnrichment& GetAwsEnrichment() const { return m_awsEnrichment; }
  template <typename AwsEnrichmentT = AwsEnrichment>
  void SetAwsEnrichment(AwsEnrichmentT&& value) {
    m_awsEnrichmentHasBeenSet = true;
    m_awsEnrichment = std::forward<AwsEnrichmentT>(value);
  }
  template <typename AwsEnrichmentT = AwsEnrichment>
  GetCustomerAccountResult& WithAwsEnrichment(AwsEnrichmentT&& value) {
    SetAwsEnrichment(std::forward<AwsEnrichmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the customer account needs your action. Present only when
   * <code>EnrichmentStatus</code> is <code>ACTION_REQUIRED</code>.</p>
   */
  inline CustomerAccountFailureReason GetReasonCode() const { return m_reasonCode; }
  inline void SetReasonCode(CustomerAccountFailureReason value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = value;
  }
  inline GetCustomerAccountResult& WithReasonCode(CustomerAccountFailureReason value) {
    SetReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the problem and the steps that you can take to resolve
   * it.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  GetCustomerAccountResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the customer account that already maps this customer. Present only
   * when <code>ReasonCode</code> is <code>DUPLICATE_CUSTOMER_MATCH</code>.</p>
   */
  inline const Aws::String& GetExistingCustomerAccountArn() const { return m_existingCustomerAccountArn; }
  template <typename ExistingCustomerAccountArnT = Aws::String>
  void SetExistingCustomerAccountArn(ExistingCustomerAccountArnT&& value) {
    m_existingCustomerAccountArnHasBeenSet = true;
    m_existingCustomerAccountArn = std::forward<ExistingCustomerAccountArnT>(value);
  }
  template <typename ExistingCustomerAccountArnT = Aws::String>
  GetCustomerAccountResult& WithExistingCustomerAccountArn(ExistingCustomerAccountArnT&& value) {
    SetExistingCustomerAccountArn(std::forward<ExistingCustomerAccountArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the customer that you provided.</p>
   */
  inline const CustomerAccountData& GetAccount() const { return m_account; }
  template <typename AccountT = CustomerAccountData>
  void SetAccount(AccountT&& value) {
    m_accountHasBeenSet = true;
    m_account = std::forward<AccountT>(value);
  }
  template <typename AccountT = CustomerAccountData>
  GetCustomerAccountResult& WithAccount(AccountT&& value) {
    SetAccount(std::forward<AccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags on the customer account. This member is absent if the tags can't be
   * retrieved, which is different from an account that has no tags.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  GetCustomerAccountResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  GetCustomerAccountResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
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
  GetCustomerAccountResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_catalog;

  EnrichmentStatus m_enrichmentStatus{EnrichmentStatus::NOT_SET};

  Aws::String m_partnerAccountIdentifier;

  Aws::Utils::DateTime m_createdDate{};

  Aws::Utils::DateTime m_lastModifiedDate{};

  Aws::Vector<Issue> m_issues;

  AwsEnrichment m_awsEnrichment;

  CustomerAccountFailureReason m_reasonCode{CustomerAccountFailureReason::NOT_SET};

  Aws::String m_message;

  Aws::String m_existingCustomerAccountArn;

  CustomerAccountData m_account;

  Aws::Vector<Tag> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_enrichmentStatusHasBeenSet = false;
  bool m_partnerAccountIdentifierHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
  bool m_issuesHasBeenSet = false;
  bool m_awsEnrichmentHasBeenSet = false;
  bool m_reasonCodeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_existingCustomerAccountArnHasBeenSet = false;
  bool m_accountHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
