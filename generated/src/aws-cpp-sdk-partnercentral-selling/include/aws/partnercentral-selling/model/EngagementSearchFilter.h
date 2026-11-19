/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementSearchPredicate.h>

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
 * conditions over a single field. Nesting is limited to a depth of 3, and each
 * combinator list can contain up to 10 entries.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementSearchFilter">AWS
 * API Reference</a></p>
 */
class EngagementSearchFilter {
 public:
  AWS_PARTNERCENTRALSELLING_API EngagementSearchFilter() = default;
  AWS_PARTNERCENTRALSELLING_API EngagementSearchFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API EngagementSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of sub-filters that are joined with a logical AND. The node matches
   * only when every sub-filter matches.</p>
   */
  inline const Aws::Vector<EngagementSearchFilter>& GetAndAllFilters() const { return m_andAllFilters; }
  inline bool AndAllFiltersHasBeenSet() const { return m_andAllFiltersHasBeenSet; }
  template <typename AndAllFiltersT = Aws::Vector<EngagementSearchFilter>>
  void SetAndAllFilters(AndAllFiltersT&& value) {
    m_andAllFiltersHasBeenSet = true;
    m_andAllFilters = std::forward<AndAllFiltersT>(value);
  }
  template <typename AndAllFiltersT = Aws::Vector<EngagementSearchFilter>>
  EngagementSearchFilter& WithAndAllFilters(AndAllFiltersT&& value) {
    SetAndAllFilters(std::forward<AndAllFiltersT>(value));
    return *this;
  }
  template <typename AndAllFiltersT = EngagementSearchFilter>
  EngagementSearchFilter& AddAndAllFilters(AndAllFiltersT&& value) {
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
  inline const Aws::Vector<EngagementSearchFilter>& GetOrAllFilters() const { return m_orAllFilters; }
  inline bool OrAllFiltersHasBeenSet() const { return m_orAllFiltersHasBeenSet; }
  template <typename OrAllFiltersT = Aws::Vector<EngagementSearchFilter>>
  void SetOrAllFilters(OrAllFiltersT&& value) {
    m_orAllFiltersHasBeenSet = true;
    m_orAllFilters = std::forward<OrAllFiltersT>(value);
  }
  template <typename OrAllFiltersT = Aws::Vector<EngagementSearchFilter>>
  EngagementSearchFilter& WithOrAllFilters(OrAllFiltersT&& value) {
    SetOrAllFilters(std::forward<OrAllFiltersT>(value));
    return *this;
  }
  template <typename OrAllFiltersT = EngagementSearchFilter>
  EngagementSearchFilter& AddOrAllFilters(OrAllFiltersT&& value) {
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
  inline const EngagementSearchFilter& GetNotFilter() const { return *m_notFilter; }
  inline bool NotFilterHasBeenSet() const { return m_notFilterHasBeenSet; }
  template <typename NotFilterT = EngagementSearchFilter>
  void SetNotFilter(NotFilterT&& value) {
    m_notFilterHasBeenSet = true;
    m_notFilter = Aws::MakeShared<EngagementSearchFilter>("EngagementSearchFilter", std::forward<NotFilterT>(value));
  }
  template <typename NotFilterT = EngagementSearchFilter>
  EngagementSearchFilter& WithNotFilter(NotFilterT&& value) {
    SetNotFilter(std::forward<NotFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field equals the supplied
   * <code>StringValue</code>.</p>
   */
  inline const EngagementSearchPredicate& GetEqualsTo() const { return m_equalsTo; }
  inline bool EqualsToHasBeenSet() const { return m_equalsToHasBeenSet; }
  template <typename EqualsToT = EngagementSearchPredicate>
  void SetEqualsTo(EqualsToT&& value) {
    m_equalsToHasBeenSet = true;
    m_equalsTo = std::forward<EqualsToT>(value);
  }
  template <typename EqualsToT = EngagementSearchPredicate>
  EngagementSearchFilter& WithEqualsTo(EqualsToT&& value) {
    SetEqualsTo(std::forward<EqualsToT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field contains any of the supplied
   * values as a case-insensitive substring. Specify a single
   * <code>StringValue</code> or a <code>StringListValue</code>. For a field that
   * holds one value for each lead interaction, the condition matches when any of
   * those values contains a supplied value. Supported on string fields only.</p>
   */
  inline const EngagementSearchPredicate& GetContainsAny() const { return m_containsAny; }
  inline bool ContainsAnyHasBeenSet() const { return m_containsAnyHasBeenSet; }
  template <typename ContainsAnyT = EngagementSearchPredicate>
  void SetContainsAny(ContainsAnyT&& value) {
    m_containsAnyHasBeenSet = true;
    m_containsAny = std::forward<ContainsAnyT>(value);
  }
  template <typename ContainsAnyT = EngagementSearchPredicate>
  EngagementSearchFilter& WithContainsAny(ContainsAnyT&& value) {
    SetContainsAny(std::forward<ContainsAnyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field holds every supplied value
   * exactly. Specify a single <code>StringValue</code> or a
   * <code>StringListValue</code>. For a field that holds one value for each lead
   * interaction, each supplied value must be present on at least one interaction.
   * For a single-valued field, a list of more than one value returns no results.
   * Supported on string fields only.</p>
   */
  inline const EngagementSearchPredicate& GetContainsAll() const { return m_containsAll; }
  inline bool ContainsAllHasBeenSet() const { return m_containsAllHasBeenSet; }
  template <typename ContainsAllT = EngagementSearchPredicate>
  void SetContainsAll(ContainsAllT&& value) {
    m_containsAllHasBeenSet = true;
    m_containsAll = std::forward<ContainsAllT>(value);
  }
  template <typename ContainsAllT = EngagementSearchPredicate>
  EngagementSearchFilter& WithContainsAll(ContainsAllT&& value) {
    SetContainsAll(std::forward<ContainsAllT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field is greater than the supplied
   * value. This condition is supported only on ordered fields, such as date and
   * numeric fields.</p>
   */
  inline const EngagementSearchPredicate& GetGreaterThan() const { return m_greaterThan; }
  inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
  template <typename GreaterThanT = EngagementSearchPredicate>
  void SetGreaterThan(GreaterThanT&& value) {
    m_greaterThanHasBeenSet = true;
    m_greaterThan = std::forward<GreaterThanT>(value);
  }
  template <typename GreaterThanT = EngagementSearchPredicate>
  EngagementSearchFilter& WithGreaterThan(GreaterThanT&& value) {
    SetGreaterThan(std::forward<GreaterThanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field is greater than or equal to the
   * supplied value. This condition is supported only on ordered fields, such as date
   * and numeric fields.</p>
   */
  inline const EngagementSearchPredicate& GetGreaterThanOrEquals() const { return m_greaterThanOrEquals; }
  inline bool GreaterThanOrEqualsHasBeenSet() const { return m_greaterThanOrEqualsHasBeenSet; }
  template <typename GreaterThanOrEqualsT = EngagementSearchPredicate>
  void SetGreaterThanOrEquals(GreaterThanOrEqualsT&& value) {
    m_greaterThanOrEqualsHasBeenSet = true;
    m_greaterThanOrEquals = std::forward<GreaterThanOrEqualsT>(value);
  }
  template <typename GreaterThanOrEqualsT = EngagementSearchPredicate>
  EngagementSearchFilter& WithGreaterThanOrEquals(GreaterThanOrEqualsT&& value) {
    SetGreaterThanOrEquals(std::forward<GreaterThanOrEqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field is less than the supplied value.
   * This condition is supported only on ordered fields, such as date and numeric
   * fields.</p>
   */
  inline const EngagementSearchPredicate& GetLessThan() const { return m_lessThan; }
  inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
  template <typename LessThanT = EngagementSearchPredicate>
  void SetLessThan(LessThanT&& value) {
    m_lessThanHasBeenSet = true;
    m_lessThan = std::forward<LessThanT>(value);
  }
  template <typename LessThanT = EngagementSearchPredicate>
  EngagementSearchFilter& WithLessThan(LessThanT&& value) {
    SetLessThan(std::forward<LessThanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A leaf condition that matches when the field is less than or equal to the
   * supplied value. This condition is supported only on ordered fields, such as date
   * and numeric fields.</p>
   */
  inline const EngagementSearchPredicate& GetLessThanOrEquals() const { return m_lessThanOrEquals; }
  inline bool LessThanOrEqualsHasBeenSet() const { return m_lessThanOrEqualsHasBeenSet; }
  template <typename LessThanOrEqualsT = EngagementSearchPredicate>
  void SetLessThanOrEquals(LessThanOrEqualsT&& value) {
    m_lessThanOrEqualsHasBeenSet = true;
    m_lessThanOrEquals = std::forward<LessThanOrEqualsT>(value);
  }
  template <typename LessThanOrEqualsT = EngagementSearchPredicate>
  EngagementSearchFilter& WithLessThanOrEquals(LessThanOrEqualsT&& value) {
    SetLessThanOrEquals(std::forward<LessThanOrEqualsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EngagementSearchFilter> m_andAllFilters;

  Aws::Vector<EngagementSearchFilter> m_orAllFilters;

  std::shared_ptr<EngagementSearchFilter> m_notFilter;

  EngagementSearchPredicate m_equalsTo;

  EngagementSearchPredicate m_containsAny;

  EngagementSearchPredicate m_containsAll;

  EngagementSearchPredicate m_greaterThan;

  EngagementSearchPredicate m_greaterThanOrEquals;

  EngagementSearchPredicate m_lessThan;

  EngagementSearchPredicate m_lessThanOrEquals;
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
