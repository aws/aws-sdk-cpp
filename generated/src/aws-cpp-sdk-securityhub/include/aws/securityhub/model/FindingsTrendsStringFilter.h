/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FindingsTrendsStringField.h>
#include <aws/securityhub/model/StringFilter.h>

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
 * <p>A filter for string-based fields in findings trend data.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingsTrendsStringFilter">AWS
 * API Reference</a></p>
 */
class FindingsTrendsStringFilter {
 public:
  AWS_SECURITYHUB_API FindingsTrendsStringFilter() = default;
  AWS_SECURITYHUB_API FindingsTrendsStringFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API FindingsTrendsStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the findings field to filter on.</p>
   */
  inline FindingsTrendsStringField GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  inline void SetFieldName(FindingsTrendsStringField value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = value;
  }
  inline FindingsTrendsStringFilter& WithFieldName(FindingsTrendsStringField value) {
    SetFieldName(value);
    return *this;
  }
  ///@}

  ///@{

  inline const StringFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = StringFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = StringFilter>
  FindingsTrendsStringFilter& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}
 private:
  FindingsTrendsStringField m_fieldName{FindingsTrendsStringField::NOT_SET};

  StringFilter m_filter;
  bool m_fieldNameHasBeenSet = false;
  bool m_filterHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
