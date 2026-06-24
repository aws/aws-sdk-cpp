/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>A single data point in a revenue time series, representing aggregated
 * monetization metrics for a specific time interval.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/DataPointEntry">AWS
 * API Reference</a></p>
 */
class DataPointEntry {
 public:
  AWS_WAFV2_API DataPointEntry() = default;
  AWS_WAFV2_API DataPointEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API DataPointEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp for this data point.</p>
   */
  inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
  inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
  template <typename DateT = Aws::Utils::DateTime>
  void SetDate(DateT&& value) {
    m_dateHasBeenSet = true;
    m_date = std::forward<DateT>(value);
  }
  template <typename DateT = Aws::Utils::DateTime>
  DataPointEntry& WithDate(DateT&& value) {
    SetDate(std::forward<DateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of HTTP 402 Payment Required responses served during this
   * interval.</p>
   */
  inline long long GetMonetizeServedCount() const { return m_monetizeServedCount; }
  inline bool MonetizeServedCountHasBeenSet() const { return m_monetizeServedCountHasBeenSet; }
  inline void SetMonetizeServedCount(long long value) {
    m_monetizeServedCountHasBeenSet = true;
    m_monetizeServedCount = value;
  }
  inline DataPointEntry& WithMonetizeServedCount(long long value) {
    SetMonetizeServedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of successfully settled payments during this interval.</p>
   */
  inline long long GetSettledCount() const { return m_settledCount; }
  inline bool SettledCountHasBeenSet() const { return m_settledCountHasBeenSet; }
  inline void SetSettledCount(long long value) {
    m_settledCountHasBeenSet = true;
    m_settledCount = value;
  }
  inline DataPointEntry& WithSettledCount(long long value) {
    SetSettledCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total revenue amount during this interval in the specified currency.</p>
   */
  inline const Aws::String& GetTotalAmount() const { return m_totalAmount; }
  inline bool TotalAmountHasBeenSet() const { return m_totalAmountHasBeenSet; }
  template <typename TotalAmountT = Aws::String>
  void SetTotalAmount(TotalAmountT&& value) {
    m_totalAmountHasBeenSet = true;
    m_totalAmount = std::forward<TotalAmountT>(value);
  }
  template <typename TotalAmountT = Aws::String>
  DataPointEntry& WithTotalAmount(TotalAmountT&& value) {
    SetTotalAmount(std::forward<TotalAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bot category for this data point, when grouped by category.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  DataPointEntry& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The intent classification for this data point, when grouped by intent.</p>
   */
  inline const Aws::String& GetIntent() const { return m_intent; }
  inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
  template <typename IntentT = Aws::String>
  void SetIntent(IntentT&& value) {
    m_intentHasBeenSet = true;
    m_intent = std::forward<IntentT>(value);
  }
  template <typename IntentT = Aws::String>
  DataPointEntry& WithIntent(IntentT&& value) {
    SetIntent(std::forward<IntentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The group-by dimension value for this data point.</p>
   */
  inline const Aws::String& GetGroupByValue() const { return m_groupByValue; }
  inline bool GroupByValueHasBeenSet() const { return m_groupByValueHasBeenSet; }
  template <typename GroupByValueT = Aws::String>
  void SetGroupByValue(GroupByValueT&& value) {
    m_groupByValueHasBeenSet = true;
    m_groupByValue = std::forward<GroupByValueT>(value);
  }
  template <typename GroupByValueT = Aws::String>
  DataPointEntry& WithGroupByValue(GroupByValueT&& value) {
    SetGroupByValue(std::forward<GroupByValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_date{};

  long long m_monetizeServedCount{0};

  long long m_settledCount{0};

  Aws::String m_totalAmount;

  Aws::String m_category;

  Aws::String m_intent;

  Aws::String m_groupByValue;
  bool m_dateHasBeenSet = false;
  bool m_monetizeServedCountHasBeenSet = false;
  bool m_settledCountHasBeenSet = false;
  bool m_totalAmountHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_intentHasBeenSet = false;
  bool m_groupByValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
