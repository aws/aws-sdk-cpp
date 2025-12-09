/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannelRequest.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/SupportPlan.h>

#include <utility>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

/**
 */
class UpdateRelationshipRequest : public PartnerCentralChannelRequest {
 public:
  AWS_PARTNERCENTRALCHANNEL_API UpdateRelationshipRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRelationship"; }

  AWS_PARTNERCENTRALCHANNEL_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALCHANNEL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier for the relationship.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  UpdateRelationshipRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the relationship to update.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  UpdateRelationshipRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the program management account associated with the
   * relationship.</p>
   */
  inline const Aws::String& GetProgramManagementAccountIdentifier() const { return m_programManagementAccountIdentifier; }
  inline bool ProgramManagementAccountIdentifierHasBeenSet() const { return m_programManagementAccountIdentifierHasBeenSet; }
  template <typename ProgramManagementAccountIdentifierT = Aws::String>
  void SetProgramManagementAccountIdentifier(ProgramManagementAccountIdentifierT&& value) {
    m_programManagementAccountIdentifierHasBeenSet = true;
    m_programManagementAccountIdentifier = std::forward<ProgramManagementAccountIdentifierT>(value);
  }
  template <typename ProgramManagementAccountIdentifierT = Aws::String>
  UpdateRelationshipRequest& WithProgramManagementAccountIdentifier(ProgramManagementAccountIdentifierT&& value) {
    SetProgramManagementAccountIdentifier(std::forward<ProgramManagementAccountIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current revision number of the relationship.</p>
   */
  inline const Aws::String& GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  template <typename RevisionT = Aws::String>
  void SetRevision(RevisionT&& value) {
    m_revisionHasBeenSet = true;
    m_revision = std::forward<RevisionT>(value);
  }
  template <typename RevisionT = Aws::String>
  UpdateRelationshipRequest& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new display name for the relationship.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateRelationshipRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated support plan for the relationship.</p>
   */
  inline const SupportPlan& GetRequestedSupportPlan() const { return m_requestedSupportPlan; }
  inline bool RequestedSupportPlanHasBeenSet() const { return m_requestedSupportPlanHasBeenSet; }
  template <typename RequestedSupportPlanT = SupportPlan>
  void SetRequestedSupportPlan(RequestedSupportPlanT&& value) {
    m_requestedSupportPlanHasBeenSet = true;
    m_requestedSupportPlan = std::forward<RequestedSupportPlanT>(value);
  }
  template <typename RequestedSupportPlanT = SupportPlan>
  UpdateRelationshipRequest& WithRequestedSupportPlan(RequestedSupportPlanT&& value) {
    SetRequestedSupportPlan(std::forward<RequestedSupportPlanT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_identifier;

  Aws::String m_programManagementAccountIdentifier;

  Aws::String m_revision;

  Aws::String m_displayName;

  SupportPlan m_requestedSupportPlan;
  bool m_catalogHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_programManagementAccountIdentifierHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_requestedSupportPlanHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
