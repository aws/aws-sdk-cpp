/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/IpFilter.h>
#include <aws/securityhub/model/OcsfIpField.h>

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
 * <p>The structure for filtering findings based on IP address
 * attributes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/OcsfIpFilter">AWS
 * API Reference</a></p>
 */
class OcsfIpFilter {
 public:
  AWS_SECURITYHUB_API OcsfIpFilter() = default;
  AWS_SECURITYHUB_API OcsfIpFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API OcsfIpFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the IP address field to filter on.</p>
   */
  inline OcsfIpField GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  inline void SetFieldName(OcsfIpField value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = value;
  }
  inline OcsfIpFilter& WithFieldName(OcsfIpField value) {
    SetFieldName(value);
    return *this;
  }
  ///@}

  ///@{

  inline const IpFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = IpFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = IpFilter>
  OcsfIpFilter& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}
 private:
  OcsfIpField m_fieldName{OcsfIpField::NOT_SET};
  bool m_fieldNameHasBeenSet = false;

  IpFilter m_filter;
  bool m_filterHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
