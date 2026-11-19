/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunitySearchPredicate.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>A recursive filter node. Exactly one member must be set. The boolean
 * combinators nest sub-filters: <code>AndAllFilters</code> joins its children with
 * AND, <code>OrAllFilters</code> matches when at least one child matches, and
 * <code>NotFilter</code> negates its single child. The remaining members are leaf
 * conditions over a single field. Nesting is bounded (depth up to 3, each
 * combinator list up to 10 entries, and up to 20 leaf conditions per tree). If a
 * request exceeds these limits, the service returns a
 * <code>ValidationException</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchFilter">AWS
 * API Reference</a></p>
 */
class OpportunitySearchFilter {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchFilter() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of sub-filters that are joined with a logical AND. The node matches
   * only when every sub-filter matches.</p>
   */
  inline const Aws::Vector<OpportunitySearchFilter>& GetAndAllFilters() const { return m_andAllFilters; }
  inline bool AndAllFiltersHasBeenSet() const { return m_andAllFiltersHasBeenSet; }
  template <typename AndAllFiltersT = Aws::Vector<OpportunitySearchFilter>>
  void SetAndAllFilters(AndAllFiltersT&& value) {
    m_andAllFiltersHasBeenSet = true;
    m_andAllFilters = std::forward<AndAllFiltersT>(value);
  }
  template <typename AndAllFiltersT = Aws::Vector<OpportunitySearchFilter>>
  OpportunitySearchFilter& WithAndAllFilters(AndAllFiltersT&& value) {
    SetAndAllFilters(std::forward<AndAllFiltersT>(value));
    return *this;
  }
  template <typename AndAllFiltersT = OpportunitySearchFilter>
  OpportunitySearchFilter& AddAndAllFilters(AndAllFiltersT&& value) {
    m_andAllFiltersHasBeenSet = true;
    m_andAllFilters.emplace_back(std::forward<AndAllFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of sub-filters that are joined with a logical OR. The node matches
   * when at least one sub-filter matches.</p>
   */
  inline const Aws::Vector<OpportunitySearchFilter>& GetOrAllFilters() const { return m_orAllFilters; }
  inline bool OrAllFiltersHasBeenSet() const { return m_orAllFiltersHasBeenSet; }
  template <typename OrAllFiltersT = Aws::Vector<OpportunitySearchFilter>>
  void SetOrAllFilters(OrAllFiltersT&& value) {
    m_orAllFiltersHasBeenSet = true;
    m_orAllFilters = std::forward<OrAllFiltersT>(value);
  }
  template <typename OrAllFiltersT = Aws::Vector<OpportunitySearchFilter>>
  OpportunitySearchFilter& WithOrAllFilters(OrAllFiltersT&& value) {
    SetOrAllFilters(std::forward<OrAllFiltersT>(value));
    return *this;
  }
  template <typename OrAllFiltersT = OpportunitySearchFilter>
  OpportunitySearchFilter& AddOrAllFilters(OrAllFiltersT&& value) {
    m_orAllFiltersHasBeenSet = true;
    m_orAllFilters.emplace_back(std::forward<OrAllFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A single sub-filter that is negated. The node matches when the sub-filter
   * does not match.</p>
   */
  inline const OpportunitySearchFilter& GetNotFilter() const { return *m_notFilter; }
  inline bool NotFilterHasBeenSet() const { return m_notFilterHasBeenSet; }
  template <typename NotFilterT = OpportunitySearchFilter>
  void SetNotFilter(NotFilterT&& value) {
    m_notFilterHasBeenSet = true;
    m_notFilter = Aws::MakeShared<OpportunitySearchFilter>("OpportunitySearchFilter", std::forward<NotFilterT>(value));
  }
  template <typename NotFilterT = OpportunitySearchFilter>
  OpportunitySearchFilter& WithNotFilter(NotFilterT&& value) {
    SetNotFilter(std::forward<NotFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field equals the supplied value.</p>
   */
  inline const OpportunitySearchPredicate& GetEqualsTo() const { return m_equalsTo; }
  inline bool EqualsToHasBeenSet() const { return m_equalsToHasBeenSet; }
  template <typename EqualsToT = OpportunitySearchPredicate>
  void SetEqualsTo(EqualsToT&& value) {
    m_equalsToHasBeenSet = true;
    m_equalsTo = std::forward<EqualsToT>(value);
  }
  template <typename EqualsToT = OpportunitySearchPredicate>
  OpportunitySearchFilter& WithEqualsTo(EqualsToT&& value) {
    SetEqualsTo(std::forward<EqualsToT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field contains any of the supplied
   * values as a case-insensitive substring. On a multi-valued field, the condition
   * matches when any element contains the substring.</p>
   */
  inline const OpportunitySearchPredicate& GetContainsAny() const { return m_containsAny; }
  inline bool ContainsAnyHasBeenSet() const { return m_containsAnyHasBeenSet; }
  template <typename ContainsAnyT = OpportunitySearchPredicate>
  void SetContainsAny(ContainsAnyT&& value) {
    m_containsAnyHasBeenSet = true;
    m_containsAny = std::forward<ContainsAnyT>(value);
  }
  template <typename ContainsAnyT = OpportunitySearchPredicate>
  OpportunitySearchFilter& WithContainsAny(ContainsAnyT&& value) {
    SetContainsAny(std::forward<ContainsAnyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field holds every supplied value. On a
   * multi-valued field, every listed value must be present.</p>
   */
  inline const OpportunitySearchPredicate& GetContainsAll() const { return m_containsAll; }
  inline bool ContainsAllHasBeenSet() const { return m_containsAllHasBeenSet; }
  template <typename ContainsAllT = OpportunitySearchPredicate>
  void SetContainsAll(ContainsAllT&& value) {
    m_containsAllHasBeenSet = true;
    m_containsAll = std::forward<ContainsAllT>(value);
  }
  template <typename ContainsAllT = OpportunitySearchPredicate>
  OpportunitySearchFilter& WithContainsAll(ContainsAllT&& value) {
    SetContainsAll(std::forward<ContainsAllT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field is greater than the supplied
   * value. Supported on ordered fields only (date or numeric).</p>
   */
  inline const OpportunitySearchPredicate& GetGreaterThan() const { return m_greaterThan; }
  inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
  template <typename GreaterThanT = OpportunitySearchPredicate>
  void SetGreaterThan(GreaterThanT&& value) {
    m_greaterThanHasBeenSet = true;
    m_greaterThan = std::forward<GreaterThanT>(value);
  }
  template <typename GreaterThanT = OpportunitySearchPredicate>
  OpportunitySearchFilter& WithGreaterThan(GreaterThanT&& value) {
    SetGreaterThan(std::forward<GreaterThanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field is greater than or equal to the
   * supplied value. Supported on ordered fields only (date or numeric).</p>
   */
  inline const OpportunitySearchPredicate& GetGreaterThanOrEquals() const { return m_greaterThanOrEquals; }
  inline bool GreaterThanOrEqualsHasBeenSet() const { return m_greaterThanOrEqualsHasBeenSet; }
  template <typename GreaterThanOrEqualsT = OpportunitySearchPredicate>
  void SetGreaterThanOrEquals(GreaterThanOrEqualsT&& value) {
    m_greaterThanOrEqualsHasBeenSet = true;
    m_greaterThanOrEquals = std::forward<GreaterThanOrEqualsT>(value);
  }
  template <typename GreaterThanOrEqualsT = OpportunitySearchPredicate>
  OpportunitySearchFilter& WithGreaterThanOrEquals(GreaterThanOrEqualsT&& value) {
    SetGreaterThanOrEquals(std::forward<GreaterThanOrEqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field is less than the supplied value.
   * Supported on ordered fields only (date or numeric).</p>
   */
  inline const OpportunitySearchPredicate& GetLessThan() const { return m_lessThan; }
  inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
  template <typename LessThanT = OpportunitySearchPredicate>
  void SetLessThan(LessThanT&& value) {
    m_lessThanHasBeenSet = true;
    m_lessThan = std::forward<LessThanT>(value);
  }
  template <typename LessThanT = OpportunitySearchPredicate>
  OpportunitySearchFilter& WithLessThan(LessThanT&& value) {
    SetLessThan(std::forward<LessThanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field is less than or equal to the
   * supplied value. Supported on ordered fields only (date or numeric).</p>
   */
  inline const OpportunitySearchPredicate& GetLessThanOrEquals() const { return m_lessThanOrEquals; }
  inline bool LessThanOrEqualsHasBeenSet() const { return m_lessThanOrEqualsHasBeenSet; }
  template <typename LessThanOrEqualsT = OpportunitySearchPredicate>
  void SetLessThanOrEquals(LessThanOrEqualsT&& value) {
    m_lessThanOrEqualsHasBeenSet = true;
    m_lessThanOrEquals = std::forward<LessThanOrEqualsT>(value);
  }
  template <typename LessThanOrEqualsT = OpportunitySearchPredicate>
  OpportunitySearchFilter& WithLessThanOrEquals(LessThanOrEqualsT&& value) {
    SetLessThanOrEquals(std::forward<LessThanOrEqualsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<OpportunitySearchFilter> m_andAllFilters;

  Aws::Vector<OpportunitySearchFilter> m_orAllFilters;

  std::shared_ptr<OpportunitySearchFilter> m_notFilter;

  OpportunitySearchPredicate m_equalsTo;

  OpportunitySearchPredicate m_containsAny;

  OpportunitySearchPredicate m_containsAll;

  OpportunitySearchPredicate m_greaterThan;

  OpportunitySearchPredicate m_greaterThanOrEquals;

  OpportunitySearchPredicate m_lessThan;

  OpportunitySearchPredicate m_lessThanOrEquals;
  bool m_andAllFiltersHasBeenSet = false;
  bool m_orAllFiltersHasBeenSet = false;
  bool m_notFilterHasBeenSet = false;
  bool m_equalsToHasBeenSet = false;
  bool m_containsAnyHasBeenSet = false;
  bool m_containsAllHasBeenSet = false;
  bool m_greaterThanHasBeenSet = false;
  bool m_greaterThanOrEqualsHasBeenSet = false;
  bool m_lessThanHasBeenSet = false;
  bool m_lessThanOrEqualsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
