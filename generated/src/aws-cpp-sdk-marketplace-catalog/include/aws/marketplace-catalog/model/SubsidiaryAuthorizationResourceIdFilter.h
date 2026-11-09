/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>The filter for the IDs of resources that subsidiary authorizations apply
 * to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SubsidiaryAuthorizationResourceIdFilter">AWS
 * API Reference</a></p>
 */
class SubsidiaryAuthorizationResourceIdFilter {
 public:
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationResourceIdFilter() = default;
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationResourceIdFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationResourceIdFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of resource IDs to filter by. The operation returns subsidiary
   * authorizations for resources with an ID that matches any value in this list. You
   * can include up to 10 resource IDs in this list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValueList() const { return m_valueList; }
  inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
  template <typename ValueListT = Aws::Vector<Aws::String>>
  void SetValueList(ValueListT&& value) {
    m_valueListHasBeenSet = true;
    m_valueList = std::forward<ValueListT>(value);
  }
  template <typename ValueListT = Aws::Vector<Aws::String>>
  SubsidiaryAuthorizationResourceIdFilter& WithValueList(ValueListT&& value) {
    SetValueList(std::forward<ValueListT>(value));
    return *this;
  }
  template <typename ValueListT = Aws::String>
  SubsidiaryAuthorizationResourceIdFilter& AddValueList(ValueListT&& value) {
    m_valueListHasBeenSet = true;
    m_valueList.emplace_back(std::forward<ValueListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_valueList;
  bool m_valueListHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
