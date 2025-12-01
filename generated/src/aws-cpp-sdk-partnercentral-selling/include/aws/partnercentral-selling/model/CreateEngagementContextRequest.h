/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementContextPayload.h>
#include <aws/partnercentral-selling/model/EngagementContextType.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 */
class CreateEngagementContextRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API CreateEngagementContextRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateEngagementContext"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog associated with the engagement context request. This
   * field takes a string value from a predefined list: <code>AWS</code> or
   * <code>Sandbox</code>. The catalog determines which environment the engagement
   * context is created in. Use <code>AWS</code> to create contexts in the production
   * environment, and <code>Sandbox</code> for testing in secure, isolated
   * environments.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  CreateEngagementContextRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the <code>Engagement</code> for which the context is
   * being created. This parameter ensures the context is associated with the correct
   * engagement and provides the necessary linkage between the engagement and its
   * contextual information.</p>
   */
  inline const Aws::String& GetEngagementIdentifier() const { return m_engagementIdentifier; }
  inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
  template <typename EngagementIdentifierT = Aws::String>
  void SetEngagementIdentifier(EngagementIdentifierT&& value) {
    m_engagementIdentifierHasBeenSet = true;
    m_engagementIdentifier = std::forward<EngagementIdentifierT>(value);
  }
  template <typename EngagementIdentifierT = Aws::String>
  CreateEngagementContextRequest& WithEngagementIdentifier(EngagementIdentifierT&& value) {
    SetEngagementIdentifier(std::forward<EngagementIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier provided by the client to ensure that the
   * request is handled exactly once. This token helps prevent duplicate context
   * creations and must not exceed sixty-four alphanumeric characters. Use a UUID or
   * other unique string to ensure idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateEngagementContextRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the type of context being created for the engagement. This field
   * determines the structure and content of the context payload. Valid values
   * include <code>CustomerProject</code> for customer project-related contexts. The
   * type field ensures that the context is properly categorized and processed
   * according to its intended purpose.</p>
   */
  inline EngagementContextType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EngagementContextType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateEngagementContextRequest& WithType(EngagementContextType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EngagementContextPayload& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = EngagementContextPayload>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = EngagementContextPayload>
  CreateEngagementContextRequest& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_engagementIdentifier;
  bool m_engagementIdentifierHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  EngagementContextType m_type{EngagementContextType::NOT_SET};
  bool m_typeHasBeenSet = false;

  EngagementContextPayload m_payload;
  bool m_payloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
