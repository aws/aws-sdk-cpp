/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Allows filtering on the ResellerLegalName of a
   * ResaleAuthorization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ResaleAuthorizationResellerLegalNameFilter">AWS
   * API Reference</a></p>
   */
  class ResaleAuthorizationResellerLegalNameFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationResellerLegalNameFilter() = default;
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationResellerLegalNameFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ResaleAuthorizationResellerLegalNameFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows filtering on the ResellerLegalNameProductName of a ResaleAuthorization
     * with list input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const { return m_valueList; }
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
    template<typename ValueListT = Aws::Vector<Aws::String>>
    void SetValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList = std::forward<ValueListT>(value); }
    template<typename ValueListT = Aws::Vector<Aws::String>>
    ResaleAuthorizationResellerLegalNameFilter& WithValueList(ValueListT&& value) { SetValueList(std::forward<ValueListT>(value)); return *this;}
    template<typename ValueListT = Aws::String>
    ResaleAuthorizationResellerLegalNameFilter& AddValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList.emplace_back(std::forward<ValueListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Allows filtering on the ResellerLegalName of a ResaleAuthorization with wild
     * card input.</p>
     */
    inline const Aws::String& GetWildCardValue() const { return m_wildCardValue; }
    inline bool WildCardValueHasBeenSet() const { return m_wildCardValueHasBeenSet; }
    template<typename WildCardValueT = Aws::String>
    void SetWildCardValue(WildCardValueT&& value) { m_wildCardValueHasBeenSet = true; m_wildCardValue = std::forward<WildCardValueT>(value); }
    template<typename WildCardValueT = Aws::String>
    ResaleAuthorizationResellerLegalNameFilter& WithWildCardValue(WildCardValueT&& value) { SetWildCardValue(std::forward<WildCardValueT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;

    Aws::String m_wildCardValue;
    bool m_wildCardValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
