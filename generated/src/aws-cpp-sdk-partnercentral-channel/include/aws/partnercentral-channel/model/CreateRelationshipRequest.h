/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannelRequest.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/AssociationType.h>
#include <aws/partnercentral-channel/model/ResaleAccountModel.h>
#include <aws/partnercentral-channel/model/Sector.h>
#include <aws/partnercentral-channel/model/SupportPlan.h>
#include <aws/partnercentral-channel/model/Tag.h>

#include <utility>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

/**
 */
class CreateRelationshipRequest : public PartnerCentralChannelRequest {
 public:
  AWS_PARTNERCENTRALCHANNEL_API CreateRelationshipRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRelationship"; }

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
  CreateRelationshipRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of association for the relationship (e.g., reseller,
   * distributor).</p>
   */
  inline AssociationType GetAssociationType() const { return m_associationType; }
  inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
  inline void SetAssociationType(AssociationType value) {
    m_associationTypeHasBeenSet = true;
    m_associationType = value;
  }
  inline CreateRelationshipRequest& WithAssociationType(AssociationType value) {
    SetAssociationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the program management account for this relationship.</p>
   */
  inline const Aws::String& GetProgramManagementAccountIdentifier() const { return m_programManagementAccountIdentifier; }
  inline bool ProgramManagementAccountIdentifierHasBeenSet() const { return m_programManagementAccountIdentifierHasBeenSet; }
  template <typename ProgramManagementAccountIdentifierT = Aws::String>
  void SetProgramManagementAccountIdentifier(ProgramManagementAccountIdentifierT&& value) {
    m_programManagementAccountIdentifierHasBeenSet = true;
    m_programManagementAccountIdentifier = std::forward<ProgramManagementAccountIdentifierT>(value);
  }
  template <typename ProgramManagementAccountIdentifierT = Aws::String>
  CreateRelationshipRequest& WithProgramManagementAccountIdentifier(ProgramManagementAccountIdentifierT&& value) {
    SetProgramManagementAccountIdentifier(std::forward<ProgramManagementAccountIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID to associate in this relationship.</p>
   */
  inline const Aws::String& GetAssociatedAccountId() const { return m_associatedAccountId; }
  inline bool AssociatedAccountIdHasBeenSet() const { return m_associatedAccountIdHasBeenSet; }
  template <typename AssociatedAccountIdT = Aws::String>
  void SetAssociatedAccountId(AssociatedAccountIdT&& value) {
    m_associatedAccountIdHasBeenSet = true;
    m_associatedAccountId = std::forward<AssociatedAccountIdT>(value);
  }
  template <typename AssociatedAccountIdT = Aws::String>
  CreateRelationshipRequest& WithAssociatedAccountId(AssociatedAccountIdT&& value) {
    SetAssociatedAccountId(std::forward<AssociatedAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable name for the relationship.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateRelationshipRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resale account model for the relationship.</p>
   */
  inline ResaleAccountModel GetResaleAccountModel() const { return m_resaleAccountModel; }
  inline bool ResaleAccountModelHasBeenSet() const { return m_resaleAccountModelHasBeenSet; }
  inline void SetResaleAccountModel(ResaleAccountModel value) {
    m_resaleAccountModelHasBeenSet = true;
    m_resaleAccountModel = value;
  }
  inline CreateRelationshipRequest& WithResaleAccountModel(ResaleAccountModel value) {
    SetResaleAccountModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business sector for the relationship.</p>
   */
  inline Sector GetSector() const { return m_sector; }
  inline bool SectorHasBeenSet() const { return m_sectorHasBeenSet; }
  inline void SetSector(Sector value) {
    m_sectorHasBeenSet = true;
    m_sector = value;
  }
  inline CreateRelationshipRequest& WithSector(Sector value) {
    SetSector(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateRelationshipRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key-value pairs to associate with the relationship.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateRelationshipRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateRelationshipRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The support plan requested for this relationship.</p>
   */
  inline const SupportPlan& GetRequestedSupportPlan() const { return m_requestedSupportPlan; }
  inline bool RequestedSupportPlanHasBeenSet() const { return m_requestedSupportPlanHasBeenSet; }
  template <typename RequestedSupportPlanT = SupportPlan>
  void SetRequestedSupportPlan(RequestedSupportPlanT&& value) {
    m_requestedSupportPlanHasBeenSet = true;
    m_requestedSupportPlan = std::forward<RequestedSupportPlanT>(value);
  }
  template <typename RequestedSupportPlanT = SupportPlan>
  CreateRelationshipRequest& WithRequestedSupportPlan(RequestedSupportPlanT&& value) {
    SetRequestedSupportPlan(std::forward<RequestedSupportPlanT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  AssociationType m_associationType{AssociationType::NOT_SET};

  Aws::String m_programManagementAccountIdentifier;

  Aws::String m_associatedAccountId;

  Aws::String m_displayName;

  ResaleAccountModel m_resaleAccountModel{ResaleAccountModel::NOT_SET};

  Sector m_sector{Sector::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<Tag> m_tags;

  SupportPlan m_requestedSupportPlan;
  bool m_catalogHasBeenSet = false;
  bool m_associationTypeHasBeenSet = false;
  bool m_programManagementAccountIdentifierHasBeenSet = false;
  bool m_associatedAccountIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_resaleAccountModelHasBeenSet = false;
  bool m_sectorHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
  bool m_requestedSupportPlanHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
