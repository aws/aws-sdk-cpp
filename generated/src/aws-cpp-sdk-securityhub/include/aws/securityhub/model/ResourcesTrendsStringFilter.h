/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ResourcesTrendsStringField.h>
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
 * <p>A filter for string-based fields in resources trend data, such as resource
 * type or account ID.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesTrendsStringFilter">AWS
 * API Reference</a></p>
 */
class ResourcesTrendsStringFilter {
 public:
  AWS_SECURITYHUB_API ResourcesTrendsStringFilter() = default;
  AWS_SECURITYHUB_API ResourcesTrendsStringFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourcesTrendsStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the resources field to filter on, such as resourceType,
   * accountId, or region.</p>
   */
  inline ResourcesTrendsStringField GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  inline void SetFieldName(ResourcesTrendsStringField value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = value;
  }
  inline ResourcesTrendsStringFilter& WithFieldName(ResourcesTrendsStringField value) {
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
  ResourcesTrendsStringFilter& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}
 private:
  ResourcesTrendsStringField m_fieldName{ResourcesTrendsStringField::NOT_SET};

  StringFilter m_filter;
  bool m_fieldNameHasBeenSet = false;
  bool m_filterHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
