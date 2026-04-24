/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/Filter.h>
#include <aws/observabilityadmin/model/FilterBehavior.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p> Configuration that determines which WAF log records to keep or drop based on
 * specified conditions. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/LoggingFilter">AWS
 * API Reference</a></p>
 */
class LoggingFilter {
 public:
  AWS_OBSERVABILITYADMIN_API LoggingFilter() = default;
  AWS_OBSERVABILITYADMIN_API LoggingFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API LoggingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> A list of filter conditions that determine log record handling behavior.
   * </p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  LoggingFilter& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  LoggingFilter& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The default action (KEEP or DROP) for log records that don't match any
   * filter conditions. </p>
   */
  inline FilterBehavior GetDefaultBehavior() const { return m_defaultBehavior; }
  inline bool DefaultBehaviorHasBeenSet() const { return m_defaultBehaviorHasBeenSet; }
  inline void SetDefaultBehavior(FilterBehavior value) {
    m_defaultBehaviorHasBeenSet = true;
    m_defaultBehavior = value;
  }
  inline LoggingFilter& WithDefaultBehavior(FilterBehavior value) {
    SetDefaultBehavior(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Filter> m_filters;

  FilterBehavior m_defaultBehavior{FilterBehavior::NOT_SET};
  bool m_filtersHasBeenSet = false;
  bool m_defaultBehaviorHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
