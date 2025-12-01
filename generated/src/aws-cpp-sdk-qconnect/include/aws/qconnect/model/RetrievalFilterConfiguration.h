/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/FilterAttribute.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Configuration for filtering content during retrieval
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RetrievalFilterConfiguration">AWS
 * API Reference</a></p>
 */
class RetrievalFilterConfiguration {
 public:
  AWS_QCONNECT_API RetrievalFilterConfiguration() = default;
  AWS_QCONNECT_API RetrievalFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API RetrievalFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter configuration that requires all conditions to be met.</p>
   */
  inline const Aws::Vector<RetrievalFilterConfiguration>& GetAndAll() const { return m_andAll; }
  inline bool AndAllHasBeenSet() const { return m_andAllHasBeenSet; }
  template <typename AndAllT = Aws::Vector<RetrievalFilterConfiguration>>
  void SetAndAll(AndAllT&& value) {
    m_andAllHasBeenSet = true;
    m_andAll = std::forward<AndAllT>(value);
  }
  template <typename AndAllT = Aws::Vector<RetrievalFilterConfiguration>>
  RetrievalFilterConfiguration& WithAndAll(AndAllT&& value) {
    SetAndAll(std::forward<AndAllT>(value));
    return *this;
  }
  template <typename AndAllT = RetrievalFilterConfiguration>
  RetrievalFilterConfiguration& AddAndAll(AndAllT&& value) {
    m_andAllHasBeenSet = true;
    m_andAll.emplace_back(std::forward<AndAllT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for exact equality matching.</p>
   */
  inline const FilterAttribute& GetEquals() const { return m_equals; }
  inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
  template <typename EqualsT = FilterAttribute>
  void SetEquals(EqualsT&& value) {
    m_equalsHasBeenSet = true;
    m_equals = std::forward<EqualsT>(value);
  }
  template <typename EqualsT = FilterAttribute>
  RetrievalFilterConfiguration& WithEquals(EqualsT&& value) {
    SetEquals(std::forward<EqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for greater than comparison.</p>
   */
  inline const FilterAttribute& GetGreaterThan() const { return m_greaterThan; }
  inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
  template <typename GreaterThanT = FilterAttribute>
  void SetGreaterThan(GreaterThanT&& value) {
    m_greaterThanHasBeenSet = true;
    m_greaterThan = std::forward<GreaterThanT>(value);
  }
  template <typename GreaterThanT = FilterAttribute>
  RetrievalFilterConfiguration& WithGreaterThan(GreaterThanT&& value) {
    SetGreaterThan(std::forward<GreaterThanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for greater than or equal comparison.</p>
   */
  inline const FilterAttribute& GetGreaterThanOrEquals() const { return m_greaterThanOrEquals; }
  inline bool GreaterThanOrEqualsHasBeenSet() const { return m_greaterThanOrEqualsHasBeenSet; }
  template <typename GreaterThanOrEqualsT = FilterAttribute>
  void SetGreaterThanOrEquals(GreaterThanOrEqualsT&& value) {
    m_greaterThanOrEqualsHasBeenSet = true;
    m_greaterThanOrEquals = std::forward<GreaterThanOrEqualsT>(value);
  }
  template <typename GreaterThanOrEqualsT = FilterAttribute>
  RetrievalFilterConfiguration& WithGreaterThanOrEquals(GreaterThanOrEqualsT&& value) {
    SetGreaterThanOrEquals(std::forward<GreaterThanOrEqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for membership in a set of values.</p>
   */
  inline const FilterAttribute& GetIn() const { return m_in; }
  inline bool InHasBeenSet() const { return m_inHasBeenSet; }
  template <typename InT = FilterAttribute>
  void SetIn(InT&& value) {
    m_inHasBeenSet = true;
    m_in = std::forward<InT>(value);
  }
  template <typename InT = FilterAttribute>
  RetrievalFilterConfiguration& WithIn(InT&& value) {
    SetIn(std::forward<InT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for less than comparison.</p>
   */
  inline const FilterAttribute& GetLessThan() const { return m_lessThan; }
  inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
  template <typename LessThanT = FilterAttribute>
  void SetLessThan(LessThanT&& value) {
    m_lessThanHasBeenSet = true;
    m_lessThan = std::forward<LessThanT>(value);
  }
  template <typename LessThanT = FilterAttribute>
  RetrievalFilterConfiguration& WithLessThan(LessThanT&& value) {
    SetLessThan(std::forward<LessThanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for less than or equal comparison.</p>
   */
  inline const FilterAttribute& GetLessThanOrEquals() const { return m_lessThanOrEquals; }
  inline bool LessThanOrEqualsHasBeenSet() const { return m_lessThanOrEqualsHasBeenSet; }
  template <typename LessThanOrEqualsT = FilterAttribute>
  void SetLessThanOrEquals(LessThanOrEqualsT&& value) {
    m_lessThanOrEqualsHasBeenSet = true;
    m_lessThanOrEquals = std::forward<LessThanOrEqualsT>(value);
  }
  template <typename LessThanOrEqualsT = FilterAttribute>
  RetrievalFilterConfiguration& WithLessThanOrEquals(LessThanOrEqualsT&& value) {
    SetLessThanOrEquals(std::forward<LessThanOrEqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for checking if a list contains a value.</p>
   */
  inline const FilterAttribute& GetListContains() const { return m_listContains; }
  inline bool ListContainsHasBeenSet() const { return m_listContainsHasBeenSet; }
  template <typename ListContainsT = FilterAttribute>
  void SetListContains(ListContainsT&& value) {
    m_listContainsHasBeenSet = true;
    m_listContains = std::forward<ListContainsT>(value);
  }
  template <typename ListContainsT = FilterAttribute>
  RetrievalFilterConfiguration& WithListContains(ListContainsT&& value) {
    SetListContains(std::forward<ListContainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for inequality matching.</p>
   */
  inline const FilterAttribute& GetNotEquals() const { return m_notEquals; }
  inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
  template <typename NotEqualsT = FilterAttribute>
  void SetNotEquals(NotEqualsT&& value) {
    m_notEqualsHasBeenSet = true;
    m_notEquals = std::forward<NotEqualsT>(value);
  }
  template <typename NotEqualsT = FilterAttribute>
  RetrievalFilterConfiguration& WithNotEquals(NotEqualsT&& value) {
    SetNotEquals(std::forward<NotEqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for exclusion from a set of values.</p>
   */
  inline const FilterAttribute& GetNotIn() const { return m_notIn; }
  inline bool NotInHasBeenSet() const { return m_notInHasBeenSet; }
  template <typename NotInT = FilterAttribute>
  void SetNotIn(NotInT&& value) {
    m_notInHasBeenSet = true;
    m_notIn = std::forward<NotInT>(value);
  }
  template <typename NotInT = FilterAttribute>
  RetrievalFilterConfiguration& WithNotIn(NotInT&& value) {
    SetNotIn(std::forward<NotInT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration where any condition can be met.</p>
   */
  inline const Aws::Vector<RetrievalFilterConfiguration>& GetOrAll() const { return m_orAll; }
  inline bool OrAllHasBeenSet() const { return m_orAllHasBeenSet; }
  template <typename OrAllT = Aws::Vector<RetrievalFilterConfiguration>>
  void SetOrAll(OrAllT&& value) {
    m_orAllHasBeenSet = true;
    m_orAll = std::forward<OrAllT>(value);
  }
  template <typename OrAllT = Aws::Vector<RetrievalFilterConfiguration>>
  RetrievalFilterConfiguration& WithOrAll(OrAllT&& value) {
    SetOrAll(std::forward<OrAllT>(value));
    return *this;
  }
  template <typename OrAllT = RetrievalFilterConfiguration>
  RetrievalFilterConfiguration& AddOrAll(OrAllT&& value) {
    m_orAllHasBeenSet = true;
    m_orAll.emplace_back(std::forward<OrAllT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for prefix matching.</p>
   */
  inline const FilterAttribute& GetStartsWith() const { return m_startsWith; }
  inline bool StartsWithHasBeenSet() const { return m_startsWithHasBeenSet; }
  template <typename StartsWithT = FilterAttribute>
  void SetStartsWith(StartsWithT&& value) {
    m_startsWithHasBeenSet = true;
    m_startsWith = std::forward<StartsWithT>(value);
  }
  template <typename StartsWithT = FilterAttribute>
  RetrievalFilterConfiguration& WithStartsWith(StartsWithT&& value) {
    SetStartsWith(std::forward<StartsWithT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter configuration for substring matching.</p>
   */
  inline const FilterAttribute& GetStringContains() const { return m_stringContains; }
  inline bool StringContainsHasBeenSet() const { return m_stringContainsHasBeenSet; }
  template <typename StringContainsT = FilterAttribute>
  void SetStringContains(StringContainsT&& value) {
    m_stringContainsHasBeenSet = true;
    m_stringContains = std::forward<StringContainsT>(value);
  }
  template <typename StringContainsT = FilterAttribute>
  RetrievalFilterConfiguration& WithStringContains(StringContainsT&& value) {
    SetStringContains(std::forward<StringContainsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RetrievalFilterConfiguration> m_andAll;
  bool m_andAllHasBeenSet = false;

  FilterAttribute m_equals;
  bool m_equalsHasBeenSet = false;

  FilterAttribute m_greaterThan;
  bool m_greaterThanHasBeenSet = false;

  FilterAttribute m_greaterThanOrEquals;
  bool m_greaterThanOrEqualsHasBeenSet = false;

  FilterAttribute m_in;
  bool m_inHasBeenSet = false;

  FilterAttribute m_lessThan;
  bool m_lessThanHasBeenSet = false;

  FilterAttribute m_lessThanOrEquals;
  bool m_lessThanOrEqualsHasBeenSet = false;

  FilterAttribute m_listContains;
  bool m_listContainsHasBeenSet = false;

  FilterAttribute m_notEquals;
  bool m_notEqualsHasBeenSet = false;

  FilterAttribute m_notIn;
  bool m_notInHasBeenSet = false;

  Aws::Vector<RetrievalFilterConfiguration> m_orAll;
  bool m_orAllHasBeenSet = false;

  FilterAttribute m_startsWith;
  bool m_startsWithHasBeenSet = false;

  FilterAttribute m_stringContains;
  bool m_stringContainsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
