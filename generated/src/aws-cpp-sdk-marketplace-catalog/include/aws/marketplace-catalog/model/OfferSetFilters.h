/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/OfferSetAssociatedOfferIdsFilter.h>
#include <aws/marketplace-catalog/model/OfferSetEntityIdFilter.h>
#include <aws/marketplace-catalog/model/OfferSetLastModifiedDateFilter.h>
#include <aws/marketplace-catalog/model/OfferSetNameFilter.h>
#include <aws/marketplace-catalog/model/OfferSetReleaseDateFilter.h>
#include <aws/marketplace-catalog/model/OfferSetSolutionIdFilter.h>
#include <aws/marketplace-catalog/model/OfferSetStateFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>Object containing all the filter fields for offer sets entity. Client can add
 * a maximum of 8 filters in a single <code>ListEntities</code>
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferSetFilters">AWS
 * API Reference</a></p>
 */
class OfferSetFilters {
 public:
  AWS_MARKETPLACECATALOG_API OfferSetFilters() = default;
  AWS_MARKETPLACECATALOG_API OfferSetFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API OfferSetFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Allows filtering on <code>EntityId</code> of an offer set.</p>
   */
  inline const OfferSetEntityIdFilter& GetEntityId() const { return m_entityId; }
  inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
  template <typename EntityIdT = OfferSetEntityIdFilter>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = OfferSetEntityIdFilter>
  OfferSetFilters& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows filtering on the <code>Name</code> of an offer set.</p>
   */
  inline const OfferSetNameFilter& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = OfferSetNameFilter>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = OfferSetNameFilter>
  OfferSetFilters& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows filtering on the <code>State</code> of an offer set.</p>
   */
  inline const OfferSetStateFilter& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = OfferSetStateFilter>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = OfferSetStateFilter>
  OfferSetFilters& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows filtering on the <code>ReleaseDate</code> of an offer set.</p>
   */
  inline const OfferSetReleaseDateFilter& GetReleaseDate() const { return m_releaseDate; }
  inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }
  template <typename ReleaseDateT = OfferSetReleaseDateFilter>
  void SetReleaseDate(ReleaseDateT&& value) {
    m_releaseDateHasBeenSet = true;
    m_releaseDate = std::forward<ReleaseDateT>(value);
  }
  template <typename ReleaseDateT = OfferSetReleaseDateFilter>
  OfferSetFilters& WithReleaseDate(ReleaseDateT&& value) {
    SetReleaseDate(std::forward<ReleaseDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows filtering on the <code>AssociatedOfferIds</code> of an offer set.</p>
   */
  inline const OfferSetAssociatedOfferIdsFilter& GetAssociatedOfferIds() const { return m_associatedOfferIds; }
  inline bool AssociatedOfferIdsHasBeenSet() const { return m_associatedOfferIdsHasBeenSet; }
  template <typename AssociatedOfferIdsT = OfferSetAssociatedOfferIdsFilter>
  void SetAssociatedOfferIds(AssociatedOfferIdsT&& value) {
    m_associatedOfferIdsHasBeenSet = true;
    m_associatedOfferIds = std::forward<AssociatedOfferIdsT>(value);
  }
  template <typename AssociatedOfferIdsT = OfferSetAssociatedOfferIdsFilter>
  OfferSetFilters& WithAssociatedOfferIds(AssociatedOfferIdsT&& value) {
    SetAssociatedOfferIds(std::forward<AssociatedOfferIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows filtering on the <code>SolutionId</code> of an offer set.</p>
   */
  inline const OfferSetSolutionIdFilter& GetSolutionId() const { return m_solutionId; }
  inline bool SolutionIdHasBeenSet() const { return m_solutionIdHasBeenSet; }
  template <typename SolutionIdT = OfferSetSolutionIdFilter>
  void SetSolutionId(SolutionIdT&& value) {
    m_solutionIdHasBeenSet = true;
    m_solutionId = std::forward<SolutionIdT>(value);
  }
  template <typename SolutionIdT = OfferSetSolutionIdFilter>
  OfferSetFilters& WithSolutionId(SolutionIdT&& value) {
    SetSolutionId(std::forward<SolutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allows filtering on the <code>LastModifiedDate</code> of an offer set.</p>
   */
  inline const OfferSetLastModifiedDateFilter& GetLastModifiedDate() const { return m_lastModifiedDate; }
  inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
  template <typename LastModifiedDateT = OfferSetLastModifiedDateFilter>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = OfferSetLastModifiedDateFilter>
  OfferSetFilters& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}
 private:
  OfferSetEntityIdFilter m_entityId;

  OfferSetNameFilter m_name;

  OfferSetStateFilter m_state;

  OfferSetReleaseDateFilter m_releaseDate;

  OfferSetAssociatedOfferIdsFilter m_associatedOfferIds;

  OfferSetSolutionIdFilter m_solutionId;

  OfferSetLastModifiedDateFilter m_lastModifiedDate;
  bool m_entityIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_releaseDateHasBeenSet = false;
  bool m_associatedOfferIdsHasBeenSet = false;
  bool m_solutionIdHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
