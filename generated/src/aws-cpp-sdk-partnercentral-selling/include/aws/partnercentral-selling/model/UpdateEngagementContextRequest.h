/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementContextType.h>
#include <aws/partnercentral-selling/model/UpdateEngagementContextPayload.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 */
class UpdateEngagementContextRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API UpdateEngagementContextRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateEngagementContext"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog associated with the engagement context update request.
   * This field takes a string value from a predefined list: <code>AWS</code> or
   * <code>Sandbox</code>. The catalog determines which environment the engagement
   * context is updated in.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  UpdateEngagementContextRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the <code>Engagement</code> containing the context
   * to be updated. This parameter ensures the context update is applied to the
   * correct engagement.</p>
   */
  inline const Aws::String& GetEngagementIdentifier() const { return m_engagementIdentifier; }
  inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
  template <typename EngagementIdentifierT = Aws::String>
  void SetEngagementIdentifier(EngagementIdentifierT&& value) {
    m_engagementIdentifierHasBeenSet = true;
    m_engagementIdentifier = std::forward<EngagementIdentifierT>(value);
  }
  template <typename EngagementIdentifierT = Aws::String>
  UpdateEngagementContextRequest& WithEngagementIdentifier(EngagementIdentifierT&& value) {
    SetEngagementIdentifier(std::forward<EngagementIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the specific engagement context to be updated. This
   * ensures that the correct context within the engagement is modified.</p>
   */
  inline const Aws::String& GetContextIdentifier() const { return m_contextIdentifier; }
  inline bool ContextIdentifierHasBeenSet() const { return m_contextIdentifierHasBeenSet; }
  template <typename ContextIdentifierT = Aws::String>
  void SetContextIdentifier(ContextIdentifierT&& value) {
    m_contextIdentifierHasBeenSet = true;
    m_contextIdentifier = std::forward<ContextIdentifierT>(value);
  }
  template <typename ContextIdentifierT = Aws::String>
  UpdateEngagementContextRequest& WithContextIdentifier(ContextIdentifierT&& value) {
    SetContextIdentifier(std::forward<ContextIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the engagement was last modified, used for optimistic
   * concurrency control. This helps prevent conflicts when multiple users attempt to
   * update the same engagement simultaneously.</p>
   */
  inline const Aws::Utils::DateTime& GetEngagementLastModifiedAt() const { return m_engagementLastModifiedAt; }
  inline bool EngagementLastModifiedAtHasBeenSet() const { return m_engagementLastModifiedAtHasBeenSet; }
  template <typename EngagementLastModifiedAtT = Aws::Utils::DateTime>
  void SetEngagementLastModifiedAt(EngagementLastModifiedAtT&& value) {
    m_engagementLastModifiedAtHasBeenSet = true;
    m_engagementLastModifiedAt = std::forward<EngagementLastModifiedAtT>(value);
  }
  template <typename EngagementLastModifiedAtT = Aws::Utils::DateTime>
  UpdateEngagementContextRequest& WithEngagementLastModifiedAt(EngagementLastModifiedAtT&& value) {
    SetEngagementLastModifiedAt(std::forward<EngagementLastModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the type of context being updated within the engagement. This field
   * determines the structure and content of the context payload being modified.</p>
   */
  inline EngagementContextType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EngagementContextType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline UpdateEngagementContextRequest& WithType(EngagementContextType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains the updated contextual information for the engagement. The structure
   * of this payload varies based on the context type specified in the Type
   * field.</p>
   */
  inline const UpdateEngagementContextPayload& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = UpdateEngagementContextPayload>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = UpdateEngagementContextPayload>
  UpdateEngagementContextRequest& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_engagementIdentifier;

  Aws::String m_contextIdentifier;

  Aws::Utils::DateTime m_engagementLastModifiedAt{};

  EngagementContextType m_type{EngagementContextType::NOT_SET};

  UpdateEngagementContextPayload m_payload;
  bool m_catalogHasBeenSet = false;
  bool m_engagementIdentifierHasBeenSet = false;
  bool m_contextIdentifierHasBeenSet = false;
  bool m_engagementLastModifiedAtHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_payloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
