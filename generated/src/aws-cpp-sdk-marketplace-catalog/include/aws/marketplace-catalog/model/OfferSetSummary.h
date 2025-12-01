/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/OfferSetStateString.h>

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
 * <p>Summarized information about an offer set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferSetSummary">AWS
 * API Reference</a></p>
 */
class OfferSetSummary {
 public:
  AWS_MARKETPLACECATALOG_API OfferSetSummary() = default;
  AWS_MARKETPLACECATALOG_API OfferSetSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API OfferSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the offer set.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  OfferSetSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the offer set.</p>
   */
  inline OfferSetStateString GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(OfferSetStateString value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline OfferSetSummary& WithState(OfferSetStateString value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The release date of the offer set.</p>
   */
  inline const Aws::String& GetReleaseDate() const { return m_releaseDate; }
  inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }
  template <typename ReleaseDateT = Aws::String>
  void SetReleaseDate(ReleaseDateT&& value) {
    m_releaseDateHasBeenSet = true;
    m_releaseDate = std::forward<ReleaseDateT>(value);
  }
  template <typename ReleaseDateT = Aws::String>
  OfferSetSummary& WithReleaseDate(ReleaseDateT&& value) {
    SetReleaseDate(std::forward<ReleaseDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of offer IDs associated with the offer set.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssociatedOfferIds() const { return m_associatedOfferIds; }
  inline bool AssociatedOfferIdsHasBeenSet() const { return m_associatedOfferIdsHasBeenSet; }
  template <typename AssociatedOfferIdsT = Aws::Vector<Aws::String>>
  void SetAssociatedOfferIds(AssociatedOfferIdsT&& value) {
    m_associatedOfferIdsHasBeenSet = true;
    m_associatedOfferIds = std::forward<AssociatedOfferIdsT>(value);
  }
  template <typename AssociatedOfferIdsT = Aws::Vector<Aws::String>>
  OfferSetSummary& WithAssociatedOfferIds(AssociatedOfferIdsT&& value) {
    SetAssociatedOfferIds(std::forward<AssociatedOfferIdsT>(value));
    return *this;
  }
  template <typename AssociatedOfferIdsT = Aws::String>
  OfferSetSummary& AddAssociatedOfferIds(AssociatedOfferIdsT&& value) {
    m_associatedOfferIdsHasBeenSet = true;
    m_associatedOfferIds.emplace_back(std::forward<AssociatedOfferIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The solution ID associated with the offer set.</p>
   */
  inline const Aws::String& GetSolutionId() const { return m_solutionId; }
  inline bool SolutionIdHasBeenSet() const { return m_solutionIdHasBeenSet; }
  template <typename SolutionIdT = Aws::String>
  void SetSolutionId(SolutionIdT&& value) {
    m_solutionIdHasBeenSet = true;
    m_solutionId = std::forward<SolutionIdT>(value);
  }
  template <typename SolutionIdT = Aws::String>
  OfferSetSummary& WithSolutionId(SolutionIdT&& value) {
    SetSolutionId(std::forward<SolutionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  OfferSetStateString m_state{OfferSetStateString::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::String m_releaseDate;
  bool m_releaseDateHasBeenSet = false;

  Aws::Vector<Aws::String> m_associatedOfferIds;
  bool m_associatedOfferIdsHasBeenSet = false;

  Aws::String m_solutionId;
  bool m_solutionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
