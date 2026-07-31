/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/OfferCreatedBySourceString.h>

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
 * <p>Allows filtering on the <code>CreatedBySource</code> of an
 * offer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferCreatedBySourceFilter">AWS
 * API Reference</a></p>
 */
class OfferCreatedBySourceFilter {
 public:
  AWS_MARKETPLACECATALOG_API OfferCreatedBySourceFilter() = default;
  AWS_MARKETPLACECATALOG_API OfferCreatedBySourceFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API OfferCreatedBySourceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Allows filtering on the <code>CreatedBySource</code> of an offer with list
   * input.</p>
   */
  inline const Aws::Vector<OfferCreatedBySourceString>& GetValueList() const { return m_valueList; }
  inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
  template <typename ValueListT = Aws::Vector<OfferCreatedBySourceString>>
  void SetValueList(ValueListT&& value) {
    m_valueListHasBeenSet = true;
    m_valueList = std::forward<ValueListT>(value);
  }
  template <typename ValueListT = Aws::Vector<OfferCreatedBySourceString>>
  OfferCreatedBySourceFilter& WithValueList(ValueListT&& value) {
    SetValueList(std::forward<ValueListT>(value));
    return *this;
  }
  inline OfferCreatedBySourceFilter& AddValueList(OfferCreatedBySourceString value) {
    m_valueListHasBeenSet = true;
    m_valueList.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<OfferCreatedBySourceString> m_valueList;
  bool m_valueListHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
