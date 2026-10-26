/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationStatusString.h>

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
 * <p>The filter for subsidiary authorization statuses.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SubsidiaryAuthorizationStatusFilter">AWS
 * API Reference</a></p>
 */
class SubsidiaryAuthorizationStatusFilter {
 public:
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationStatusFilter() = default;
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationStatusFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of statuses to filter by. The operation returns subsidiary
   * authorizations with a status that matches a value in this list. Valid values
   * are:</p> <ul> <li> <p> <code>Draft</code> - The subsidiary authorization was
   * created but not yet released. The subsidiary account can't see it.</p> </li>
   * <li> <p> <code>Active</code> - The subsidiary account can use the subsidiary
   * authorization to create offers for the authorized product.</p> </li> <li> <p>
   * <code>Restricted</code> - The subsidiary authorization was discarded while in
   * <code>Draft</code> or revoked while <code>Active</code>. It can't be used to
   * create new offers. This status is final.</p> </li> </ul>
   */
  inline const Aws::Vector<SubsidiaryAuthorizationStatusString>& GetValueList() const { return m_valueList; }
  inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
  template <typename ValueListT = Aws::Vector<SubsidiaryAuthorizationStatusString>>
  void SetValueList(ValueListT&& value) {
    m_valueListHasBeenSet = true;
    m_valueList = std::forward<ValueListT>(value);
  }
  template <typename ValueListT = Aws::Vector<SubsidiaryAuthorizationStatusString>>
  SubsidiaryAuthorizationStatusFilter& WithValueList(ValueListT&& value) {
    SetValueList(std::forward<ValueListT>(value));
    return *this;
  }
  inline SubsidiaryAuthorizationStatusFilter& AddValueList(SubsidiaryAuthorizationStatusString value) {
    m_valueListHasBeenSet = true;
    m_valueList.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SubsidiaryAuthorizationStatusString> m_valueList;
  bool m_valueListHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
