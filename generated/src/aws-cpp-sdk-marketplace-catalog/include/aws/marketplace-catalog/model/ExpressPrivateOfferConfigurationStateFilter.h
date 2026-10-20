/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationStateString.h>

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
 * <p>The filter for the <code>State</code> of an express private offer
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ExpressPrivateOfferConfigurationStateFilter">AWS
 * API Reference</a></p>
 */
class ExpressPrivateOfferConfigurationStateFilter {
 public:
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationStateFilter() = default;
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationStateFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationStateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of <code>State</code> values to filter on. Valid values are
   * <code>ACTIVE</code> and <code>INACTIVE</code>.</p>
   */
  inline const Aws::Vector<ExpressPrivateOfferConfigurationStateString>& GetValueList() const { return m_valueList; }
  inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
  template <typename ValueListT = Aws::Vector<ExpressPrivateOfferConfigurationStateString>>
  void SetValueList(ValueListT&& value) {
    m_valueListHasBeenSet = true;
    m_valueList = std::forward<ValueListT>(value);
  }
  template <typename ValueListT = Aws::Vector<ExpressPrivateOfferConfigurationStateString>>
  ExpressPrivateOfferConfigurationStateFilter& WithValueList(ValueListT&& value) {
    SetValueList(std::forward<ValueListT>(value));
    return *this;
  }
  inline ExpressPrivateOfferConfigurationStateFilter& AddValueList(ExpressPrivateOfferConfigurationStateString value) {
    m_valueListHasBeenSet = true;
    m_valueList.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ExpressPrivateOfferConfigurationStateString> m_valueList;
  bool m_valueListHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
