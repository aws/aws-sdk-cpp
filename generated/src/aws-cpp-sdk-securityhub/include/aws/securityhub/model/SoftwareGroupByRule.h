/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/SoftwareFilters.h>
#include <aws/securityhub/model/SoftwareGroupByField.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Defines the configuration for organizing and categorizing software packages
 * installed on your resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SoftwareGroupByRule">AWS
 * API Reference</a></p>
 */
class SoftwareGroupByRule {
 public:
  AWS_SECURITYHUB_API SoftwareGroupByRule() = default;
  AWS_SECURITYHUB_API SoftwareGroupByRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API SoftwareGroupByRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the attribute that software statistics should be grouped by.</p>
   */
  inline SoftwareGroupByField GetGroupByField() const { return m_groupByField; }
  inline bool GroupByFieldHasBeenSet() const { return m_groupByFieldHasBeenSet; }
  inline void SetGroupByField(SoftwareGroupByField value) {
    m_groupByFieldHasBeenSet = true;
    m_groupByField = value;
  }
  inline SoftwareGroupByRule& WithGroupByField(SoftwareGroupByField value) {
    SetGroupByField(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The criteria used to select the software packages included in the statistics.
   * You can nest composite filters up to three levels deep.</p>
   */
  inline const SoftwareFilters& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = SoftwareFilters>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = SoftwareFilters>
  SoftwareGroupByRule& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  SoftwareGroupByField m_groupByField{SoftwareGroupByField::NOT_SET};

  SoftwareFilters m_filters;
  bool m_groupByFieldHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
