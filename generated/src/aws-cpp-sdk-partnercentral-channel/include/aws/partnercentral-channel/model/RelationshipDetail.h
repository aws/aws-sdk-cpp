/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/AssociationType.h>
#include <aws/partnercentral-channel/model/ResaleAccountModel.h>
#include <aws/partnercentral-channel/model/Sector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Detailed information about a partner relationship.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/RelationshipDetail">AWS
 * API Reference</a></p>
 */
class RelationshipDetail {
 public:
  AWS_PARTNERCENTRALCHANNEL_API RelationshipDetail() = default;
  AWS_PARTNERCENTRALCHANNEL_API RelationshipDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API RelationshipDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the relationship.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RelationshipDetail& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the relationship.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  RelationshipDetail& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
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
  RelationshipDetail& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog identifier associated with the relationship.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  RelationshipDetail& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of association for the relationship.</p>
   */
  inline AssociationType GetAssociationType() const { return m_associationType; }
  inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
  inline void SetAssociationType(AssociationType value) {
    m_associationTypeHasBeenSet = true;
    m_associationType = value;
  }
  inline RelationshipDetail& WithAssociationType(AssociationType value) {
    SetAssociationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the program management account.</p>
   */
  inline const Aws::String& GetProgramManagementAccountId() const { return m_programManagementAccountId; }
  inline bool ProgramManagementAccountIdHasBeenSet() const { return m_programManagementAccountIdHasBeenSet; }
  template <typename ProgramManagementAccountIdT = Aws::String>
  void SetProgramManagementAccountId(ProgramManagementAccountIdT&& value) {
    m_programManagementAccountIdHasBeenSet = true;
    m_programManagementAccountId = std::forward<ProgramManagementAccountIdT>(value);
  }
  template <typename ProgramManagementAccountIdT = Aws::String>
  RelationshipDetail& WithProgramManagementAccountId(ProgramManagementAccountIdT&& value) {
    SetProgramManagementAccountId(std::forward<ProgramManagementAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID associated in this relationship.</p>
   */
  inline const Aws::String& GetAssociatedAccountId() const { return m_associatedAccountId; }
  inline bool AssociatedAccountIdHasBeenSet() const { return m_associatedAccountIdHasBeenSet; }
  template <typename AssociatedAccountIdT = Aws::String>
  void SetAssociatedAccountId(AssociatedAccountIdT&& value) {
    m_associatedAccountIdHasBeenSet = true;
    m_associatedAccountId = std::forward<AssociatedAccountIdT>(value);
  }
  template <typename AssociatedAccountIdT = Aws::String>
  RelationshipDetail& WithAssociatedAccountId(AssociatedAccountIdT&& value) {
    SetAssociatedAccountId(std::forward<AssociatedAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the relationship.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  RelationshipDetail& WithDisplayName(DisplayNameT&& value) {
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
  inline RelationshipDetail& WithResaleAccountModel(ResaleAccountModel value) {
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
  inline RelationshipDetail& WithSector(Sector value) {
    SetSector(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the relationship was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  RelationshipDetail& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the relationship was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  RelationshipDetail& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date of the relationship.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  RelationshipDetail& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_revision;
  bool m_revisionHasBeenSet = false;

  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  AssociationType m_associationType{AssociationType::NOT_SET};
  bool m_associationTypeHasBeenSet = false;

  Aws::String m_programManagementAccountId;
  bool m_programManagementAccountIdHasBeenSet = false;

  Aws::String m_associatedAccountId;
  bool m_associatedAccountIdHasBeenSet = false;

  Aws::String m_displayName;
  bool m_displayNameHasBeenSet = false;

  ResaleAccountModel m_resaleAccountModel{ResaleAccountModel::NOT_SET};
  bool m_resaleAccountModelHasBeenSet = false;

  Sector m_sector{Sector::NOT_SET};
  bool m_sectorHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::Utils::DateTime m_startDate{};
  bool m_startDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
