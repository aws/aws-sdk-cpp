/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/Tag.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 */
class StartOpportunityFromEngagementTaskRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API StartOpportunityFromEngagementTaskRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartOpportunityFromEngagementTask"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog in which the opportunity creation task is executed.
   * Acceptable values include <code>AWS</code> for production and
   * <code>Sandbox</code> for testing environments.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  StartOpportunityFromEngagementTaskRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique token provided by the client to help ensure the idempotency of the
   * request. It helps prevent the same task from being performed multiple times.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartOpportunityFromEngagementTaskRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the engagement from which the opportunity creation
   * task is to be initiated. This helps ensure that the task is applied to the
   * correct engagement.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  StartOpportunityFromEngagementTaskRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the engagement context from which to create the
   * opportunity. This specifies the specific contextual information within the
   * engagement that will be used for opportunity creation.</p>
   */
  inline const Aws::String& GetContextIdentifier() const { return m_contextIdentifier; }
  inline bool ContextIdentifierHasBeenSet() const { return m_contextIdentifierHasBeenSet; }
  template <typename ContextIdentifierT = Aws::String>
  void SetContextIdentifier(ContextIdentifierT&& value) {
    m_contextIdentifierHasBeenSet = true;
    m_contextIdentifier = std::forward<ContextIdentifierT>(value);
  }
  template <typename ContextIdentifierT = Aws::String>
  StartOpportunityFromEngagementTaskRequest& WithContextIdentifier(ContextIdentifierT&& value) {
    SetContextIdentifier(std::forward<ContextIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of the key-value pairs of the tag or tags to assign.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  StartOpportunityFromEngagementTaskRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  StartOpportunityFromEngagementTaskRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_identifier;

  Aws::String m_contextIdentifier;

  Aws::Vector<Tag> m_tags;
  bool m_catalogHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_identifierHasBeenSet = false;
  bool m_contextIdentifierHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
