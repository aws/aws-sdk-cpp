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
 * <p>The filter for subsidiary authorization entity IDs. Each ID begins with
 * <code>subauthz-</code> followed by 13 alphanumeric characters.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SubsidiaryAuthorizationEntityIdFilter">AWS
 * API Reference</a></p>
 */
class SubsidiaryAuthorizationEntityIdFilter {
 public:
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationEntityIdFilter() = default;
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationEntityIdFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationEntityIdFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of entity IDs to filter by. The operation returns subsidiary
   * authorizations with an entity ID that matches any value in this list. You can
   * include up to 10 entity IDs in this list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValueList() const { return m_valueList; }
  inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
  template <typename ValueListT = Aws::Vector<Aws::String>>
  void SetValueList(ValueListT&& value) {
    m_valueListHasBeenSet = true;
    m_valueList = std::forward<ValueListT>(value);
  }
  template <typename ValueListT = Aws::Vector<Aws::String>>
  SubsidiaryAuthorizationEntityIdFilter& WithValueList(ValueListT&& value) {
    SetValueList(std::forward<ValueListT>(value));
    return *this;
  }
  template <typename ValueListT = Aws::String>
  SubsidiaryAuthorizationEntityIdFilter& AddValueList(ValueListT&& value) {
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
