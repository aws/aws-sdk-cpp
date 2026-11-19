/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/FilterCondition.h>

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
 * <p>A filter node. Specify exactly one member. <code>AndAllFilters</code>,
 * <code>OrAllFilters</code>, and <code>NotFilter</code> combine child filters. The
 * other members compare a single field to a value. Each combinator list can
 * contain up to 10 filters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/Filter">AWS
 * API Reference</a></p>
 */
class Filter {
 public:
  AWS_PARTNERCENTRALSELLING_API Filter() = default;
  AWS_PARTNERCENTRALSELLING_API Filter(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of child filters joined with a logical AND. The node matches only when
   * every child filter matches.</p>
   */
  inline const Aws::Vector<Filter>& GetAndAllFilters() const { return m_andAllFilters; }
  inline bool AndAllFiltersHasBeenSet() const { return m_andAllFiltersHasBeenSet; }
  template <typename AndAllFiltersT = Aws::Vector<Filter>>
  void SetAndAllFilters(AndAllFiltersT&& value) {
    m_andAllFiltersHasBeenSet = true;
    m_andAllFilters = std::forward<AndAllFiltersT>(value);
  }
  template <typename AndAllFiltersT = Aws::Vector<Filter>>
  Filter& WithAndAllFilters(AndAllFiltersT&& value) {
    SetAndAllFilters(std::forward<AndAllFiltersT>(value));
    return *this;
  }
  template <typename AndAllFiltersT = Filter>
  Filter& AddAndAllFilters(AndAllFiltersT&& value) {
    m_andAllFiltersHasBeenSet = true;
    m_andAllFilters.emplace_back(std::forward<AndAllFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of child filters joined with a logical OR. The node matches when at
   * least one child filter matches.</p>
   */
  inline const Aws::Vector<Filter>& GetOrAllFilters() const { return m_orAllFilters; }
  inline bool OrAllFiltersHasBeenSet() const { return m_orAllFiltersHasBeenSet; }
  template <typename OrAllFiltersT = Aws::Vector<Filter>>
  void SetOrAllFilters(OrAllFiltersT&& value) {
    m_orAllFiltersHasBeenSet = true;
    m_orAllFilters = std::forward<OrAllFiltersT>(value);
  }
  template <typename OrAllFiltersT = Aws::Vector<Filter>>
  Filter& WithOrAllFilters(OrAllFiltersT&& value) {
    SetOrAllFilters(std::forward<OrAllFiltersT>(value));
    return *this;
  }
  template <typename OrAllFiltersT = Filter>
  Filter& AddOrAllFilters(OrAllFiltersT&& value) {
    m_orAllFiltersHasBeenSet = true;
    m_orAllFilters.emplace_back(std::forward<OrAllFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A single child filter that is negated. The node matches when the child filter
   * doesn't match.</p>
   */
  inline const Filter& GetNotFilter() const { return *m_notFilter; }
  inline bool NotFilterHasBeenSet() const { return m_notFilterHasBeenSet; }
  template <typename NotFilterT = Filter>
  void SetNotFilter(NotFilterT&& value) {
    m_notFilterHasBeenSet = true;
    m_notFilter = Aws::MakeShared<Filter>("Filter", std::forward<NotFilterT>(value));
  }
  template <typename NotFilterT = Filter>
  Filter& WithNotFilter(NotFilterT&& value) {
    SetNotFilter(std::forward<NotFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that matches when the field equals the supplied
   * <code>StringValue</code>.</p>
   */
  inline const FilterCondition& GetEqualsTo() const { return m_equalsTo; }
  inline bool EqualsToHasBeenSet() const { return m_equalsToHasBeenSet; }
  template <typename EqualsToT = FilterCondition>
  void SetEqualsTo(EqualsToT&& value) {
    m_equalsToHasBeenSet = true;
    m_equalsTo = std::forward<EqualsToT>(value);
  }
  template <typename EqualsToT = FilterCondition>
  Filter& WithEqualsTo(EqualsToT&& value) {
    SetEqualsTo(std::forward<EqualsToT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that matches when the field matches any of the values in the
   * supplied <code>StringListValue</code>.</p>
   */
  inline const FilterCondition& GetContainsAny() const { return m_containsAny; }
  inline bool ContainsAnyHasBeenSet() const { return m_containsAnyHasBeenSet; }
  template <typename ContainsAnyT = FilterCondition>
  void SetContainsAny(ContainsAnyT&& value) {
    m_containsAnyHasBeenSet = true;
    m_containsAny = std::forward<ContainsAnyT>(value);
  }
  template <typename ContainsAnyT = FilterCondition>
  Filter& WithContainsAny(ContainsAnyT&& value) {
    SetContainsAny(std::forward<ContainsAnyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that matches when the field contains every value in the supplied
   * <code>StringListValue</code>. Supported on fields that hold more than one
   * value.</p>
   */
  inline const FilterCondition& GetContainsAll() const { return m_containsAll; }
  inline bool ContainsAllHasBeenSet() const { return m_containsAllHasBeenSet; }
  template <typename ContainsAllT = FilterCondition>
  void SetContainsAll(ContainsAllT&& value) {
    m_containsAllHasBeenSet = true;
    m_containsAll = std::forward<ContainsAllT>(value);
  }
  template <typename ContainsAllT = FilterCondition>
  Filter& WithContainsAll(ContainsAllT&& value) {
    SetContainsAll(std::forward<ContainsAllT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that matches when the date field is later than the supplied
   * <code>DateValue</code>.</p>
   */
  inline const FilterCondition& GetGreaterThan() const { return m_greaterThan; }
  inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
  template <typename GreaterThanT = FilterCondition>
  void SetGreaterThan(GreaterThanT&& value) {
    m_greaterThanHasBeenSet = true;
    m_greaterThan = std::forward<GreaterThanT>(value);
  }
  template <typename GreaterThanT = FilterCondition>
  Filter& WithGreaterThan(GreaterThanT&& value) {
    SetGreaterThan(std::forward<GreaterThanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that matches when the date field is the same as or later than the
   * supplied <code>DateValue</code>.</p>
   */
  inline const FilterCondition& GetGreaterThanOrEquals() const { return m_greaterThanOrEquals; }
  inline bool GreaterThanOrEqualsHasBeenSet() const { return m_greaterThanOrEqualsHasBeenSet; }
  template <typename GreaterThanOrEqualsT = FilterCondition>
  void SetGreaterThanOrEquals(GreaterThanOrEqualsT&& value) {
    m_greaterThanOrEqualsHasBeenSet = true;
    m_greaterThanOrEquals = std::forward<GreaterThanOrEqualsT>(value);
  }
  template <typename GreaterThanOrEqualsT = FilterCondition>
  Filter& WithGreaterThanOrEquals(GreaterThanOrEqualsT&& value) {
    SetGreaterThanOrEquals(std::forward<GreaterThanOrEqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that matches when the date field is earlier than the supplied
   * <code>DateValue</code>.</p>
   */
  inline const FilterCondition& GetLessThan() const { return m_lessThan; }
  inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
  template <typename LessThanT = FilterCondition>
  void SetLessThan(LessThanT&& value) {
    m_lessThanHasBeenSet = true;
    m_lessThan = std::forward<LessThanT>(value);
  }
  template <typename LessThanT = FilterCondition>
  Filter& WithLessThan(LessThanT&& value) {
    SetLessThan(std::forward<LessThanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that matches when the date field is the same as or earlier than
   * the supplied <code>DateValue</code>.</p>
   */
  inline const FilterCondition& GetLessThanOrEquals() const { return m_lessThanOrEquals; }
  inline bool LessThanOrEqualsHasBeenSet() const { return m_lessThanOrEqualsHasBeenSet; }
  template <typename LessThanOrEqualsT = FilterCondition>
  void SetLessThanOrEquals(LessThanOrEqualsT&& value) {
    m_lessThanOrEqualsHasBeenSet = true;
    m_lessThanOrEquals = std::forward<LessThanOrEqualsT>(value);
  }
  template <typename LessThanOrEqualsT = FilterCondition>
  Filter& WithLessThanOrEquals(LessThanOrEqualsT&& value) {
    SetLessThanOrEquals(std::forward<LessThanOrEqualsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Filter> m_andAllFilters;

  Aws::Vector<Filter> m_orAllFilters;

  std::shared_ptr<Filter> m_notFilter;

  FilterCondition m_equalsTo;

  FilterCondition m_containsAny;

  FilterCondition m_containsAll;

  FilterCondition m_greaterThan;

  FilterCondition m_greaterThanOrEquals;

  FilterCondition m_lessThan;

  FilterCondition m_lessThanOrEquals;
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
