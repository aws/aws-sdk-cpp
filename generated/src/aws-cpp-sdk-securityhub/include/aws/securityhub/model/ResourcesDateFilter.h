﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/DateFilter.h>
#include <aws/securityhub/model/ResourcesDateField.h>

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
 * <p>Enables the filtering of Amazon Web Services resources based on date and
 * timestamp attributes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesDateFilter">AWS
 * API Reference</a></p>
 */
class ResourcesDateFilter {
 public:
  AWS_SECURITYHUB_API ResourcesDateFilter() = default;
  AWS_SECURITYHUB_API ResourcesDateFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourcesDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field.</p>
   */
  inline ResourcesDateField GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  inline void SetFieldName(ResourcesDateField value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = value;
  }
  inline ResourcesDateFilter& WithFieldName(ResourcesDateField value) {
    SetFieldName(value);
    return *this;
  }
  ///@}

  ///@{

  inline const DateFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = DateFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = DateFilter>
  ResourcesDateFilter& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}
 private:
  ResourcesDateField m_fieldName{ResourcesDateField::NOT_SET};
  bool m_fieldNameHasBeenSet = false;

  DateFilter m_filter;
  bool m_filterHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
