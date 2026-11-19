/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

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
 * <p>A use case from the AWS Marketplace use case taxonomy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListingUseCase">AWS
 * API Reference</a></p>
 */
class ListingUseCase {
 public:
  AWS_MARKETPLACECATALOG_API ListingUseCase() = default;
  AWS_MARKETPLACECATALOG_API ListingUseCase(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ListingUseCase& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the use case.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ListingUseCase& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rank of the use case. A rank of 1 is the strongest match. Valid values
   * range from 1 to 5.</p>
   */
  inline int GetRank() const { return m_rank; }
  inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
  inline void SetRank(int value) {
    m_rankHasBeenSet = true;
    m_rank = value;
  }
  inline ListingUseCase& WithRank(int value) {
    SetRank(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the use case.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListingUseCase& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The group of the use case in the taxonomy.</p>
   */
  inline const Aws::String& GetGroup() const { return m_group; }
  inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
  template <typename GroupT = Aws::String>
  void SetGroup(GroupT&& value) {
    m_groupHasBeenSet = true;
    m_group = std::forward<GroupT>(value);
  }
  template <typename GroupT = Aws::String>
  ListingUseCase& WithGroup(GroupT&& value) {
    SetGroup(std::forward<GroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subgroup of the use case in the taxonomy.</p>
   */
  inline const Aws::String& GetSubgroup() const { return m_subgroup; }
  inline bool SubgroupHasBeenSet() const { return m_subgroupHasBeenSet; }
  template <typename SubgroupT = Aws::String>
  void SetSubgroup(SubgroupT&& value) {
    m_subgroupHasBeenSet = true;
    m_subgroup = std::forward<SubgroupT>(value);
  }
  template <typename SubgroupT = Aws::String>
  ListingUseCase& WithSubgroup(SubgroupT&& value) {
    SetSubgroup(std::forward<SubgroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the solution serves the use case.</p>
   */
  inline const Aws::String& GetUseCaseDetails() const { return m_useCaseDetails; }
  inline bool UseCaseDetailsHasBeenSet() const { return m_useCaseDetailsHasBeenSet; }
  template <typename UseCaseDetailsT = Aws::String>
  void SetUseCaseDetails(UseCaseDetailsT&& value) {
    m_useCaseDetailsHasBeenSet = true;
    m_useCaseDetails = std::forward<UseCaseDetailsT>(value);
  }
  template <typename UseCaseDetailsT = Aws::String>
  ListingUseCase& WithUseCaseDetails(UseCaseDetailsT&& value) {
    SetUseCaseDetails(std::forward<UseCaseDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why this use case is recommended.</p>
   */
  inline const Aws::String& GetRationale() const { return m_rationale; }
  inline bool RationaleHasBeenSet() const { return m_rationaleHasBeenSet; }
  template <typename RationaleT = Aws::String>
  void SetRationale(RationaleT&& value) {
    m_rationaleHasBeenSet = true;
    m_rationale = std::forward<RationaleT>(value);
  }
  template <typename RationaleT = Aws::String>
  ListingUseCase& WithRationale(RationaleT&& value) {
    SetRationale(std::forward<RationaleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  int m_rank{0};

  Aws::String m_name;

  Aws::String m_group;

  Aws::String m_subgroup;

  Aws::String m_useCaseDetails;

  Aws::String m_rationale;
  bool m_idHasBeenSet = false;
  bool m_rankHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_groupHasBeenSet = false;
  bool m_subgroupHasBeenSet = false;
  bool m_useCaseDetailsHasBeenSet = false;
  bool m_rationaleHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
