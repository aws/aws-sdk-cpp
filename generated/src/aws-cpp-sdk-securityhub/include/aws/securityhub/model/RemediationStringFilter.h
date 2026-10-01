/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RemediationStringField.h>
#include <aws/securityhub/model/RemediationStringFilterCondition.h>

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
 * <p>A string filter for filtering remediation targets.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationStringFilter">AWS
 * API Reference</a></p>
 */
class RemediationStringFilter {
 public:
  AWS_SECURITYHUB_API RemediationStringFilter() = default;
  AWS_SECURITYHUB_API RemediationStringFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the filter field. Valid values are <code>Resource.Type</code>,
   * <code>Priority</code>, <code>Status</code>, <code>Resource.Id</code>,
   * <code>Resource.ResourceOwnerAccountId</code>, and
   * <code>Resource.CloudProvider</code>.</p>
   */
  inline RemediationStringField GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  inline void SetFieldName(RemediationStringField value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = value;
  }
  inline RemediationStringFilter& WithFieldName(RemediationStringField value) {
    SetFieldName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The string filter definition.</p>
   */
  inline const RemediationStringFilterCondition& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = RemediationStringFilterCondition>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = RemediationStringFilterCondition>
  RemediationStringFilter& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}
 private:
  RemediationStringField m_fieldName{RemediationStringField::NOT_SET};

  RemediationStringFilterCondition m_filter;
  bool m_fieldNameHasBeenSet = false;
  bool m_filterHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
